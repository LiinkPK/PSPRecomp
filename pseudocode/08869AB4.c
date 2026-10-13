/* Entry 0x08869AB4 | file offset 0x00066A8C | FUN_08869ab4 | bytes 172 */

int * FUN_08869ab4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*param_1 + 8);
  if (0 < iVar4) {
    do {
      piVar1 = (int *)FUN_08869a7c(param_1,iVar3);
      if ((*piVar1 != 0) && (iVar2 = FUN_0893585c(param_2,*piVar1), iVar2 == 0)) {
        return piVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return (int *)0x0;
}

