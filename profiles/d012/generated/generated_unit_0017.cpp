#include "psprecomp/runtime.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0017[75] = {
    1, 2, 3, 4, 5, 0, 6, 7, 8, 9, 10, 0, 11, 12, 0, 13, 14, 0, 15, 16, 0, 17, 18, 0, 19, 20, 21, 22, 23, 0, 24, 25,
    0, 26, 27, 28, 0, 29, 30, 31, 0, 32, 33, 34, 35, 0, 36, 37, 38, 39, 40, 41, 0, 42, 0, 43, 44, 45, 0, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 0, 56, 57, 58, 0, 59,
};
void recomp_unit_0017_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08938560u;
        entry_id = (entry_delta < 300u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0017[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08938560;
    case 2u: goto L_08938564;
    case 3u: goto L_08938568;
    case 4u: goto L_0893856C;
    case 5u: goto L_08938570;
    case 6u: goto L_08938578;
    case 7u: goto L_0893857C;
    case 8u: goto L_08938580;
    case 9u: goto L_08938584;
    case 10u: goto L_08938588;
    case 11u: goto L_08938590;
    case 12u: goto L_08938594;
    case 13u: goto L_0893859C;
    case 14u: goto L_089385A0;
    case 15u: goto L_089385A8;
    case 16u: goto L_089385AC;
    case 17u: goto L_089385B4;
    case 18u: goto L_089385B8;
    case 19u: goto L_089385C0;
    case 20u: goto L_089385C4;
    case 21u: goto L_089385C8;
    case 22u: goto L_089385CC;
    case 23u: goto L_089385D0;
    case 24u: goto L_089385D8;
    case 25u: goto L_089385DC;
    case 26u: goto L_089385E4;
    case 27u: goto L_089385E8;
    case 28u: goto L_089385EC;
    case 29u: goto L_089385F4;
    case 30u: goto L_089385F8;
    case 31u: goto L_089385FC;
    case 32u: goto L_08938604;
    case 33u: goto L_08938608;
    case 34u: goto L_0893860C;
    case 35u: goto L_08938610;
    case 36u: goto L_08938618;
    case 37u: goto L_0893861C;
    case 38u: goto L_08938620;
    case 39u: goto L_08938624;
    case 40u: goto L_08938628;
    case 41u: goto L_0893862C;
    case 42u: goto L_08938634;
    case 43u: goto L_0893863C;
    case 44u: goto L_08938640;
    case 45u: goto L_08938644;
    case 46u: goto L_0893864C;
    case 47u: goto L_08938650;
    case 48u: goto L_08938654;
    case 49u: goto L_08938658;
    case 50u: goto L_0893865C;
    case 51u: goto L_08938660;
    case 52u: goto L_08938664;
    case 53u: goto L_08938668;
    case 54u: goto L_0893866C;
    case 55u: goto L_08938670;
    case 56u: goto L_08938678;
    case 57u: goto L_0893867C;
    case 58u: goto L_08938680;
    case 59u: goto L_08938688;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08938560:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08938564;
L_08938564:
    ctx.set_gpr(17, ctx.gpr[6] | 0u);
    goto L_08938568;
L_08938568:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    goto L_0893856C;
L_0893856C:
    ctx.set_gpr(9, ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08938570;
L_08938570:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          ctx.pc = 0x08938F34u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08938578;
    }
L_08938578:
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    goto L_0893857C;
L_0893857C:
    ctx.set_gpr(1, 2205u << 16u);
    goto L_08938580;
L_08938580:
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    goto L_08938584;
L_08938584:
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1528)));
    goto L_08938588;
L_08938588:
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938590:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    goto L_08938594;
L_08938594:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938560;
      }
      goto L_0893859C;
    }
L_0893859C:
    ctx.set_gpr(4, 0u | 32u);
    goto L_089385A0;
L_089385A0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08938560;
      }
      goto L_089385A8;
    }
L_089385A8:
    ctx.set_gpr(21, ctx.gpr[21] | 1u);
    goto L_089385AC;
L_089385AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938560;
      }
      goto L_089385B4;
    }
L_089385B4:
    ctx.set_gpr(21, ctx.gpr[21] | 512u);
    goto L_089385B8;
L_089385B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938560;
      }
      goto L_089385C0;
    }
L_089385C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_089385C4;
L_089385C4:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089385C8;
L_089385C8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089385CC;
L_089385CC:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    goto L_089385D0;
L_089385D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08938560;
      }
      goto L_089385D8;
    }
L_089385D8:
    ctx.set_gpr(30, 0u - ctx.gpr[30]);
    goto L_089385DC;
L_089385DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[21] | 4u);
      if (branch_taken) {
          goto L_089385EC;
      }
      goto L_089385E4;
    }
L_089385E4:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089385E8;
L_089385E8:
    ctx.set_gpr(5, ctx.gpr[21] | 4u);
    goto L_089385EC;
L_089385EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08938560;
      }
      goto L_089385F4;
    }
L_089385F4:
    ctx.set_gpr(4, 0u | 43u);
    goto L_089385F8;
L_089385F8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089385FC;
L_089385FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938560;
      }
      goto L_08938604;
    }
L_08938604:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08938608;
L_08938608:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0893860C;
L_0893860C:
    ctx.set_gpr(4, 0u | 42u);
    goto L_08938610;
L_08938610:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.set_gpr(17, ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893863C;
      }
      goto L_08938618;
    }
L_08938618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_0893861C;
L_0893861C:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08938620;
L_08938620:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08938624;
L_08938624:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    goto L_08938628;
L_08938628:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_0893862C;
L_0893862C:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
        goto L_08938634;
    }
    goto L_08938634;
L_08938634:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08938560;
      }
      goto L_0893863C;
    }
L_0893863C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    goto L_08938640;
L_08938640:
    ctx.set_gpr(4, ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    goto L_08938644;
L_08938644:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, 0u | 0u);
      if (branch_taken) {
          goto L_08938678;
      }
      goto L_0893864C;
    }
L_0893864C:
    ctx.set_gpr(4, ctx.gpr[5] << 3u);
    goto L_08938650;
L_08938650:
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    goto L_08938654;
L_08938654:
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    goto L_08938658;
L_08938658:
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[16]);
    goto L_0893865C;
L_0893865C:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08938660;
L_08938660:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08938664;
L_08938664:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    goto L_08938668;
L_08938668:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    goto L_0893866C;
L_0893866C:
    ctx.set_gpr(4, ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    goto L_08938670;
L_08938670:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(17, ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893864C;
      }
      goto L_08938678;
    }
L_08938678:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    goto L_0893867C;
L_0893867C:
    ctx.set_gpr(9, ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08938680;
L_08938680:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
        goto L_08938688;
    }
    goto L_08938688;
L_08938688:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08938570;
      }
      ctx.pc = 0x08938690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
}

void recomp_unit_0017(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0017_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_17(Runtime &runtime) {
    runtime.register_generated_unit(17u, 0x08A24040u, 131072u, &recomp_unit_0017, &recomp_unit_0017_entry);
    runtime.register_function(0x08938560u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938564u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938568u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893856Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938570u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938578u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893857Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938580u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938584u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938588u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938590u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938594u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893859Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x089385FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938604u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938608u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893860Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938610u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938618u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893861Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938620u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938624u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938628u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893862Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938634u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893863Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938640u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938644u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893864Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938650u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938654u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938658u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893865Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938660u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938664u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938668u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893866Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938670u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938678u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0893867Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938680u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08938688u, &recomp_unit_0017, "recomp_unit_0017");
}
} // namespace psprecomp
