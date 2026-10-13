/* Entry 0x08960BD0 | file offset 0x0015DBA8 | FUN_08960bd0 | bytes 552 */

void FUN_08960bd0(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar6 = *(int *)(param_2 + 0xac);
  iVar3 = *(int *)(iVar6 + 0x24);
  *(undefined4 *)(iVar6 + 0x40) = 1;
  iVar4 = *(int *)(iVar6 + 0x28);
  fVar1 = (float)iVar3;
  if (iVar3 <= *(int *)(iVar6 + 0x14)) {
    fVar1 = (float)*(int *)(iVar6 + 0x14);
  }
  fVar2 = (float)iVar4;
  if (iVar4 <= *(int *)(iVar6 + 0x18)) {
    fVar2 = (float)*(int *)(iVar6 + 0x18);
  }
  fVar9 = (float)(iVar3 + -1) / (float)iVar3;
  pfVar5 = (float *)param_1[param_1[6] + 4];
  iVar6 = param_1[2];
  iVar3 = 0;
  fVar10 = (float)(iVar4 + -1) / (float)iVar4;
  if (0 < iVar6 + -1) {
    iVar4 = param_1[1];
    do {
      iVar8 = 0;
      if (0 < iVar4) {
        iVar6 = 0;
        do {
          pfVar7 = (float *)(*param_1 + iVar6 + iVar3 * iVar4 * 0x20);
          fVar12 = (*pfVar7 + pfVar7[2]) * (1.0 / fVar1);
          fVar11 = (pfVar7[1] + pfVar7[3]) * (1.0 / fVar2);
          if (fVar12 < 0.0) {
            fVar12 = 0.0;
          }
          if (fVar11 < 0.0) {
            fVar11 = 0.0;
          }
          fVar13 = fVar9;
          if (fVar12 <= fVar9) {
            fVar13 = fVar12;
          }
          if (fVar10 < fVar11) {
            *pfVar5 = fVar13;
            fVar11 = fVar10;
          }
          else {
            *pfVar5 = fVar13;
          }
          pfVar5[1] = fVar11;
          pfVar7 = pfVar7 + param_1[1] * 8;
          fVar12 = (*pfVar7 + pfVar7[2]) * (1.0 / fVar1);
          fVar11 = (pfVar7[1] + pfVar7[3]) * (1.0 / fVar2);
          if (fVar12 < 0.0) {
            fVar12 = 0.0;
          }
          if (fVar11 < 0.0) {
            fVar11 = 0.0;
          }
          fVar13 = fVar9;
          if (fVar12 <= fVar9) {
            fVar13 = fVar12;
          }
          fVar12 = fVar10;
          if (fVar11 <= fVar10) {
            fVar12 = fVar11;
          }
          pfVar5[5] = fVar13;
          pfVar5[6] = fVar12;
          iVar4 = param_1[1];
          iVar8 = iVar8 + 1;
          pfVar5 = pfVar5 + 10;
          iVar6 = iVar6 + 0x20;
        } while (iVar8 < iVar4);
        iVar6 = param_1[2];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar6 + -1);
  }
  return;
}

