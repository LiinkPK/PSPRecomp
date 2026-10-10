#pragma once
#include <cstdint>

namespace psprecomp {
class Runtime;
class Elf32Image;
} // namespace psprecomp

namespace d012 {
void register_hle(psprecomp::Runtime &rt);
void scan_and_register_stubs(psprecomp::Runtime &rt, const psprecomp::Elf32Image &elf);
// Bump allocator for sceKernelAllocPartitionMemory / GetBlockHeadAddr stubs
std::uint32_t hle_alloc(std::uint32_t size);           // allocates, returns UID
std::uint32_t hle_alloc_size();                        // size of last allocation
std::uint32_t hle_last_addr();                         // addr of last allocation
std::uint32_t hle_get_addr(std::uint32_t uid);         // addr for UID
} // namespace d012