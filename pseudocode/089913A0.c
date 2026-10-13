/* Entry 0x089913A0 | file offset 0x0018E378 | FUN_089913a0 | bytes 76 */

bool FUN_089913a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c);
  }
  return iVar1 == 0;
}

