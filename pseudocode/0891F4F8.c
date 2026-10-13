/* Entry 0x0891F4F8 | file offset 0x0011C4D0 | FUN_0891f4f8 | bytes 172 */

short * FUN_0891f4f8(int param_1,int param_2,short *param_3)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = (param_2 - param_1) / 0x14 + -1;
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar6 = iVar4;
    do {
      iVar6 = iVar6 / 2;
      psVar3 = (short *)(param_1 + iVar6 * 0x14);
      sVar1 = *psVar3;
      if (sVar1 == *param_3) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
        if (sVar1 < *param_3) {
          iVar7 = -1;
        }
      }
      if (iVar7 == 0) {
        return psVar3;
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
  return (short *)0x0;
}

