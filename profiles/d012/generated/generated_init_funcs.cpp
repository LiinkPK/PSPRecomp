#include "psprecomp/runtime.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_init_0880A9A0[17] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 15, 16,
};
void init_0880A9A0_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0880A9A0u;
        entry_id = (entry_delta < 68u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0880A9A0[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880A9A0;
    case 2u: goto L_0880A9A4;
    case 3u: goto L_0880A9A8;
    case 4u: goto L_0880A9AC;
    case 5u: goto L_0880A9B0;
    case 6u: goto L_0880A9B4;
    case 7u: goto L_0880A9B8;
    case 8u: goto L_0880A9BC;
    case 9u: goto L_0880A9C0;
    case 10u: goto L_0880A9C4;
    case 11u: goto L_0880A9C8;
    case 12u: goto L_0880A9CC;
    case 13u: goto L_0880A9D0;
    case 14u: goto L_0880A9D4;
    case 15u: goto L_0880A9DC;
    case 16u: goto L_0880A9E0;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0880A9A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_0880A9A4;
L_0880A9A4:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_0880A9A8;
L_0880A9A8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(10240));
    goto L_0880A9AC;
L_0880A9AC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_0880A9B0;
L_0880A9B0:
    ctx.set_gpr(5, 2205u << 16u);
    goto L_0880A9B4;
L_0880A9B4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10240), 0u);
    goto L_0880A9B8;
L_0880A9B8:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(10248));
    goto L_0880A9BC;
L_0880A9BC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10248), 0u);
    goto L_0880A9C0;
L_0880A9C0:
    ctx.set_gpr(7, 2177u << 16u);
    goto L_0880A9C4;
L_0880A9C4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0880A9C8;
L_0880A9C8:
    ctx.set_gpr(5, 0u | 250u);
    goto L_0880A9CC;
L_0880A9CC:
    ctx.set_gpr(6, 0u | 32u);
    goto L_0880A9D0;
L_0880A9D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_0880A9D4;
L_0880A9D4:
    ctx.set_gpr(31, 0x0880A9DCu);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28268));
    ctx.pc = 0x08993560u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880A9DCu) goto L_0880A9DC;
    return;
L_0880A9DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0880A9E0;
L_0880A9E0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0880A9A0(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0880A9A0_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0880B028[12] = {
    1, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11,
};
void init_0880B028_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0880B028u;
        entry_id = (entry_delta < 48u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0880B028[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880B028;
    case 2u: goto L_0880B02C;
    case 3u: goto L_0880B030;
    case 4u: goto L_0880B034;
    case 5u: goto L_0880B038;
    case 6u: goto L_0880B03C;
    case 7u: goto L_0880B040;
    case 8u: goto L_0880B048;
    case 9u: goto L_0880B04C;
    case 10u: goto L_0880B050;
    case 11u: goto L_0880B054;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0880B028:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_0880B02C;
L_0880B02C:
    ctx.set_gpr(5, 0u | 0u);
    goto L_0880B030;
L_0880B030:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(18256));
    goto L_0880B034;
L_0880B034:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_0880B038;
L_0880B038:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0880B03C;
L_0880B03C:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    goto L_0880B040;
L_0880B040:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880B034;
      }
      goto L_0880B048;
    }
L_0880B048:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_0880B04C;
L_0880B04C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(18288));
    goto L_0880B050;
L_0880B050:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_0880B054;
L_0880B054:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18288), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0880B028(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0880B028_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0880BEB8[1] = {
    1,
};
void init_0880BEB8_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0880BEB8u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0880BEB8[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880BEB8;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0880BEB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0880BEB8(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0880BEB8_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08811EF4[1] = {
    1,
};
void init_08811EF4_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08811EF4u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08811EF4[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08811EF4;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08811EF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08811EF4(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08811EF4_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08813574[23] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21,
};
void init_08813574_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08813574u;
        entry_id = (entry_delta < 92u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08813574[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08813574;
    case 2u: goto L_08813578;
    case 3u: goto L_0881357C;
    case 4u: goto L_08813580;
    case 5u: goto L_08813584;
    case 6u: goto L_08813588;
    case 7u: goto L_0881358C;
    case 8u: goto L_08813590;
    case 9u: goto L_08813594;
    case 10u: goto L_08813598;
    case 11u: goto L_088135A0;
    case 12u: goto L_088135A4;
    case 13u: goto L_088135A8;
    case 14u: goto L_088135AC;
    case 15u: goto L_088135B0;
    case 16u: goto L_088135B4;
    case 17u: goto L_088135BC;
    case 18u: goto L_088135C0;
    case 19u: goto L_088135C4;
    case 20u: goto L_088135C8;
    case 21u: goto L_088135CC;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08813574:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_08813578;
L_08813578:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0881357C;
L_0881357C:
    ctx.set_gpr(16, 2205u << 16u);
    goto L_08813580;
L_08813580:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(18352));
    goto L_08813584;
L_08813584:
    ctx.set_gpr(7, 2177u << 16u);
    goto L_08813588;
L_08813588:
    ctx.set_gpr(4, ctx.gpr[16] | 0u);
    goto L_0881358C;
L_0881358C:
    ctx.set_gpr(5, 0u | 4u);
    goto L_08813590;
L_08813590:
    ctx.set_gpr(6, 0u | 64u);
    goto L_08813594;
L_08813594:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    goto L_08813598;
L_08813598:
    ctx.set_gpr(31, 0x088135A0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12292));
    ctx.pc = 0x08993560u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088135A0u) goto L_088135A0;
    return;
L_088135A0:
    ctx.set_gpr(5, 0u | 0u);
    goto L_088135A4;
L_088135A4:
    ctx.set_gpr(4, ctx.gpr[16] | 0u);
    goto L_088135A8;
L_088135A8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    goto L_088135AC;
L_088135AC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088135B0;
L_088135B0:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    goto L_088135B4;
L_088135B4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088135A8;
      }
      goto L_088135BC;
    }
L_088135BC:
    ctx.set_gpr(4, 0u | 4u);
    goto L_088135C0;
L_088135C0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    goto L_088135C4;
L_088135C4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088135C8;
L_088135C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088135CC;
L_088135CC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08813574(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08813574_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088289B0[7] = {
    1, 2, 3, 4, 5, 6, 7,
};
void init_088289B0_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088289B0u;
        entry_id = (entry_delta < 28u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088289B0[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088289B0;
    case 2u: goto L_088289B4;
    case 3u: goto L_088289B8;
    case 4u: goto L_088289BC;
    case 5u: goto L_088289C0;
    case 6u: goto L_088289C4;
    case 7u: goto L_088289C8;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088289B0:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_088289B4;
L_088289B4:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-18288));
    goto L_088289B8;
L_088289B8:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_088289BC;
L_088289BC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-18288), 0u);
    goto L_088289C0;
L_088289C0:
    ctx.set_gpr(5, 0u | 1u);
    goto L_088289C4;
L_088289C4:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_088289C8;
L_088289C8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-18280), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088289B0(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088289B0_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0883DFA8[13] = {
    1, 2, 3, 4, 0, 5, 6, 0, 7, 8, 0, 9, 10,
};
void init_0883DFA8_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0883DFA8u;
        entry_id = (entry_delta < 52u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0883DFA8[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0883DFA8;
    case 2u: goto L_0883DFAC;
    case 3u: goto L_0883DFB0;
    case 4u: goto L_0883DFB4;
    case 5u: goto L_0883DFBC;
    case 6u: goto L_0883DFC0;
    case 7u: goto L_0883DFC8;
    case 8u: goto L_0883DFCC;
    case 9u: goto L_0883DFD4;
    case 10u: goto L_0883DFD8;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0883DFA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_0883DFAC;
L_0883DFAC:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_0883DFB0;
L_0883DFB0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_0883DFB4;
L_0883DFB4:
    ctx.set_gpr(31, 0x0883DFBCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6208));
    ctx.pc = 0x08882950u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883DFBCu) goto L_0883DFBC;
    return;
L_0883DFBC:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_0883DFC0;
L_0883DFC0:
    ctx.set_gpr(31, 0x0883DFC8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6112));
    ctx.pc = 0x0883F014u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883DFC8u) goto L_0883DFC8;
    return;
L_0883DFC8:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_0883DFCC;
L_0883DFCC:
    ctx.set_gpr(31, 0x0883DFD4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(18760));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883DFD4u) goto L_0883DFD4;
    return;
L_0883DFD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0883DFD8;
L_0883DFD8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0883DFA8(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0883DFA8_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08842344[3] = {
    1, 2, 3,
};
void init_08842344_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08842344u;
        entry_id = (entry_delta < 12u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08842344[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08842344;
    case 2u: goto L_08842348;
    case 3u: goto L_0884234C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08842344:
    ctx.set_gpr(4, 0u | 1u);
    goto L_08842348;
L_08842348:
    ctx.set_gpr(5, 2480u << 16u);
    goto L_0884234C;
L_0884234C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29952), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08842344(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08842344_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08847224[1] = {
    1,
};
void init_08847224_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08847224u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08847224[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08847224;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08847224:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08847224(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08847224_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0884E620[1] = {
    1,
};
void init_0884E620_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0884E620u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0884E620[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884E620;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0884E620:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0884E620(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0884E620_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08850B20[1] = {
    1,
};
void init_08850B20_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08850B20u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08850B20[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08850B20;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08850B20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08850B20(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08850B20_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08864E70[65] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
    65,
};
void init_08864E70_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08864E70u;
        entry_id = (entry_delta < 260u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08864E70[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08864E70;
    case 2u: goto L_08864E74;
    case 3u: goto L_08864E78;
    case 4u: goto L_08864E7C;
    case 5u: goto L_08864E80;
    case 6u: goto L_08864E84;
    case 7u: goto L_08864E88;
    case 8u: goto L_08864E8C;
    case 9u: goto L_08864E90;
    case 10u: goto L_08864E94;
    case 11u: goto L_08864E98;
    case 12u: goto L_08864E9C;
    case 13u: goto L_08864EA0;
    case 14u: goto L_08864EA4;
    case 15u: goto L_08864EA8;
    case 16u: goto L_08864EAC;
    case 17u: goto L_08864EB0;
    case 18u: goto L_08864EB4;
    case 19u: goto L_08864EB8;
    case 20u: goto L_08864EBC;
    case 21u: goto L_08864EC0;
    case 22u: goto L_08864EC4;
    case 23u: goto L_08864EC8;
    case 24u: goto L_08864ECC;
    case 25u: goto L_08864ED0;
    case 26u: goto L_08864ED4;
    case 27u: goto L_08864ED8;
    case 28u: goto L_08864EDC;
    case 29u: goto L_08864EE0;
    case 30u: goto L_08864EE4;
    case 31u: goto L_08864EE8;
    case 32u: goto L_08864EEC;
    case 33u: goto L_08864EF0;
    case 34u: goto L_08864EF4;
    case 35u: goto L_08864EF8;
    case 36u: goto L_08864EFC;
    case 37u: goto L_08864F00;
    case 38u: goto L_08864F04;
    case 39u: goto L_08864F08;
    case 40u: goto L_08864F0C;
    case 41u: goto L_08864F10;
    case 42u: goto L_08864F14;
    case 43u: goto L_08864F18;
    case 44u: goto L_08864F1C;
    case 45u: goto L_08864F20;
    case 46u: goto L_08864F24;
    case 47u: goto L_08864F28;
    case 48u: goto L_08864F2C;
    case 49u: goto L_08864F30;
    case 50u: goto L_08864F34;
    case 51u: goto L_08864F38;
    case 52u: goto L_08864F3C;
    case 53u: goto L_08864F40;
    case 54u: goto L_08864F44;
    case 55u: goto L_08864F48;
    case 56u: goto L_08864F4C;
    case 57u: goto L_08864F50;
    case 58u: goto L_08864F54;
    case 59u: goto L_08864F58;
    case 60u: goto L_08864F5C;
    case 61u: goto L_08864F60;
    case 62u: goto L_08864F64;
    case 63u: goto L_08864F68;
    case 64u: goto L_08864F6C;
    case 65u: goto L_08864F70;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08864E70:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08864E74;
L_08864E74:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_08864E78;
L_08864E78:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-31552));
    goto L_08864E7C;
L_08864E7C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864E80;
L_08864E80:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864E84;
L_08864E84:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864E88;
L_08864E88:
    ctx.set_gpr(4, 2482u << 16u);
    goto L_08864E8C;
L_08864E8C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864E90;
L_08864E90:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(27248));
    goto L_08864E94;
L_08864E94:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864E98;
L_08864E98:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864E9C;
L_08864E9C:
    ctx.set_gpr(4, 16256u << 16u);
    goto L_08864EA0;
L_08864EA0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864EA4;
L_08864EA4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08864EA8;
L_08864EA8:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_08864EAC;
L_08864EAC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864EB0;
L_08864EB0:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-30048));
    goto L_08864EB4;
L_08864EB4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30048), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864EB8;
L_08864EB8:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864EBC;
L_08864EBC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864EC0;
L_08864EC0:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_08864EC4;
L_08864EC4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864EC8;
L_08864EC8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-31520));
    goto L_08864ECC;
L_08864ECC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864ED0;
L_08864ED0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864ED4;
L_08864ED4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864ED8;
L_08864ED8:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_08864EDC;
L_08864EDC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864EE0;
L_08864EE0:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-30032));
    goto L_08864EE4;
L_08864EE4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864EE8;
L_08864EE8:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864EEC;
L_08864EEC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864EF0;
L_08864EF0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864EF4;
L_08864EF4:
    ctx.set_gpr(5, 49024u << 16u);
    goto L_08864EF8;
L_08864EF8:
    ctx.set_gpr(4, 2482u << 16u);
    goto L_08864EFC;
L_08864EFC:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08864F00;
L_08864F00:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(27264));
    goto L_08864F04;
L_08864F04:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08864F08;
L_08864F08:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864F0C;
L_08864F0C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864F10;
L_08864F10:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_08864F14;
L_08864F14:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864F18;
L_08864F18:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-29936));
    goto L_08864F1C;
L_08864F1C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864F20;
L_08864F20:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08864F24;
L_08864F24:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864F28;
L_08864F28:
    ctx.set_gpr(4, 2482u << 16u);
    goto L_08864F2C;
L_08864F2C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864F30;
L_08864F30:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(27280));
    goto L_08864F34;
L_08864F34:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864F38;
L_08864F38:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864F3C;
L_08864F3C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08864F40;
L_08864F40:
    ctx.set_gpr(4, 2482u << 16u);
    goto L_08864F44;
L_08864F44:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864F48;
L_08864F48:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-29184));
    goto L_08864F4C;
L_08864F4C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864F50;
L_08864F50:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864F54;
L_08864F54:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864F58;
L_08864F58:
    ctx.set_gpr(4, 2482u << 16u);
    goto L_08864F5C;
L_08864F5C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864F60;
L_08864F60:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(27296));
    goto L_08864F64;
L_08864F64:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864F68;
L_08864F68:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864F6C;
L_08864F6C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08864F70;
L_08864F70:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08864E70(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08864E70_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08869844[45] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 0, 31,
    32, 0, 33, 34, 0, 35, 36, 0, 37, 38, 39, 40, 41,
};
void init_08869844_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08869844u;
        entry_id = (entry_delta < 180u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08869844[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08869844;
    case 2u: goto L_08869848;
    case 3u: goto L_0886984C;
    case 4u: goto L_08869850;
    case 5u: goto L_08869854;
    case 6u: goto L_08869858;
    case 7u: goto L_0886985C;
    case 8u: goto L_08869860;
    case 9u: goto L_08869864;
    case 10u: goto L_08869868;
    case 11u: goto L_0886986C;
    case 12u: goto L_08869870;
    case 13u: goto L_08869874;
    case 14u: goto L_08869878;
    case 15u: goto L_0886987C;
    case 16u: goto L_08869880;
    case 17u: goto L_08869884;
    case 18u: goto L_08869888;
    case 19u: goto L_0886988C;
    case 20u: goto L_08869890;
    case 21u: goto L_08869894;
    case 22u: goto L_08869898;
    case 23u: goto L_0886989C;
    case 24u: goto L_088698A0;
    case 25u: goto L_088698A4;
    case 26u: goto L_088698A8;
    case 27u: goto L_088698AC;
    case 28u: goto L_088698B0;
    case 29u: goto L_088698B4;
    case 30u: goto L_088698B8;
    case 31u: goto L_088698C0;
    case 32u: goto L_088698C4;
    case 33u: goto L_088698CC;
    case 34u: goto L_088698D0;
    case 35u: goto L_088698D8;
    case 36u: goto L_088698DC;
    case 37u: goto L_088698E4;
    case 38u: goto L_088698E8;
    case 39u: goto L_088698EC;
    case 40u: goto L_088698F0;
    case 41u: goto L_088698F4;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08869844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    goto L_08869848;
L_08869848:
    ctx.set_gpr(4, 16256u << 16u);
    goto L_0886984C;
L_0886984C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08869850;
L_08869850:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08869854;
L_08869854:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869858;
L_08869858:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0886985C;
L_0886985C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869860;
L_08869860:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869864;
L_08869864:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869868;
L_08869868:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0886986C;
L_0886986C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869870;
L_08869870:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869874;
L_08869874:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869878;
L_08869878:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886987C;
L_0886987C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08869880;
L_08869880:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869884;
L_08869884:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869888;
L_08869888:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0886988C;
L_0886988C:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_08869890;
L_08869890:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08869894;
L_08869894:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30016));
    goto L_08869898;
L_08869898:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    goto L_0886989C;
L_0886989C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    goto L_088698A0;
L_088698A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088698A4;
L_088698A4:
    ctx.set_gpr(5, ctx.gpr[29] | 0u);
    goto L_088698A8;
L_088698A8:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_088698AC;
L_088698AC:
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_088698B0;
L_088698B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    goto L_088698B4;
L_088698B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    goto L_088698B8;
L_088698B8:
    ctx.set_gpr(31, 0x088698C0u);
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.pc = 0x089A3868u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088698C0u) goto L_088698C0;
    return;
L_088698C0:
    ctx.set_gpr(4, ctx.gpr[16] | 0u);
    goto L_088698C4;
L_088698C4:
    ctx.set_gpr(31, 0x088698CCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x089A3868u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088698CCu) goto L_088698CC;
    return;
L_088698CC:
    ctx.set_gpr(4, ctx.gpr[17] | 0u);
    goto L_088698D0;
L_088698D0:
    ctx.set_gpr(31, 0x088698D8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x089A3868u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088698D8u) goto L_088698D8;
    return;
L_088698D8:
    ctx.set_gpr(4, ctx.gpr[18] | 0u);
    goto L_088698DC;
L_088698DC:
    ctx.set_gpr(31, 0x088698E4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.pc = 0x089A3868u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088698E4u) goto L_088698E4;
    return;
L_088698E4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_088698E8;
L_088698E8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_088698EC;
L_088698EC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_088698F0;
L_088698F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_088698F4;
L_088698F4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08869844(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08869844_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0886EE14[3] = {
    1, 2, 3,
};
void init_0886EE14_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0886EE14u;
        entry_id = (entry_delta < 12u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0886EE14[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886EE14;
    case 2u: goto L_0886EE18;
    case 3u: goto L_0886EE1C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0886EE14:
    ctx.set_gpr(4, 0u | 1u);
    goto L_0886EE18;
L_0886EE18:
    ctx.set_gpr(5, 2482u << 16u);
    goto L_0886EE1C;
L_0886EE1C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27404), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0886EE14(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0886EE14_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088735CC[5] = {
    1, 2, 3, 4, 5,
};
void init_088735CC_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088735CCu;
        entry_id = (entry_delta < 20u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088735CC[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088735CC;
    case 2u: goto L_088735D0;
    case 3u: goto L_088735D4;
    case 4u: goto L_088735D8;
    case 5u: goto L_088735DC;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088735CC:
    ctx.set_gpr(4, 0u | 1u);
    goto L_088735D0;
L_088735D0:
    ctx.set_gpr(5, 2480u << 16u);
    goto L_088735D4;
L_088735D4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-31536), ctx.gpr[4]);
    goto L_088735D8;
L_088735D8:
    ctx.set_gpr(5, 2480u << 16u);
    goto L_088735DC;
L_088735DC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-18276), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088735CC(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088735CC_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08874508[38] = {
    1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 0, 35, 36,
};
void init_08874508_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08874508u;
        entry_id = (entry_delta < 152u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08874508[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08874508;
    case 2u: goto L_0887450C;
    case 3u: goto L_08874510;
    case 4u: goto L_08874514;
    case 5u: goto L_08874518;
    case 6u: goto L_0887451C;
    case 7u: goto L_08874520;
    case 8u: goto L_08874524;
    case 9u: goto L_0887452C;
    case 10u: goto L_08874530;
    case 11u: goto L_08874534;
    case 12u: goto L_08874538;
    case 13u: goto L_0887453C;
    case 14u: goto L_08874540;
    case 15u: goto L_08874544;
    case 16u: goto L_08874548;
    case 17u: goto L_0887454C;
    case 18u: goto L_08874550;
    case 19u: goto L_08874554;
    case 20u: goto L_08874558;
    case 21u: goto L_0887455C;
    case 22u: goto L_08874560;
    case 23u: goto L_08874564;
    case 24u: goto L_08874568;
    case 25u: goto L_0887456C;
    case 26u: goto L_08874570;
    case 27u: goto L_08874574;
    case 28u: goto L_08874578;
    case 29u: goto L_0887457C;
    case 30u: goto L_08874580;
    case 31u: goto L_08874584;
    case 32u: goto L_08874588;
    case 33u: goto L_0887458C;
    case 34u: goto L_08874590;
    case 35u: goto L_08874598;
    case 36u: goto L_0887459C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08874508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_0887450C;
L_0887450C:
    ctx.set_gpr(4, 2484u << 16u);
    goto L_08874510;
L_08874510:
    ctx.set_gpr(7, 2183u << 16u);
    goto L_08874514;
L_08874514:
    ctx.set_gpr(5, 0u | 3u);
    goto L_08874518;
L_08874518:
    ctx.set_gpr(6, 0u | 576u);
    goto L_0887451C;
L_0887451C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31568));
    goto L_08874520;
L_08874520:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_08874524;
L_08874524:
    ctx.set_gpr(31, 0x0887452Cu);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14464));
    ctx.pc = 0x08993560u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887452Cu) goto L_0887452C;
    return;
L_0887452C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08874530;
L_08874530:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_08874534;
L_08874534:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-32240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08874538;
L_08874538:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32240));
    goto L_0887453C;
L_0887453C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08874540;
L_08874540:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08874544;
L_08874544:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08874548;
L_08874548:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_0887454C;
L_0887454C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08874550;
L_08874550:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08874554;
L_08874554:
    ctx.set_gpr(6, 17279u << 16u);
    goto L_08874558;
L_08874558:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887455C;
L_0887455C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08874560;
L_08874560:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08874564;
L_08874564:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08874568;
L_08874568:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0887456C;
L_0887456C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08874570;
L_08874570:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08874574;
L_08874574:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08874578;
L_08874578:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_0887457C;
L_0887457C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08874580;
L_08874580:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08874584;
L_08874584:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08874588;
L_08874588:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0887458C;
L_0887458C:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_08874590;
L_08874590:
    ctx.set_gpr(31, 0x08874598u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24600));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08874598u) goto L_08874598;
    return;
L_08874598:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0887459C;
L_0887459C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08874508(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08874508_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08874E18[29] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 0, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0, 26, 27,
};
void init_08874E18_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08874E18u;
        entry_id = (entry_delta < 116u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08874E18[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08874E18;
    case 2u: goto L_08874E1C;
    case 3u: goto L_08874E20;
    case 4u: goto L_08874E24;
    case 5u: goto L_08874E28;
    case 6u: goto L_08874E2C;
    case 7u: goto L_08874E30;
    case 8u: goto L_08874E34;
    case 9u: goto L_08874E38;
    case 10u: goto L_08874E3C;
    case 11u: goto L_08874E40;
    case 12u: goto L_08874E44;
    case 13u: goto L_08874E4C;
    case 14u: goto L_08874E50;
    case 15u: goto L_08874E54;
    case 16u: goto L_08874E58;
    case 17u: goto L_08874E5C;
    case 18u: goto L_08874E60;
    case 19u: goto L_08874E64;
    case 20u: goto L_08874E68;
    case 21u: goto L_08874E6C;
    case 22u: goto L_08874E70;
    case 23u: goto L_08874E74;
    case 24u: goto L_08874E78;
    case 25u: goto L_08874E7C;
    case 26u: goto L_08874E84;
    case 27u: goto L_08874E88;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08874E18:
    ctx.set_gpr(4, 0u | 1u);
    goto L_08874E1C;
L_08874E1C:
    ctx.set_gpr(5, 2485u << 16u);
    goto L_08874E20;
L_08874E20:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-32176), ctx.gpr[4]);
    goto L_08874E24;
L_08874E24:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_08874E28;
L_08874E28:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-31912));
    goto L_08874E2C;
L_08874E2C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08874E30;
L_08874E30:
    ctx.set_gpr(7, 2485u << 16u);
    goto L_08874E34;
L_08874E34:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31912), 0u);
    goto L_08874E38;
L_08874E38:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-31904));
    goto L_08874E3C;
L_08874E3C:
    ctx.set_gpr(6, 0u | 0u);
    goto L_08874E40;
L_08874E40:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    goto L_08874E44;
L_08874E44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1280), 0u);
      if (branch_taken) {
          goto L_08874E88;
      }
      goto L_08874E4C;
    }
L_08874E4C:
    ctx.set_gpr(4, 0u | 31u);
    goto L_08874E50;
L_08874E50:
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[6]);
    goto L_08874E54;
L_08874E54:
    ctx.set_gpr(5, ctx.gpr[4] << 5u);
    goto L_08874E58;
L_08874E58:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    goto L_08874E5C;
L_08874E5C:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    goto L_08874E60;
L_08874E60:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    goto L_08874E64;
L_08874E64:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    goto L_08874E68;
L_08874E68:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    goto L_08874E6C;
L_08874E6C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1152), ctx.gpr[5]);
    goto L_08874E70;
L_08874E70:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08874E74;
L_08874E74:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-36));
    goto L_08874E78;
L_08874E78:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    goto L_08874E7C;
L_08874E7C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08874E6C;
      }
      goto L_08874E84;
    }
L_08874E84:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1280), ctx.gpr[6]);
    goto L_08874E88;
L_08874E88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08874E18(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08874E18_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08883E50[8] = {
    1, 2, 3, 4, 5, 6, 7, 8,
};
void init_08883E50_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08883E50u;
        entry_id = (entry_delta < 32u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08883E50[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08883E50;
    case 2u: goto L_08883E54;
    case 3u: goto L_08883E58;
    case 4u: goto L_08883E5C;
    case 5u: goto L_08883E60;
    case 6u: goto L_08883E64;
    case 7u: goto L_08883E68;
    case 8u: goto L_08883E6C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08883E50:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_08883E54;
L_08883E54:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-28376));
    goto L_08883E58;
L_08883E58:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08883E5C;
L_08883E5C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28376), 0u);
    goto L_08883E60;
L_08883E60:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_08883E64;
L_08883E64:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-28368));
    goto L_08883E68;
L_08883E68:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08883E6C;
L_08883E6C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28368), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08883E50(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08883E50_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088841CC[7] = {
    1, 2, 3, 4, 5, 6, 7,
};
void init_088841CC_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088841CCu;
        entry_id = (entry_delta < 28u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088841CC[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088841CC;
    case 2u: goto L_088841D0;
    case 3u: goto L_088841D4;
    case 4u: goto L_088841D8;
    case 5u: goto L_088841DC;
    case 6u: goto L_088841E0;
    case 7u: goto L_088841E4;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088841CC:
    ctx.set_gpr(4, 16256u << 16u);
    goto L_088841D0;
L_088841D0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088841D4;
L_088841D4:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088841D8;
L_088841D8:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24748)));
    goto L_088841DC;
L_088841DC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_088841E0;
L_088841E0:
    ctx.set_gpr(4, 2482u << 16u);
    goto L_088841E4;
L_088841E4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088841CC(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088841CC_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0888E65C[10] = {
    1, 2, 3, 4, 0, 5, 6, 0, 7, 8,
};
void init_0888E65C_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0888E65Cu;
        entry_id = (entry_delta < 40u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0888E65C[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0888E65C;
    case 2u: goto L_0888E660;
    case 3u: goto L_0888E664;
    case 4u: goto L_0888E668;
    case 5u: goto L_0888E670;
    case 6u: goto L_0888E674;
    case 7u: goto L_0888E67C;
    case 8u: goto L_0888E680;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0888E65C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_0888E660;
L_0888E660:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_0888E664;
L_0888E664:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_0888E668;
L_0888E668:
    ctx.set_gpr(31, 0x0888E670u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28192));
    ctx.pc = 0x088698FCu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E670u) goto L_0888E670;
    return;
L_0888E670:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_0888E674;
L_0888E674:
    ctx.set_gpr(31, 0x0888E67Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27288));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E67Cu) goto L_0888E67C;
    return;
L_0888E67C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888E680;
L_0888E680:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0888E65C(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0888E65C_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08890780[10] = {
    1, 2, 3, 4, 0, 5, 6, 0, 7, 8,
};
void init_08890780_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08890780u;
        entry_id = (entry_delta < 40u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08890780[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08890780;
    case 2u: goto L_08890784;
    case 3u: goto L_08890788;
    case 4u: goto L_0889078C;
    case 5u: goto L_08890794;
    case 6u: goto L_08890798;
    case 7u: goto L_088907A0;
    case 8u: goto L_088907A4;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08890780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_08890784;
L_08890784:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_08890788;
L_08890788:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_0889078C;
L_0889078C:
    ctx.set_gpr(31, 0x08890794u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28168));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08890794u) goto L_08890794;
    return;
L_08890794:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_08890798;
L_08890798:
    ctx.set_gpr(31, 0x088907A0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27312));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088907A0u) goto L_088907A0;
    return;
L_088907A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088907A4;
L_088907A4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08890780(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08890780_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_08895A28[5] = {
    1, 2, 3, 4, 5,
};
void init_08895A28_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08895A28u;
        entry_id = (entry_delta < 20u && (entry_delta & 3u) == 0u) ? kEntryIds_init_08895A28[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08895A28;
    case 2u: goto L_08895A2C;
    case 3u: goto L_08895A30;
    case 4u: goto L_08895A34;
    case 5u: goto L_08895A38;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_08895A28:
    ctx.set_gpr(4, 0u | 332u);
    goto L_08895A2C;
L_08895A2C:
    ctx.set_gpr(5, 2485u << 16u);
    goto L_08895A30;
L_08895A30:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28140), ctx.gpr[4]);
    goto L_08895A34;
L_08895A34:
    ctx.set_gpr(5, 2485u << 16u);
    goto L_08895A38;
L_08895A38:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28136), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_08895A28(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_08895A28_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0889723C[1] = {
    1,
};
void init_0889723C_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0889723Cu;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0889723C[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889723C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0889723C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0889723C(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0889723C_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088A0768[4] = {
    1, 2, 3, 4,
};
void init_088A0768_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A0768u;
        entry_id = (entry_delta < 16u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088A0768[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A0768;
    case 2u: goto L_088A076C;
    case 3u: goto L_088A0770;
    case 4u: goto L_088A0774;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088A0768:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088A076C;
L_088A076C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-12568));
    goto L_088A0770;
L_088A0770:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_088A0774;
L_088A0774:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12568), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088A0768(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088A0768_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088A0D60[7] = {
    1, 2, 3, 4, 0, 5, 6,
};
void init_088A0D60_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A0D60u;
        entry_id = (entry_delta < 28u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088A0D60[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A0D60;
    case 2u: goto L_088A0D64;
    case 3u: goto L_088A0D68;
    case 4u: goto L_088A0D6C;
    case 5u: goto L_088A0D74;
    case 6u: goto L_088A0D78;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088A0D60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088A0D64;
L_088A0D64:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088A0D68;
L_088A0D68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088A0D6C;
L_088A0D6C:
    ctx.set_gpr(31, 0x088A0D74u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12416));
    ctx.pc = 0x088672F4u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0D74u) goto L_088A0D74;
    return;
L_088A0D74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A0D78;
L_088A0D78:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088A0D60(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088A0D60_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088A38EC[4] = {
    1, 2, 3, 4,
};
void init_088A38EC_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A38ECu;
        entry_id = (entry_delta < 16u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088A38EC[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A38EC;
    case 2u: goto L_088A38F0;
    case 3u: goto L_088A38F4;
    case 4u: goto L_088A38F8;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088A38EC:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088A38F0;
L_088A38F0:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-12392));
    goto L_088A38F4;
L_088A38F4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_088A38F8;
L_088A38F8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12392), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088A38EC(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088A38EC_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088A4168[14] = {
    1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 10, 0, 11, 12,
};
void init_088A4168_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A4168u;
        entry_id = (entry_delta < 56u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088A4168[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A4168;
    case 2u: goto L_088A416C;
    case 3u: goto L_088A4170;
    case 4u: goto L_088A4174;
    case 5u: goto L_088A4178;
    case 6u: goto L_088A417C;
    case 7u: goto L_088A4180;
    case 8u: goto L_088A4184;
    case 9u: goto L_088A418C;
    case 10u: goto L_088A4190;
    case 11u: goto L_088A4198;
    case 12u: goto L_088A419C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088A4168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088A416C;
L_088A416C:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088A4170;
L_088A4170:
    ctx.set_gpr(7, 2186u << 16u);
    goto L_088A4174;
L_088A4174:
    ctx.set_gpr(5, 0u | 2u);
    goto L_088A4178;
L_088A4178:
    ctx.set_gpr(6, 0u | 52u);
    goto L_088A417C;
L_088A417C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11344));
    goto L_088A4180;
L_088A4180:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088A4184;
L_088A4184:
    ctx.set_gpr(31, 0x088A418Cu);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15880));
    ctx.pc = 0x08993560u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A418Cu) goto L_088A418C;
    return;
L_088A418C:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088A4190;
L_088A4190:
    ctx.set_gpr(31, 0x088A4198u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27964));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A4198u) goto L_088A4198;
    return;
L_088A4198:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A419C;
L_088A419C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088A4168(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088A4168_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088A52CC[7] = {
    1, 2, 3, 4, 0, 5, 6,
};
void init_088A52CC_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A52CCu;
        entry_id = (entry_delta < 28u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088A52CC[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A52CC;
    case 2u: goto L_088A52D0;
    case 3u: goto L_088A52D4;
    case 4u: goto L_088A52D8;
    case 5u: goto L_088A52E0;
    case 6u: goto L_088A52E4;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088A52CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088A52D0;
L_088A52D0:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088A52D4;
L_088A52D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088A52D8;
L_088A52D8:
    ctx.set_gpr(31, 0x088A52E0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11232));
    ctx.pc = 0x088672F4u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A52E0u) goto L_088A52E0;
    return;
L_088A52E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A52E4;
L_088A52E4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088A52CC(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088A52CC_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088A94A0[19] = {
    1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 11, 12, 13, 14, 0, 15, 16, 17,
};
void init_088A94A0_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A94A0u;
        entry_id = (entry_delta < 76u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088A94A0[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A94A0;
    case 2u: goto L_088A94A4;
    case 3u: goto L_088A94A8;
    case 4u: goto L_088A94AC;
    case 5u: goto L_088A94B0;
    case 6u: goto L_088A94B4;
    case 7u: goto L_088A94BC;
    case 8u: goto L_088A94C0;
    case 9u: goto L_088A94C4;
    case 10u: goto L_088A94C8;
    case 11u: goto L_088A94CC;
    case 12u: goto L_088A94D0;
    case 13u: goto L_088A94D4;
    case 14u: goto L_088A94D8;
    case 15u: goto L_088A94E0;
    case 16u: goto L_088A94E4;
    case 17u: goto L_088A94E8;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088A94A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088A94A4;
L_088A94A4:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088A94A8;
L_088A94A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A94AC;
L_088A94AC:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(-11200));
    goto L_088A94B0;
L_088A94B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    goto L_088A94B4;
L_088A94B4:
    ctx.set_gpr(31, 0x088A94BCu);
    ctx.set_gpr(4, ctx.gpr[16] | 0u);
    ctx.pc = 0x088A985Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A94BCu) goto L_088A94BC;
    return;
L_088A94BC:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088A94C0;
L_088A94C0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20048));
    goto L_088A94C4;
L_088A94C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_088A94C8;
L_088A94C8:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088A94CC;
L_088A94CC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19976));
    goto L_088A94D0;
L_088A94D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_088A94D4;
L_088A94D4:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088A94D8;
L_088A94D8:
    ctx.set_gpr(31, 0x088A94E0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28088));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A94E0u) goto L_088A94E0;
    return;
L_088A94E0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A94E4;
L_088A94E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088A94E8;
L_088A94E8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088A94A0(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088A94A0_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088AEF44[3] = {
    1, 2, 3,
};
void init_088AEF44_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088AEF44u;
        entry_id = (entry_delta < 12u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088AEF44[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AEF44;
    case 2u: goto L_088AEF48;
    case 3u: goto L_088AEF4C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088AEF44:
    ctx.set_gpr(4, 0u | 1u);
    goto L_088AEF48;
L_088AEF48:
    ctx.set_gpr(5, 2485u << 16u);
    goto L_088AEF4C;
L_088AEF4C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-11148), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088AEF44(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088AEF44_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088B1DF4[10] = {
    1, 2, 3, 4, 0, 5, 6, 0, 7, 8,
};
void init_088B1DF4_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B1DF4u;
        entry_id = (entry_delta < 40u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088B1DF4[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B1DF4;
    case 2u: goto L_088B1DF8;
    case 3u: goto L_088B1DFC;
    case 4u: goto L_088B1E00;
    case 5u: goto L_088B1E08;
    case 6u: goto L_088B1E0C;
    case 7u: goto L_088B1E14;
    case 8u: goto L_088B1E18;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088B1DF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088B1DF8;
L_088B1DF8:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088B1DFC;
L_088B1DFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088B1E00;
L_088B1E00:
    ctx.set_gpr(31, 0x088B1E08u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28408));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B1E08u) goto L_088B1E08;
    return;
L_088B1E08:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088B1E0C;
L_088B1E0C:
    ctx.set_gpr(31, 0x088B1E14u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29336));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B1E14u) goto L_088B1E14;
    return;
L_088B1E14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088B1E18;
L_088B1E18:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088B1DF4(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088B1DF4_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088B2AD0[16] = {
    1, 2, 3, 4, 0, 5, 6, 0, 7, 8, 0, 9, 10, 0, 11, 12,
};
void init_088B2AD0_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B2AD0u;
        entry_id = (entry_delta < 64u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088B2AD0[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B2AD0;
    case 2u: goto L_088B2AD4;
    case 3u: goto L_088B2AD8;
    case 4u: goto L_088B2ADC;
    case 5u: goto L_088B2AE4;
    case 6u: goto L_088B2AE8;
    case 7u: goto L_088B2AF0;
    case 8u: goto L_088B2AF4;
    case 9u: goto L_088B2AFC;
    case 10u: goto L_088B2B00;
    case 11u: goto L_088B2B08;
    case 12u: goto L_088B2B0C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088B2AD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088B2AD4;
L_088B2AD4:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088B2AD8;
L_088B2AD8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088B2ADC;
L_088B2ADC:
    ctx.set_gpr(31, 0x088B2AE4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28392));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B2AE4u) goto L_088B2AE4;
    return;
L_088B2AE4:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088B2AE8;
L_088B2AE8:
    ctx.set_gpr(31, 0x088B2AF0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29380));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B2AF0u) goto L_088B2AF0;
    return;
L_088B2AF0:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088B2AF4;
L_088B2AF4:
    ctx.set_gpr(31, 0x088B2AFCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11144));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B2AFCu) goto L_088B2AFC;
    return;
L_088B2AFC:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088B2B00;
L_088B2B00:
    ctx.set_gpr(31, 0x088B2B08u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29392));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B2B08u) goto L_088B2B08;
    return;
L_088B2B08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088B2B0C;
L_088B2B0C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088B2AD0(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088B2AD0_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088B7154[1] = {
    1,
};
void init_088B7154_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B7154u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088B7154[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B7154;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088B7154:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088B7154(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088B7154_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088BBA64[16] = {
    1, 2, 3, 4, 0, 5, 6, 0, 7, 8, 0, 9, 10, 0, 11, 12,
};
void init_088BBA64_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088BBA64u;
        entry_id = (entry_delta < 64u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088BBA64[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BBA64;
    case 2u: goto L_088BBA68;
    case 3u: goto L_088BBA6C;
    case 4u: goto L_088BBA70;
    case 5u: goto L_088BBA78;
    case 6u: goto L_088BBA7C;
    case 7u: goto L_088BBA84;
    case 8u: goto L_088BBA88;
    case 9u: goto L_088BBA90;
    case 10u: goto L_088BBA94;
    case 11u: goto L_088BBA9C;
    case 12u: goto L_088BBAA0;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088BBA64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088BBA68;
L_088BBA68:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088BBA6C;
L_088BBA6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088BBA70;
L_088BBA70:
    ctx.set_gpr(31, 0x088BBA78u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6088));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BBA78u) goto L_088BBA78;
    return;
L_088BBA78:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088BBA7C;
L_088BBA7C:
    ctx.set_gpr(31, 0x088BBA84u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29584));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BBA84u) goto L_088BBA84;
    return;
L_088BBA84:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088BBA88;
L_088BBA88:
    ctx.set_gpr(31, 0x088BBA90u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6072));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BBA90u) goto L_088BBA90;
    return;
L_088BBA90:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088BBA94;
L_088BBA94:
    ctx.set_gpr(31, 0x088BBA9Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29596));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BBA9Cu) goto L_088BBA9C;
    return;
L_088BBA9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088BBAA0;
L_088BBAA0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088BBA64(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088BBA64_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088BBE18[1] = {
    1,
};
void init_088BBE18_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088BBE18u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088BBE18[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BBE18;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088BBE18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088BBE18(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088BBE18_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088BD104[1] = {
    1,
};
void init_088BD104_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088BD104u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088BD104[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BD104;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088BD104:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088BD104(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088BD104_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088BD2C4[10] = {
    1, 2, 3, 4, 0, 5, 6, 0, 7, 8,
};
void init_088BD2C4_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088BD2C4u;
        entry_id = (entry_delta < 40u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088BD2C4[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BD2C4;
    case 2u: goto L_088BD2C8;
    case 3u: goto L_088BD2CC;
    case 4u: goto L_088BD2D0;
    case 5u: goto L_088BD2D8;
    case 6u: goto L_088BD2DC;
    case 7u: goto L_088BD2E4;
    case 8u: goto L_088BD2E8;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088BD2C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088BD2C8;
L_088BD2C8:
    ctx.set_gpr(4, 2487u << 16u);
    goto L_088BD2CC;
L_088BD2CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088BD2D0;
L_088BD2D0:
    ctx.set_gpr(31, 0x088BD2D8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29880));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD2D8u) goto L_088BD2D8;
    return;
L_088BD2D8:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088BD2DC;
L_088BD2DC:
    ctx.set_gpr(31, 0x088BD2E4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29632));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD2E4u) goto L_088BD2E4;
    return;
L_088BD2E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088BD2E8;
L_088BD2E8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088BD2C4(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088BD2C4_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088C0AAC[1] = {
    1,
};
void init_088C0AAC_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C0AACu;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088C0AAC[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C0AAC;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088C0AAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088C0AAC(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088C0AAC_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088C14B0[16] = {
    1, 2, 3, 4, 0, 5, 6, 0, 7, 8, 0, 9, 10, 0, 11, 12,
};
void init_088C14B0_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C14B0u;
        entry_id = (entry_delta < 64u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088C14B0[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C14B0;
    case 2u: goto L_088C14B4;
    case 3u: goto L_088C14B8;
    case 4u: goto L_088C14BC;
    case 5u: goto L_088C14C4;
    case 6u: goto L_088C14C8;
    case 7u: goto L_088C14D0;
    case 8u: goto L_088C14D4;
    case 9u: goto L_088C14DC;
    case 10u: goto L_088C14E0;
    case 11u: goto L_088C14E8;
    case 12u: goto L_088C14EC;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088C14B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088C14B4;
L_088C14B4:
    ctx.set_gpr(4, 2485u << 16u);
    goto L_088C14B8;
L_088C14B8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088C14BC;
L_088C14BC:
    ctx.set_gpr(31, 0x088C14C4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6104));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C14C4u) goto L_088C14C4;
    return;
L_088C14C4:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088C14C8;
L_088C14C8:
    ctx.set_gpr(31, 0x088C14D0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29720));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C14D0u) goto L_088C14D0;
    return;
L_088C14D0:
    ctx.set_gpr(4, 2487u << 16u);
    goto L_088C14D4;
L_088C14D4:
    ctx.set_gpr(31, 0x088C14DCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28064));
    ctx.pc = 0x0887A61Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C14DCu) goto L_088C14DC;
    return;
L_088C14DC:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088C14E0;
L_088C14E0:
    ctx.set_gpr(31, 0x088C14E8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29732));
    ctx.pc = 0x08992F6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C14E8u) goto L_088C14E8;
    return;
L_088C14E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088C14EC;
L_088C14EC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088C14B0(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088C14B0_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088C1C04[1] = {
    1,
};
void init_088C1C04_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C1C04u;
        entry_id = (entry_delta < 4u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088C1C04[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C1C04;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088C1C04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088C1C04(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088C1C04_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088C4B80[11] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
};
void init_088C4B80_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C4B80u;
        entry_id = (entry_delta < 44u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088C4B80[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C4B80;
    case 2u: goto L_088C4B84;
    case 3u: goto L_088C4B88;
    case 4u: goto L_088C4B8C;
    case 5u: goto L_088C4B90;
    case 6u: goto L_088C4B94;
    case 7u: goto L_088C4B98;
    case 8u: goto L_088C4B9C;
    case 9u: goto L_088C4BA0;
    case 10u: goto L_088C4BA4;
    case 11u: goto L_088C4BA8;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088C4B80:
    ctx.set_gpr(5, 2205u << 16u);
    goto L_088C4B84;
L_088C4B84:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(30368)));
    goto L_088C4B88;
L_088C4B88:
    ctx.set_gpr(6, 2205u << 16u);
    goto L_088C4B8C;
L_088C4B8C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(30364)));
    goto L_088C4B90;
L_088C4B90:
    ctx.set_gpr(4, 0u | 31u);
    goto L_088C4B94;
L_088C4B94:
    ctx.set_gpr(7, 2205u << 16u);
    goto L_088C4B98;
L_088C4B98:
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
    goto L_088C4B9C;
L_088C4B9C:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(30372), ctx.gpr[5]);
    goto L_088C4BA0;
L_088C4BA0:
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[5]);
    goto L_088C4BA4;
L_088C4BA4:
    ctx.set_gpr(5, 2205u << 16u);
    goto L_088C4BA8;
L_088C4BA8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(30376), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088C4B80(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088C4B80_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088CE2F8[14] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
};
void init_088CE2F8_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088CE2F8u;
        entry_id = (entry_delta < 56u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088CE2F8[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CE2F8;
    case 2u: goto L_088CE2FC;
    case 3u: goto L_088CE300;
    case 4u: goto L_088CE304;
    case 5u: goto L_088CE308;
    case 6u: goto L_088CE30C;
    case 7u: goto L_088CE310;
    case 8u: goto L_088CE314;
    case 9u: goto L_088CE318;
    case 10u: goto L_088CE31C;
    case 11u: goto L_088CE320;
    case 12u: goto L_088CE324;
    case 13u: goto L_088CE328;
    case 14u: goto L_088CE32C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088CE2F8:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088CE2FC;
L_088CE2FC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17056)));
    goto L_088CE300;
L_088CE300:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088CE304;
L_088CE304:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17048)));
    goto L_088CE308;
L_088CE308:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088CE30C;
L_088CE30C:
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17052)));
    goto L_088CE310;
L_088CE310:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_088CE314;
L_088CE314:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088CE318;
L_088CE318:
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17044)));
    goto L_088CE31C;
L_088CE31C:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088CE320;
L_088CE320:
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    goto L_088CE324;
L_088CE324:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(30744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088CE328;
L_088CE328:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088CE32C;
L_088CE32C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(30748), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088CE2F8(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088CE2F8_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088F7800[12] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
};
void init_088F7800_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F7800u;
        entry_id = (entry_delta < 48u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088F7800[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F7800;
    case 2u: goto L_088F7804;
    case 3u: goto L_088F7808;
    case 4u: goto L_088F780C;
    case 5u: goto L_088F7810;
    case 6u: goto L_088F7814;
    case 7u: goto L_088F7818;
    case 8u: goto L_088F781C;
    case 9u: goto L_088F7820;
    case 10u: goto L_088F7824;
    case 11u: goto L_088F7828;
    case 12u: goto L_088F782C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088F7800:
    ctx.set_gpr(7, 2205u << 16u);
    goto L_088F7804;
L_088F7804:
    ctx.set_gpr(5, 2487u << 16u);
    goto L_088F7808;
L_088F7808:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12944));
    goto L_088F780C;
L_088F780C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    goto L_088F7810;
L_088F7810:
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-25856));
    goto L_088F7814;
L_088F7814:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25856), ctx.gpr[7]);
    goto L_088F7818;
L_088F7818:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_088F781C;
L_088F781C:
    ctx.set_gpr(4, 2205u << 16u);
    goto L_088F7820;
L_088F7820:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    goto L_088F7824;
L_088F7824:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13008));
    goto L_088F7828;
L_088F7828:
    ctx.set_gpr(5, 2487u << 16u);
    goto L_088F782C;
L_088F782C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25860), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088F7800(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088F7800_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_088FB9F4[11] = {
    1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 10,
};
void init_088FB9F4_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088FB9F4u;
        entry_id = (entry_delta < 44u && (entry_delta & 3u) == 0u) ? kEntryIds_init_088FB9F4[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088FB9F4;
    case 2u: goto L_088FB9F8;
    case 3u: goto L_088FB9FC;
    case 4u: goto L_088FBA00;
    case 5u: goto L_088FBA04;
    case 6u: goto L_088FBA08;
    case 7u: goto L_088FBA0C;
    case 8u: goto L_088FBA10;
    case 9u: goto L_088FBA18;
    case 10u: goto L_088FBA1C;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_088FB9F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_088FB9F8;
L_088FB9F8:
    ctx.set_gpr(4, 2480u << 16u);
    goto L_088FB9FC;
L_088FB9FC:
    ctx.set_gpr(7, 2192u << 16u);
    goto L_088FBA00;
L_088FBA00:
    ctx.set_gpr(5, 0u | 2u);
    goto L_088FBA04;
L_088FBA04:
    ctx.set_gpr(6, 0u | 4192u);
    goto L_088FBA08;
L_088FBA08:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18272));
    goto L_088FBA0C;
L_088FBA0C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_088FBA10;
L_088FBA10:
    ctx.set_gpr(31, 0x088FBA18u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27768));
    ctx.pc = 0x08993560u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FBA18u) goto L_088FBA18;
    return;
L_088FBA18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088FBA1C;
L_088FBA1C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_088FB9F4(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_088FB9F4_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0890EA50[2] = {
    1, 2,
};
void init_0890EA50_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0890EA50u;
        entry_id = (entry_delta < 8u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0890EA50[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0890EA50;
    case 2u: goto L_0890EA54;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0890EA50:
    ctx.set_gpr(4, 2487u << 16u);
    goto L_0890EA54;
L_0890EA54:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19496), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0890EA50(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0890EA50_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0891DEF8[11] = {
    1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 10,
};
void init_0891DEF8_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0891DEF8u;
        entry_id = (entry_delta < 44u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0891DEF8[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891DEF8;
    case 2u: goto L_0891DEFC;
    case 3u: goto L_0891DF00;
    case 4u: goto L_0891DF04;
    case 5u: goto L_0891DF08;
    case 6u: goto L_0891DF0C;
    case 7u: goto L_0891DF10;
    case 8u: goto L_0891DF14;
    case 9u: goto L_0891DF1C;
    case 10u: goto L_0891DF20;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0891DEF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_0891DEFC;
L_0891DEFC:
    ctx.set_gpr(4, 2487u << 16u);
    goto L_0891DF00;
L_0891DF00:
    ctx.set_gpr(6, 1u << 16u);
    goto L_0891DF04;
L_0891DF04:
    ctx.set_gpr(5, 0u | 1u);
    goto L_0891DF08;
L_0891DF08:
    ctx.set_gpr(7, 0u | 80u);
    goto L_0891DF0C;
L_0891DF0C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18448));
    goto L_0891DF10;
L_0891DF10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    goto L_0891DF14;
L_0891DF14:
    ctx.set_gpr(31, 0x0891DF1Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4464));
    ctx.pc = 0x08864FF0u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DF1Cu) goto L_0891DF1C;
    return;
L_0891DF1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0891DF20;
L_0891DF20:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0891DEF8(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0891DEF8_entry(rt, ctx, 0u, aot_mem);
}

static const std::uint16_t kEntryIds_init_0894DD74[384] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
    65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96,
    97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
    129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160,
    161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192,
    193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256,
    257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288,
    289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320,
    321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352,
    353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384,
};
void init_0894DD74_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0894DD74u;
        entry_id = (entry_delta < 1536u && (entry_delta & 3u) == 0u) ? kEntryIds_init_0894DD74[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0894DD74;
    case 2u: goto L_0894DD78;
    case 3u: goto L_0894DD7C;
    case 4u: goto L_0894DD80;
    case 5u: goto L_0894DD84;
    case 6u: goto L_0894DD88;
    case 7u: goto L_0894DD8C;
    case 8u: goto L_0894DD90;
    case 9u: goto L_0894DD94;
    case 10u: goto L_0894DD98;
    case 11u: goto L_0894DD9C;
    case 12u: goto L_0894DDA0;
    case 13u: goto L_0894DDA4;
    case 14u: goto L_0894DDA8;
    case 15u: goto L_0894DDAC;
    case 16u: goto L_0894DDB0;
    case 17u: goto L_0894DDB4;
    case 18u: goto L_0894DDB8;
    case 19u: goto L_0894DDBC;
    case 20u: goto L_0894DDC0;
    case 21u: goto L_0894DDC4;
    case 22u: goto L_0894DDC8;
    case 23u: goto L_0894DDCC;
    case 24u: goto L_0894DDD0;
    case 25u: goto L_0894DDD4;
    case 26u: goto L_0894DDD8;
    case 27u: goto L_0894DDDC;
    case 28u: goto L_0894DDE0;
    case 29u: goto L_0894DDE4;
    case 30u: goto L_0894DDE8;
    case 31u: goto L_0894DDEC;
    case 32u: goto L_0894DDF0;
    case 33u: goto L_0894DDF4;
    case 34u: goto L_0894DDF8;
    case 35u: goto L_0894DDFC;
    case 36u: goto L_0894DE00;
    case 37u: goto L_0894DE04;
    case 38u: goto L_0894DE08;
    case 39u: goto L_0894DE0C;
    case 40u: goto L_0894DE10;
    case 41u: goto L_0894DE14;
    case 42u: goto L_0894DE18;
    case 43u: goto L_0894DE1C;
    case 44u: goto L_0894DE20;
    case 45u: goto L_0894DE24;
    case 46u: goto L_0894DE28;
    case 47u: goto L_0894DE2C;
    case 48u: goto L_0894DE30;
    case 49u: goto L_0894DE34;
    case 50u: goto L_0894DE38;
    case 51u: goto L_0894DE3C;
    case 52u: goto L_0894DE40;
    case 53u: goto L_0894DE44;
    case 54u: goto L_0894DE48;
    case 55u: goto L_0894DE4C;
    case 56u: goto L_0894DE50;
    case 57u: goto L_0894DE54;
    case 58u: goto L_0894DE58;
    case 59u: goto L_0894DE5C;
    case 60u: goto L_0894DE60;
    case 61u: goto L_0894DE64;
    case 62u: goto L_0894DE68;
    case 63u: goto L_0894DE6C;
    case 64u: goto L_0894DE70;
    case 65u: goto L_0894DE74;
    case 66u: goto L_0894DE78;
    case 67u: goto L_0894DE7C;
    case 68u: goto L_0894DE80;
    case 69u: goto L_0894DE84;
    case 70u: goto L_0894DE88;
    case 71u: goto L_0894DE8C;
    case 72u: goto L_0894DE90;
    case 73u: goto L_0894DE94;
    case 74u: goto L_0894DE98;
    case 75u: goto L_0894DE9C;
    case 76u: goto L_0894DEA0;
    case 77u: goto L_0894DEA4;
    case 78u: goto L_0894DEA8;
    case 79u: goto L_0894DEAC;
    case 80u: goto L_0894DEB0;
    case 81u: goto L_0894DEB4;
    case 82u: goto L_0894DEB8;
    case 83u: goto L_0894DEBC;
    case 84u: goto L_0894DEC0;
    case 85u: goto L_0894DEC4;
    case 86u: goto L_0894DEC8;
    case 87u: goto L_0894DECC;
    case 88u: goto L_0894DED0;
    case 89u: goto L_0894DED4;
    case 90u: goto L_0894DED8;
    case 91u: goto L_0894DEDC;
    case 92u: goto L_0894DEE0;
    case 93u: goto L_0894DEE4;
    case 94u: goto L_0894DEE8;
    case 95u: goto L_0894DEEC;
    case 96u: goto L_0894DEF0;
    case 97u: goto L_0894DEF4;
    case 98u: goto L_0894DEF8;
    case 99u: goto L_0894DEFC;
    case 100u: goto L_0894DF00;
    case 101u: goto L_0894DF04;
    case 102u: goto L_0894DF08;
    case 103u: goto L_0894DF0C;
    case 104u: goto L_0894DF10;
    case 105u: goto L_0894DF14;
    case 106u: goto L_0894DF18;
    case 107u: goto L_0894DF1C;
    case 108u: goto L_0894DF20;
    case 109u: goto L_0894DF24;
    case 110u: goto L_0894DF28;
    case 111u: goto L_0894DF2C;
    case 112u: goto L_0894DF30;
    case 113u: goto L_0894DF34;
    case 114u: goto L_0894DF38;
    case 115u: goto L_0894DF3C;
    case 116u: goto L_0894DF40;
    case 117u: goto L_0894DF44;
    case 118u: goto L_0894DF48;
    case 119u: goto L_0894DF4C;
    case 120u: goto L_0894DF50;
    case 121u: goto L_0894DF54;
    case 122u: goto L_0894DF58;
    case 123u: goto L_0894DF5C;
    case 124u: goto L_0894DF60;
    case 125u: goto L_0894DF64;
    case 126u: goto L_0894DF68;
    case 127u: goto L_0894DF6C;
    case 128u: goto L_0894DF70;
    case 129u: goto L_0894DF74;
    case 130u: goto L_0894DF78;
    case 131u: goto L_0894DF7C;
    case 132u: goto L_0894DF80;
    case 133u: goto L_0894DF84;
    case 134u: goto L_0894DF88;
    case 135u: goto L_0894DF8C;
    case 136u: goto L_0894DF90;
    case 137u: goto L_0894DF94;
    case 138u: goto L_0894DF98;
    case 139u: goto L_0894DF9C;
    case 140u: goto L_0894DFA0;
    case 141u: goto L_0894DFA4;
    case 142u: goto L_0894DFA8;
    case 143u: goto L_0894DFAC;
    case 144u: goto L_0894DFB0;
    case 145u: goto L_0894DFB4;
    case 146u: goto L_0894DFB8;
    case 147u: goto L_0894DFBC;
    case 148u: goto L_0894DFC0;
    case 149u: goto L_0894DFC4;
    case 150u: goto L_0894DFC8;
    case 151u: goto L_0894DFCC;
    case 152u: goto L_0894DFD0;
    case 153u: goto L_0894DFD4;
    case 154u: goto L_0894DFD8;
    case 155u: goto L_0894DFDC;
    case 156u: goto L_0894DFE0;
    case 157u: goto L_0894DFE4;
    case 158u: goto L_0894DFE8;
    case 159u: goto L_0894DFEC;
    case 160u: goto L_0894DFF0;
    case 161u: goto L_0894DFF4;
    case 162u: goto L_0894DFF8;
    case 163u: goto L_0894DFFC;
    case 164u: goto L_0894E000;
    case 165u: goto L_0894E004;
    case 166u: goto L_0894E008;
    case 167u: goto L_0894E00C;
    case 168u: goto L_0894E010;
    case 169u: goto L_0894E014;
    case 170u: goto L_0894E018;
    case 171u: goto L_0894E01C;
    case 172u: goto L_0894E020;
    case 173u: goto L_0894E024;
    case 174u: goto L_0894E028;
    case 175u: goto L_0894E02C;
    case 176u: goto L_0894E030;
    case 177u: goto L_0894E034;
    case 178u: goto L_0894E038;
    case 179u: goto L_0894E03C;
    case 180u: goto L_0894E040;
    case 181u: goto L_0894E044;
    case 182u: goto L_0894E048;
    case 183u: goto L_0894E04C;
    case 184u: goto L_0894E050;
    case 185u: goto L_0894E054;
    case 186u: goto L_0894E058;
    case 187u: goto L_0894E05C;
    case 188u: goto L_0894E060;
    case 189u: goto L_0894E064;
    case 190u: goto L_0894E068;
    case 191u: goto L_0894E06C;
    case 192u: goto L_0894E070;
    case 193u: goto L_0894E074;
    case 194u: goto L_0894E078;
    case 195u: goto L_0894E07C;
    case 196u: goto L_0894E080;
    case 197u: goto L_0894E084;
    case 198u: goto L_0894E088;
    case 199u: goto L_0894E08C;
    case 200u: goto L_0894E090;
    case 201u: goto L_0894E094;
    case 202u: goto L_0894E098;
    case 203u: goto L_0894E09C;
    case 204u: goto L_0894E0A0;
    case 205u: goto L_0894E0A4;
    case 206u: goto L_0894E0A8;
    case 207u: goto L_0894E0AC;
    case 208u: goto L_0894E0B0;
    case 209u: goto L_0894E0B4;
    case 210u: goto L_0894E0B8;
    case 211u: goto L_0894E0BC;
    case 212u: goto L_0894E0C0;
    case 213u: goto L_0894E0C4;
    case 214u: goto L_0894E0C8;
    case 215u: goto L_0894E0CC;
    case 216u: goto L_0894E0D0;
    case 217u: goto L_0894E0D4;
    case 218u: goto L_0894E0D8;
    case 219u: goto L_0894E0DC;
    case 220u: goto L_0894E0E0;
    case 221u: goto L_0894E0E4;
    case 222u: goto L_0894E0E8;
    case 223u: goto L_0894E0EC;
    case 224u: goto L_0894E0F0;
    case 225u: goto L_0894E0F4;
    case 226u: goto L_0894E0F8;
    case 227u: goto L_0894E0FC;
    case 228u: goto L_0894E100;
    case 229u: goto L_0894E104;
    case 230u: goto L_0894E108;
    case 231u: goto L_0894E10C;
    case 232u: goto L_0894E110;
    case 233u: goto L_0894E114;
    case 234u: goto L_0894E118;
    case 235u: goto L_0894E11C;
    case 236u: goto L_0894E120;
    case 237u: goto L_0894E124;
    case 238u: goto L_0894E128;
    case 239u: goto L_0894E12C;
    case 240u: goto L_0894E130;
    case 241u: goto L_0894E134;
    case 242u: goto L_0894E138;
    case 243u: goto L_0894E13C;
    case 244u: goto L_0894E140;
    case 245u: goto L_0894E144;
    case 246u: goto L_0894E148;
    case 247u: goto L_0894E14C;
    case 248u: goto L_0894E150;
    case 249u: goto L_0894E154;
    case 250u: goto L_0894E158;
    case 251u: goto L_0894E15C;
    case 252u: goto L_0894E160;
    case 253u: goto L_0894E164;
    case 254u: goto L_0894E168;
    case 255u: goto L_0894E16C;
    case 256u: goto L_0894E170;
    case 257u: goto L_0894E174;
    case 258u: goto L_0894E178;
    case 259u: goto L_0894E17C;
    case 260u: goto L_0894E180;
    case 261u: goto L_0894E184;
    case 262u: goto L_0894E188;
    case 263u: goto L_0894E18C;
    case 264u: goto L_0894E190;
    case 265u: goto L_0894E194;
    case 266u: goto L_0894E198;
    case 267u: goto L_0894E19C;
    case 268u: goto L_0894E1A0;
    case 269u: goto L_0894E1A4;
    case 270u: goto L_0894E1A8;
    case 271u: goto L_0894E1AC;
    case 272u: goto L_0894E1B0;
    case 273u: goto L_0894E1B4;
    case 274u: goto L_0894E1B8;
    case 275u: goto L_0894E1BC;
    case 276u: goto L_0894E1C0;
    case 277u: goto L_0894E1C4;
    case 278u: goto L_0894E1C8;
    case 279u: goto L_0894E1CC;
    case 280u: goto L_0894E1D0;
    case 281u: goto L_0894E1D4;
    case 282u: goto L_0894E1D8;
    case 283u: goto L_0894E1DC;
    case 284u: goto L_0894E1E0;
    case 285u: goto L_0894E1E4;
    case 286u: goto L_0894E1E8;
    case 287u: goto L_0894E1EC;
    case 288u: goto L_0894E1F0;
    case 289u: goto L_0894E1F4;
    case 290u: goto L_0894E1F8;
    case 291u: goto L_0894E1FC;
    case 292u: goto L_0894E200;
    case 293u: goto L_0894E204;
    case 294u: goto L_0894E208;
    case 295u: goto L_0894E20C;
    case 296u: goto L_0894E210;
    case 297u: goto L_0894E214;
    case 298u: goto L_0894E218;
    case 299u: goto L_0894E21C;
    case 300u: goto L_0894E220;
    case 301u: goto L_0894E224;
    case 302u: goto L_0894E228;
    case 303u: goto L_0894E22C;
    case 304u: goto L_0894E230;
    case 305u: goto L_0894E234;
    case 306u: goto L_0894E238;
    case 307u: goto L_0894E23C;
    case 308u: goto L_0894E240;
    case 309u: goto L_0894E244;
    case 310u: goto L_0894E248;
    case 311u: goto L_0894E24C;
    case 312u: goto L_0894E250;
    case 313u: goto L_0894E254;
    case 314u: goto L_0894E258;
    case 315u: goto L_0894E25C;
    case 316u: goto L_0894E260;
    case 317u: goto L_0894E264;
    case 318u: goto L_0894E268;
    case 319u: goto L_0894E26C;
    case 320u: goto L_0894E270;
    case 321u: goto L_0894E274;
    case 322u: goto L_0894E278;
    case 323u: goto L_0894E27C;
    case 324u: goto L_0894E280;
    case 325u: goto L_0894E284;
    case 326u: goto L_0894E288;
    case 327u: goto L_0894E28C;
    case 328u: goto L_0894E290;
    case 329u: goto L_0894E294;
    case 330u: goto L_0894E298;
    case 331u: goto L_0894E29C;
    case 332u: goto L_0894E2A0;
    case 333u: goto L_0894E2A4;
    case 334u: goto L_0894E2A8;
    case 335u: goto L_0894E2AC;
    case 336u: goto L_0894E2B0;
    case 337u: goto L_0894E2B4;
    case 338u: goto L_0894E2B8;
    case 339u: goto L_0894E2BC;
    case 340u: goto L_0894E2C0;
    case 341u: goto L_0894E2C4;
    case 342u: goto L_0894E2C8;
    case 343u: goto L_0894E2CC;
    case 344u: goto L_0894E2D0;
    case 345u: goto L_0894E2D4;
    case 346u: goto L_0894E2D8;
    case 347u: goto L_0894E2DC;
    case 348u: goto L_0894E2E0;
    case 349u: goto L_0894E2E4;
    case 350u: goto L_0894E2E8;
    case 351u: goto L_0894E2EC;
    case 352u: goto L_0894E2F0;
    case 353u: goto L_0894E2F4;
    case 354u: goto L_0894E2F8;
    case 355u: goto L_0894E2FC;
    case 356u: goto L_0894E300;
    case 357u: goto L_0894E304;
    case 358u: goto L_0894E308;
    case 359u: goto L_0894E30C;
    case 360u: goto L_0894E310;
    case 361u: goto L_0894E314;
    case 362u: goto L_0894E318;
    case 363u: goto L_0894E31C;
    case 364u: goto L_0894E320;
    case 365u: goto L_0894E324;
    case 366u: goto L_0894E328;
    case 367u: goto L_0894E32C;
    case 368u: goto L_0894E330;
    case 369u: goto L_0894E334;
    case 370u: goto L_0894E338;
    case 371u: goto L_0894E33C;
    case 372u: goto L_0894E340;
    case 373u: goto L_0894E344;
    case 374u: goto L_0894E348;
    case 375u: goto L_0894E34C;
    case 376u: goto L_0894E350;
    case 377u: goto L_0894E354;
    case 378u: goto L_0894E358;
    case 379u: goto L_0894E35C;
    case 380u: goto L_0894E360;
    case 381u: goto L_0894E364;
    case 382u: goto L_0894E368;
    case 383u: goto L_0894E36C;
    case 384u: goto L_0894E370;
    default:
        ctx.pc = local_pc;
        return;
    }
    }
L_0894DD74:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DD78;
L_0894DD78:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20016));
    goto L_0894DD7C;
L_0894DD7C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DD80;
L_0894DD80:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26536), ctx.gpr[4]);
    goto L_0894DD84;
L_0894DD84:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DD88;
L_0894DD88:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19376));
    goto L_0894DD8C;
L_0894DD8C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DD90;
L_0894DD90:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26532), ctx.gpr[4]);
    goto L_0894DD94;
L_0894DD94:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DD98;
L_0894DD98:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19216));
    goto L_0894DD9C;
L_0894DD9C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DDA0;
L_0894DDA0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26528), ctx.gpr[4]);
    goto L_0894DDA4;
L_0894DDA4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DDA8;
L_0894DDA8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19296));
    goto L_0894DDAC;
L_0894DDAC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DDB0;
L_0894DDB0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26524), ctx.gpr[4]);
    goto L_0894DDB4;
L_0894DDB4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DDB8;
L_0894DDB8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19136));
    goto L_0894DDBC;
L_0894DDBC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DDC0;
L_0894DDC0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26520), ctx.gpr[4]);
    goto L_0894DDC4;
L_0894DDC4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DDC8;
L_0894DDC8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18976));
    goto L_0894DDCC;
L_0894DDCC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DDD0;
L_0894DDD0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26516), ctx.gpr[4]);
    goto L_0894DDD4;
L_0894DDD4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DDD8;
L_0894DDD8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19056));
    goto L_0894DDDC;
L_0894DDDC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DDE0;
L_0894DDE0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26512), ctx.gpr[4]);
    goto L_0894DDE4;
L_0894DDE4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DDE8;
L_0894DDE8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18896));
    goto L_0894DDEC;
L_0894DDEC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DDF0;
L_0894DDF0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26508), ctx.gpr[4]);
    goto L_0894DDF4;
L_0894DDF4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DDF8;
L_0894DDF8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18736));
    goto L_0894DDFC;
L_0894DDFC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE00;
L_0894DE00:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26504), ctx.gpr[4]);
    goto L_0894DE04;
L_0894DE04:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE08;
L_0894DE08:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18816));
    goto L_0894DE0C;
L_0894DE0C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE10;
L_0894DE10:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26500), ctx.gpr[4]);
    goto L_0894DE14;
L_0894DE14:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE18;
L_0894DE18:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17856));
    goto L_0894DE1C;
L_0894DE1C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE20;
L_0894DE20:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26496), ctx.gpr[4]);
    goto L_0894DE24;
L_0894DE24:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE28;
L_0894DE28:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17776));
    goto L_0894DE2C;
L_0894DE2C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE30;
L_0894DE30:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26492), ctx.gpr[4]);
    goto L_0894DE34;
L_0894DE34:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE38;
L_0894DE38:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20096));
    goto L_0894DE3C;
L_0894DE3C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE40;
L_0894DE40:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26484), ctx.gpr[4]);
    goto L_0894DE44;
L_0894DE44:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE48;
L_0894DE48:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19536));
    goto L_0894DE4C;
L_0894DE4C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE50;
L_0894DE50:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26480), ctx.gpr[4]);
    goto L_0894DE54;
L_0894DE54:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE58;
L_0894DE58:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20336));
    goto L_0894DE5C;
L_0894DE5C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE60;
L_0894DE60:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26476), ctx.gpr[4]);
    goto L_0894DE64;
L_0894DE64:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE68;
L_0894DE68:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20176));
    goto L_0894DE6C;
L_0894DE6C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE70;
L_0894DE70:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26472), ctx.gpr[4]);
    goto L_0894DE74;
L_0894DE74:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE78;
L_0894DE78:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20256));
    goto L_0894DE7C;
L_0894DE7C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE80;
L_0894DE80:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26468), ctx.gpr[4]);
    goto L_0894DE84;
L_0894DE84:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE88;
L_0894DE88:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19936));
    goto L_0894DE8C;
L_0894DE8C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DE90;
L_0894DE90:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26464), ctx.gpr[4]);
    goto L_0894DE94;
L_0894DE94:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DE98;
L_0894DE98:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18336));
    goto L_0894DE9C;
L_0894DE9C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DEA0;
L_0894DEA0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26460), ctx.gpr[4]);
    goto L_0894DEA4;
L_0894DEA4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DEA8;
L_0894DEA8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17536));
    goto L_0894DEAC;
L_0894DEAC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DEB0;
L_0894DEB0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26456), ctx.gpr[4]);
    goto L_0894DEB4;
L_0894DEB4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DEB8;
L_0894DEB8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17456));
    goto L_0894DEBC;
L_0894DEBC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DEC0;
L_0894DEC0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26452), ctx.gpr[4]);
    goto L_0894DEC4;
L_0894DEC4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DEC8;
L_0894DEC8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14600));
    goto L_0894DECC;
L_0894DECC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DED0;
L_0894DED0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26448), ctx.gpr[4]);
    goto L_0894DED4;
L_0894DED4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DED8;
L_0894DED8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14360));
    goto L_0894DEDC;
L_0894DEDC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DEE0;
L_0894DEE0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26444), ctx.gpr[4]);
    goto L_0894DEE4;
L_0894DEE4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DEE8;
L_0894DEE8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14120));
    goto L_0894DEEC;
L_0894DEEC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DEF0;
L_0894DEF0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26440), ctx.gpr[4]);
    goto L_0894DEF4;
L_0894DEF4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DEF8;
L_0894DEF8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14840));
    goto L_0894DEFC;
L_0894DEFC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF00;
L_0894DF00:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26436), ctx.gpr[4]);
    goto L_0894DF04;
L_0894DF04:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF08;
L_0894DF08:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19696));
    goto L_0894DF0C;
L_0894DF0C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF10;
L_0894DF10:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26432), ctx.gpr[4]);
    goto L_0894DF14;
L_0894DF14:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF18;
L_0894DF18:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18656));
    goto L_0894DF1C;
L_0894DF1C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF20;
L_0894DF20:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26428), ctx.gpr[4]);
    goto L_0894DF24;
L_0894DF24:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF28;
L_0894DF28:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18176));
    goto L_0894DF2C;
L_0894DF2C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF30;
L_0894DF30:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26424), ctx.gpr[4]);
    goto L_0894DF34;
L_0894DF34:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF38;
L_0894DF38:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19616));
    goto L_0894DF3C;
L_0894DF3C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF40;
L_0894DF40:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26420), ctx.gpr[4]);
    goto L_0894DF44;
L_0894DF44:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF48;
L_0894DF48:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14760));
    goto L_0894DF4C;
L_0894DF4C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF50;
L_0894DF50:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26416), ctx.gpr[4]);
    goto L_0894DF54;
L_0894DF54:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF58;
L_0894DF58:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14520));
    goto L_0894DF5C;
L_0894DF5C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF60;
L_0894DF60:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26412), ctx.gpr[4]);
    goto L_0894DF64;
L_0894DF64:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF68;
L_0894DF68:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14280));
    goto L_0894DF6C;
L_0894DF6C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF70;
L_0894DF70:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26408), ctx.gpr[4]);
    goto L_0894DF74;
L_0894DF74:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF78;
L_0894DF78:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15000));
    goto L_0894DF7C;
L_0894DF7C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF80;
L_0894DF80:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26404), ctx.gpr[4]);
    goto L_0894DF84;
L_0894DF84:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF88;
L_0894DF88:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14680));
    goto L_0894DF8C;
L_0894DF8C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DF90;
L_0894DF90:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26400), ctx.gpr[4]);
    goto L_0894DF94;
L_0894DF94:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DF98;
L_0894DF98:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14440));
    goto L_0894DF9C;
L_0894DF9C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DFA0;
L_0894DFA0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26396), ctx.gpr[4]);
    goto L_0894DFA4;
L_0894DFA4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DFA8;
L_0894DFA8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14200));
    goto L_0894DFAC;
L_0894DFAC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DFB0;
L_0894DFB0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26392), ctx.gpr[4]);
    goto L_0894DFB4;
L_0894DFB4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DFB8;
L_0894DFB8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14920));
    goto L_0894DFBC;
L_0894DFBC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DFC0;
L_0894DFC0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26388), ctx.gpr[4]);
    goto L_0894DFC4;
L_0894DFC4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DFC8;
L_0894DFC8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17696));
    goto L_0894DFCC;
L_0894DFCC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DFD0;
L_0894DFD0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26384), ctx.gpr[4]);
    goto L_0894DFD4;
L_0894DFD4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DFD8;
L_0894DFD8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17616));
    goto L_0894DFDC;
L_0894DFDC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DFE0;
L_0894DFE0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26380), ctx.gpr[4]);
    goto L_0894DFE4;
L_0894DFE4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DFE8;
L_0894DFE8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18576));
    goto L_0894DFEC;
L_0894DFEC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894DFF0;
L_0894DFF0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26376), ctx.gpr[4]);
    goto L_0894DFF4;
L_0894DFF4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894DFF8;
L_0894DFF8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15880));
    goto L_0894DFFC;
L_0894DFFC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E000;
L_0894E000:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26372), ctx.gpr[4]);
    goto L_0894E004;
L_0894E004:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E008;
L_0894E008:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16280));
    goto L_0894E00C;
L_0894E00C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E010;
L_0894E010:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26368), ctx.gpr[4]);
    goto L_0894E014;
L_0894E014:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E018;
L_0894E018:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16200));
    goto L_0894E01C;
L_0894E01C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E020;
L_0894E020:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26364), ctx.gpr[4]);
    goto L_0894E024;
L_0894E024:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E028;
L_0894E028:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16120));
    goto L_0894E02C;
L_0894E02C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E030;
L_0894E030:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26360), ctx.gpr[4]);
    goto L_0894E034;
L_0894E034:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E038;
L_0894E038:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16040));
    goto L_0894E03C;
L_0894E03C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E040;
L_0894E040:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26356), ctx.gpr[4]);
    goto L_0894E044;
L_0894E044:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E048;
L_0894E048:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15960));
    goto L_0894E04C;
L_0894E04C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E050;
L_0894E050:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26352), ctx.gpr[4]);
    goto L_0894E054;
L_0894E054:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E058;
L_0894E058:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16976));
    goto L_0894E05C;
L_0894E05C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E060;
L_0894E060:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26348), ctx.gpr[4]);
    goto L_0894E064;
L_0894E064:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E068;
L_0894E068:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18416));
    goto L_0894E06C;
L_0894E06C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E070;
L_0894E070:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26344), ctx.gpr[4]);
    goto L_0894E074;
L_0894E074:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E078;
L_0894E078:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18496));
    goto L_0894E07C;
L_0894E07C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E080;
L_0894E080:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26340), ctx.gpr[4]);
    goto L_0894E084;
L_0894E084:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E088;
L_0894E088:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15560));
    goto L_0894E08C;
L_0894E08C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E090;
L_0894E090:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26336), ctx.gpr[4]);
    goto L_0894E094;
L_0894E094:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E098;
L_0894E098:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15640));
    goto L_0894E09C;
L_0894E09C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E0A0;
L_0894E0A0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26332), ctx.gpr[4]);
    goto L_0894E0A4;
L_0894E0A4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E0A8;
L_0894E0A8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15480));
    goto L_0894E0AC;
L_0894E0AC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E0B0;
L_0894E0B0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26328), ctx.gpr[4]);
    goto L_0894E0B4;
L_0894E0B4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E0B8;
L_0894E0B8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15720));
    goto L_0894E0BC;
L_0894E0BC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E0C0;
L_0894E0C0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26324), ctx.gpr[4]);
    goto L_0894E0C4;
L_0894E0C4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E0C8;
L_0894E0C8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15240));
    goto L_0894E0CC;
L_0894E0CC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E0D0;
L_0894E0D0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26320), ctx.gpr[4]);
    goto L_0894E0D4;
L_0894E0D4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E0D8;
L_0894E0D8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17936));
    goto L_0894E0DC;
L_0894E0DC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E0E0;
L_0894E0E0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26316), ctx.gpr[4]);
    goto L_0894E0E4;
L_0894E0E4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E0E8;
L_0894E0E8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18256));
    goto L_0894E0EC;
L_0894E0EC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E0F0;
L_0894E0F0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26312), ctx.gpr[4]);
    goto L_0894E0F4;
L_0894E0F4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E0F8;
L_0894E0F8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15400));
    goto L_0894E0FC;
L_0894E0FC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E100;
L_0894E100:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26308), ctx.gpr[4]);
    goto L_0894E104;
L_0894E104:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E108;
L_0894E108:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17136));
    goto L_0894E10C;
L_0894E10C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E110;
L_0894E110:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26304), ctx.gpr[4]);
    goto L_0894E114;
L_0894E114:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E118;
L_0894E118:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15800));
    goto L_0894E11C;
L_0894E11C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E120;
L_0894E120:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26300), ctx.gpr[4]);
    goto L_0894E124;
L_0894E124:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E128;
L_0894E128:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15320));
    goto L_0894E12C;
L_0894E12C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E130;
L_0894E130:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26296), ctx.gpr[4]);
    goto L_0894E134;
L_0894E134:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E138;
L_0894E138:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17056));
    goto L_0894E13C;
L_0894E13C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E140;
L_0894E140:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26292), ctx.gpr[4]);
    goto L_0894E144;
L_0894E144:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E148;
L_0894E148:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18016));
    goto L_0894E14C;
L_0894E14C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E150;
L_0894E150:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26288), ctx.gpr[4]);
    goto L_0894E154;
L_0894E154:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E158;
L_0894E158:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17376));
    goto L_0894E15C;
L_0894E15C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E160;
L_0894E160:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26284), ctx.gpr[4]);
    goto L_0894E164;
L_0894E164:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E168;
L_0894E168:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17296));
    goto L_0894E16C;
L_0894E16C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E170;
L_0894E170:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26280), ctx.gpr[4]);
    goto L_0894E174;
L_0894E174:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E178;
L_0894E178:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16816));
    goto L_0894E17C;
L_0894E17C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E180;
L_0894E180:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26276), ctx.gpr[4]);
    goto L_0894E184;
L_0894E184:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E188;
L_0894E188:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16736));
    goto L_0894E18C;
L_0894E18C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E190;
L_0894E190:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26272), ctx.gpr[4]);
    goto L_0894E194;
L_0894E194:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E198;
L_0894E198:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16656));
    goto L_0894E19C;
L_0894E19C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E1A0;
L_0894E1A0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26268), ctx.gpr[4]);
    goto L_0894E1A4;
L_0894E1A4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E1A8;
L_0894E1A8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17216));
    goto L_0894E1AC;
L_0894E1AC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E1B0;
L_0894E1B0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26264), ctx.gpr[4]);
    goto L_0894E1B4;
L_0894E1B4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E1B8;
L_0894E1B8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16896));
    goto L_0894E1BC;
L_0894E1BC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E1C0;
L_0894E1C0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26260), ctx.gpr[4]);
    goto L_0894E1C4;
L_0894E1C4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E1C8;
L_0894E1C8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19456));
    goto L_0894E1CC;
L_0894E1CC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E1D0;
L_0894E1D0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26256), ctx.gpr[4]);
    goto L_0894E1D4;
L_0894E1D4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E1D8;
L_0894E1D8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19776));
    goto L_0894E1DC;
L_0894E1DC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E1E0;
L_0894E1E0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26252), ctx.gpr[4]);
    goto L_0894E1E4;
L_0894E1E4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E1E8;
L_0894E1E8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19856));
    goto L_0894E1EC;
L_0894E1EC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E1F0;
L_0894E1F0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26248), ctx.gpr[4]);
    goto L_0894E1F4;
L_0894E1F4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E1F8;
L_0894E1F8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18096));
    goto L_0894E1FC;
L_0894E1FC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E200;
L_0894E200:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26244), ctx.gpr[4]);
    goto L_0894E204;
L_0894E204:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E208;
L_0894E208:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11840));
    goto L_0894E20C;
L_0894E20C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E210;
L_0894E210:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26240), ctx.gpr[4]);
    goto L_0894E214;
L_0894E214:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E218;
L_0894E218:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11920));
    goto L_0894E21C;
L_0894E21C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E220;
L_0894E220:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26236), ctx.gpr[4]);
    goto L_0894E224;
L_0894E224:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E228;
L_0894E228:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12152));
    goto L_0894E22C;
L_0894E22C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E230;
L_0894E230:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26232), ctx.gpr[4]);
    goto L_0894E234;
L_0894E234:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E238;
L_0894E238:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12952));
    goto L_0894E23C;
L_0894E23C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E240;
L_0894E240:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26228), ctx.gpr[4]);
    goto L_0894E244;
L_0894E244:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E248;
L_0894E248:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12872));
    goto L_0894E24C;
L_0894E24C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E250;
L_0894E250:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26224), ctx.gpr[4]);
    goto L_0894E254;
L_0894E254:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E258;
L_0894E258:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12792));
    goto L_0894E25C;
L_0894E25C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E260;
L_0894E260:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26220), ctx.gpr[4]);
    goto L_0894E264;
L_0894E264:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E268;
L_0894E268:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12712));
    goto L_0894E26C;
L_0894E26C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E270;
L_0894E270:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26216), ctx.gpr[4]);
    goto L_0894E274;
L_0894E274:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E278;
L_0894E278:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12312));
    goto L_0894E27C;
L_0894E27C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E280;
L_0894E280:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26212), ctx.gpr[4]);
    goto L_0894E284;
L_0894E284:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E288;
L_0894E288:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12632));
    goto L_0894E28C;
L_0894E28C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E290;
L_0894E290:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26208), ctx.gpr[4]);
    goto L_0894E294;
L_0894E294:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E298;
L_0894E298:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13112));
    goto L_0894E29C;
L_0894E29C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E2A0;
L_0894E2A0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26204), ctx.gpr[4]);
    goto L_0894E2A4;
L_0894E2A4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E2A8;
L_0894E2A8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13432));
    goto L_0894E2AC;
L_0894E2AC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E2B0;
L_0894E2B0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26200), ctx.gpr[4]);
    goto L_0894E2B4;
L_0894E2B4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E2B8;
L_0894E2B8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12472));
    goto L_0894E2BC;
L_0894E2BC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E2C0;
L_0894E2C0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26196), ctx.gpr[4]);
    goto L_0894E2C4;
L_0894E2C4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E2C8;
L_0894E2C8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12232));
    goto L_0894E2CC;
L_0894E2CC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E2D0;
L_0894E2D0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26192), ctx.gpr[4]);
    goto L_0894E2D4;
L_0894E2D4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E2D8;
L_0894E2D8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13032));
    goto L_0894E2DC;
L_0894E2DC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E2E0;
L_0894E2E0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26188), ctx.gpr[4]);
    goto L_0894E2E4;
L_0894E2E4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E2E8;
L_0894E2E8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13352));
    goto L_0894E2EC;
L_0894E2EC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E2F0;
L_0894E2F0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26184), ctx.gpr[4]);
    goto L_0894E2F4;
L_0894E2F4:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E2F8;
L_0894E2F8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13272));
    goto L_0894E2FC;
L_0894E2FC:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E300;
L_0894E300:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26180), ctx.gpr[4]);
    goto L_0894E304;
L_0894E304:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E308;
L_0894E308:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13592));
    goto L_0894E30C;
L_0894E30C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E310;
L_0894E310:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26176), ctx.gpr[4]);
    goto L_0894E314;
L_0894E314:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E318;
L_0894E318:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12552));
    goto L_0894E31C;
L_0894E31C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E320;
L_0894E320:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26172), ctx.gpr[4]);
    goto L_0894E324;
L_0894E324:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E328;
L_0894E328:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13672));
    goto L_0894E32C;
L_0894E32C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E330;
L_0894E330:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26168), ctx.gpr[4]);
    goto L_0894E334;
L_0894E334:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E338;
L_0894E338:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13512));
    goto L_0894E33C;
L_0894E33C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E340;
L_0894E340:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26164), ctx.gpr[4]);
    goto L_0894E344;
L_0894E344:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E348;
L_0894E348:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13192));
    goto L_0894E34C;
L_0894E34C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E350;
L_0894E350:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26160), ctx.gpr[4]);
    goto L_0894E354;
L_0894E354:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E358;
L_0894E358:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12392));
    goto L_0894E35C;
L_0894E35C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E360;
L_0894E360:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26156), ctx.gpr[4]);
    goto L_0894E364;
L_0894E364:
    ctx.set_gpr(4, 2206u << 16u);
    goto L_0894E368;
L_0894E368:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12000));
    goto L_0894E36C;
L_0894E36C:
    ctx.set_gpr(5, 2206u << 16u);
    goto L_0894E370;
L_0894E370:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26152), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void init_0894DD74(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    init_0894DD74_entry(rt, ctx, 0u, aot_mem);
}

void register_init_funcs(Runtime &runtime) {
    runtime.register_function(0x0880A9A0u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9A4u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9A8u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9ACu, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9B0u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9B4u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9B8u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9BCu, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9C0u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9C4u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9C8u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9CCu, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9D0u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9D4u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9DCu, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880A9E0u, &init_0880A9A0, "recomp_unit_init_0880A9A0");
    runtime.register_function(0x0880B028u, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B02Cu, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B030u, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B034u, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B038u, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B03Cu, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B040u, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B048u, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B04Cu, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B050u, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880B054u, &init_0880B028, "recomp_unit_init_0880B028");
    runtime.register_function(0x0880BEB8u, &init_0880BEB8, "recomp_unit_init_0880BEB8");
    runtime.register_function(0x08811EF4u, &init_08811EF4, "recomp_unit_init_08811EF4");
    runtime.register_function(0x08813574u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x08813578u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x0881357Cu, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x08813580u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x08813584u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x08813588u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x0881358Cu, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x08813590u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x08813594u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x08813598u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135A0u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135A4u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135A8u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135ACu, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135B0u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135B4u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135BCu, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135C0u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135C4u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135C8u, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088135CCu, &init_08813574, "recomp_unit_init_08813574");
    runtime.register_function(0x088289B0u, &init_088289B0, "recomp_unit_init_088289B0");
    runtime.register_function(0x088289B4u, &init_088289B0, "recomp_unit_init_088289B0");
    runtime.register_function(0x088289B8u, &init_088289B0, "recomp_unit_init_088289B0");
    runtime.register_function(0x088289BCu, &init_088289B0, "recomp_unit_init_088289B0");
    runtime.register_function(0x088289C0u, &init_088289B0, "recomp_unit_init_088289B0");
    runtime.register_function(0x088289C4u, &init_088289B0, "recomp_unit_init_088289B0");
    runtime.register_function(0x088289C8u, &init_088289B0, "recomp_unit_init_088289B0");
    runtime.register_function(0x0883DFA8u, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFACu, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFB0u, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFB4u, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFBCu, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFC0u, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFC8u, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFCCu, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFD4u, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x0883DFD8u, &init_0883DFA8, "recomp_unit_init_0883DFA8");
    runtime.register_function(0x08842344u, &init_08842344, "recomp_unit_init_08842344");
    runtime.register_function(0x08842348u, &init_08842344, "recomp_unit_init_08842344");
    runtime.register_function(0x0884234Cu, &init_08842344, "recomp_unit_init_08842344");
    runtime.register_function(0x08847224u, &init_08847224, "recomp_unit_init_08847224");
    runtime.register_function(0x0884E620u, &init_0884E620, "recomp_unit_init_0884E620");
    runtime.register_function(0x08850B20u, &init_08850B20, "recomp_unit_init_08850B20");
    runtime.register_function(0x08864E70u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E74u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E78u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E7Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E80u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E84u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E88u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E8Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E90u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E94u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E98u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864E9Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EA0u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EA4u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EA8u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EACu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EB0u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EB4u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EB8u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EBCu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EC0u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EC4u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EC8u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864ECCu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864ED0u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864ED4u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864ED8u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EDCu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EE0u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EE4u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EE8u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EECu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EF0u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EF4u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EF8u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864EFCu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F00u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F04u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F08u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F0Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F10u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F14u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F18u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F1Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F20u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F24u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F28u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F2Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F30u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F34u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F38u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F3Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F40u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F44u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F48u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F4Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F50u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F54u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F58u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F5Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F60u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F64u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F68u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F6Cu, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08864F70u, &init_08864E70, "recomp_unit_init_08864E70");
    runtime.register_function(0x08869844u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869848u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x0886984Cu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869850u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869854u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869858u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x0886985Cu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869860u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869864u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869868u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x0886986Cu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869870u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869874u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869878u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x0886987Cu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869880u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869884u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869888u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x0886988Cu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869890u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869894u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x08869898u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x0886989Cu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698A0u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698A4u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698A8u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698ACu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698B0u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698B4u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698B8u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698C0u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698C4u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698CCu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698D0u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698D8u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698DCu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698E4u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698E8u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698ECu, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698F0u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x088698F4u, &init_08869844, "recomp_unit_init_08869844");
    runtime.register_function(0x0886EE14u, &init_0886EE14, "recomp_unit_init_0886EE14");
    runtime.register_function(0x0886EE18u, &init_0886EE14, "recomp_unit_init_0886EE14");
    runtime.register_function(0x0886EE1Cu, &init_0886EE14, "recomp_unit_init_0886EE14");
    runtime.register_function(0x088735CCu, &init_088735CC, "recomp_unit_init_088735CC");
    runtime.register_function(0x088735D0u, &init_088735CC, "recomp_unit_init_088735CC");
    runtime.register_function(0x088735D4u, &init_088735CC, "recomp_unit_init_088735CC");
    runtime.register_function(0x088735D8u, &init_088735CC, "recomp_unit_init_088735CC");
    runtime.register_function(0x088735DCu, &init_088735CC, "recomp_unit_init_088735CC");
    runtime.register_function(0x08874508u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887450Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874510u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874514u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874518u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887451Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874520u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874524u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887452Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874530u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874534u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874538u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887453Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874540u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874544u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874548u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887454Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874550u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874554u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874558u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887455Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874560u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874564u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874568u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887456Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874570u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874574u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874578u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887457Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874580u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874584u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874588u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887458Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874590u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874598u, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x0887459Cu, &init_08874508, "recomp_unit_init_08874508");
    runtime.register_function(0x08874E18u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E1Cu, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E20u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E24u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E28u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E2Cu, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E30u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E34u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E38u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E3Cu, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E40u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E44u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E4Cu, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E50u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E54u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E58u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E5Cu, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E60u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E64u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E68u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E6Cu, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E70u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E74u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E78u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E7Cu, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E84u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08874E88u, &init_08874E18, "recomp_unit_init_08874E18");
    runtime.register_function(0x08883E50u, &init_08883E50, "recomp_unit_init_08883E50");
    runtime.register_function(0x08883E54u, &init_08883E50, "recomp_unit_init_08883E50");
    runtime.register_function(0x08883E58u, &init_08883E50, "recomp_unit_init_08883E50");
    runtime.register_function(0x08883E5Cu, &init_08883E50, "recomp_unit_init_08883E50");
    runtime.register_function(0x08883E60u, &init_08883E50, "recomp_unit_init_08883E50");
    runtime.register_function(0x08883E64u, &init_08883E50, "recomp_unit_init_08883E50");
    runtime.register_function(0x08883E68u, &init_08883E50, "recomp_unit_init_08883E50");
    runtime.register_function(0x08883E6Cu, &init_08883E50, "recomp_unit_init_08883E50");
    runtime.register_function(0x088841CCu, &init_088841CC, "recomp_unit_init_088841CC");
    runtime.register_function(0x088841D0u, &init_088841CC, "recomp_unit_init_088841CC");
    runtime.register_function(0x088841D4u, &init_088841CC, "recomp_unit_init_088841CC");
    runtime.register_function(0x088841D8u, &init_088841CC, "recomp_unit_init_088841CC");
    runtime.register_function(0x088841DCu, &init_088841CC, "recomp_unit_init_088841CC");
    runtime.register_function(0x088841E0u, &init_088841CC, "recomp_unit_init_088841CC");
    runtime.register_function(0x088841E4u, &init_088841CC, "recomp_unit_init_088841CC");
    runtime.register_function(0x0888E65Cu, &init_0888E65C, "recomp_unit_init_0888E65C");
    runtime.register_function(0x0888E660u, &init_0888E65C, "recomp_unit_init_0888E65C");
    runtime.register_function(0x0888E664u, &init_0888E65C, "recomp_unit_init_0888E65C");
    runtime.register_function(0x0888E668u, &init_0888E65C, "recomp_unit_init_0888E65C");
    runtime.register_function(0x0888E670u, &init_0888E65C, "recomp_unit_init_0888E65C");
    runtime.register_function(0x0888E674u, &init_0888E65C, "recomp_unit_init_0888E65C");
    runtime.register_function(0x0888E67Cu, &init_0888E65C, "recomp_unit_init_0888E65C");
    runtime.register_function(0x0888E680u, &init_0888E65C, "recomp_unit_init_0888E65C");
    runtime.register_function(0x08890780u, &init_08890780, "recomp_unit_init_08890780");
    runtime.register_function(0x08890784u, &init_08890780, "recomp_unit_init_08890780");
    runtime.register_function(0x08890788u, &init_08890780, "recomp_unit_init_08890780");
    runtime.register_function(0x0889078Cu, &init_08890780, "recomp_unit_init_08890780");
    runtime.register_function(0x08890794u, &init_08890780, "recomp_unit_init_08890780");
    runtime.register_function(0x08890798u, &init_08890780, "recomp_unit_init_08890780");
    runtime.register_function(0x088907A0u, &init_08890780, "recomp_unit_init_08890780");
    runtime.register_function(0x088907A4u, &init_08890780, "recomp_unit_init_08890780");
    runtime.register_function(0x08895A28u, &init_08895A28, "recomp_unit_init_08895A28");
    runtime.register_function(0x08895A2Cu, &init_08895A28, "recomp_unit_init_08895A28");
    runtime.register_function(0x08895A30u, &init_08895A28, "recomp_unit_init_08895A28");
    runtime.register_function(0x08895A34u, &init_08895A28, "recomp_unit_init_08895A28");
    runtime.register_function(0x08895A38u, &init_08895A28, "recomp_unit_init_08895A28");
    runtime.register_function(0x0889723Cu, &init_0889723C, "recomp_unit_init_0889723C");
    runtime.register_function(0x088A0768u, &init_088A0768, "recomp_unit_init_088A0768");
    runtime.register_function(0x088A076Cu, &init_088A0768, "recomp_unit_init_088A0768");
    runtime.register_function(0x088A0770u, &init_088A0768, "recomp_unit_init_088A0768");
    runtime.register_function(0x088A0774u, &init_088A0768, "recomp_unit_init_088A0768");
    runtime.register_function(0x088A0D60u, &init_088A0D60, "recomp_unit_init_088A0D60");
    runtime.register_function(0x088A0D64u, &init_088A0D60, "recomp_unit_init_088A0D60");
    runtime.register_function(0x088A0D68u, &init_088A0D60, "recomp_unit_init_088A0D60");
    runtime.register_function(0x088A0D6Cu, &init_088A0D60, "recomp_unit_init_088A0D60");
    runtime.register_function(0x088A0D74u, &init_088A0D60, "recomp_unit_init_088A0D60");
    runtime.register_function(0x088A0D78u, &init_088A0D60, "recomp_unit_init_088A0D60");
    runtime.register_function(0x088A38ECu, &init_088A38EC, "recomp_unit_init_088A38EC");
    runtime.register_function(0x088A38F0u, &init_088A38EC, "recomp_unit_init_088A38EC");
    runtime.register_function(0x088A38F4u, &init_088A38EC, "recomp_unit_init_088A38EC");
    runtime.register_function(0x088A38F8u, &init_088A38EC, "recomp_unit_init_088A38EC");
    runtime.register_function(0x088A4168u, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A416Cu, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A4170u, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A4174u, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A4178u, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A417Cu, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A4180u, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A4184u, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A418Cu, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A4190u, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A4198u, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A419Cu, &init_088A4168, "recomp_unit_init_088A4168");
    runtime.register_function(0x088A52CCu, &init_088A52CC, "recomp_unit_init_088A52CC");
    runtime.register_function(0x088A52D0u, &init_088A52CC, "recomp_unit_init_088A52CC");
    runtime.register_function(0x088A52D4u, &init_088A52CC, "recomp_unit_init_088A52CC");
    runtime.register_function(0x088A52D8u, &init_088A52CC, "recomp_unit_init_088A52CC");
    runtime.register_function(0x088A52E0u, &init_088A52CC, "recomp_unit_init_088A52CC");
    runtime.register_function(0x088A52E4u, &init_088A52CC, "recomp_unit_init_088A52CC");
    runtime.register_function(0x088A94A0u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94A4u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94A8u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94ACu, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94B0u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94B4u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94BCu, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94C0u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94C4u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94C8u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94CCu, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94D0u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94D4u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94D8u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94E0u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94E4u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088A94E8u, &init_088A94A0, "recomp_unit_init_088A94A0");
    runtime.register_function(0x088AEF44u, &init_088AEF44, "recomp_unit_init_088AEF44");
    runtime.register_function(0x088AEF48u, &init_088AEF44, "recomp_unit_init_088AEF44");
    runtime.register_function(0x088AEF4Cu, &init_088AEF44, "recomp_unit_init_088AEF44");
    runtime.register_function(0x088B1DF4u, &init_088B1DF4, "recomp_unit_init_088B1DF4");
    runtime.register_function(0x088B1DF8u, &init_088B1DF4, "recomp_unit_init_088B1DF4");
    runtime.register_function(0x088B1DFCu, &init_088B1DF4, "recomp_unit_init_088B1DF4");
    runtime.register_function(0x088B1E00u, &init_088B1DF4, "recomp_unit_init_088B1DF4");
    runtime.register_function(0x088B1E08u, &init_088B1DF4, "recomp_unit_init_088B1DF4");
    runtime.register_function(0x088B1E0Cu, &init_088B1DF4, "recomp_unit_init_088B1DF4");
    runtime.register_function(0x088B1E14u, &init_088B1DF4, "recomp_unit_init_088B1DF4");
    runtime.register_function(0x088B1E18u, &init_088B1DF4, "recomp_unit_init_088B1DF4");
    runtime.register_function(0x088B2AD0u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2AD4u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2AD8u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2ADCu, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2AE4u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2AE8u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2AF0u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2AF4u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2AFCu, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2B00u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2B08u, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B2B0Cu, &init_088B2AD0, "recomp_unit_init_088B2AD0");
    runtime.register_function(0x088B7154u, &init_088B7154, "recomp_unit_init_088B7154");
    runtime.register_function(0x088BBA64u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA68u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA6Cu, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA70u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA78u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA7Cu, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA84u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA88u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA90u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA94u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBA9Cu, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBAA0u, &init_088BBA64, "recomp_unit_init_088BBA64");
    runtime.register_function(0x088BBE18u, &init_088BBE18, "recomp_unit_init_088BBE18");
    runtime.register_function(0x088BD104u, &init_088BD104, "recomp_unit_init_088BD104");
    runtime.register_function(0x088BD2C4u, &init_088BD2C4, "recomp_unit_init_088BD2C4");
    runtime.register_function(0x088BD2C8u, &init_088BD2C4, "recomp_unit_init_088BD2C4");
    runtime.register_function(0x088BD2CCu, &init_088BD2C4, "recomp_unit_init_088BD2C4");
    runtime.register_function(0x088BD2D0u, &init_088BD2C4, "recomp_unit_init_088BD2C4");
    runtime.register_function(0x088BD2D8u, &init_088BD2C4, "recomp_unit_init_088BD2C4");
    runtime.register_function(0x088BD2DCu, &init_088BD2C4, "recomp_unit_init_088BD2C4");
    runtime.register_function(0x088BD2E4u, &init_088BD2C4, "recomp_unit_init_088BD2C4");
    runtime.register_function(0x088BD2E8u, &init_088BD2C4, "recomp_unit_init_088BD2C4");
    runtime.register_function(0x088C0AACu, &init_088C0AAC, "recomp_unit_init_088C0AAC");
    runtime.register_function(0x088C14B0u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14B4u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14B8u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14BCu, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14C4u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14C8u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14D0u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14D4u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14DCu, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14E0u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14E8u, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C14ECu, &init_088C14B0, "recomp_unit_init_088C14B0");
    runtime.register_function(0x088C1C04u, &init_088C1C04, "recomp_unit_init_088C1C04");
    runtime.register_function(0x088C4B80u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4B84u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4B88u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4B8Cu, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4B90u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4B94u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4B98u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4B9Cu, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4BA0u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4BA4u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088C4BA8u, &init_088C4B80, "recomp_unit_init_088C4B80");
    runtime.register_function(0x088CE2F8u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE2FCu, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE300u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE304u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE308u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE30Cu, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE310u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE314u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE318u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE31Cu, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE320u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE324u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE328u, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088CE32Cu, &init_088CE2F8, "recomp_unit_init_088CE2F8");
    runtime.register_function(0x088F7800u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F7804u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F7808u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F780Cu, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F7810u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F7814u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F7818u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F781Cu, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F7820u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F7824u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F7828u, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088F782Cu, &init_088F7800, "recomp_unit_init_088F7800");
    runtime.register_function(0x088FB9F4u, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FB9F8u, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FB9FCu, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FBA00u, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FBA04u, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FBA08u, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FBA0Cu, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FBA10u, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FBA18u, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x088FBA1Cu, &init_088FB9F4, "recomp_unit_init_088FB9F4");
    runtime.register_function(0x0890EA50u, &init_0890EA50, "recomp_unit_init_0890EA50");
    runtime.register_function(0x0890EA54u, &init_0890EA50, "recomp_unit_init_0890EA50");
    runtime.register_function(0x0891DEF8u, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DEFCu, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DF00u, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DF04u, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DF08u, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DF0Cu, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DF10u, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DF14u, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DF1Cu, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0891DF20u, &init_0891DEF8, "recomp_unit_init_0891DEF8");
    runtime.register_function(0x0894DD74u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD78u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD7Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD80u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD84u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD88u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD8Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD90u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD94u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD98u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DD9Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDA0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDA4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDA8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDACu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDB0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDB4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDB8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDBCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDC0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDC4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDC8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDCCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDD0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDD4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDD8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDDCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDE0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDE4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDE8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDECu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDF0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDF4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDF8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DDFCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE00u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE04u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE08u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE0Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE10u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE14u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE18u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE1Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE20u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE24u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE28u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE2Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE30u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE34u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE38u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE3Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE40u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE44u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE48u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE4Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE50u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE54u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE58u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE5Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE60u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE64u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE68u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE6Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE70u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE74u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE78u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE7Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE80u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE84u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE88u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE8Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE90u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE94u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE98u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DE9Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEA0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEA4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEA8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEACu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEB0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEB4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEB8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEBCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEC0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEC4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEC8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DECCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DED0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DED4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DED8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEDCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEE0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEE4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEE8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEECu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEF0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEF4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEF8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DEFCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF00u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF04u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF08u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF0Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF10u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF14u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF18u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF1Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF20u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF24u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF28u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF2Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF30u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF34u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF38u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF3Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF40u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF44u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF48u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF4Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF50u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF54u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF58u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF5Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF60u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF64u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF68u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF6Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF70u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF74u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF78u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF7Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF80u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF84u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF88u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF8Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF90u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF94u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF98u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DF9Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFA0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFA4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFA8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFACu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFB0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFB4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFB8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFBCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFC0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFC4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFC8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFCCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFD0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFD4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFD8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFDCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFE0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFE4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFE8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFECu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFF0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFF4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFF8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894DFFCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E000u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E004u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E008u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E00Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E010u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E014u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E018u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E01Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E020u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E024u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E028u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E02Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E030u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E034u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E038u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E03Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E040u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E044u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E048u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E04Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E050u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E054u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E058u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E05Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E060u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E064u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E068u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E06Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E070u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E074u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E078u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E07Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E080u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E084u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E088u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E08Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E090u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E094u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E098u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E09Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0A0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0A4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0A8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0ACu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0B0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0B4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0B8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0BCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0C0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0C4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0C8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0CCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0D0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0D4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0D8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0DCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0E0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0E4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0E8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0ECu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0F0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0F4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0F8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E0FCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E100u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E104u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E108u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E10Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E110u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E114u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E118u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E11Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E120u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E124u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E128u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E12Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E130u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E134u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E138u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E13Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E140u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E144u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E148u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E14Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E150u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E154u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E158u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E15Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E160u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E164u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E168u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E16Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E170u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E174u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E178u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E17Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E180u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E184u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E188u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E18Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E190u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E194u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E198u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E19Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1A0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1A4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1A8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1ACu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1B0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1B4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1B8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1BCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1C0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1C4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1C8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1CCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1D0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1D4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1D8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1DCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1E0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1E4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1E8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1ECu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1F0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1F4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1F8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E1FCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E200u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E204u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E208u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E20Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E210u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E214u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E218u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E21Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E220u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E224u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E228u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E22Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E230u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E234u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E238u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E23Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E240u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E244u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E248u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E24Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E250u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E254u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E258u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E25Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E260u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E264u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E268u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E26Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E270u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E274u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E278u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E27Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E280u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E284u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E288u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E28Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E290u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E294u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E298u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E29Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2A0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2A4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2A8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2ACu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2B0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2B4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2B8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2BCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2C0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2C4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2C8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2CCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2D0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2D4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2D8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2DCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2E0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2E4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2E8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2ECu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2F0u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2F4u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2F8u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E2FCu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E300u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E304u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E308u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E30Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E310u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E314u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E318u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E31Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E320u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E324u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E328u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E32Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E330u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E334u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E338u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E33Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E340u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E344u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E348u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E34Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E350u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E354u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E358u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E35Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E360u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E364u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E368u, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E36Cu, &init_0894DD74, "recomp_unit_init_0894DD74");
    runtime.register_function(0x0894E370u, &init_0894DD74, "recomp_unit_init_0894DD74");
}
} // namespace psprecomp
