/* Entry 0x0886B254 | file offset 0x0006822C | FUN_0886b254 | bytes 84 */

int FUN_0886b254(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(int **)(param_1 + 0x84))[1];
  iVar1 = 0;
  if (0 < iVar2) {
    iVar3 = **(int **)(param_1 + 0x84);
    do {
      if (*(int *)(iVar3 + 0x20) == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x60;
    } while (iVar1 < iVar2);
  }
  return -1;
}

