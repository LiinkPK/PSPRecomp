/* Entry 0x089130E4 | file offset 0x001100BC | FUN_089130e4 | bytes 68 */

int * FUN_089130e4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(*param_1 + 4);
  piVar1 = (int *)(*param_1 + 8);
  if (0 < iVar2) {
    do {
      iVar3 = iVar3 + 1;
      if (*piVar1 == param_2) {
        return piVar1;
      }
      piVar1 = piVar1 + 9;
    } while (iVar3 < iVar2);
  }
  return (int *)0x0;
}

