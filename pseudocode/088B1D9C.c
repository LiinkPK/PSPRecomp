/* Entry 0x088B1D9C | file offset 0x000AED74 | FUN_088b1d9c | bytes 88 */

undefined4 FUN_088b1d9c(int param_1)

{
  undefined4 uVar1;
  undefined2 local_2e [21];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_2e[0] = (undefined2)param_1;
    uVar1 = FUN_088b1c14(DAT_089d7294,DAT_089d7294 + *(int *)(DAT_089d7290 + 8) * 0x28,local_2e,0);
  }
  return uVar1;
}

