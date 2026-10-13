#pragma once
#include <cstdint>
#include <cstdio>
#include <string>

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

// Game root directory for PSP path translation
extern std::string g_game_root;

// File I/O state — used from generated_unit_0014.cpp
std::uint32_t io_open(const std::string &psp_path, std::uint32_t flags);
std::int32_t  io_read(std::uint32_t fd, void *buf, std::uint32_t size);
std::int32_t  io_close(std::uint32_t fd);
std::int64_t  io_lseek(std::uint32_t fd, std::int64_t offset, std::uint32_t whence);

// Kernel HLE — used from generated_unit_0014.cpp labels
std::uint32_t hle_create_callback(std::uint32_t func);
void          hle_delete_callback(std::uint32_t uid);
std::uint32_t hle_create_sema(std::uint32_t init_val);
void          hle_delete_sema(std::uint32_t uid);
void          hle_signal_sema(std::uint32_t uid, std::uint32_t signal);
std::uint32_t hle_create_thread(std::uint32_t entry, std::uint32_t priority, std::uint32_t stack_size);
void          hle_start_thread(std::uint32_t uid, std::uint32_t arglen, std::uint32_t argp);
std::uint32_t hle_create_event_flag();
} // namespace d012