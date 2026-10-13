/* Entry 0x0885C538 | file offset 0x00059510 | FUN_0885c538 | bytes 104 */

void FUN_0885c538(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 < 1) {
    param_3 = *(int *)(param_1 + 0xc);
  }
  piVar2 = (int *)(param_2 - (param_3 + 0xfU & ~(param_3 - 1U)));
  if (*(int **)(param_1 + 0x10) == piVar2) {
    *(int *)(param_1 + 0x10) = piVar2[1];
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - piVar2[2];
  iVar1 = *piVar2;
  piVar3 = (int *)piVar2[1];
  if (iVar1 != *(int *)(param_1 + 4)) {
    *(int **)(iVar1 + 4) = piVar3;
    piVar3 = (int *)piVar2[1];
    iVar1 = *piVar2;
  }
  *piVar3 = iVar1;
  return;
}

