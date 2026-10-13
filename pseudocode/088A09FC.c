/* Entry 0x088A09FC | file offset 0x0009D9D4 | FUN_088a09fc | bytes 184 */

int * FUN_088a09fc(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = (param_2 - param_1) / 0x1c + -1;
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar5 = iVar3;
    do {
      iVar5 = iVar5 / 2;
      piVar2 = (int *)(param_1 + iVar5 * 0x1c);
      if (piVar2[1] < *param_3) {
        iVar6 = -1;
      }
      else {
        iVar6 = 0;
        if (param_3[1] < *piVar2) {
          iVar6 = 1;
        }
      }
      if (iVar6 == 0) {
        return piVar2;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + 1;
        bVar1 = iVar3 < iVar4;
      }
      else {
        iVar3 = iVar5 + -1;
        bVar1 = iVar3 < iVar4;
      }
      iVar5 = iVar4 + iVar3;
    } while (!bVar1);
  }
  return (int *)0x0;
}

