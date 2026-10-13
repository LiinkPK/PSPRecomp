/* Entry 0x0895E108 | file offset 0x0015B0E0 | FUN_0895e108 | bytes 1056 */

void FUN_0895e108(int *param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 (*pauVar10) [12];
  int iVar11;
  undefined1 (*pauVar12) [12];
  undefined1 *puVar13;
  float *pfVar14;
  float *pfVar15;
  undefined1 (*pauVar16) [12];
  float *pfVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_60 [4];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  undefined1 auVar4 [64];
  
  iVar11 = *(int *)(DAT_09b6f478 + 0x8c);
  puVar13 = *(undefined1 **)
             (*(int *)(iVar11 + 0x48) +
             (uint)*(ushort *)(*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(0x3f800000,DAT_09b6f478,iVar11,*(undefined4 *)(iVar11 + 0x50),*puVar13,puVar13[1],
               puVar13[2],&local_e0);
  auVar4._60_4_ = DAT_089da284[0xf];
  auVar4._56_4_ = DAT_089da284[0xb];
  auVar4._52_4_ = DAT_089da284[7];
  auVar4._48_4_ = DAT_089da284[3];
  auVar4._44_4_ = DAT_089da284[0xe];
  auVar4._40_4_ = DAT_089da284[10];
  auVar4._36_4_ = DAT_089da284[6];
  auVar4._32_4_ = DAT_089da284[2];
  auVar4._28_4_ = DAT_089da284[0xd];
  auVar4._24_4_ = DAT_089da284[9];
  auVar4._20_4_ = DAT_089da284[5];
  auVar4._16_4_ = DAT_089da284[1];
  auVar4._12_4_ = DAT_089da284[0xc];
  auVar4._8_4_ = DAT_089da284[8];
  auVar4._4_4_ = DAT_089da284[4];
  auVar4._0_4_ = *DAT_089da284;
  auVar7._60_4_ = uStack_a4;
  auVar7._56_4_ = uStack_b4;
  auVar7._52_4_ = uStack_c4;
  auVar7._48_4_ = uStack_d4;
  auVar7._44_4_ = uStack_a8;
  auVar7._40_4_ = uStack_b8;
  auVar7._36_4_ = uStack_c8;
  auVar7._32_4_ = uStack_d8;
  auVar7._28_4_ = uStack_ac;
  auVar7._24_4_ = uStack_bc;
  auVar7._20_4_ = uStack_cc;
  auVar7._16_4_ = uStack_dc;
  auVar7._12_4_ = local_b0;
  auVar7._8_4_ = local_c0;
  auVar7._4_4_ = local_d0;
  auVar7._0_4_ = local_e0;
  auVar4 = vmmul_q(auVar4,auVar7);
  uVar3 = auVar4._0_4_;
  pauVar16 = (undefined1 (*) [12])param_1[0x10];
  uVar18 = *(undefined4 *)(param_2 + 0x44);
  pfVar15 = (float *)param_1[0xe];
  pfVar14 = (float *)param_1[0xd];
  iVar11 = *(int *)(DAT_09b6f478 + 0xac);
  fVar19 = (float)param_1[9];
  pauVar10 = (undefined1 (*) [12])((int)pauVar16 + *param_1 * 0x10 + 0x10);
  if (pauVar16 != pauVar10) {
    pauVar12 = pauVar16;
    do {
      auVar1 = vsub_t(*pauVar12,*pauVar16);
      vzero_s();
      uVar21 = vdot_t(auVar1,auVar1);
      local_30 = (float)vsqrt_s(uVar21);
      uVar21 = vdot_t(auVar1,auVar1);
      uVar22 = vzero_s();
      uVar23 = vcmp_s(8,uVar21,auVar1._0_4_);
      vrsq_s(uVar21);
      uVar21 = vcmovt_s(uVar22,(byte)uVar23 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar1,uVar21);
      vone_s();
      auVar1 = vscl_t(auVar1,local_30 * fVar19);
      uStack_44 = vzero_s();
      local_50 = auVar1._0_4_;
      uStack_4c = auVar1._4_4_;
      uStack_48 = auVar1._8_4_;
      auVar8._4_4_ = auVar4._16_4_;
      auVar8._0_4_ = uVar3;
      auVar8._8_4_ = auVar4._32_4_;
      auVar8._12_4_ = auVar4._48_4_;
      auVar8._16_4_ = auVar4._4_4_;
      auVar8._20_4_ = auVar4._20_4_;
      auVar8._24_4_ = auVar4._36_4_;
      auVar8._28_4_ = auVar4._52_4_;
      auVar8._32_4_ = auVar4._8_4_;
      auVar8._36_4_ = auVar4._24_4_;
      auVar8._40_4_ = auVar4._40_4_;
      auVar8._44_4_ = auVar4._56_4_;
      auVar8._48_4_ = auVar4._12_4_;
      auVar8._52_4_ = auVar4._28_4_;
      auVar8._56_4_ = auVar4._44_4_;
      auVar8._60_4_ = auVar4._60_4_;
      uVar21 = vone_s();
      auVar5._12_4_ = uVar21;
      auVar5._8_4_ = auVar1._8_4_;
      auVar5._4_4_ = auVar1._4_4_;
      auVar5._0_4_ = auVar1._0_4_;
      auVar5 = vtfm4_q(auVar8,auVar5);
      local_3c = auVar5._4_4_;
      uStack_38 = auVar5._8_4_;
      uStack_34 = auVar5._12_4_;
      uVar24 = vcmp_s(8,uStack_34,uVar3);
      if ((uVar24 & 1) == 0) {
        uStack_34 = vrcp_s(uStack_34);
        auVar2 = vscl_t(auVar5._0_12_,uStack_34);
        local_40 = auVar2._0_4_;
        local_3c = auVar2._4_4_;
        uStack_38 = auVar2._8_4_;
      }
      else {
        local_40 = (float)vzero_s();
      }
      *pfVar15 = (local_40 + 1.0) * 0.5;
      local_60[0] = 0.0;
      pfVar17 = pfVar15;
      if (*pfVar15 <= 0.0) {
        pfVar17 = local_60;
      }
      *pfVar15 = *pfVar17;
      local_60[0] = 1.0;
      pfVar17 = pfVar15;
      if (1.0 <= *pfVar15) {
        pfVar17 = local_60;
      }
      fVar20 = *pfVar17;
      *pfVar15 = fVar20;
      *pfVar15 = fVar20 * ((float)*(int *)(iVar11 + 0x24) / (float)*(int *)(iVar11 + 0x24));
      pfVar15[1] = (1.0 - local_3c) * 0.5;
      local_60[0] = 0.0;
      pfVar17 = local_60;
      if (0.0 < pfVar15[1]) {
        pfVar17 = pfVar15 + 1;
      }
      pfVar15[1] = *pfVar17;
      local_60[0] = 1.0;
      pfVar17 = local_60;
      if (pfVar15[1] < 1.0) {
        pfVar17 = pfVar15 + 1;
      }
      fVar20 = *pfVar17;
      pfVar15[1] = fVar20;
      pfVar15[1] = fVar20 * ((float)*(int *)(iVar11 + 0x28) / (float)*(int *)(iVar11 + 0x28));
      auVar1 = vscl_t(auVar1,uVar18);
      uStack_44 = vzero_s();
      local_50 = auVar1._0_4_;
      uStack_4c = auVar1._4_4_;
      uStack_48 = auVar1._8_4_;
      auVar9._4_4_ = auVar4._16_4_;
      auVar9._0_4_ = uVar3;
      auVar9._8_4_ = auVar4._32_4_;
      auVar9._12_4_ = auVar4._48_4_;
      auVar9._16_4_ = auVar4._4_4_;
      auVar9._20_4_ = auVar4._20_4_;
      auVar9._24_4_ = auVar4._36_4_;
      auVar9._28_4_ = auVar4._52_4_;
      auVar9._32_4_ = auVar4._8_4_;
      auVar9._36_4_ = auVar4._24_4_;
      auVar9._40_4_ = auVar4._40_4_;
      auVar9._44_4_ = auVar4._56_4_;
      auVar9._48_4_ = auVar4._12_4_;
      auVar9._52_4_ = auVar4._28_4_;
      auVar9._56_4_ = auVar4._44_4_;
      auVar9._60_4_ = auVar4._60_4_;
      uVar21 = vone_s();
      auVar6._12_4_ = uVar21;
      auVar6._8_4_ = auVar1._8_4_;
      auVar6._4_4_ = auVar1._4_4_;
      auVar6._0_4_ = auVar1._0_4_;
      auVar5 = vtfm4_q(auVar9,auVar6);
      local_3c = auVar5._4_4_;
      uStack_38 = auVar5._8_4_;
      uStack_34 = auVar5._12_4_;
      uVar24 = vcmp_s(8,uStack_34,uVar3);
      if ((uVar24 & 1) == 0) {
        uStack_34 = vrcp_s(uStack_34);
        auVar1 = vscl_t(auVar5._0_12_,uStack_34);
        local_40 = auVar1._0_4_;
        local_3c = auVar1._4_4_;
        uStack_38 = auVar1._8_4_;
      }
      else {
        local_40 = (float)vzero_s();
      }
      *pfVar14 = (local_40 + 1.0) * 0.5;
      local_60[0] = 0.0;
      pfVar17 = pfVar14;
      if (*pfVar14 <= 0.0) {
        pfVar17 = local_60;
      }
      *pfVar14 = *pfVar17;
      local_60[0] = 1.0;
      pfVar17 = pfVar14;
      if (1.0 <= *pfVar14) {
        pfVar17 = local_60;
      }
      fVar20 = *pfVar17;
      *pfVar14 = fVar20;
      *pfVar14 = fVar20 * ((float)*(int *)(iVar11 + 0x24) / (float)*(int *)(iVar11 + 0x24));
      pfVar14[1] = (1.0 - local_3c) * 0.5;
      local_60[0] = 0.0;
      pfVar17 = local_60;
      if (0.0 < pfVar14[1]) {
        pfVar17 = pfVar14 + 1;
      }
      pfVar14[1] = *pfVar17;
      local_60[0] = 1.0;
      pfVar17 = local_60;
      if (pfVar14[1] < 1.0) {
        pfVar17 = pfVar14 + 1;
      }
      fVar20 = *pfVar17;
      pfVar14[1] = fVar20;
      pfVar14[1] = fVar20 * ((float)*(int *)(iVar11 + 0x28) / (float)*(int *)(iVar11 + 0x28));
      pauVar12 = (undefined1 (*) [12])(pauVar12[1] + 4);
      pfVar15 = pfVar15 + 2;
      pfVar14 = pfVar14 + 2;
    } while (pauVar12 != pauVar10);
  }
  return;
}

