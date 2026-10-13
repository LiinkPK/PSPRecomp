/* Entry 0x0887DB1C | file offset 0x0007AAF4 | FUN_0887db1c | bytes 184 */

void FUN_0887db1c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_0887dac0();
  if (*(int *)(param_2 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x48);
    uVar3 = *(undefined4 *)(param_2 + 0x50);
    iVar1 = *(int *)(param_2 + 0x48);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x50) + 0x48) = *(undefined4 *)(param_2 + 0x48);
    uVar3 = *(undefined4 *)(param_2 + 0x50);
    iVar1 = *(int *)(param_2 + 0x48);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x16c) = uVar3;
  }
  else {
    *(undefined4 *)(iVar1 + 0x50) = uVar3;
  }
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
  if (**(int **)(param_1 + 0x6e40) != 0) {
    for (piVar2 = (int *)(*(int **)(param_1 + 0x6e40))[1]; *piVar2 != 0; piVar2 = (int *)piVar2[1])
    {
    }
  }
  **(int **)(param_1 + 0x6e44) = param_2;
  *(undefined4 *)(param_1 + 0x6e44) = *(undefined4 *)(*(int *)(param_1 + 0x6e44) + 4);
  return;
}

