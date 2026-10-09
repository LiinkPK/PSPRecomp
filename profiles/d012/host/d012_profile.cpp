#include "d012_profile.hpp"
#include "psprecomp/runtime.hpp"
#include "psprecomp/elf32.hpp"

#include <cstdint>
#include <cstdio>
#include <functional>
#include <unordered_map>

namespace psprecomp { extern std::uint64_t g_runtime_starvation_interval_fast; }

namespace d012 {

namespace {

// Per-VA dispatch table populated before the first run
static std::unordered_map<
    std::uint32_t,
    std::function<void(psprecomp::Runtime &, psprecomp::AllegrexContext &)>>
    s_handlers;

// Thread entry address saved when sceKernelCreateThread is intercepted
static std::uint32_t s_thread_entry = 0u;
static std::uint32_t s_alloc_size = 0u;

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
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.gpr[2] = static_cast<std::uint32_t>(-1);
        });
    rt.register_hle("IoFileMgrForUser", 0x810C4BC3,
        [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
            ctx.gpr[2] = 0u;
        });
// Explicit HLE for CreateThread / StartThread wrapper addresses

    rt.register_function(0x089C5F48u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        s_alloc_size = ctx.gpr[7];
        std::printf("[DBG] 089C5F48: a0=%08X a3(size)=%08X s1=%08X ra=%08X\n",
            ctx.gpr[4], ctx.gpr[7], ctx.gpr[17], ctx.gpr[31]);
        ctx.gpr[2] = 1u;
        ctx.pc = ctx.gpr[31];
    }, "dbg_stub_48");

    rt.register_function(0x089C5F58u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        std::printf("[DBG] 089C5F58: a0=%08X s1_before=%08X ra=%08X\n",
            ctx.gpr[4], ctx.gpr[17], ctx.gpr[31]);
        ctx.gpr[17] = s_alloc_size;   // restore s1 = pool size for L_0893439C
        ctx.gpr[2] = 0x09C00000u;
        ctx.pc = ctx.gpr[31];
    }, "dbg_stub_58");

    rt.register_function(0x089C5FD0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        s_thread_entry = ctx.gpr[5];
        ctx.gpr[2] = 1u;
        ctx.pc     = ctx.gpr[31];
        std::printf("[HLE] sceKernelCreateThread entry=0x%08X\n", s_thread_entry);
    }, "hle_createthread");
    rt.register_function(0x089C5FA0u, [](psprecomp::Runtime &, psprecomp::AllegrexContext &ctx) {
        if (s_thread_entry != 0u) {
            std::printf("[HLE] sceKernelStartThread entry=0x%08X\n", s_thread_entry);
            ctx.gpr[4]  = ctx.gpr[5];
            ctx.gpr[5]  = ctx.gpr[6];
            ctx.gpr[29] = 0x09EF0000u;
            ctx.gpr[26] = 0x09EE0000u;
            ctx.gpr[28] = 0x08B6B260u;
            ctx.gpr[2]  = 0u;
            ctx.pc      = s_thread_entry;
        } else {
            ctx.gpr[2] = 0u;
            ctx.pc     = ctx.gpr[31];
        }
    }, "hle_startthread");
}

} // namespace d012