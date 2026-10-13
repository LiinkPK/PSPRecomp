/* Entry 0x08987848 | file offset 0x00184820 | FUN_08987848 | bytes 884 */

void FUN_08987848(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  int iVar6;
  undefined1 (*pauVar7) [12];
  undefined1 (*pauVar8) [12];
  undefined1 (*pauVar9) [12];
  undefined4 *puVar10;
  undefined1 (*pauVar11) [12];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  undefined1 *puVar19;
  undefined1 (*pauVar20) [12];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 local_c0 [64];
  int local_60 [4];
  int local_50 [3];
  float local_44 [5];
  
  piVar18 = *(int **)(*(int *)(param_2 + 0x8c) +
                      (uint)*(ushort *)
                             (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                             (*(int *)(*(int *)(param_2 + 0x90) + 4) + *(int *)(param_1 + 0xbc)) * 2
                             ) + 0x60);
  fVar24 = *(float *)(param_1 + 0x9c);
  fVar21 = *(float *)(param_1 + 0xa0);
  fVar25 = *(float *)(param_1 + 0xa4);
  fVar26 = *(float *)(param_1 + 0xa8);
  cVar1 = *(char *)(param_1 + 0xb0);
  FUN_089a405c(local_c0,param_3);
  uVar27 = vone_s();
  auVar4 = vtfm4_q(local_c0,ZEXT416(uVar27) << 0x60);
  fVar22 = fVar24 * 0.5;
  fVar26 = fVar25 - fVar26;
  fVar23 = (fVar22 * fVar26) / (float)(*piVar18 + -1);
  fVar22 = fVar25 * fVar22;
  fVar21 = fVar24 * fVar21 * 0.5;
  fVar26 = (fVar21 * fVar26) / (float)(*piVar18 + -1);
  fVar21 = fVar21 * fVar25;
  pauVar8 = (undefined1 (*) [12])piVar18[1];
  iVar12 = 0;
  local_50[0] = 2;
  local_50[1] = 3;
  local_50[2] = 4;
  iVar13 = local_50[*(int *)(param_1 + 0x18)];
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    iVar6 = 0x18;
    iVar14 = *(int *)(param_1 + 0x1c) + 0xc;
  }
  else {
    iVar6 = 0x10;
    iVar14 = *(int *)(param_1 + 0x1c) + 4;
  }
  if (*piVar18 == piVar18[5]) {
    iVar15 = piVar18[5];
  }
  else {
    iVar15 = piVar18[5] + 1;
  }
  iVar16 = 0;
  if (0 < iVar15) {
    pauVar20 = (undefined1 (*) [12])(pauVar8[2] + 8);
    pauVar9 = pauVar8;
    pauVar11 = (undefined1 (*) [12])(pauVar8[1] + 4);
    do {
      pauVar7 = pauVar20;
      iVar17 = 0;
      puVar19 = local_c0;
      if (0 < iVar13) {
        do {
          *(int *)(puVar19 + 0x60) = iVar14;
          iVar17 = iVar17 + 1;
          iVar14 = iVar14 + iVar6;
          iVar12 = iVar12 + 1;
          puVar19 = puVar19 + 4;
        } while (iVar17 < iVar13);
      }
      pauVar20 = pauVar11;
      local_44[2] = fVar21;
      local_44[3] = fVar22;
      if (iVar16 == 0) {
        if (cVar1 != '\0') {
          local_44[3] = fVar22 * 0.5;
          local_44[2] = fVar21 * 0.5;
        }
      }
      else if (iVar15 + -1 <= iVar16) {
        pauVar20 = pauVar9;
        local_44[2] = fVar21 + fVar26 * (1.0 - (float)piVar18[7]);
        local_44[3] = fVar22 + fVar23 * (1.0 - (float)piVar18[7]);
      }
      iVar17 = *(int *)(param_1 + 0x18);
      if (iVar17 < 1) {
        if (-1 < iVar17) {
          local_44[1] = local_44[3];
          local_44[0] = -local_44[3];
        }
      }
      else if (iVar17 < 2) {
        local_44[1] = 0.0;
        local_44[0] = -local_44[3];
        local_44[2] = local_44[3];
      }
      else if (iVar17 < 3) {
        local_44[0] = -local_44[3];
        local_44[1] = -local_44[2];
      }
      auVar5 = *pauVar9;
      auVar2 = vsub_t(*pauVar20,*pauVar8);
      auVar3 = vsub_t(auVar4._0_12_,*pauVar9);
      auVar2 = vcrsp_t(auVar2,auVar3);
      uVar28 = vdot_t(auVar2,auVar2);
      uVar29 = vzero_s();
      uVar30 = vcmp_s(8,uVar28,*(undefined4 *)*pauVar8);
      vrsq_s(uVar28);
      uVar28 = vcmovt_s(uVar29,(byte)uVar30 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(auVar2,uVar28);
      iVar17 = 0;
      puVar19 = local_c0;
      if (0 < iVar13) {
        do {
          auVar3 = vscl_t(auVar2,*(undefined4 *)(puVar19 + 0x7c));
          auVar3 = vadd_t(auVar3,auVar5);
          puVar10 = *(undefined4 **)(puVar19 + 0x60);
          *puVar10 = auVar3._0_4_;
          puVar10[1] = auVar3._4_4_;
          puVar10[2] = auVar3._8_4_;
          iVar17 = iVar17 + 1;
          puVar19 = puVar19 + 4;
        } while (iVar17 < iVar13);
      }
      fVar22 = fVar22 - fVar23;
      fVar21 = fVar21 - fVar26;
      iVar16 = iVar16 + 1;
      pauVar20 = (undefined1 (*) [12])(pauVar7[1] + 4);
      pauVar8 = pauVar9;
      pauVar9 = pauVar11;
      pauVar11 = pauVar7;
    } while (iVar16 < iVar15);
  }
  *(int *)(param_1 + 0x20) = iVar12;
  return;
}

