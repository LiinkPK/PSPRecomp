/* Entry 0x088B9E84 | file offset 0x000B6E5C | FUN_088b9e84 | bytes 552 */

void FUN_088b9e84(int param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  
  psVar12 = param_2 + 6;
  FUN_088cba10(param_1);
  FUN_088cba54(param_1,(int)*param_2);
  *(char *)(param_1 + 1) = (char)param_2[2];
  FUN_088cbddc(param_1);
  psVar11 = (short *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x773) = 0;
  *(char *)(param_1 + 0x774) = (char)param_2[1];
  *(undefined1 *)(param_1 + 0x775) = 10;
  iVar4 = 0;
  psVar5 = psVar11;
  do {
    iVar6 = 0;
    iVar7 = 0x31;
    sVar9 = *psVar12;
    psVar8 = psVar12;
    psVar10 = psVar5;
    do {
      sVar1 = psVar8[1];
      *psVar10 = sVar9;
      iVar6 = iVar6 + 4;
      psVar10[1] = sVar1;
      psVar8 = (short *)((int)psVar12 + iVar6);
      iVar7 = iVar7 + -1;
      sVar9 = *psVar8;
      psVar10 = (short *)((int)psVar5 + iVar6);
    } while (iVar7 != 0);
    iVar4 = iVar4 + 1;
    *psVar10 = sVar9;
    psVar5 = psVar5 + 99;
  } while (iVar4 < 5);
  FUN_088fa5f4(0,param_2,1);
  iVar4 = 0;
  do {
    uVar2 = FUN_088b7b18(psVar12,iVar4);
    iVar6 = FUN_088c7f78(uVar2);
    if (iVar6 == 1) {
      uVar3 = FUN_088c7f3c(0,uVar2 & 0x1f);
      iVar6 = 0;
      psVar5 = psVar11;
      do {
        FUN_088b765c(psVar5,iVar4,uVar3);
        iVar6 = iVar6 + 1;
        psVar5 = psVar5 + 99;
      } while (iVar6 < 5);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  do {
    iVar6 = 0;
    do {
      uVar3 = FUN_088b7a88(psVar12,iVar4,iVar6);
      FUN_088b7ed4(psVar11,uVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xc);
    iVar6 = 0;
    do {
      iVar7 = 0;
      do {
        uVar3 = FUN_088b7ab8(psVar12,iVar4,iVar6,iVar7);
        FUN_088b7ed4(psVar11,uVar3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = 0;
  do {
    uVar3 = FUN_088b7ae8(psVar12,iVar4);
    FUN_088b7ed4(psVar11,uVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  return;
}

