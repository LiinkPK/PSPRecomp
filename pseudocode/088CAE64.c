/* Entry 0x088CAE64 | file offset 0x000C7E3C | FUN_088cae64 | bytes 172 */

void FUN_088cae64(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    DAT_089d77d0 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d77d0,param_1,param_2);
    DAT_089d77d4 = DAT_089d77d0 + 0x10;
    DAT_089d77d8 = DAT_089d77d4 + *(short *)(DAT_089d77d0 + 8) * 8;
    DAT_089d77dc = DAT_089d77d8 + *(short *)(DAT_089d77d0 + 10) * 8;
    DAT_089d77e0 = DAT_089d77dc + *(short *)(DAT_089d77d0 + 0xc) * 0xc;
    DAT_089d77e4 = DAT_089d77e0 + 0x54;
  }
  return;
}

