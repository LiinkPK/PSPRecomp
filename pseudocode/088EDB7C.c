/* Entry 0x088EDB7C | file offset 0x000EAB54 | FUN_088edb7c | bytes 188 */

void FUN_088edb7c(void)

{
  *(undefined1 *)(DAT_089d7f00 + 2) = 0;
  *(undefined4 *)(DAT_089d7f00 + 0x140) = 1;
  *(undefined4 *)(DAT_089d7f00 + 0x15c) = 0xffffffff;
  if (*(int *)(DAT_089d7f00 + 0x164) != -1) {
    sceKernelDeleteThread(*(undefined4 *)(DAT_089d7f00 + 0x164));
    *(undefined4 *)(DAT_089d7f00 + 0x164) = 0xffffffff;
  }
  if (*(int *)(DAT_089d7f00 + 0x160) != -1) {
    sceKernelDeleteThread(*(undefined4 *)(DAT_089d7f00 + 0x160));
    *(undefined4 *)(DAT_089d7f00 + 0x160) = 0xffffffff;
  }
  if (*(int *)(DAT_089d7f00 + 0x14c) != -1) {
    sceIoClose(*(undefined4 *)(DAT_089d7f00 + 0x14c));
    *(undefined4 *)(DAT_089d7f00 + 0x14c) = 0xffffffff;
  }
  sceKernelExitDeleteThread(1);
  return;
}

