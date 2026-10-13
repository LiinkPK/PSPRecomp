# PSPRecomp — Dissidia 012 PC Port

This is a fork of the PSPRecomp static recompilation framework, used to port **Final Fantasy Dissidia 012** (`ULES01505`) to PC as a fully standalone native executable — no emulator required for the end user.

The framework reads an Allegrex/MIPS PSP executable, analyzes the guest code, emits C++ translation units, and runs them through a native host runtime. This profile (`d012`) replaces all PSP OS calls with HLE stubs and wires up a software GE rasterizer to produce output on a PC window.

> **Game files not included.** Requires the user's own decrypted `ULES01505_FFSTJP.BIN`.

---

## Repository layout

```
include/psprecomp/        Public runtime and Allegrex interfaces
src/                      ELF/PRX loading, decoder, memory, runtime, support code
tools/                    Generic analyzer, recompiler and reverse-engineering helpers
tests/                    Framework regression tests
configs/                  Generic examples and PSP NID data
profiles/
  d012/                   Dissidia 012 profile (this fork's active work)
    generated/            AOT-compiled MIPS→C++ units (generated_unit_0000–0136)
    host/                 HLE implementations, GE rasterizer, Win32 display
    pseudocode/           Ghidra pseudocode dumps for key functions
  vcs/                    GTA: Vice City Stories (original upstream profile)
```

---

## Requirements

- CMake 3.20+
- C++20 compiler (MSVC 2022 recommended on Windows)
- Windows 10/11 (Win32 display path; Linux untested)

---

## Build

```bash
cmake -S . -B out/d012 -DPSPRECOMP_PROFILE=d012
cmake --build out/d012 --config Release
```

Binary lands at `out/d012/profiles/d012/Release/d012_native.exe`.

## Run

```bash
cd C:\path\to\PSPRecomp
out\d012\profiles\d012\Release\d012_native.exe original\ULES01505_FFSTJP.BIN
```

---

## How it works

PSP RAM is a flat host buffer. Guest addresses like `0x08804040` map directly into it. The MIPS executable is split into **units** of `0x20000` bytes — each unit is one C++ function with a `LOCAL_DISPATCH` switch on the program counter. Calls between units use `invoke_chained_direct` (static, fast) or `invoke_chained_call` (dynamic, for function pointers).

All PSP OS/kernel calls are intercepted at their import stub addresses in **unit 14** (`generated_unit_0014.cpp`) and replaced with HLE implementations. The game's own task scheduler and cooperative multithreading model run as-is on the recompiled code — no OS threads needed.

---

## Progress

### Phase 1 — Boot & kernel ✅
- Game loads, maps memory, runs `.ctors`, enters main loop
- Thread scheduler (`sceKernelCreateThread` / `StartThread`) working
- SysMem allocator, semaphores, event flags, callbacks implemented
- `sceDisplaySetFrameBuf` fires every frame with valid VRAM addresses

### Phase 2 — Rendering pipeline 🔄 (current)

The game's rendering pipeline uses a cooperative task scheduler that dispatches 6 tasks per frame:

| Task VA | Purpose |
|---|---|
| `0x08865E98` | GE DL send |
| `0x08865ED0` | Display state machine |
| `0x08865FD8` | GE DL finish |
| `0x088838F8` | Render object processor |
| `0x08864DD8` | Display sync |
| `0x08883EE8` | Per-frame DL chain builder |

**Done:**
- Task scheduler confirmed working — all 6 tasks dispatched every frame ✅
- Rendering gate `DAT_089D69DC` now opens on boot (`dc=01` from frame 2) ✅
- `sceKernelVolatileMemLock` HLE stub implemented ✅
- GE display list executor (`ge_exec`) handles PRIM, clear, JUMP/BJUMP opcodes ✅
- `sceUmdGetDriveStat` returns disc-present status ✅
- GE ring buffer stable, no crashes ✅

**Current blocker:**
- Render object pointer `DAT_089D69E0` is never populated — `FUN_08883EE8` (DL chain builder) has no objects to process, so `DAT_09AF719C` (render chain root) stays 0 and no PRIM commands reach the rasterizer
- Root cause is likely the resource-loading init stubs (`FUN_0886330C`, `FUN_08863208`, etc.) returning early without populating the subsystem object tables

**Next steps:**
1. Trace what populates `DAT_089D69E0` (only one write site: `FUN_08876EF0`, reached via init chain)
2. Identify which init stub is blocking that path and implement it
3. Once render objects exist → `FUN_08883EE8` builds DL → `DAT_09AF719C` populated → rasterizer gets PRIM commands → first pixels

### Phase 3 — File I/O & assets ⏳
- `sceIoOpen/Read/Close/Lseek` stubs exist but return ENOENT
- Real path mapping (`disc0:/PSP_GAME/USRDIR/` → local dir) needed
- Asset loading is likely required for the render object init to complete

### Phase 4 — Display output ⏳
- VRAM is mapped and double-buffered (RGB565, 512×272)
- Win32 window exists; needs blitter wired to `sceDisplaySetFrameBuf`

---

## Key implementation notes

**HLE stub placement:** All PSP syscall stubs live as label bodies directly inside `generated_unit_0014.cpp`. Adding them to `d012_profile.cpp` via `s_handlers[]` does NOT work — the generated unit intercepts first.

**No-op stub pattern:**
```cpp
L_0XXXXXXX: // brief description
    ctx.gpr[2] = 0u;
    jump_target = ctx.gpr[31];
    ctx.pc = jump_target;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    return;
```

**Pseudocode** for any address: `pseudocode/XXXXXXXX.c` (repo root).

**Unit for address:** `unit = (addr - 0x08804040) / 0x20000`

---

## Source provenance & license

No commercial game executable or asset is included. PPSSPP source is used for **reference only** — no GPL code is copied into this repo.

The PSPRecomp framework is MIT licensed. See [`LICENSE`](LICENSE).
