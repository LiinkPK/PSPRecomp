#pragma once

namespace psprecomp {
class Runtime;
class Elf32Image;
} // namespace psprecomp

namespace d012 {
void register_hle(psprecomp::Runtime &rt);
void scan_and_register_stubs(psprecomp::Runtime &rt, const psprecomp::Elf32Image &elf);
} // namespace d012