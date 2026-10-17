#include "psprecomp/runtime.hpp"
namespace psprecomp {
void register_ovl_menu_generated_unit_1(Runtime &);
void register_ovl_menu_generated_unit_2(Runtime &);
void register_ovl_menu_generated_unit_3(Runtime &);
void register_ovl_menu_target_functions(Runtime &rt) {
    register_ovl_menu_generated_unit_1(rt);
    register_ovl_menu_generated_unit_2(rt);
    register_ovl_menu_generated_unit_3(rt);
}
}
