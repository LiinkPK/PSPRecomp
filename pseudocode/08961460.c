/* Entry 0x08961460 | file offset 0x0015E438 | FUN_08961460 | bytes 808 */

void FUN_08961460(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [4];
  
  iVar4 = *(int *)(param_2 + 0xac);
  iVar1 = *(int *)(iVar4 + 0x24);
  *(undefined4 *)(iVar4 + 0x40) = 1;
  iVar2 = *(int *)(iVar4 + 0x28);
  fVar13 = (float)iVar1;
  if (iVar1 <= *(int *)(iVar4 + 0x14)) {
    fVar13 = (float)*(int *)(iVar4 + 0x14);
  }
  fVar13 = 1.0 / fVar13;
  fVar14 = (float)iVar2;
  if (iVar2 <= *(int *)(iVar4 + 0x18)) {
    fVar14 = (float)*(int *)(iVar4 + 0x18);
  }
  fVar14 = 1.0 / fVar14;
  fVar15 = (float)(iVar1 + -1) / (float)iVar1;
  pfVar3 = (float *)param_1[param_1[6] + 4];
  iVar1 = 0;
  fVar16 = (float)(iVar2 + -1) / (float)iVar2;
  if (0 < param_1[2] + -1) {
    iVar2 = param_1[1];
    while( true ) {
      iVar4 = iVar1 * iVar2 * 0x20;
      pfVar7 = (float *)(*param_1 + iVar4);
      iVar4 = *param_1 + iVar4;
      pfVar8 = pfVar7 + iVar2 * 8;
      fVar9 = (*(float *)(iVar4 + 0x20) + *(float *)(iVar4 + 0x28)) * fVar13;
      pfVar6 = (float *)(iVar4 + 0x20) + iVar2 * 8;
      local_10[0] = (*pfVar7 + pfVar7[2]) * fVar13;
      pfVar5 = (float *)(iVar4 + 0x40) + iVar2 * 8;
      fVar11 = (*pfVar6 + pfVar6[2]) * fVar13;
      local_10[1] = (*pfVar8 + pfVar8[2]) * fVar13;
      fVar10 = (*(float *)(iVar4 + 0x24) + *(float *)(iVar4 + 0x2c)) * fVar14;
      local_30[0] = (fVar9 - local_10[0]) * 0.5;
      local_10[2] = (pfVar7[1] + pfVar7[3]) * fVar14;
      fVar12 = (pfVar6[1] + pfVar6[3]) * fVar14;
      local_30[1] = ((*(float *)(iVar4 + 0x40) + *(float *)(iVar4 + 0x48)) * fVar13 - fVar9) * 0.5;
      local_10[3] = (pfVar8[1] + pfVar8[3]) * fVar14;
      local_30[3] = ((*pfVar5 + pfVar5[2]) * fVar13 - fVar11) * 0.5;
      local_30[2] = (fVar11 - local_10[1]) * 0.5;
      iVar2 = 0;
      local_1c = ((*(float *)(iVar4 + 0x44) + *(float *)(iVar4 + 0x4c)) * fVar14 - fVar10) * 0.5;
      local_20 = (fVar10 - local_10[2]) * 0.5;
      local_14 = ((pfVar6[1] + pfVar5[3]) * fVar14 - fVar12) * 0.5;
      local_18 = (fVar12 - local_10[3]) * 0.5;
      do {
        iVar4 = 0;
        pfVar5 = local_30;
        do {
          fVar10 = *(float *)((int)pfVar5 + 0x20);
          fVar9 = *(float *)((int)pfVar5 + 0x28);
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          if (fVar9 < 0.0) {
            fVar9 = 0.0;
          }
          fVar11 = fVar15;
          if (fVar10 <= fVar15) {
            fVar11 = fVar10;
          }
          fVar10 = fVar16;
          if (fVar9 <= fVar16) {
            fVar10 = fVar9;
          }
          *pfVar3 = fVar11;
          pfVar3[1] = fVar10;
          iVar4 = iVar4 + 1;
          pfVar3 = pfVar3 + 5;
          pfVar5 = (float *)((int)pfVar5 + 4);
        } while (iVar4 < 2);
        iVar4 = iVar2 / 3;
        iVar2 = iVar2 + 1;
        local_10[0] = local_10[0] + local_30[iVar4];
        local_10[1] = local_10[1] + local_30[iVar4 + 2];
        local_10[2] = local_10[2] + local_30[iVar4 + 4];
        local_10[3] = local_10[3] + local_30[iVar4 + 6];
      } while (iVar2 < 5);
      iVar1 = iVar1 + 1;
      if (param_1[2] + -1 <= iVar1) break;
      iVar2 = param_1[1];
    }
  }
  return;
}

