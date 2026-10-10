#pragma once
#include <cstdint>

namespace psprecomp {
class Runtime;
class Elf32Image;
} // namespace psprecomp

namespace d012 {
void register_hle(psprecomp::Runtime &rt);
void scan_and_register_stubs(psprecomp::Runtime &rt, const psprecomp::Elf32Image &elf);
std::uint32_t hle_alloc(std::uint32_t size);
std::uint32_t hle_alloc_size();
std::uint32_t hle_last_addr();
std::uint32_t hle_get_addr(std::uint32_t uid);
bool hle_has_pending_threads();
void hle_run_next_thread(psprecomp::Runtime &rt);
void hle_run_ctors(psprecomp::Runtime &rt, const psprecomp::Elf32Image &elf);
} // namespace d012