/* Entry 0x08969A04 | file offset 0x001669DC | FUN_08969a04 | bytes 1392 */

void FUN_08969a04(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 (*pauVar9) [64];
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 (*pauVar17) [12];
  undefined1 (*pauVar18) [12];
  undefined1 (*pauVar19) [12];
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  iVar11 = *(int *)(param_2 + 0x8c) +
           (uint)*(ushort *)
                  (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                  (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  *(bool *)(param_1 + 6) = *(char *)((int)param_3 + 0x2f) != '\0';
  pauVar9 = *(undefined1 (**) [64])(*(int *)(param_2 + 0x8c) + 0x50);
  puVar12 = (undefined4 *)param_1[1];
  uVar27 = vone_s();
  auVar4._12_4_ = uVar27;
  auVar4._8_4_ = *(undefined4 *)(iVar11 + 0x68);
  auVar4._4_4_ = *(undefined4 *)(iVar11 + 100);
  auVar4._0_4_ = *(undefined4 *)(iVar11 + 0x60);
  auVar4 = vtfm4_q(*pauVar9,auVar4);
  *puVar12 = auVar4._0_4_;
  puVar12[1] = auVar4._4_4_;
  puVar12[2] = auVar4._8_4_;
  puVar12[3] = auVar4._12_4_;
  uVar27 = param_3[7];
  fVar23 = (float)param_3[8] * 0.4;
  fVar21 = 0.0;
  fVar22 = (float)param_3[9];
  iVar14 = *param_1;
  iVar13 = 0;
  iVar11 = 0;
  if (0 < iVar14 + -1) {
    iVar20 = 0;
    iVar15 = 0;
    do {
      pauVar19 = (undefined1 (*) [12])(param_1[1] + iVar20);
      iVar16 = param_1[1] + iVar20;
      iVar13 = iVar13 + 1;
      pauVar17 = (undefined1 (*) [12])(iVar16 + 0x10);
      if (param_1[5] <= iVar13) {
        auVar1 = vsub_t(*pauVar19,*pauVar17);
        uVar24 = vdot_t(auVar1,auVar1);
        fVar25 = (float)vsqrt_s(uVar24);
        if (fVar25 < *(float *)(param_1[2] + iVar15)) {
          param_1[7] = (int)(fVar25 / *(float *)(param_1[2] + iVar15));
          break;
        }
        param_1[7] = 0x3f800000;
        param_1[5] = param_1[5] + 1;
      }
      pauVar18 = (undefined1 (*) [12])(param_1[10] + iVar20);
      uVar24 = vdot_t(*pauVar18,*pauVar18);
      uVar26 = vzero_s();
      uVar28 = vcmp_s(8,uVar24,*(undefined4 *)*pauVar18);
      vrsq_s(uVar24);
      uVar24 = vcmovt_s(uVar26,(byte)uVar28 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar18,uVar24);
      vone_s();
      auVar2 = vscl_t(auVar1,uVar27);
      vzero_s();
      pauVar18 = (undefined1 (*) [12])(param_1[9] + iVar20 + 0x10);
      uVar24 = vdot_t(*pauVar18,*pauVar18);
      uVar26 = vzero_s();
      uVar28 = vcmp_s(8,uVar24,*(undefined4 *)*pauVar18);
      vrsq_s(uVar24);
      uVar24 = vcmovt_s(uVar26,(byte)uVar28 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar18,uVar24);
      vone_s();
      auVar3 = vscl_t(auVar1,fVar23);
      vzero_s();
      fVar21 = fVar22 / (float)iVar14 + fVar21;
      fVar23 = fVar23 - fVar23 * fVar21;
      auVar1 = vsub_t(*pauVar17,*pauVar19);
      vzero_s();
      uVar24 = vdot_t(auVar1,auVar1);
      uVar26 = vzero_s();
      uVar28 = vcmp_s(8,uVar24,auVar1._0_4_);
      vrsq_s(uVar24);
      uVar24 = vcmovt_s(uVar26,(byte)uVar28 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar1,uVar24);
      vone_s();
      auVar1 = vadd_t(auVar1,auVar2);
      vone_s();
      auVar1 = vadd_t(auVar1,auVar3);
      vone_s();
      uVar24 = vdot_t(auVar1,auVar1);
      uVar26 = vzero_s();
      uVar28 = vcmp_s(8,uVar24,auVar1._0_4_);
      vrsq_s(uVar24);
      uVar24 = vcmovt_s(uVar26,(byte)uVar28 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar1,uVar24);
      vone_s();
      auVar1 = vscl_t(auVar1,*(undefined4 *)(param_1[2] + iVar15));
      vzero_s();
      auVar1 = vadd_t(*pauVar19,auVar1);
      uVar24 = vone_s();
      iVar10 = param_1[9] + iVar20;
      auVar2 = vsub_t(auVar1,*pauVar17);
      uVar26 = vzero_s();
      *(int *)(iVar10 + 0x10) = auVar2._0_4_;
      *(int *)(iVar10 + 0x14) = auVar2._4_4_;
      *(int *)(iVar10 + 0x18) = auVar2._8_4_;
      *(undefined4 *)(iVar10 + 0x1c) = uVar26;
      *(int *)*pauVar17 = auVar1._0_4_;
      *(int *)(iVar16 + 0x14) = auVar1._4_4_;
      *(int *)(iVar16 + 0x18) = auVar1._8_4_;
      *(undefined4 *)(iVar16 + 0x1c) = uVar24;
      puVar12 = (undefined4 *)(param_1[10] + iVar20);
      auVar1 = vsub_t(*pauVar17,*pauVar19);
      uVar24 = vzero_s();
      *puVar12 = auVar1._0_4_;
      puVar12[1] = auVar1._4_4_;
      puVar12[2] = auVar1._8_4_;
      puVar12[3] = uVar24;
      iVar11 = iVar11 + 1;
      iVar20 = iVar20 + 0x10;
      iVar15 = iVar15 + 4;
    } while (iVar11 < *param_1 + -1);
  }
  if (*(char *)((int)param_3 + 0x2f) != '\0') {
    auVar7._60_4_ = 0x3f800000;
    auVar7._0_60_ = ZEXT4860(*(undefined1 (*) [48])*pauVar9);
    uVar27 = vone_s();
    auVar5._12_4_ = uVar27;
    auVar5._8_4_ = -(float)param_3[2];
    auVar5._4_4_ = -(float)param_3[1];
    auVar5._0_4_ = *param_3;
    auVar4 = vtfm4_q(auVar7,auVar5);
    auVar8._60_4_ = 0x3f800000;
    auVar8._0_60_ = ZEXT4860(*(undefined1 (*) [48])*pauVar9);
    uVar27 = vone_s();
    auVar6._12_4_ = uVar27;
    auVar6._8_4_ = -(float)param_3[6];
    auVar6._4_4_ = -(float)param_3[5];
    auVar6._0_4_ = param_3[4];
    auVar5 = vtfm4_q(auVar8,auVar6);
    iVar13 = 0;
    iVar11 = 0;
    if (0 < *param_1) {
      do {
        puVar12 = (undefined4 *)(param_1[3] + iVar11);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar11),auVar4._0_12_);
        uVar27 = vone_s();
        *puVar12 = auVar1._0_4_;
        puVar12[1] = auVar1._4_4_;
        puVar12[2] = auVar1._8_4_;
        puVar12[3] = uVar27;
        puVar12 = (undefined4 *)(param_1[4] + iVar11);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar11),auVar5._0_12_);
        uVar27 = vone_s();
        *puVar12 = auVar1._0_4_;
        puVar12[1] = auVar1._4_4_;
        puVar12[2] = auVar1._8_4_;
        puVar12[3] = uVar27;
        iVar13 = iVar13 + 1;
        iVar11 = iVar11 + 0x10;
      } while (iVar13 < *param_1);
    }
  }
  return;
}

