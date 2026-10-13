/* Entry 0x088B1A78 | file offset 0x000AEA50 | FUN_088b1a78 | bytes 168 */

int * FUN_088b1a78(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = ((int)((param_2 - param_1) + ((uint)(param_2 - param_1 >> 4) >> 0x1c)) >> 4) + -1;
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar5 = iVar3;
    do {
      iVar5 = iVar5 / 2;
      piVar2 = (int *)(param_1 + iVar5 * 0x10);
      iVar6 = *piVar2;
      if (iVar6 == *param_3) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
        if (iVar6 < *param_3) {
          iVar7 = -1;
        }
      }
      if (iVar7 == 0) {
        return piVar2;
      }
      if (iVar7 < 0) {
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

