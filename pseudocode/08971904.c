/* Entry 0x08971904 | file offset 0x0016E8DC | FUN_08971904 | bytes 260 */

void FUN_08971904(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int local_400 [256];
  
  iVar4 = *param_1;
  iVar10 = *(int *)(iVar4 + 0x14);
  iVar9 = 0;
  iVar2 = 0;
  if (0 < iVar10) {
    iVar8 = 0;
    do {
      iVar6 = 0;
      piVar7 = (int *)(iVar4 + *(int *)(iVar4 + 0x18) + iVar8);
      iVar5 = *piVar7;
      if (0 < iVar5) {
        iVar10 = 0;
        piVar11 = local_400 + iVar2;
        do {
          iVar3 = *(int *)(iVar4 + piVar7[1] + iVar10 + 0xc);
          if ((iVar3 != -1) &&
             (iVar3 = *(int *)(iVar4 + *(int *)(iVar4 + 0x10) + iVar3 * 0x18 + 4), iVar3 != -1)) {
            iVar13 = 0;
            bVar1 = 0 < iVar2;
            piVar12 = local_400;
            if (bVar1) {
              do {
                if (*piVar12 == iVar3) break;
                iVar13 = iVar13 + 1;
                bVar1 = iVar13 < iVar2;
                piVar12 = piVar12 + 1;
              } while (bVar1);
            }
            if (!bVar1) {
              *piVar11 = iVar3;
              iVar2 = iVar2 + 1;
              piVar11 = piVar11 + 1;
              iVar5 = *piVar7;
            }
          }
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 0x18;
        } while (iVar6 < iVar5);
        iVar10 = *(int *)(iVar4 + 0x14);
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x34;
    } while (iVar9 < iVar10);
  }
  return;
}

