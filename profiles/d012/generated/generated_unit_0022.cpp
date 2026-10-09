#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <cstdint>
namespace psprecomp {
void recomp_unit_0022(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0022_entry(rt, ctx, 0u, aot_mem);
}
void recomp_unit_0022_entry(Runtime &, AllegrexContext &, std::uint16_t, GuestMemory::AotFastView &) {}
} // namespace psprecomp
