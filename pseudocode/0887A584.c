/* Entry 0x0887A584 | file offset 0x0007755C | FUN_0887a584 | bytes 76 */

void FUN_0887a584(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    *(int *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    iVar1 = *(int *)(param_1 + 0x24);
  }
  else {
    *(int *)(*(int *)(param_1 + 0x20) + 0x10) = param_2;
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = uVar2;
    iVar1 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x20) = param_2;
  }
  *(int *)(param_1 + 0x24) = iVar1 + 1;
  return;
}

