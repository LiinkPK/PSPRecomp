/* Entry 0x089611DC | file offset 0x0015E1B4 | FUN_089611dc | bytes 640 */

void FUN_089611dc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_10 [4];
  
  iVar4 = *(int *)(param_2 + 0xac);
  iVar1 = *(int *)(iVar4 + 0x24);
  *(undefined4 *)(iVar4 + 0x40) = 1;
  iVar2 = *(int *)(iVar4 + 0x28);
  fVar16 = (float)iVar1;
  if (iVar1 <= *(int *)(iVar4 + 0x14)) {
    fVar16 = (float)*(int *)(iVar4 + 0x14);
  }
  fVar16 = 1.0 / fVar16;
  fVar17 = (float)iVar2;
  if (iVar2 <= *(int *)(iVar4 + 0x18)) {
    fVar17 = (float)*(int *)(iVar4 + 0x18);
  }
  fVar17 = 1.0 / fVar17;
  fVar18 = (float)(iVar1 + -1) / (float)iVar1;
  pfVar3 = (float *)param_1[param_1[6] + 4];
  iVar1 = 0;
  fVar19 = (float)(iVar2 + -1) / (float)iVar2;
  if (0 < param_1[2] + -1) {
    iVar2 = param_1[1];
    while( true ) {
      iVar4 = iVar1 * iVar2 * 0x20;
      pfVar7 = (float *)(*param_1 + iVar4);
      iVar4 = *param_1 + iVar4;
      fVar22 = *(float *)(iVar4 + 0x20);
      fVar8 = *(float *)(iVar4 + 0x28);
      fVar10 = *(float *)(iVar4 + 0x24);
      fVar24 = *(float *)(iVar4 + 0x2c);
      fVar20 = (*pfVar7 + pfVar7[2]) * fVar16;
      pfVar6 = pfVar7 + iVar2 * 8;
      pfVar5 = (float *)(iVar4 + 0x20) + iVar2 * 8;
      fVar14 = (pfVar7[1] + pfVar7[3]) * fVar17;
      fVar12 = *pfVar5;
      fVar11 = pfVar5[2];
      fVar9 = pfVar5[1];
      fVar13 = pfVar5[3];
      fVar15 = (*pfVar6 + pfVar6[2]) * fVar16;
      local_10[0] = fVar20;
      fVar23 = (pfVar6[1] + pfVar6[3]) * fVar17;
      iVar2 = 0;
      local_10[1] = fVar15;
      local_10[2] = fVar14;
      local_10[3] = fVar23;
      do {
        iVar4 = 0;
        pfVar5 = local_10;
        do {
          fVar25 = *pfVar5;
          fVar21 = pfVar5[2];
          if (fVar25 < 0.0) {
            fVar25 = 0.0;
          }
          if (fVar21 < 0.0) {
            fVar21 = 0.0;
          }
          fVar26 = fVar18;
          if (fVar25 <= fVar18) {
            fVar26 = fVar25;
          }
          fVar25 = fVar19;
          if (fVar21 <= fVar19) {
            fVar25 = fVar21;
          }
          *pfVar3 = fVar26;
          pfVar3[1] = fVar25;
          iVar4 = iVar4 + 1;
          pfVar3 = pfVar3 + 5;
          pfVar5 = pfVar5 + 1;
        } while (iVar4 < 2);
        iVar2 = iVar2 + 1;
        local_10[0] = local_10[0] + ((fVar22 + fVar8) * fVar16 - fVar20) * 0.25;
        local_10[1] = local_10[1] + ((fVar12 + fVar11) * fVar16 - fVar15) * 0.25;
        local_10[2] = local_10[2] + ((fVar10 + fVar24) * fVar17 - fVar14) * 0.25;
        local_10[3] = local_10[3] + ((fVar9 + fVar13) * fVar17 - fVar23) * 0.25;
      } while (iVar2 < 5);
      iVar1 = iVar1 + 1;
      if (param_1[2] + -1 <= iVar1) break;
      iVar2 = param_1[1];
    }
  }
  return;
}

