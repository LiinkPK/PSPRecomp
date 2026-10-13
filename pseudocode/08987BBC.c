/* Entry 0x08987BBC | file offset 0x00184B94 | FUN_08987bbc | bytes 676 */

void FUN_08987bbc(int param_1,int param_2)

{
  char cVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [12];
  undefined1 (*pauVar8) [12];
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_30 [4];
  int local_20 [3];
  float local_14 [5];
  
  piVar9 = *(int **)(*(int *)(param_2 + 0x8c) +
                     (uint)*(ushort *)
                            (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                            (*(int *)(*(int *)(param_2 + 0x90) + 4) + *(int *)(param_1 + 0xbc)) * 2)
                    + 0x60);
  cVar1 = *(char *)(param_1 + 0xb0);
  pauVar8 = (undefined1 (*) [12])piVar9[3];
  pauVar7 = (undefined1 (*) [12])piVar9[4];
  fVar17 = (float)(*piVar9 + -1);
  if (*piVar9 + -1 < 0) {
    fVar17 = fVar17 + 4.2949673e+09;
  }
  local_20[0] = 2;
  local_20[1] = 3;
  local_20[2] = 4;
  iVar14 = local_20[*(int *)(param_1 + 0x18)];
  iVar13 = 0;
  fVar18 = ((*(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa8)) / fVar17) * 0.5;
  fVar17 = (1.0 - *(float *)(param_1 + 0xa4)) * 0.5;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    iVar6 = 0x18;
    iVar5 = *(int *)(param_1 + 0x1c) + 0xc;
  }
  else {
    iVar6 = 0x10;
    iVar5 = *(int *)(param_1 + 0x1c) + 4;
  }
  if (*piVar9 == piVar9[5]) {
    iVar12 = piVar9[5];
  }
  else {
    iVar12 = piVar9[5] + 1;
  }
  iVar11 = 0;
  if (0 < iVar12) {
    fVar19 = 1.0 - *(float *)(param_1 + 0xa0);
    do {
      iVar16 = 0;
      piVar15 = local_30;
      if (0 < iVar14) {
        do {
          *piVar15 = iVar5;
          iVar16 = iVar16 + 1;
          iVar5 = iVar5 + iVar6;
          iVar13 = iVar13 + 1;
          piVar15 = piVar15 + 1;
        } while (iVar16 < iVar14);
      }
      local_14[0] = fVar17;
      if (iVar11 == 0) {
        if (cVar1 != '\0') {
          local_14[0] = fVar17 + (0.5 - fVar17) * 0.5;
        }
        local_14[1] = fVar17 + (0.5 - fVar17) * fVar19;
        fVar17 = fVar18 + fVar17;
      }
      else if (iVar11 < iVar12 + -1) {
        local_14[1] = fVar17 + (0.5 - fVar17) * fVar19;
        fVar17 = fVar18 + fVar17;
      }
      else {
        local_14[0] = fVar17 + fVar18 * ((float)piVar9[7] - 1.0);
        local_14[1] = local_14[0] + (0.5 - local_14[0]) * fVar19;
        fVar17 = fVar18 + local_14[0];
      }
      iVar16 = *(int *)(param_1 + 0x18);
      if (iVar16 < 1) {
        if (-1 < iVar16) {
          local_14[1] = 1.0 - local_14[0];
        }
      }
      else if (iVar16 < 2) {
        local_14[1] = 0.5;
        local_14[2] = 1.0 - local_14[0];
      }
      else if (iVar16 < 3) {
        local_14[2] = 1.0 - local_14[1];
        local_14[3] = 1.0 - local_14[0];
      }
      auVar4 = *pauVar8;
      auVar2 = vsub_t(*pauVar7,*pauVar8);
      iVar16 = 0;
      piVar15 = local_30;
      if (0 < iVar14) {
        do {
          auVar3 = vscl_t(auVar2,piVar15[7]);
          auVar3 = vadd_t(auVar3,auVar4);
          puVar10 = (undefined4 *)*piVar15;
          *puVar10 = auVar3._0_4_;
          puVar10[1] = auVar3._4_4_;
          puVar10[2] = auVar3._8_4_;
          iVar16 = iVar16 + 1;
          piVar15 = piVar15 + 1;
        } while (iVar16 < iVar14);
      }
      iVar11 = iVar11 + 1;
      pauVar8 = (undefined1 (*) [12])(pauVar8[1] + 4);
      pauVar7 = (undefined1 (*) [12])(pauVar7[1] + 4);
    } while (iVar11 < iVar12);
  }
  *(int *)(param_1 + 0x20) = iVar13;
  return;
}

