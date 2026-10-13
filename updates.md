# PSPRecomp – Dissidia 012 (ULES01505.BIN) – Current State

**Last updated:** 2026-10-13

**Goal:** Get the recompiled game to reach its main loop and eventually show a black screen window.

**Project:** `C:\path\to\your\folder\PSPRecomp`  
**Build:** `cmake --build out\d012 --config Release` → binary at `out\d012\profiles\d012\Release\d012_native.exe`  
**Run:** `.\d012_native.exe "C:\path\to\original\ULES01505_FFSTJP.BIN"`

---

## How the runtime works

- PSP RAM is a flat host buffer. Guest addresses like `0x08804040` map directly into it.
- Functions are split into **units** of `0x20000` bytes. Unit N covers `0x08804040 + N*0x20000`.
- Each unit is one giant C++ function (`recomp_unit_000N`) with a `LOCAL_DISPATCH` switch on `ctx.pc`.
- Calling between units uses `invoke_chained_direct<&unit_entry, UnitIdx, EntryID, TargetPC>` or `invoke_chained_call` (dynamic).
- **Poisoning rule:** Registering a stub with a name NOT starting with `"recomp_unit_"` disables ALL generated code in that unit. Never register HLE stubs at addresses inside a unit you need working. Add the stub body directly as a label inside the generated unit file instead.
- `lookup_function_override(addr)` only returns a stub if `direct_chainable_[idx] == nullptr` (i.e. the name does NOT start with `"recomp_unit_"`).
- **All PSP syscall stubs live in unit 14** (`generated_unit_0014.cpp`). HLE implementations go there as label bodies — NOT in `d012_profile.cpp` via `s_handlers[]`.

---

## How to add a missing function

When `invoke_chained_call` hits an unregistered address → null-PC crash. Fix:

1. Find which unit: `unit = (addr - 0x08804040) / 0x20000`
2. Open `profiles/d012/generated/generated_unit_000N.cpp`
3. Add `case 0xADDRu: goto L_ADDR;` in the `LOCAL_DISPATCH` switch (keep sorted)
4. Add the label + body before the next label (real logic or no-op return)
5. Add `runtime.register_function(0xADDRu, &recomp_unit_000N, "recomp_unit_000N");` in the bottom init function
6. Do **NOT** add it to `d012_profile.cpp` unless the address is outside all unit ranges

**No-op stub pattern:**
```cpp
L_0XXXXXXX: // brief description
    { static bool once=false; if(!once){once=true; std::printf("[HLE] 0XXXXXXX skipped\n");} }
    ctx.gpr[2] = 0u;
    jump_target = ctx.gpr[31];
    ctx.pc = jump_target;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    return;
```

**Build and run:**
```
cmake --build C:\path\to\your\folder\PSPRecomp\out\d012 --config Release
cd C:\path\to\your\folder\PSPRecomp\out\d012\profiles\d012\Release
.\d012_native.exe "C:\path\to\your\folder\PSPRecomp\original\ULES01505_FFSTJP.BIN"
```

**Pseudocode** for any address: `pseudocode/XXXXXXXX.c` (root of the repo)

---

## GE (Graphics Engine) subsystem — what was done

The game has its own internal GE manager (does **not** import `sceGeListEnQueue`/`sceGeDrawSync`). Only imports: `sceGeListSync`, `sceGeUnsetCallback`, `sceGeListEnQueueHead`, `sceGeEdramGetSize`, `sceGeContinue`.

**Key addresses in unit 12 (`generated_unit_0012.cpp`):**

- `L_0899F5A4` — internal GE list enqueue. `gpr[4]` = list base (DL buffer), `gpr[5]` = stall address.
- `L_0899F630` (line ~49711) — writes slot fields. `slot+8` = display list write pointer.
- `GE_struct` = `0x09AF67A8`. `GE_struct+72` = active slot pointer.
- `DAT_09af6830` = `base+26672` = slot pointer used by all GE command writers.
- Ring buffer: 5 slots at stride 252 bytes, base at `GE_struct+76 = 0x09AF67F4`.

**Crashes fixed:**

| Crash addr | Root cause | Fix |
|---|---|---|
| `0x00000008` | `GE_struct+72` null-deref | Null guard at `L_089A0330`; commented-out zero-store in `L_089A00A4` |
| `0x000000A8` | `DAT_09af6830` null | 52 null+range guards at all `base+26672` load sites |
| `0x00000010` | `GE_struct+72` zeroed via error path `L_0899F7F8` | Commented-out zero-store in `L_0899F7F8` |
| `0x50000009` | `dlptr = 0x9F000200` passes null check but fails range | Upgraded all 52 guards to range-check: `< 0x08800000 \|\| >= 0x09F00000` |
| `0x9F000208` | `slot+8` stored `stall & 0x1FFFFFFF = 0x1F000200` instead of list base | `L_0899F630` line ~49715: store `gpr[16] & 0x0FFFFFFF` (list base). Follows PPSSPP: `slot.pc = startpc = list & 0x0FFFFFFF` |
| Infinite loop / null-PC on cmds 0–21 | `L_089A1308` emitted as indirect jump through `RAM[table+cmd*4]` — recompiler mis-decoded MIPS switch table as a jump-through-pointer. Actual function `FUN_089a12fc` is a switch that writes one GE DL word per cmd. | Replaced `L_089A1308` with full switch implementation from pseudocode. Also added unit-14 no-op stubs + `register_function` for `0x089D18F8`–`0x089D1948`. |

---

## Display subsystem — current state

`sceDisplaySetFrameBuf` is called every frame (confirmed). Double-buffered:
- Front buffer: `0x04000000` (PSP VRAM offset 0)
- Back buffer: `0x04044000` (PSP VRAM offset 0x44000)
- Format: RGB565 (`fmt=1`), width 512, height 272

VRAM is accessible via `rt.memory().vram_bytes()`. A host window (SDL2/Win32) is needed to blit it.

**Display state machine** (`FUN_08865ED0`, task fn=`0x08865ED0`):
- State 0 = idle, calls `FUN_0886598c` (GE render list writer) each frame
- State 1→2→3 = triggered by `FUN_08866178` on stereo mode change; runs display setup chain
- The state machine is registered as a task and dispatched by the task scheduler every frame

**Task scheduler** (`FUN_0888245C`, unit 3): confirmed working. Tasks dispatched each frame:

| fn VA | Name | Purpose |
|---|---|---|
| `0x08865E98` | GRAPHICS::DlSendTask | calls `FUN_08865918` if state==0 |
| `0x08865ED0` | GRAPHICS::DlStartTask | display state machine |
| `0x08865FD8` | GRAPHICS::DlFinishTask | calls `FUN_08865E50` if state==0 |
| `0x088838F8` | (unknown) | fires every frame |
| `0x08883EE8` | (unknown) | fires every frame |

---

## HLE stub placement rule (learned the hard way)

All PSP import stubs cluster in unit 14 (`0x089C4040`–`0x089C6040`). The generated unit already has `jr $ra / nop` for each stub VA and registers them as `"recomp_unit_0014"`. This means:

- `s_handlers[VA]` in `d012_profile.cpp` is **never reached** — the generated unit intercepts first
- `register_hle(library, nid, fn)` is also dead for these — `invoke_import` is never called from AOT units

**Fix:** Implement all HLE logic directly as label bodies in `generated_unit_0014.cpp`.

---

## Files modified (beyond original recompiler output)

| File | What changed |
|---|---|
| `profiles/d012/generated/generated_unit_0012.cpp` | GE ring buffer fixes (see table above). `L_0899F630`: `slot+8` now stores list base. `L_089A00A4` + `L_0899F7F8`: zeroing of `GE_struct+72` / slot pointer commented out. 52 null+range guards on all `base+26672` load sites. `L_089A22A4` GE init: sets `DAT_09af6830` to slot-0 address on startup. |
| `profiles/d012/generated/generated_unit_0003.cpp` | Debug trace at `L_0888251C` (task dispatcher): logs first 5 dispatches + every 4096th. Temporary debug prints at other labels. |
| `profiles/d012/generated/generated_unit_0014.cpp` | `L_089C5AC0` (`sceDisplaySetFrameBuf`): logs call + returns 0. `L_089C5AE0` (`sceDisplaySetMode`): logs once + returns 0. `L_089C5EA8` (`sceIoOpen`): logs path + returns -2 (ENOENT). |
| `profiles/d012/generated/generated_unit_0002.cpp` | `L_08863208` (UMD init stub), `L_0886330C` (resource loader no-op), dispatch cases + `register_function` entries. |
| `profiles/d012/host/d012_profile.cpp` | Renamed `cpususpendintr`/`cpuresumeintr` stubs to `"recomp_unit_..."` (chainable). Dead `s_handlers[]` entries for sceDisplay/sceIo (these are overridden by unit 14). |
| `profiles/d012/host/main.cpp` | Sets game root to BIN's parent directory before running. |

---

## Current status (as of 2026-10-13)

**The game reaches its main loop and runs stably.** `sceDisplaySetFrameBuf` fires every frame with valid VRAM addresses. No crashes.

**Task scheduler confirmed working.** 6 tasks dispatched every frame including `FUN_088838F8` (render task) and `FUN_08883EE8` (DL builder). Both run but exit immediately (0 iterations) because the rendering gate is closed.

**Rendering gate `DAT_089D69DC` is always 0 — this is the current blocker.**

Root cause chain:
1. Gate set by `FUN_088839F8` → `FUN_08882E80` → `sceKernelVolatileMemLock`
2. `sceKernelVolatileMemLock` at `0x089C6098` is now implemented (returns 0, writes 0x10000 to out-ptr) ✅
3. But `FUN_088839F8` is only called from `FUN_08883340`, which is only called from UMD callback `FUN_08883998`
4. `FUN_08883998` is registered (uid=257) but never fired because `FUN_08863208` (UMD manager init at `0x08863208` in unit 2) is skipped

**Next step:** Fire `FUN_08883998` with `gpr[5] = 0x00090000` from `sceUmdGetDriveStat` on first call. This triggers `FUN_08883340` → opens the rendering gate → render objects start enqueuing → `FUN_08883EE8` builds the DL chain → `DAT_09AF719C` gets populated → actual PRIM commands render to VRAM.

Once gate opens → verify `DAT_09AF719C` gets populated → verify non-zero pixels in VRAM → get visible output.
