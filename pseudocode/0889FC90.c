/* Entry 0x0889FC90 | file offset 0x0009CC68 | FUN_0889fc90 | bytes 88 */

void FUN_0889fc90(void)

{
  DAT_089d6c38 = FUN_08882118(0x18002,0x80);
  DAT_089d6c58 = sceKernelCreateCallback("SAP_PowerCallback",FUN_088a0508,0);
  scePowerRegisterCallback(4,DAT_089d6c58);
  return;
}

