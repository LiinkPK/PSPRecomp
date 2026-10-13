/* Entry 0x08926A34 | file offset 0x00123A0C | FUN_08926a34 | bytes 88 */

int FUN_08926a34(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0xa1c);
  FUN_08935524(*(int *)(param_1 + 0x20) + iVar1 * 0x40 + 0xa24,param_2,0x40);
  *(int *)(*(int *)(param_1 + 0x20) + 0xa1c) = *(int *)(*(int *)(param_1 + 0x20) + 0xa1c) + 1;
  return iVar1;
}

