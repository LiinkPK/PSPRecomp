/* Entry 0x088B6D34 | file offset 0x000B3D0C | FUN_088b6d34 | bytes 168 */

char * FUN_088b6d34(int param_1,int param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = ((int)((param_2 - param_1) + ((uint)(param_2 - param_1 >> 3) >> 0x1d)) >> 3) + -1;
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar6 = iVar4;
    do {
      iVar6 = iVar6 / 2;
      pcVar3 = (char *)(param_1 + iVar6 * 8);
      cVar1 = *pcVar3;
      if (cVar1 == *param_3) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
        if (cVar1 < *param_3) {
          iVar7 = -1;
        }
      }
      if (iVar7 == 0) {
        return pcVar3;
      }
      if (iVar7 < 0) {
        iVar5 = iVar6 + 1;
        bVar2 = iVar4 < iVar5;
      }
      else {
        iVar4 = iVar6 + -1;
        bVar2 = iVar4 < iVar5;
      }
      iVar6 = iVar5 + iVar4;
    } while (!bVar2);
  }
  return (char *)0x0;
}

