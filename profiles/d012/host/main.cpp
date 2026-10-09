#include "psprecomp/runtime.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/guest_memory.hpp"
#include "d012_profile.hpp"
#include <cstdio>
#include <cstdlib>
#include <stdexcept>

namespace psprecomp {
void register_generated_functions(Runtime &runtime);
}

int main(int argc, char *argv[]) {
    setvbuf(stdout, nullptr, _IONBF, 0);
    setvbuf(stderr, nullptr, _IONBF, 0);
    std::printf("D012 native starting\n");
    const char *eboot = argc > 1 ? argv[1] : "ULES01505_FFSTJP.BIN";
    std::printf("Loading: %s\n", eboot);
    try {
        psprecomp::Runtime runtime;
        auto elf = psprecomp::Elf32Image::from_file(eboot);
        std::printf("ELF loaded, type=%d\n", (int)elf.type());
        elf.load_and_relocate(runtime.memory());
        std::printf("ELF mapped to guest memory\n");

        // Scan for embedded syscall stubs BEFORE generated functions so
        // has_function() correctly skips anything already registered.
        d012::scan_and_register_stubs(runtime, elf);

        std::printf("Starting AOT registration...\n");
        fflush(stdout);
        psprecomp::register_generated_functions(runtime);
        std::printf("AOT functions registered\n");
        d012::register_hle(runtime);
        std::printf("HLE registered\n");
        const std::uint32_t entry     = elf.runtime_entry();
        const std::uint32_t run_entry = entry == 0 ? 0x08804040u : entry;
        std::printf("Entry: 0x%08X  Running from: 0x%08X\n", entry, run_entry);
        runtime.context().gpr[29] = 0x09F00000u;
        runtime.run(run_entry);
        std::printf("Exited: %s\n", runtime.stop_reason().c_str());
    } catch (const std::exception &e) {
        std::fprintf(stderr, "Exception: %s\n", e.what());
        return 1;
    } catch (...) {
        std::fprintf(stderr, "Unknown exception\n");
        return 1;
    }
    return 0;
}