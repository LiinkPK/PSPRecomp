/* Entry 0x0885CB28 | file offset 0x00059B00 | FUN_0885cb28 | bytes 40 */

void FUN_0885cb28(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = param_1 + iVar1 * 0x10;
  *(undefined2 *)(iVar2 + 0x10) = param_2;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = param_3;
  *(undefined4 *)(iVar2 + 0x1c) = param_4;
  *(int *)(param_1 + 4) = iVar1 + 1;
  return;
}

