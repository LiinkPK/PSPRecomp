#include "d012_profile.hpp"
#include "psprecomp/runtime.hpp"
#include "psprecomp/elf32.hpp"

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <functional>
#include <span>
#include <string>
#include <unordered_map>
#include <vector>
#include <deque>
#include <chrono>

namespace psprecomp { extern std::uint64_t g_runtime_starvation_interval_fast; }

namespace d012 {

// Game root directory set from main.cpp before any file I/O
std::string g_game_root;

namespace {

// Per-VA dispatch table populated before the first run
static std::unordered_map<
    std::uint32_t,
    std::function<void(psprecomp::Runtime &, psprecomp::AllegrexContext &)>>
    s_handlers;

// Thread queue for multi-thread simulation
struct ThreadDesc {
    std::uint32_t entry;
    std::uint32_t uid;
    std::uint32_t arglen;
    std::uint32_t argp;
    std::uint32_t priority;
};
static std::deque<ThreadDesc> s_thread_queue;
static std::uint32_t s_next_thread_uid = 1u;
static std::uint32_t s_next_cb_uid   = 0x100u;
static std::uint32_t s_next_sema_uid = 0x200u;
static std::unordered_map<std::uint32_t, std::uint32_t>  s_callbacks;
static std::unordered_map<std::uint32_t, std::int32_t>   s_semas;
// Map uid -> entry for StartThread
static std::unordered_map<std::uint32_t, ThreadDesc> s_threads;

// Thread entry address saved when sceKernelCreateThread is intercepted
static std::uint32_t s_thread_entry = 0u;
static std::uint32_t s_alloc_size = 0u;

// SysMem partition allocator — bump allocator in upper RAM
static constexpr std::uint32_t kHeapBase = 0x09C00000u;
static constexpr std::uint32_t kHeapEnd  = 0x09EE0000u;
static std::uint32_t s_heap_next = kHeapBase;
struct MemBlock { std::uint32_t addr; std::uint32_t size; };
static std::unordered_map<std::uint32_t, MemBlock> s_mem_blocks;
static std::uint32_t s_next_uid = 1u;

// File I/O — host file descriptor table (also used by io_open/read/close/lseek below)
} // end anonymous namespace
struct HostFd { FILE *fp; std::string path; };
static std::unordered_map<std::uint32_t, HostFd> s_fds;
static std::uint32_t s_next_fd = 0x10u;
namespace { // resume anonymous namespace

// Display — last submitted framebuffer params
struct FrameBufInfo { std::uint32_t vaddr; std::uint32_t bufferwidth; std::uint32_t pixelformat; std::uint32_t sync; };
static FrameBufInfo s_framebuf{};
static std::uint32_t s_display_frame_count = 0u;

// Single raw-function-pointer registered for every discovered syscall stub.
// Dispatches by ctx.pc at call time.
void generic_stub(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
    const std::uint32_t va = ctx.pc;

    auto it = s_handlers.find(va);
    if (it != s_handlers.end()) {
        it->second(rt, ctx);
        return;
    }

    static std::unordered_map<std::uint32_t, bool> s_warned;
    if (!s_warned[va]) {
        s_warned[va] = true;
        std::printf("[STUB] unhandled VA=0x%08X RA=0x%08X a0=0x%08X\n",
                    va, ctx.gpr[31], ctx.gpr[4]);
    }
    ctx.gpr[2] = 0u;
    ctx.pc     = ctx.gpr[31];
}

} // anonymous namespace

void scan_and_register_stubs(psprecomp::Runtime &rt, const psprecomp::Elf32Image &elf) {
    // ---- Known handlers keyed by VA ----
    s_handlers[0x089C5F40u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        std::printf("[HLE] sceKernelSetCompiledSdkVersion603_605(0x%08X)\n", ctx.gpr[4]);
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    };
    s_handlers[0x089C5F28u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        std::printf("[HLE] sceKernelSetCompilerVersion(0x%08X)\n", ctx.gpr[4]);
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    };

    // ---- File I/O (IoFileMgrForUser) ----
    // sceIoOpen(path, flags, mode) -> fd or error
    s_handlers[0x089C5EA8u] = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        const std::string psp_path = rt.memory().read_c_string(ctx.gpr[4]);
        const std::uint32_t flags = ctx.gpr[5];
        // Translate PSP path to host path
        std::string host_path;
        try { host_path = rt.translate_path(psp_path).string(); } catch (...) { host_path = psp_path; }
        const char *mode = (flags & 2u) ? ((flags & 0x200u) ? "w+b" : "wb") : "rb";
        FILE *fp = std::fopen(host_path.c_str(), mode);
        if (!fp) {
            static std::unordered_map<std::string, bool> s_warned;
            if (!s_warned[psp_path]) {
                s_warned[psp_path] = true;
                std::printf("[IO] sceIoOpen: \"%s\" -> NOT FOUND\n", psp_path.c_str());
            }
            ctx.gpr[2] = static_cast<std::uint32_t>(-2); // SCE_KERNEL_ERROR_NOFILE
        } else {
            const std::uint32_t fd = s_next_fd++;
            s_fds[fd] = {fp, psp_path};
            std::printf("[IO] sceIoOpen: \"%s\" -> fd=%u\n", psp_path.c_str(), fd);
            ctx.gpr[2] = fd;
        }
        ctx.pc = ctx.gpr[31];
    };
    // sceIoRead(fd, buf, size) -> bytes read
    s_handlers[0x089C5E30u] = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t fd   = ctx.gpr[4];
        const std::uint32_t buf  = ctx.gpr[5];
        const std::uint32_t size = ctx.gpr[6];
        auto it = s_fds.find(fd);
        if (it == s_fds.end()) { ctx.gpr[2] = static_cast<std::uint32_t>(-1); ctx.pc = ctx.gpr[31]; return; }
        std::vector<std::uint8_t> tmp(size);
        const std::size_t n = std::fread(tmp.data(), 1, size, it->second.fp);
        if (n > 0u) rt.memory().copy_in(buf, std::span<const std::uint8_t>(tmp.data(), n));
        ctx.gpr[2] = static_cast<std::uint32_t>(n);
        ctx.pc = ctx.gpr[31];
    };
    // sceIoClose(fd) -> 0
    s_handlers[0x089C5E48u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t fd = ctx.gpr[4];
        auto it = s_fds.find(fd);
        if (it != s_fds.end()) { std::fclose(it->second.fp); s_fds.erase(it); }
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };
    // sceIoLseek(fd, offset_hi, offset_lo, whence) -> new position
    s_handlers[0x089C5EB8u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t fd = ctx.gpr[4];
        // 64-bit offset in a5:a4 (hi in gpr[5], lo in gpr[6]) — PSP ABI for 64-bit args
        const std::int64_t offset = (static_cast<std::int64_t>(ctx.gpr[5]) << 32) | ctx.gpr[6];
        const int whence = static_cast<int>(ctx.gpr[7]);
        auto it = s_fds.find(fd);
        if (it == s_fds.end()) { ctx.gpr[2] = static_cast<std::uint32_t>(-1); ctx.pc = ctx.gpr[31]; return; }
        const int r = std::fseek(it->second.fp, static_cast<long>(offset), whence);
        const std::int64_t pos = r == 0 ? std::ftell(it->second.fp) : -1;
        ctx.gpr[2] = static_cast<std::uint32_t>(pos & 0xFFFFFFFFu);
        ctx.gpr[3] = static_cast<std::uint32_t>((pos >> 32) & 0xFFFFFFFFu);
        ctx.pc = ctx.gpr[31];
    };
    // sceIoWaitAsync(fd, res_ptr) -> 0
    s_handlers[0x089C5E90u] = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t res_ptr = ctx.gpr[5];
        if (res_ptr && rt.memory().contains(res_ptr, 8u)) {
            rt.memory().store32(res_ptr,     0u);
            rt.memory().store32(res_ptr + 4u, 0u);
        }
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };
    // sceIoPollAsync(fd, res_ptr) -> 0
    s_handlers[0x089C5EC0u] = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t res_ptr = ctx.gpr[5];
        if (res_ptr && rt.memory().contains(res_ptr, 8u)) {
            rt.memory().store32(res_ptr,     0u);
            rt.memory().store32(res_ptr + 4u, 0u);
        }
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };

    // ---- Display (sceDisplay) ----
    // sceDisplaySetFrameBuf(topaddr, bufferwidth, pixelformat, sync) -> 0
    s_handlers[0x089C5AC0u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        s_framebuf = {ctx.gpr[4], ctx.gpr[5], ctx.gpr[6], ctx.gpr[7]};
        ++s_display_frame_count;
        if (s_display_frame_count <= 3u || (s_display_frame_count & 0x3Fu) == 0u)
            std::printf("[DISPLAY] SetFrameBuf vaddr=0x%08X bw=%u fmt=%u sync=%u frame=%u\n",
                        s_framebuf.vaddr, s_framebuf.bufferwidth, s_framebuf.pixelformat,
                        s_framebuf.sync, s_display_frame_count);
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };
    // sceDisplaySetMode(mode, width, height) -> 0
    s_handlers[0x089C5AE0u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        std::printf("[DISPLAY] SetMode mode=%u w=%u h=%u\n", ctx.gpr[4], ctx.gpr[5], ctx.gpr[6]);
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };
    // sceDisplayWaitVblankStart() -> 0
    s_handlers[0x089C5AD8u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };
    // sceDisplayWaitVblank() -> 0
    s_handlers[0x089C5AD0u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };
    // sceDisplayGetFrameBuf -> returns current framebuf
    s_handlers[0x089C5AB8u] = [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t ptr = ctx.gpr[4];
        if (ptr && rt.memory().contains(ptr, 4u))
            rt.memory().store32(ptr, s_framebuf.vaddr);
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };
    // sceDisplayGetCurrentHcount or similar
    s_handlers[0x089C5AC8u] = [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc = ctx.gpr[31];
    };

    // Cluster scan: runs of 3+ consecutive (jr $ra / nop) pairs = stub table
    const auto &bytes = elf.bytes();
    const auto &segs  = elf.segments();
    if (segs.empty()) { std::printf("[scan] No segments\n"); return; }

    const std::uint32_t bias      = segs[0].vaddr - segs[0].offset;
    const std::size_t   seg_start = segs[0].offset;
    const std::size_t   seg_end   = segs[0].offset + segs[0].file_size;

    int           run          = 0;
    std::uint32_t run_start_va = 0u;
    std::uint32_t total        = 0u;

    auto flush = [&]() {
        if (run >= 3) {
            for (int k = 0; k < run; ++k) {
                const std::uint32_t va = run_start_va + static_cast<std::uint32_t>(k) * 8u;
                if (!rt.has_function(va)) {
                    rt.register_function(va, generic_stub, "stub");
                    ++total;
                }
            }
        }
        run = 0;
    };

    for (std::size_t off = seg_start; off + 8u <= seg_end; off += 8u) {
        const std::uint32_t w0 =
            static_cast<std::uint32_t>(bytes[off+0])        |
            (static_cast<std::uint32_t>(bytes[off+1]) <<  8)|
            (static_cast<std::uint32_t>(bytes[off+2]) << 16)|
            (static_cast<std::uint32_t>(bytes[off+3]) << 24);
        const std::uint32_t w1 =
            static_cast<std::uint32_t>(bytes[off+4])        |
            (static_cast<std::uint32_t>(bytes[off+5]) <<  8)|
            (static_cast<std::uint32_t>(bytes[off+6]) << 16)|
            (static_cast<std::uint32_t>(bytes[off+7]) << 24);

        if (w0 == 0x03E00008u && w1 == 0x00000000u) {
            if (run == 0) run_start_va = static_cast<std::uint32_t>(off) + bias;
            ++run;
        } else {
            flush();
        }
    }
    flush();
    std::printf("[scan] Registered %u stubs\n", total);
}

void register_hle(psprecomp::Runtime &rt) {
    psprecomp::g_runtime_starvation_interval_fast = 0u;
    rt.register_hle("IoFileMgrForUser", 0x109F50BC,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            const std::string path = rt.memory().read_c_string(ctx.gpr[4]);
            std::printf("[HLE] sceIoOpen: \"%s\" flags=0x%X mode=0x%X\n", path.c_str(), ctx.gpr[5], ctx.gpr[6]);
            std::fflush(stdout);
            ctx.gpr[2] = static_cast<std::uint32_t>(-1);
        });
    rt.register_hle("IoFileMgrForUser", 0x810C4BC3,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.gpr[2] = 0u;
        });
    rt.register_hle("ThreadManForUser", 0x616403BA,
        [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
            std::printf("[HLE] sceKernelTerminateThread a0=0x%08X\n", ctx.gpr[4]);
            std::fflush(stdout);
            rt.stop("sceKernelTerminateThread");
        });
    rt.register_hle("SysMemUserForUser", 0xA6B0FB36,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            const std::uint32_t size = ctx.gpr[7];
            const std::uint32_t addr = (s_heap_next + 63u) & ~63u;
            if (addr + size > kHeapEnd) { ctx.gpr[2] = ~0u; ctx.pc = ctx.gpr[31]; return; }
            const std::uint32_t uid = s_next_uid++;
            s_mem_blocks[uid] = {addr, size};
            s_heap_next = addr + size;
            std::printf("[HLE] sceKernelAllocPartitionMemory size=0x%X -> uid=%u addr=0x%08X\n", size, uid, addr);
            ctx.gpr[2] = uid;
            ctx.pc = ctx.gpr[31];
        });
    rt.register_hle("SysMemUserForUser", 0x9D9A5392,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            auto it = s_mem_blocks.find(ctx.gpr[4]);
            ctx.gpr[2] = (it != s_mem_blocks.end()) ? it->second.addr : 0u;
            ctx.pc = ctx.gpr[31];
        });
    rt.register_hle("SysMemUserForUser", 0xB6D61D02,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            s_mem_blocks.erase(ctx.gpr[4]);
            ctx.gpr[2] = 0u;
            ctx.pc = ctx.gpr[31];
        });

// Explicit HLE for CreateThread / StartThread wrapper addresses

    rt.register_function(0x00000000u, [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        std::printf("[HLE] null_fptr_stub: ra=0x%08X a0=0x%08X\n", ctx.gpr[31], ctx.gpr[4]);
        if (ctx.gpr[31] == 0u) { rt.stop("thread exited normally"); return; }
        ctx.pc = ctx.gpr[31];
    }, "null_fptr_stub");
    rt.register_function(0x00000001u, [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        std::printf("[HLE] sentinel hit ra=0x%08X pc=0x%08X\n", ctx.gpr[31], ctx.pc);
        std::fflush(stdout);
        if (ctx.gpr[31] == 0x00000001u || ctx.gpr[31] == 0u) {
            rt.stop("thread exited normally");
        }
    }, "hle_thread_exit");

    rt.register_function(0x089C6000u, [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        std::printf("[HLE] sceKernelExitDeleteThread(%d)\n", ctx.gpr[4]);
        rt.stop("sceKernelExitDeleteThread");
    }, "recomp_unit_exitdeletethread");

    rt.register_function(0x089C6030u, [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        std::printf("[HLE] sceKernelExitThread(%d)\n", ctx.gpr[4]);
        rt.stop("sceKernelExitThread");
    }, "recomp_unit_exitthread");

    // ThreadManForUser stubs

    // sceKernelCreateCallback(name, func, arg) -> uid
    rt.register_function(0x089C5F80u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t uid = s_next_cb_uid++;
        s_callbacks[uid] = ctx.gpr[5];
        std::printf("[HLE] sceKernelCreateCallback func=0x%08X -> uid=%u\n", ctx.gpr[5], uid);
        ctx.gpr[2] = uid;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_createcallback");

    // sceKernelDeleteCallback(uid) -> 0
    rt.register_function(0x089C5F90u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        s_callbacks.erase(ctx.gpr[4]);
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_deletecallback");

    // sceKernelChangeCurrentThreadAttr -> 0
    rt.register_function(0x089C5F88u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_changethreadattr");

    // sceKernelDelayThread(us) -> 0
    rt.register_function(0x089C5F68u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_delaythread");

    // sceKernelDelayThreadCB(us) -> 0
    rt.register_function(0x089C5FF0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_delaythreadcb");

    // sceKernelCreateSema(name, attr, initVal, maxVal, opt) -> uid
    rt.register_function(0x089C5F70u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t uid = s_next_sema_uid++;
        s_semas[uid] = static_cast<std::int32_t>(ctx.gpr[6]);
        std::printf("[HLE] sceKernelCreateSema initVal=%d -> uid=%u\n", ctx.gpr[6], uid);
        ctx.gpr[2] = uid;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_createsema");

    // sceKernelDeleteSema(uid) -> 0
    rt.register_function(0x089C5F78u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        s_semas.erase(ctx.gpr[4]);
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_deletesema");

    // sceKernelSignalSema(uid, signal) -> 0
    rt.register_function(0x089C5FC0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        auto it = s_semas.find(ctx.gpr[4]);
        if (it != s_semas.end()) it->second += static_cast<std::int32_t>(ctx.gpr[5]);
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_signalsema");

    // sceKernelWaitSema(uid, signal, timeout) -> 0
    rt.register_function(0x089C5FC8u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_waitsema");

    // sceKernelWaitThreadEnd(uid, timeout) -> 0
    rt.register_function(0x089C5FB0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_waitthreadend");


    rt.register_function(0x089C5FD0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t uid = s_next_thread_uid++;
        ThreadDesc td{ctx.gpr[5], uid, 0u, 0u, ctx.gpr[6]};
        s_threads[uid] = td;
        s_thread_entry = ctx.gpr[5]; // keep compat
        ctx.gpr[2] = uid;
        ctx.pc     = ctx.gpr[31];
        std::printf("[HLE] sceKernelCreateThread uid=%u entry=0x%08X priority=%u\n", uid, td.entry, td.priority);
    }, "recomp_unit_createthread");

    rt.register_function(0x089C5FA0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t uid    = ctx.gpr[4];
        const std::uint32_t arglen = ctx.gpr[5];
        const std::uint32_t argp   = ctx.gpr[6];
        auto it = s_threads.find(uid);
        if (it != s_threads.end()) {
            ThreadDesc td = it->second;
            td.arglen = arglen;
            td.argp   = argp;
            s_thread_queue.push_back(td);
            std::printf("[HLE] sceKernelStartThread uid=%u entry=0x%08X queued\n", uid, td.entry);
        } else {
            std::printf("[HLE] sceKernelStartThread uid=%u NOT FOUND\n", uid);
        }
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_startthread");

    // sceKernelCreateEventFlag(name, attr, bits, opt) -> uid
    rt.register_function(0x089C5FE0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        static std::uint32_t s_next_evf = 0x300u;
        const std::uint32_t uid = s_next_evf++;
        ctx.gpr[2] = uid;
        ctx.pc     = ctx.gpr[31];
        std::printf("[HLE] sceKernelCreateEventFlag -> uid=%u\n", uid);
    }, "recomp_unit_createeventflag");

    // sceKernelDeleteEventFlag(uid) -> 0
    rt.register_function(0x089C5F98u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_deleteeventflag");

    // sceKernelRegisterExitCallback(uid) -> 0
    rt.register_function(0x089C5EF8u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_registerexitcb");

    // sceKernelExitGame() -> noreturn; just stop
    rt.register_function(0x089C5EF0u, [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &) {
        rt.stop("sceKernelExitGame");
    }, "recomp_unit_exitgame");

    // sceGeEdramGetAddr() -> 0x04000000 (VRAM base on PSP)
    rt.register_function(0x089C5A98u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0x04000000u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_geedramgetaddr");

    // sceGeEdramGetSize() -> 0x200000
    rt.register_function(0x089C5A60u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0x00200000u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_geedramgetsize");

    // sceGeSetCallback(cb) -> id (non-negative)
    rt.register_function(0x089C5A70u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 1u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_gesetcallback");

    // sceGeUnsetCallback(id) -> 0
    rt.register_function(0x089C5A50u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_geunsetcallback");

    // sceGeListEnQueue(list, stall, cbid, arg) -> list_id
    rt.register_function(0x089C5A78u, [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        static std::uint32_t s_list_id = 1u;
        const std::uint32_t list  = ctx.gpr[4];
        const std::uint32_t stall = ctx.gpr[5];
        // Dump up to 3 "real" lists (skip init list of sequential-op zeros)
        static std::uint32_t s_real = 0u;
        if (s_real < 3u) {
            const std::uint32_t phys       = list  & 0x1FFFFFFFu;
            const std::uint32_t stall_phys = stall & 0x1FFFFFFFu;
            if (rt.memory().contains(phys, 4u)) {
                // Check if list has any non-trivial command
                bool interesting = false;
                for (std::uint32_t p = phys; p < phys + 4096u; p += 4u) {
                    if (!rt.memory().contains(p, 4u)) break;
                    const std::uint32_t c = rt.memory().load32(p);
                    const std::uint8_t op = static_cast<std::uint8_t>(c >> 24);
                    if (op == 0x0Fu) break;
                    // Not interesting if arg==0 and op increments sequentially from 0
                    if (c != 0u && op != static_cast<std::uint8_t>((p - phys) / 4u))
                        { interesting = true; break; }
                }
                if (interesting) {
                    ++s_real;
                    std::printf("[GE] real list #%u phys=0x%08X stall=0x%08X\n",
                                s_real, phys, stall_phys);
                    const std::uint32_t end = stall_phys > phys ? stall_phys : phys + 8192u;
                    for (std::uint32_t p = phys; p < end && p < phys + 65536u; p += 4u) {
                        if (!rt.memory().contains(p, 4u)) break;
                        const std::uint32_t cmd = rt.memory().load32(p);
                        std::printf("  op=0x%02X arg=0x%06X\n", cmd >> 24, cmd & 0xFFFFFFu);
                        if ((cmd >> 24) == 0x0Fu) break;
                    }
                }
            }
        }
        ctx.gpr[2] = s_list_id++;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_gelistenqueue");

    // sceGeListEnQueueHead(list, stall, cbid, arg) -> list_id
    rt.register_function(0x089C5A58u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        static std::uint32_t s_list_id_h = 0x80u;
        ctx.gpr[2] = s_list_id_h++;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_gelistenqueuehead");

    // sceGeListSync(listid, syncType) -> 0
    rt.register_function(0x089C5A48u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        static std::uint32_t s_gls = 0u; ++s_gls;
        if (s_gls <= 3u) std::printf("[HLE] sceGeListSync #%u ra=0x%08X\n", s_gls, ctx.gpr[31]);
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_gelistsync");

    // sceGeDrawSync(syncType) -> 0
    rt.register_function(0x089C5A80u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_gedrawsync");

    // sceGeBreak(mode, pbresult) -> 0
    rt.register_function(0x089C5A88u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_gebreak");

    // sceGeContinue() -> 0
    rt.register_function(0x089C5A68u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_gecontinue");

    // sceGeListUpdateStallAddr(listid, stall) -> 0
    rt.register_function(0x089C5A90u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_gelistupdatestall");

    // sceKernelCpuSuspendIntr() -> saved state (just return 0)
    rt.register_function(0x089C5EC8u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_cpususpendintr");

    // sceKernelCpuResumeIntr(state) -> void
    rt.register_function(0x089C5EE8u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "recomp_unit_cpuresumeintr");


    // 0x08C10DA0 is a GE object in BSS; the task scheduler writes a function
    // pointer into it. Trap it so we can see what's calling and what it expects.
    rt.register_function(0x08C10DA0u, [](psprecomp::Runtime &rt2, psprecomp::AllegrexContext &ctx) {
        static int count = 0;
        if (count++ < 3) {
            std::printf("[DBG] CALLED 0x08C10DA0 ra=0x%08X a0=0x%08X task[0]=0x%08X\n",
                        ctx.gpr[31], ctx.gpr[4],
                        (ctx.gpr[4] >= 0x08800000u && ctx.gpr[4] < 0x0A000000u)
                            ? rt2.memory().load32(ctx.gpr[4]) : 0u);
        }
        ctx.gpr[2] = 0u;
        ctx.pc     = ctx.gpr[31];
    }, "hle_bss_debug_08c10da0");

    // sceKernelGetSystemTimeLow, sceDisplayWaitVblankStartCB implemented
    // directly in generated_unit_0014.cpp labels to keep unit 14 AOT-chainable.
}

static std::uint32_t s_last_addr = 0u;
static std::uint32_t s_last_uid  = 0u;

std::uint32_t hle_alloc(std::uint32_t size) {
    const std::uint32_t addr = (s_heap_next + 63u) & ~63u;
    if (addr + size > kHeapEnd) return 0u;
    const std::uint32_t uid = s_next_uid++;
    s_mem_blocks[uid] = {addr, size};
    s_alloc_size = size;
    s_last_addr  = addr;
    s_last_uid   = uid;
    s_heap_next  = addr + size;
    std::printf("[HLE] AllocPartitionMemory size=0x%X -> uid=%u addr=0x%08X\n", size, uid, addr);
    return uid;
}

std::uint32_t hle_alloc_size() { return s_alloc_size; }
std::uint32_t hle_last_addr()  { return s_last_addr; }
std::uint32_t hle_get_addr(std::uint32_t uid) {
    auto it = s_mem_blocks.find(uid);
    return (it != s_mem_blocks.end()) ? it->second.addr : 0u;
}

bool hle_has_pending_threads() { return !s_thread_queue.empty(); }

std::uint32_t hle_create_callback(std::uint32_t func) {
    const std::uint32_t uid = s_next_cb_uid++;
    s_callbacks[uid] = func;
    std::printf("[HLE] sceKernelCreateCallback func=0x%08X -> uid=%u\n", func, uid);
    return uid;
}
void hle_delete_callback(std::uint32_t uid) { s_callbacks.erase(uid); }

std::uint32_t hle_create_sema(std::uint32_t init_val) {
    const std::uint32_t uid = s_next_sema_uid++;
    s_semas[uid] = static_cast<std::int32_t>(init_val);
    std::printf("[HLE] sceKernelCreateSema initVal=%u -> uid=%u\n", init_val, uid);
    return uid;
}
void hle_delete_sema(std::uint32_t uid) { s_semas.erase(uid); }
void hle_signal_sema(std::uint32_t uid, std::uint32_t signal) {
    auto it = s_semas.find(uid);
    if (it != s_semas.end()) it->second += static_cast<std::int32_t>(signal);
}

std::uint32_t hle_create_thread(std::uint32_t entry, std::uint32_t priority, std::uint32_t stack_size) {
    const std::uint32_t uid = s_next_thread_uid++;
    ThreadDesc td{entry, uid, 0u, 0u, priority};
    s_threads[uid] = td;
    s_thread_entry = entry;
    std::printf("[HLE] sceKernelCreateThread uid=%u entry=0x%08X priority=%u stack=0x%X\n",
                uid, entry, priority, stack_size);
    return uid;
}
void hle_start_thread(std::uint32_t uid, std::uint32_t arglen, std::uint32_t argp) {
    auto it = s_threads.find(uid);
    if (it != s_threads.end()) {
        ThreadDesc td = it->second;
        td.arglen = arglen;
        td.argp   = argp;
        s_thread_queue.push_back(td);
        std::printf("[HLE] sceKernelStartThread uid=%u entry=0x%08X queued\n", uid, td.entry);
    } else {
        std::printf("[HLE] sceKernelStartThread uid=%u NOT FOUND\n", uid);
    }
}
std::uint32_t hle_create_event_flag() {
    static std::uint32_t s_next_evf = 0x300u;
    const std::uint32_t uid = s_next_evf++;
    std::printf("[HLE] sceKernelCreateEventFlag -> uid=%u\n", uid);
    return uid;
}

void hle_run_ctors(psprecomp::Runtime &rt, const psprecomp::Elf32Image &elf) {
    const auto &sections = elf.sections();
    for (const auto &sec : sections) {
        if (sec.name != ".ctors" && sec.name != ".init_array") continue;
        const std::uint32_t base = elf.section_runtime_address(sec);
        const std::uint32_t count = sec.size / 4u;
        std::printf("[HLE] Running %u ctors from %s at 0x%08X\n", count, sec.name.c_str(), base);
        for (std::uint32_t i = 0u; i < count; ++i) {
            const std::uint32_t fn = rt.memory().load32(base + i * 4u);
            if (fn == 0u || fn == 0xFFFFFFFFu) continue;
            std::printf("[HLE] ctor[%u] = 0x%08X\n", i, fn);
            auto &ctx = rt.context();
            ctx.gpr[29] = 0x09F00000u;
            ctx.gpr[31] = 0x00000001u;
            rt.run(fn, 100'000'000u);
        }
    }
}

void hle_run_next_thread(psprecomp::Runtime &rt) {
    if (s_thread_queue.empty()) return;
    ThreadDesc td = s_thread_queue.front();
    s_thread_queue.pop_front();
    std::printf("[HLE] Running queued thread entry=0x%08X uid=%u\n", td.entry, td.uid);

    auto &ctx = rt.context();
    ctx.gpr[4]  = td.arglen;
    ctx.gpr[5]  = td.argp;
    ctx.gpr[29] = 0x09EF0000u;
    ctx.gpr[26] = 0x09EE0000u;
    ctx.gpr[28] = 0x08B6B260u;
    ctx.gpr[31] = 0x00000001u;
    std::printf("[HLE] Thread ctx before run: sp=0x%08X ra=0x%08X\n", ctx.gpr[29], ctx.gpr[31]);
    for (std::uint32_t a = 0x09EC0000u; a < 0x09EFF000u; a += 4u)
        rt.memory().store32(a, 0x00000001u);
    rt.run(td.entry, 2'000'000'000u);
    std::printf("[HLE] Thread uid=%u exited: %s\n", td.uid, rt.stop_reason().c_str());
}

// ---- Public file I/O helpers (called from generated_unit_0014.cpp) ----

std::uint32_t io_open(const std::string &psp_path, std::uint32_t flags) {
    // Translate disc0:/PSP_GAME/USRDIR/... to a host path via the game root
    // (game root set in main.cpp; stored inside Runtime — we use a cached copy)
    std::string host_path;
    if (!g_game_root.empty()) {
        // strip "disc0:" prefix, replace with game root
        std::string rel = psp_path;
        const char *prefixes[] = { "disc0:", "ms0:", "host0:", nullptr };
        for (int i = 0; prefixes[i]; ++i) {
            const std::size_t plen = std::strlen(prefixes[i]);
            if (rel.compare(0, plen, prefixes[i]) == 0) { rel = rel.substr(plen); break; }
        }
        // strip leading slash
        if (!rel.empty() && (rel[0] == '/' || rel[0] == '\\')) rel = rel.substr(1);
        host_path = g_game_root + "/" + rel;
    } else {
        host_path = psp_path;
    }
    const char *mode = (flags & 2u) ? ((flags & 0x200u) ? "w+b" : "wb") : "rb";
    FILE *fp = std::fopen(host_path.c_str(), mode);
    if (!fp) {
        static std::unordered_map<std::string, bool> s_warned;
        if (!s_warned[psp_path]) {
            s_warned[psp_path] = true;
            std::printf("[IO] sceIoOpen: \"%s\" -> NOT FOUND (host: %s)\n",
                        psp_path.c_str(), host_path.c_str());
        }
        return static_cast<std::uint32_t>(-2); // SCE_KERNEL_ERROR_NOFILE
    }
    const std::uint32_t fd = s_next_fd++;
    s_fds[fd] = {fp, psp_path};
    std::printf("[IO] sceIoOpen: \"%s\" -> fd=%u\n", psp_path.c_str(), fd);
    return fd;
}

std::int32_t io_read(std::uint32_t fd, void *buf, std::uint32_t size) {
    auto it = s_fds.find(fd);
    if (it == s_fds.end()) return -1;
    return static_cast<std::int32_t>(std::fread(buf, 1, size, it->second.fp));
}

std::int32_t io_close(std::uint32_t fd) {
    auto it = s_fds.find(fd);
    if (it != s_fds.end()) { std::fclose(it->second.fp); s_fds.erase(it); }
    return 0;
}

std::int64_t io_lseek(std::uint32_t fd, std::int64_t offset, std::uint32_t whence) {
    auto it = s_fds.find(fd);
    if (it == s_fds.end()) return -1;
    if (std::fseek(it->second.fp, static_cast<long>(offset), static_cast<int>(whence)) != 0)
        return -1;
    return static_cast<std::int64_t>(std::ftell(it->second.fp));
}

} // namespace d012