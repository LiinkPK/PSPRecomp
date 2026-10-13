/* Entry 0x0898A25C | file offset 0x00187234 | FUN_0898a25c | bytes 108 */

void FUN_0898a25c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*DAT_09b6f478 & 1) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 4) + (int)*(short *)(iVar1 + 0x18),param_2);
  }
  FUN_0898a5d8(param_1,param_2);
  return;
}

