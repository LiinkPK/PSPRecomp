/* Entry 0x088C4C44 | file offset 0x000C1C1C | FUN_088c4c44 | bytes 160 */

void FUN_088c4c44(undefined4 param_1,int param_2)

{
  if (0 < param_2) {
    DAT_089d76c0 = FUN_088820d8(0x15e0);
    FUN_08935524(DAT_089d76c0,param_1,param_2);
    DAT_089d76c4 = DAT_089d76c0 + 4;
    DAT_089d76c8 = DAT_089d76c0 + (uint)*(ushort *)(DAT_089d76c0 + 2) + 4;
    DAT_089d76cc = (uint)(DAT_089d76c8 - DAT_089d76c4) >> 5;
    DAT_089d76d0 = (uint)((DAT_089d76c0 + param_2) - DAT_089d76c8) / 0x14;
  }
  return;
}

