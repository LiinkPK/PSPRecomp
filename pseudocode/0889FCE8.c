/* Entry 0x0889FCE8 | file offset 0x0009CCC0 | FUN_0889fce8 | bytes 80 */

void FUN_0889fce8(void)

{
  if (DAT_089d6c38 != 0) {
    FUN_0888218c(DAT_089d6c38,0x80);
    DAT_089d6c38 = 0;
  }
  scePowerUnregisterCallback(4);
  sceKernelDeleteCallback(DAT_089d6c58);
  DAT_089d6c58 = 0;
  return;
}

