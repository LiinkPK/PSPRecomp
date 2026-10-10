#include "d012_profile.hpp"
#include "psprecomp/runtime.hpp"
#include "psprecomp/elf32.hpp"

#include <cstdint>
#include <cstdio>
#include <functional>
#include <unordered_map>
#include <vector>
#include <deque>

namespace psprecomp { extern std::uint64_t g_runtime_starvation_interval_fast; }

namespace d012 {

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

// Single raw-function-pointer registered for every discovered syscall stub.
// Dispatches by ctx.pc at call time.
void generic_stub(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
    const std::uint32_t va = ctx.pc;
    std::printf("[STUB] 0x%08X  RA=0x%08X\n", va, ctx.gpr[31]);

    // Known stub with an explicit handler
    auto it = s_handlers.find(va);
    if (it != s_handlers.end()) {
        it->second(rt, ctx);
        return;
    }

    const std::uint32_t a0 = ctx.gpr[4];
    const std::uint32_t a1 = ctx.gpr[5];
    const std::uint32_t a2 = ctx.gpr[6];
    const std::uint32_t ra = ctx.gpr[31];

    // Heuristic: first unknown stub whose a1 is a PSP user-space code address
    // → sceKernelCreateThread(name, entry, priority, stackSize, attr, opt)
    if (s_thread_entry == 0u && a1 >= 0x08800000u && a1 < 0x09000000u) {
        s_thread_entry = a1;
        ctx.gpr[2] = 1u;   // return UID = 1
        ctx.pc     = ra;
        std::printf("[HLE] sceKernelCreateThread at 0x%08X  entry=0x%08X\n", va, s_thread_entry);
        return;
    }

    // Heuristic: a0 == our UID (1) and we already know the thread entry
    // → sceKernelStartThread(thid, arglen, argp)
    if (a0 == 1u && s_thread_entry != 0u) {
        std::printf("[HLE] sceKernelStartThread at 0x%08X  jumping to 0x%08X\n", va, s_thread_entry);
        ctx.gpr[4]  = a1;            // thread a0 = arglen
        ctx.gpr[5]  = a2;            // thread a1 = argp
        ctx.gpr[29] = 0x09EF0000u;  // fresh thread stack
        rt.memory().store32(0x09EF7BFCu, 0x00000001u);
        ctx.gpr[2]  = 0u;
        ctx.pc      = s_thread_entry;
        return;
    }

    // Truly unknown — log everything so we can identify it next run
    std::printf("[HLE] UNKNOWN stub at 0x%08X  RA=0x%08X  a0=0x%08X a1=0x%08X a2=0x%08X a3=0x%08X\n",
                va, ra, a0, a1, a2, ctx.gpr[7]);
    ctx.gpr[2] = 0u;
    ctx.pc     = ra;
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
    }, "hle_exitdeletethread");

    rt.register_function(0x089C6030u, [](psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
        std::printf("[HLE] sceKernelExitThread(%d)\n", ctx.gpr[4]);
        rt.stop("sceKernelExitThread");
    }, "hle_exitthread");


    rt.register_function(0x089C5FD0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        const std::uint32_t uid = s_next_thread_uid++;
        ThreadDesc td{ctx.gpr[5], uid, 0u, 0u, ctx.gpr[6]};
        s_threads[uid] = td;
        s_thread_entry = ctx.gpr[5]; // keep compat
        ctx.gpr[2] = uid;
        ctx.pc     = ctx.gpr[31];
        std::printf("[HLE] sceKernelCreateThread uid=%u entry=0x%08X priority=%u\n", uid, td.entry, td.priority);
    }, "hle_createthread");

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
    }, "hle_startthread");
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

} // namespace d012