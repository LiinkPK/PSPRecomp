/* Entry 0x08964EAC | file offset 0x00161E84 | FUN_08964eac | bytes 2092 */

float * FUN_08964eac(int param_1,undefined1 (*param_2) [16],int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float *local_4c;
  float local_48;
  
  piVar9 = *(int **)(*(int *)(param_1 + 0x8c) +
                     (uint)*(ushort *)
                            (*(int *)(*(int *)(param_1 + 0x90) + 8) +
                            (*(int *)(*(int *)(param_1 + 0x90) + 4) + 2) * 2) + 0x60);
  pauVar8 = (undefined1 (*) [16])(*(int *)(param_1 + 0x88) + 0x40);
  iVar14 = piVar9[0xc];
  auVar1 = vmul_q(*param_2,*pauVar8);
  local_100 = auVar1._0_4_;
  local_fc = auVar1._4_4_;
  local_f8 = auVar1._8_4_;
  local_f4 = auVar1._12_4_;
  auVar1 = vsub_q(param_2[1],*param_2);
  fVar20 = auVar1._8_4_;
  fVar21 = auVar1._12_4_;
  auVar1 = vmul_q(auVar1,*pauVar8);
  auVar1 = vscl_q(auVar1,1.0 / (float)(iVar14 + -1));
  local_54 = *(float *)(param_2[3] + 8) * 0.01 * (float)(piVar9[0xc] + -1);
  if (local_54 == 0.0) {
    fVar17 = 1.0;
  }
  else {
    local_54 = 1.0 / local_54;
    fVar17 = 0.0;
  }
  local_50 = 1.0 / (float)(piVar9[0xc] + -1);
  local_58 = 1.0;
  iVar10 = 0x10;
  if (param_2[4][8] != '\0') {
    iVar10 = 0x18;
  }
  local_4c = (float *)FUN_08974a3c(*(undefined4 *)(param_1 + 0xb0),iVar10 * piVar9[0xc] * 4);
  if (local_4c == (float *)0x0) {
    local_4c = (float *)0x0;
  }
  else if (param_2[4][8] == '\0') {
    iVar14 = 0;
    if (0 < piVar9[0xc]) {
      iVar10 = 0;
      pfVar13 = local_4c;
      fVar19 = local_58;
      do {
        auVar7._4_4_ = local_fc;
        auVar7._0_4_ = local_100;
        auVar7._8_4_ = local_f8;
        auVar7._12_4_ = local_f4;
        vpfxt(0,0,0,0);
        auVar4._8_4_ = fVar21;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = 0x437f0000;
        auVar4._12_4_ = 0;
        auVar2 = vmax_q(auVar7,auVar4 << 0x20);
        vpfxt(1,1,1,1);
        auVar5._8_4_ = fVar21;
        auVar5._4_4_ = fVar20;
        auVar5._0_4_ = 0x437f0000;
        auVar5._12_4_ = 0;
        auVar2 = vmin_q(auVar2,auVar5 << 0x20);
        fVar20 = auVar2._8_4_;
        fVar21 = auVar2._12_4_;
        if (1.0 < fVar17) {
          fVar17 = 1.0;
        }
        fVar12 = (float)((int)fVar20 << 0x10 | (int)(fVar21 * fVar17) << 0x18 | (int)auVar2._0_4_ |
                        (int)auVar2._4_4_ << 8);
        FUN_08964990(fVar19,0x3f000000,&local_b0,&local_a0,*piVar9 + iVar10,piVar9[1] + iVar10);
        fVar19 = fVar19 - local_50;
        *pfVar13 = fVar12;
        pfVar13[1] = local_b0;
        pfVar13[2] = local_ac;
        pfVar13[3] = local_a8;
        pfVar13[4] = *pfVar13;
        pfVar13[5] = pfVar13[1];
        pfVar13[6] = pfVar13[2];
        pfVar13[7] = pfVar13[3];
        pfVar13[8] = fVar12;
        pfVar13[9] = local_a0;
        pfVar13[10] = local_9c;
        pfVar13[0xb] = local_98;
        pfVar13[0xc] = pfVar13[8];
        pfVar13[0xd] = pfVar13[9];
        pfVar13[0xe] = pfVar13[10];
        pfVar13[0xf] = pfVar13[0xb];
        pfVar13 = pfVar13 + 0x10;
        fVar17 = fVar17 + local_54;
        auVar2 = vadd_q(auVar2,auVar1);
        local_100 = auVar2._0_4_;
        local_fc = auVar2._4_4_;
        local_f8 = auVar2._8_4_;
        local_f4 = auVar2._12_4_;
        iVar14 = iVar14 + 1;
        iVar10 = iVar10 + 0x20;
      } while (iVar14 < piVar9[0xc]);
    }
  }
  else {
    if (*(int *)(param_2[2] + 0xc) < 0) {
      iVar10 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_1 + 0x88) + 0x1c8) + 0x30) == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x88) + 0x1c8) + 0x30) +
                                *(int *)(param_2[2] + 0xc) * 4) + 0x10);
    }
    if (iVar10 == -1) {
      local_4c = (float *)0x0;
    }
    else {
      iVar10 = **(int **)(**(int **)(param_1 + 0xa4) + iVar10 * 4);
      fVar16 = 1.0 / (float)*(int *)(iVar10 + 0x1c);
      fVar12 = 1.0 / (float)*(int *)(iVar10 + 0x20);
      fVar19 = (float)iVar14;
      if (param_2[4][0xc] == '\0') {
        if (param_2[4][0xd] == '\0') {
          fVar18 = *(float *)(param_3 + 0x10);
          fVar15 = fVar18 + (float)*(ushort *)(param_2[4] + 4);
        }
        else {
          fVar15 = *(float *)(param_3 + 0x10);
          fVar18 = fVar15 + (float)*(ushort *)(param_2[4] + 4);
        }
        fVar18 = fVar18 * fVar16;
        fVar16 = fVar15 * fVar16;
        local_5c = 0.0;
        if (param_2[4][0xe] == '\0') {
          local_60 = ((float)(int)-(uint)*(ushort *)(param_2[4] + 6) * fVar12) / fVar19;
          fVar15 = (*(float *)(param_3 + 0x14) + (float)*(ushort *)(param_2[4] + 6)) * fVar12;
          fVar12 = fVar15;
        }
        else {
          local_60 = ((float)*(ushort *)(param_2[4] + 6) * fVar12) / fVar19;
          fVar15 = *(float *)(param_3 + 0x14) * fVar12;
          fVar12 = fVar15;
        }
      }
      else {
        if (param_2[4][0xe] == '\0') {
          fVar15 = *(float *)(param_3 + 0x14);
          fVar18 = fVar15 + (float)*(ushort *)(param_2[4] + 6);
        }
        else {
          fVar18 = *(float *)(param_3 + 0x14);
          fVar15 = fVar18 + (float)*(ushort *)(param_2[4] + 6);
        }
        fVar15 = fVar15 * fVar12;
        local_60 = 0.0;
        fVar12 = fVar18 * fVar12;
        if (param_2[4][0xd] == '\0') {
          local_5c = ((float)(int)-(uint)*(ushort *)(param_2[4] + 4) * fVar16) / fVar19;
          fVar16 = *(float *)(param_3 + 0x10) + (float)*(ushort *)(param_2[4] + 4) * fVar16;
          fVar18 = fVar16;
        }
        else {
          local_5c = ((float)*(ushort *)(param_2[4] + 4) * fVar16) / fVar19;
          fVar16 = *(float *)(param_3 + 0x10) * fVar16;
          fVar18 = fVar16;
        }
      }
      iVar14 = 0;
      if (0 < piVar9[0xc]) {
        iVar10 = 0;
        pfVar13 = local_4c;
        do {
          fVar19 = local_58;
          auVar6._4_4_ = local_fc;
          auVar6._0_4_ = local_100;
          auVar6._8_4_ = local_f8;
          auVar6._12_4_ = local_f4;
          vpfxt(0,0,0,0);
          auVar2._8_4_ = fVar21;
          auVar2._4_4_ = fVar20;
          auVar2._0_4_ = 0x437f0000;
          auVar2._12_4_ = 0;
          auVar2 = vmax_q(auVar6,auVar2 << 0x20);
          vpfxt(1,1,1,1);
          auVar3._8_4_ = fVar21;
          auVar3._4_4_ = fVar20;
          auVar3._0_4_ = 0x437f0000;
          auVar3._12_4_ = 0;
          auVar2 = vmin_q(auVar2,auVar3 << 0x20);
          fVar20 = auVar2._8_4_;
          fVar21 = auVar2._12_4_;
          if (1.0 < fVar17) {
            fVar17 = 1.0;
          }
          fVar11 = (float)((int)fVar20 << 0x10 | (int)(fVar21 * fVar17) << 0x18 | (int)auVar2._0_4_
                          | (int)auVar2._4_4_ << 8);
          local_48 = fVar17;
          FUN_08964990(local_58,0x3f000000,&local_d0,&local_c0,*piVar9 + iVar10,piVar9[1] + iVar10);
          local_58 = fVar19 - local_50;
          *pfVar13 = fVar18;
          pfVar13[1] = fVar12;
          pfVar13[2] = fVar11;
          pfVar13[3] = local_d0;
          pfVar13[4] = local_cc;
          pfVar13[5] = local_c8;
          pfVar13[6] = *pfVar13;
          pfVar13[7] = pfVar13[1];
          pfVar13[8] = pfVar13[2];
          pfVar13[9] = pfVar13[3];
          pfVar13[10] = pfVar13[4];
          pfVar13[0xb] = pfVar13[5];
          pfVar13[0xc] = fVar16;
          pfVar13[0xd] = fVar15;
          pfVar13[0xe] = fVar11;
          pfVar13[0xf] = local_c0;
          pfVar13[0x10] = local_bc;
          pfVar13[0x11] = local_b8;
          pfVar13[0x12] = pfVar13[0xc];
          pfVar13[0x13] = pfVar13[0xd];
          pfVar13[0x14] = pfVar13[0xe];
          pfVar13[0x15] = pfVar13[0xf];
          pfVar13[0x16] = pfVar13[0x10];
          pfVar13[0x17] = pfVar13[0x11];
          pfVar13 = pfVar13 + 0x18;
          fVar17 = local_48 + local_54;
          fVar18 = local_5c + fVar18;
          fVar12 = local_60 + fVar12;
          fVar16 = local_5c + fVar16;
          fVar15 = local_60 + fVar15;
          auVar2 = vadd_q(auVar2,auVar1);
          local_100 = auVar2._0_4_;
          local_fc = auVar2._4_4_;
          local_f8 = auVar2._8_4_;
          local_f4 = auVar2._12_4_;
          iVar14 = iVar14 + 1;
          iVar10 = iVar10 + 0x20;
        } while (iVar14 < piVar9[0xc]);
      }
    }
  }
  return local_4c;
}

