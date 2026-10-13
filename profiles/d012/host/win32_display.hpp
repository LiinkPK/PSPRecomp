#pragma once
#include <cstdint>

namespace d012 {

// Call once before the main loop to create the window (non-blocking).
void display_init(int width, int height);

// Call each frame with the PSP VRAM buffer pointer, stride (in pixels), and pixel format.
// fmt: 1 = RGB565, 3 = RGBA8888
void display_present(const void *vram_ptr, int buf_width, int fmt);

// Pump the window message queue — returns false if the window was closed.
bool display_pump();

} // namespace d012
