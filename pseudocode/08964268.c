/* Entry 0x08964268 | file offset 0x00161240 | FUN_08964268 | bytes 1832 */

void FUN_08964268(undefined4 param_1,int param_2,float *param_3,undefined4 *param_4)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 (*local_5c) [12];
  float *local_4c;
  int local_48;
  float *local_44;
  undefined1 auVar10 [64];
  
  fVar18 = 0.0;
  local_48 = 0x89e0000;
  local_5c = (undefined1 (*) [12])local_160;
  iVar14 = *(int *)(param_2 + 0x8c);
  puVar13 = *(undefined1 **)
             (*(int *)(iVar14 + 0x48) +
             (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
  local_4c = param_3;
  local_44 = param_3;
  FUN_08946ac4(0x3dcccccd,param_2,iVar14,*(undefined4 *)(iVar14 + 0x50),*puVar13,1,puVar13[3],
               &local_150);
  *param_4 = local_150;
  param_4[1] = local_14c;
  param_4[2] = local_148;
  param_4[3] = local_144;
  param_4[4] = local_140;
  param_4[5] = local_13c;
  param_4[6] = local_138;
  param_4[7] = local_134;
  param_4[8] = local_130;
  param_4[9] = local_12c;
  param_4[10] = local_128;
  param_4[0xb] = local_124;
  param_4[0xc] = local_120;
  param_4[0xd] = local_11c;
  param_4[0xe] = local_118;
  param_4[0xf] = local_114;
  auVar3._60_4_ = DAT_089da278[0xf];
  auVar3._56_4_ = DAT_089da278[0xb];
  auVar3._52_4_ = DAT_089da278[7];
  auVar3._48_4_ = DAT_089da278[3];
  auVar3._44_4_ = DAT_089da278[0xe];
  auVar3._40_4_ = DAT_089da278[10];
  auVar3._36_4_ = DAT_089da278[6];
  auVar3._32_4_ = DAT_089da278[2];
  auVar3._28_4_ = DAT_089da278[0xd];
  auVar3._24_4_ = DAT_089da278[9];
  auVar3._20_4_ = DAT_089da278[5];
  auVar3._16_4_ = DAT_089da278[1];
  auVar3._12_4_ = DAT_089da278[0xc];
  auVar3._8_4_ = DAT_089da278[8];
  auVar3._4_4_ = DAT_089da278[4];
  auVar3._0_4_ = *DAT_089da278;
  auVar4._60_4_ = local_114;
  auVar4._56_4_ = local_124;
  auVar4._52_4_ = local_134;
  auVar4._48_4_ = local_144;
  auVar4._44_4_ = local_118;
  auVar4._40_4_ = local_128;
  auVar4._36_4_ = local_138;
  auVar4._32_4_ = local_148;
  auVar4._28_4_ = local_11c;
  auVar4._24_4_ = local_12c;
  auVar4._20_4_ = local_13c;
  auVar4._16_4_ = local_14c;
  auVar4._12_4_ = local_120;
  auVar4._8_4_ = local_130;
  auVar4._4_4_ = local_140;
  auVar4._0_4_ = local_150;
  auVar3 = vmmul_q(auVar3,auVar4);
  uVar19 = auVar3._0_4_;
  auVar11._4_4_ = auVar3._16_4_;
  auVar11._0_4_ = uVar19;
  auVar11._8_4_ = auVar3._32_4_;
  auVar11._12_4_ = auVar3._48_4_;
  auVar11._16_4_ = auVar3._4_4_;
  auVar11._20_4_ = auVar3._20_4_;
  auVar11._24_4_ = auVar3._36_4_;
  auVar11._28_4_ = auVar3._52_4_;
  auVar11._32_4_ = auVar3._8_4_;
  auVar11._36_4_ = auVar3._24_4_;
  auVar11._40_4_ = auVar3._40_4_;
  auVar11._44_4_ = auVar3._56_4_;
  auVar11._48_4_ = auVar3._12_4_;
  auVar11._52_4_ = auVar3._28_4_;
  auVar11._56_4_ = auVar3._44_4_;
  auVar11._60_4_ = auVar3._60_4_;
  uVar20 = vone_s();
  auVar5._12_4_ = uVar20;
  auVar5._8_4_ = DAT_089da098;
  auVar5._4_4_ = DAT_089da094;
  auVar5._0_4_ = DAT_089da090;
  auVar5 = vtfm4_q(auVar11,auVar5);
  uVar21 = vcmp_s(8,auVar5._12_4_,uVar19);
  if ((uVar21 & 1) == 0) {
    uVar20 = vrcp_s(auVar5._12_4_);
    vscl_p(auVar5._0_8_,uVar20);
  }
  else {
    vzero_s();
  }
  auVar8._60_4_ = DAT_089da280[0xf];
  auVar8._56_4_ = DAT_089da280[0xb];
  auVar8._52_4_ = DAT_089da280[7];
  auVar8._48_4_ = DAT_089da280[3];
  auVar8._44_4_ = DAT_089da280[0xe];
  auVar8._40_4_ = DAT_089da280[10];
  auVar8._36_4_ = DAT_089da280[6];
  auVar8._32_4_ = DAT_089da280[2];
  auVar8._28_4_ = DAT_089da280[0xd];
  auVar8._24_4_ = DAT_089da280[9];
  auVar8._20_4_ = DAT_089da280[5];
  auVar8._16_4_ = DAT_089da280[1];
  auVar8._12_4_ = DAT_089da280[0xc];
  auVar8._8_4_ = DAT_089da280[8];
  auVar8._4_4_ = DAT_089da280[4];
  auVar8._0_4_ = *DAT_089da280;
  auVar4 = vmmul_q(auVar8,auVar3);
  auVar12._4_4_ = auVar4._16_4_;
  auVar12._0_4_ = auVar4._0_4_;
  auVar12._8_4_ = auVar4._32_4_;
  auVar12._12_4_ = auVar4._48_4_;
  auVar12._16_4_ = auVar4._4_4_;
  auVar12._20_4_ = auVar4._20_4_;
  auVar12._24_4_ = auVar4._36_4_;
  auVar12._28_4_ = auVar4._52_4_;
  auVar12._32_4_ = auVar4._8_4_;
  auVar12._36_4_ = auVar4._24_4_;
  auVar12._40_4_ = auVar4._40_4_;
  auVar12._44_4_ = auVar4._56_4_;
  auVar12._48_4_ = auVar4._12_4_;
  auVar12._52_4_ = auVar4._28_4_;
  auVar12._56_4_ = auVar4._44_4_;
  auVar12._60_4_ = auVar4._60_4_;
  uVar20 = vone_s();
  auVar7._12_4_ = uVar20;
  auVar7._8_4_ = DAT_089da098;
  auVar7._4_4_ = DAT_089da094;
  auVar7._0_4_ = DAT_089da090;
  auVar5 = vtfm4_q(auVar12,auVar7);
  fVar16 = auVar5._4_4_;
  uVar21 = vcmp_s(8,auVar5._12_4_,auVar4._0_4_);
  if ((uVar21 & 1) == 0) {
    uVar20 = vrcp_s(auVar5._12_4_);
    uVar2 = vscl_p(auVar5._0_8_,uVar20);
    fVar17 = (float)uVar2;
    fVar16 = (float)((ulonglong)uVar2 >> 0x20);
  }
  else {
    fVar17 = (float)vzero_s();
  }
  iVar14 = *(int *)(*(int *)(param_2 + 0xac) + 0x18);
  param_4[0x10] = fVar17 * (float)*(int *)(*(int *)(param_2 + 0xac) + 0x14) * 0.5;
  param_4[0x11] = fVar16 * (float)iVar14 * 0.5;
  param_4[0x12] = 0;
  param_4[0x13] = 0x3f800000;
  param_4[0x15] = auVar5._8_4_;
  if (*(char *)((int)local_44 + 0xb) != '\0') {
    auVar9._60_4_ = DAT_089da280[0xf];
    auVar9._56_4_ = DAT_089da280[0xb];
    auVar9._52_4_ = DAT_089da280[7];
    auVar9._48_4_ = DAT_089da280[3];
    auVar9._44_4_ = DAT_089da280[0xe];
    auVar9._40_4_ = DAT_089da280[10];
    auVar9._36_4_ = DAT_089da280[6];
    auVar9._32_4_ = DAT_089da280[2];
    auVar9._28_4_ = DAT_089da280[0xd];
    auVar9._24_4_ = DAT_089da280[9];
    auVar9._20_4_ = DAT_089da280[5];
    auVar9._16_4_ = DAT_089da280[1];
    auVar9._12_4_ = DAT_089da280[0xc];
    auVar9._8_4_ = DAT_089da280[8];
    auVar9._4_4_ = DAT_089da280[4];
    auVar9._0_4_ = *DAT_089da280;
    auVar10._48_16_ = auVar3._48_16_;
    auVar10._44_4_ = auVar3._44_4_ + -local_4c[1];
    auVar10._40_4_ = auVar3._40_4_;
    auVar10._36_4_ = auVar3._36_4_;
    auVar10._32_4_ = auVar3._32_4_;
    auVar10._28_4_ = auVar3._28_4_ + 0.0;
    auVar10._24_4_ = auVar3._24_4_;
    auVar10._20_4_ = auVar3._20_4_;
    auVar10._16_4_ = auVar3._16_4_;
    auVar10._12_4_ = auVar3._12_4_ + 0.0;
    auVar10._8_4_ = auVar3._8_4_;
    auVar10._4_4_ = auVar3._4_4_;
    auVar10._0_4_ = uVar19;
    vmmul_q(auVar9,auVar10);
    param_4[0x15] =
         *(float *)(local_48 + -0x5f70) * auVar4._32_4_ + DAT_089da094 * auVar4._36_4_ +
         DAT_089da098 * auVar4._40_4_ + auVar4._44_4_;
  }
  iVar15 = *(int *)(*(int *)(param_2 + 0xac) + 0x14);
  iVar14 = *(int *)(*(int *)(param_2 + 0xac) + 0x18);
  fVar17 = (fVar17 + 1.0) * (float)iVar15 * 0.5;
  fVar16 = (fVar16 + 1.0) * (float)iVar14 * 0.5;
  if ((((fVar17 <= -2048.0) || (2048.0 <= fVar17)) || (fVar16 <= -2048.0)) ||
     ((2048.0 <= fVar16 || (auVar5._8_4_ < 0.0)))) {
    param_4[0x14] = 0;
  }
  else {
    uVar21 = (uint)*(byte *)(local_4c + 3);
    if (((fVar17 < -(float)uVar21) || ((float)(int)(uVar21 + iVar15) <= fVar17)) ||
       ((fVar16 < -(float)uVar21 || ((float)(int)(uVar21 + iVar14) <= fVar16)))) {
      param_4[0x14] = 0;
    }
    else {
      auVar1._8_4_ = DAT_089da098;
      auVar1._4_4_ = DAT_089da094;
      auVar1._0_4_ = DAT_089da090;
      auVar1 = vsub_t(auVar1,*local_5c);
      vzero_s();
      uVar19 = vdot_t(auVar1,auVar1);
      uVar20 = vzero_s();
      uVar22 = vcmp_s(8,uVar19,auVar1._0_4_);
      vrsq_s(uVar19);
      uVar19 = vcmovt_s(uVar20,(byte)uVar22 & 1);
      vpfxd(4,4,4,5);
      vscl_t(auVar1,uVar19);
      fVar16 = (float)vone_s();
      fVar16 = (1.0 - (1.0 - -fVar16) * 0.5) * 3.3333333;
      if (1.0 < fVar16) {
        fVar16 = 1.0;
      }
      else {
        fVar16 = 1.0 - fVar16;
      }
      param_4[0x14] = fVar16;
      auVar6._8_4_ = DAT_089da098;
      auVar6._4_4_ = DAT_089da094;
      auVar6._0_4_ = DAT_089da090;
      auVar1 = vsub_t(auVar6,*local_5c);
      uVar19 = vdot_t(auVar1,auVar1);
      fVar16 = (float)vsqrt_s(uVar19);
      fVar16 = fVar16 - (float)*(byte *)(local_4c + 2);
      if (fVar16 <= 0.0) {
        fVar18 = 1.0;
      }
      else if (fVar16 <= *local_4c - (float)*(byte *)(local_4c + 2)) {
        fVar18 = 1.0 - fVar16 / (*local_4c - (float)*(byte *)(local_4c + 2));
      }
      param_4[0x14] = (float)param_4[0x14] * fVar18;
    }
  }
  return;
}

