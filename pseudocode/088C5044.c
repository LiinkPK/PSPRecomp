/* Entry 0x088C5044 | file offset 0x000C201C | FUN_088c5044 | bytes 108 */

void FUN_088c5044(undefined4 param_1,int param_2)

{
  if (0 < param_2) {
    DAT_089d76d8 = FUN_088820d8(0x800);
    FUN_08935524(DAT_089d76d8,param_1,param_2);
    DAT_089d76dc = DAT_089d76d8 + 8;
    DAT_089d76e0 = DAT_089d76dc + (uint)*(ushort *)(DAT_089d76d8 + 6);
  }
  return;
}

