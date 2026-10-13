/* Entry 0x088A5114 | file offset 0x000A20EC | FUN_088a5114 | bytes 172 */

void FUN_088a5114(void)

{
  if (DAT_089d6d68 != 0) {
    FUN_0885c488(DAT_089d6d68);
    DAT_089d6d68 = 0;
  }
  if (DAT_089d6d6c != 0) {
    FUN_08867718(&DAT_09b4d420,DAT_089d6d6c);
    FUN_088674ac(&DAT_09b4d420,DAT_089d6d6c);
    DAT_089d6d6c = 0;
  }
  FUN_08867338(&DAT_09b4d420);
  if (DAT_089d6d70 != 0) {
    sceKernelFreeMemoryBlock();
    DAT_089d6d70 = 0;
  }
  return;
}

