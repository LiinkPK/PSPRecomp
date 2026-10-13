/* Entry 0x088B68E0 | file offset 0x000B38B8 | FUN_088b68e0 | bytes 140 */

void FUN_088b68e0(undefined4 param_1,int param_2)

{
  if (0 < param_2) {
    DAT_089d7338 = FUN_088820d8(0x140);
    FUN_08935524(DAT_089d7338,param_1,param_2);
    DAT_089d733c = DAT_089d7338 + 0xc;
    DAT_089d7340 = DAT_089d7338 + (uint)*(ushort *)(DAT_089d7338 + 2);
    DAT_089d7348 = DAT_089d7338 + param_2 + -8;
    DAT_089d7344 = DAT_089d7338 + param_2 + -0x14;
  }
  return;
}

