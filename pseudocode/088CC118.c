/* Entry 0x088CC118 | file offset 0x000C90F0 | FUN_088cc118 | bytes 112 */

void FUN_088cc118(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    DAT_089d77f8 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d77f8,param_1,param_2);
    DAT_089d77fc = DAT_089d77f8 + 0x10;
    DAT_089d7800 = DAT_089d77fc + *(int *)(DAT_089d77f8 + 8) * 0x10;
  }
  return;
}

