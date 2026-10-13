/* Entry 0x088C7E20 | file offset 0x000C4DF8 | FUN_088c7e20 | bytes 120 */

void FUN_088c7e20(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    DAT_089d7740 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d7740,param_1,param_2);
    DAT_089d7744 = DAT_089d7740 + 0x10;
    DAT_089d7748 = DAT_089d7744 + *(int *)(DAT_089d7740 + 8) * 0x24;
  }
  return;
}

