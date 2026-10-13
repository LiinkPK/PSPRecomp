/* Entry 0x088C4BB0 | file offset 0x000C1B88 | FUN_088c4bb0 | bytes 148 */

void FUN_088c4bb0(int param_1,int param_2)

{
  if (param_1 != 0) {
    DAT_089d76b0 = FUN_088820d8(param_2 + (100 - *(int *)(param_1 + 8)) * 0x28);
    FUN_08935524(DAT_089d76b0,param_1,param_2);
    DAT_089d76b4 = DAT_089d76b0 + 0x10;
    DAT_089d76b8 = DAT_089d76b4 + *(int *)(DAT_089d76b0 + 8) * 0x28;
  }
  return;
}

