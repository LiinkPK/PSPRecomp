/* Entry 0x089883E4 | file offset 0x001853BC | FUN_089883e4 | bytes 1036 */

void FUN_089883e4(float *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int local_50 [3];
  float local_44 [4];
  
  piVar4 = local_50;
  piVar5 = local_50;
  piVar7 = *(int **)(*(int *)(param_2 + 0x8c) +
                     (uint)*(ushort *)
                            (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                            (*(int *)(*(int *)(param_2 + 0x90) + 4) + (int)param_1[0x2f]) * 2) +
                    0x60);
  local_50[0] = 2;
  local_50[1] = 3;
  local_50[2] = 4;
  iVar6 = local_50[(int)param_1[6]];
  local_44[2] = 1.0 / (param_1[4] - 1.0);
  fVar13 = 1.0 / (param_1[5] - 1.0);
  if (param_1[0x38] == 0.0) {
    fVar10 = 1.0;
    fVar1 = param_1[8];
  }
  else {
    fVar10 = 100.0 / param_1[0x38];
    fVar1 = param_1[8];
  }
  iVar15 = (int)fVar1 / iVar6;
  fVar1 = (float)piVar7[7];
  if (fVar1 != 1.0) {
    iVar15 = iVar15 + -1;
  }
  fVar12 = param_1[2] * local_44[2];
  fVar11 = param_1[3] * fVar13;
  pfVar8 = (float *)param_1[7];
  fVar9 = 1.0 / (float)(*piVar7 + -1);
  local_44[2] = *param_1 * local_44[2];
  fVar13 = param_1[1] * fVar13;
  if (*(char *)((int)param_1 + 0xf2) == '\0') {
    fVar13 = fVar13 - fVar11;
    fVar9 = (float)FUN_08867e7c(fVar9 * fVar13 * fVar10);
    fVar10 = param_1[6];
    if ((int)fVar10 < 1) {
      if (-1 < (int)fVar10) {
        local_44[0] = fVar12;
        local_44[1] = local_44[2];
      }
    }
    else if ((int)fVar10 < 2) {
      local_44[0] = fVar12;
      local_44[1] = (fVar12 + local_44[2]) * 0.5;
    }
    else if ((int)fVar10 < 3) {
      local_44[0] = fVar12;
      fVar10 = (1.0 - param_1[0x28]) * 0.5;
      local_44[3] = local_44[2];
      local_44[1] = (local_44[2] - fVar12) * fVar10 + fVar12;
      local_44[2] = (fVar12 - local_44[2]) * fVar10 + local_44[2];
    }
    iVar2 = 0;
    if (0 < iVar15) {
      do {
        iVar3 = 0;
        piVar5 = local_50;
        if (0 < iVar6) {
          do {
            fVar10 = *(float *)((int)piVar5 + 0xc);
            pfVar8[1] = fVar11;
            *pfVar8 = fVar10;
            iVar3 = iVar3 + 1;
            pfVar8 = pfVar8 + 6;
            piVar5 = (int *)((int)piVar5 + 4);
          } while (iVar3 < iVar6);
        }
        iVar2 = iVar2 + 1;
        fVar11 = fVar11 + fVar9 * fVar13;
      } while (iVar2 < iVar15);
    }
    if (fVar1 != 1.0) {
      iVar15 = 0;
      if (0 < iVar6) {
        do {
          fVar10 = *(float *)((int)piVar4 + 0xc);
          pfVar8[1] = fVar11 - fVar9 * (1.0 - fVar1) * fVar13;
          *pfVar8 = fVar10;
          iVar15 = iVar15 + 1;
          pfVar8 = pfVar8 + 6;
          piVar4 = (int *)((int)piVar4 + 4);
        } while (iVar15 < iVar6);
      }
    }
  }
  else {
    fVar14 = local_44[2] - fVar12;
    fVar9 = (float)FUN_08867e7c(fVar9 * fVar14 * fVar10);
    fVar10 = param_1[6];
    if ((int)fVar10 < 1) {
      if (-1 < (int)fVar10) {
        local_44[0] = fVar11;
        local_44[1] = fVar13;
      }
    }
    else if ((int)fVar10 < 2) {
      local_44[0] = fVar11;
      local_44[2] = fVar13;
      local_44[1] = (fVar11 + fVar13) * 0.5;
    }
    else if ((int)fVar10 < 3) {
      local_44[0] = fVar11;
      fVar10 = (1.0 - param_1[0x28]) * 0.5;
      local_44[3] = fVar13;
      local_44[1] = (fVar13 - fVar11) * fVar10 + fVar11;
      local_44[2] = (fVar11 - fVar13) * fVar10 + fVar13;
    }
    iVar2 = 0;
    if (0 < iVar15) {
      do {
        iVar3 = 0;
        piVar4 = local_50;
        if (0 < iVar6) {
          do {
            *pfVar8 = fVar12;
            iVar3 = iVar3 + 1;
            pfVar8[1] = *(float *)((int)piVar4 + 0xc);
            pfVar8 = pfVar8 + 6;
            piVar4 = (int *)((int)piVar4 + 4);
          } while (iVar3 < iVar6);
        }
        iVar2 = iVar2 + 1;
        fVar12 = fVar12 + fVar9 * fVar14;
      } while (iVar2 < iVar15);
    }
    if (fVar1 != 1.0) {
      iVar15 = 0;
      if (0 < iVar6) {
        do {
          *pfVar8 = fVar12 - fVar9 * (1.0 - fVar1) * fVar14;
          iVar15 = iVar15 + 1;
          pfVar8[1] = *(float *)((int)piVar5 + 0xc);
          pfVar8 = pfVar8 + 6;
          piVar5 = (int *)((int)piVar5 + 4);
        } while (iVar15 < iVar6);
      }
    }
  }
  return;
}

