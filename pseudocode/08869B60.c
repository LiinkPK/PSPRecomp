/* Entry 0x08869B60 | file offset 0x00066B38 | FUN_08869b60 | bytes 224 */

int * FUN_08869b60(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*param_1 + 8);
  uVar1 = FUN_089359e8(param_2);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar6) {
    do {
      piVar2 = (int *)FUN_08869a7c(param_1,iVar4);
      if ((*piVar2 != 0) && (iVar3 = FUN_08935a0c(param_2,*piVar2,uVar1), iVar3 == 0)) {
        if (iVar5 == param_3) {
          return piVar2;
        }
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  return (int *)0x0;
}

