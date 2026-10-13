/* Entry 0x08971A08 | file offset 0x0016E9E0 | FUN_08971a08 | bytes 272 */

void FUN_08971a08(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  iVar8 = *param_1;
  iVar9 = *(int *)(iVar8 + 0x14);
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      iVar5 = 0;
      piVar6 = (int *)(iVar8 + *(int *)(iVar8 + 0x18) + iVar7);
      iVar4 = *piVar6;
      if (0 < iVar4) {
        iVar9 = 0;
        piVar10 = param_2 + iVar3;
        do {
          iVar11 = *(int *)(iVar8 + piVar6[1] + iVar9 + 0xc);
          if ((iVar11 != -1) &&
             (iVar11 = *(int *)(iVar8 + *(int *)(iVar8 + 0x10) + iVar11 * 0x18 + 4), iVar11 != -1))
          {
            iVar13 = 0;
            bVar1 = 0 < iVar3;
            piVar12 = param_2;
            if (bVar1) {
              do {
                if (*piVar12 == iVar11) break;
                iVar13 = iVar13 + 1;
                bVar1 = iVar13 < iVar3;
                piVar12 = piVar12 + 1;
              } while (bVar1);
            }
            if (!bVar1) {
              *piVar10 = iVar11;
              iVar8 = *param_1;
              iVar3 = iVar3 + 1;
              piVar10 = piVar10 + 1;
              iVar4 = *piVar6;
            }
          }
          iVar5 = iVar5 + 1;
          iVar9 = iVar9 + 0x18;
        } while (iVar5 < iVar4);
        iVar9 = *(int *)(iVar8 + 0x14);
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x34;
    } while (iVar2 < iVar9);
  }
  return;
}

