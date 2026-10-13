/* Entry 0x0892AE80 | file offset 0x00127E58 | FUN_0892ae80 | bytes 112 */

void FUN_0892ae80(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 0x24) + 0x34))(iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 0x30));
    (**(code **)(*(int *)(iVar1 + 0x24) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 0x38));
  }
  return;
}

