/* Entry 0x089636FC | file offset 0x001606D4 | FUN_089636fc | bytes 1104 */

void FUN_089636fc(undefined4 param_1,int param_2,undefined1 (*param_3) [16],int *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  undefined1 auVar3 [36];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [12];
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined1 local_e0 [16];
  float local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 (*local_4c) [16];
  
  iVar11 = *(int *)(param_2 + 0x8c) +
           (uint)*(ushort *)
                  (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                  (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  if (0.0 < *(float *)(iVar11 + 0xb0)) {
    if (*(int *)param_3[1] < 0) {
      iVar12 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) +
                                *(int *)param_3[1] * 4) + 0x10);
    }
    if (iVar12 != -1) {
      iVar13 = *param_4;
      local_4c = &local_e0;
      pauVar10 = (undefined1 (*) [12])(iVar11 + 0xa0);
      uVar17 = vdot_t(*pauVar10,*pauVar10);
      uVar19 = vzero_s();
      uVar20 = vcmp_s(8,uVar17,*(undefined4 *)*pauVar10);
      vrsq_s(uVar17);
      uVar17 = vcmovt_s(uVar19,(byte)uVar20 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(*pauVar10,uVar17);
      local_d0 = auVar2._0_4_;
      local_cc = auVar2._4_4_;
      uStack_c8 = auVar2._8_4_;
      uStack_c4 = vone_s();
      fVar14 = (float)FUN_08867e98(local_cc);
      pauVar9 = local_4c;
      fVar15 = 1.0;
      if (0.0 < local_d0) {
        fVar14 = -fVar14;
      }
      for (fVar14 = fVar14 + 1.5707964; 3.1415927 < fVar14; fVar14 = fVar14 - 6.2831855) {
      }
      uVar17 = vdot_t(*pauVar10,*pauVar10);
      fVar18 = (float)vsqrt_s(uVar17);
      vmidt_q();
      auVar4 = vmidt_q();
      uStack_164 = auVar4._12_4_;
      uStack_154 = auVar4._28_4_;
      uStack_144 = auVar4._44_4_;
      local_140 = auVar4._48_4_;
      uStack_13c = auVar4._52_4_;
      uStack_138 = auVar4._56_4_;
      uStack_134 = auVar4._60_4_;
      auVar3._24_12_ = auVar4._32_12_;
      auVar3._20_4_ = auVar4._24_4_;
      auVar3._16_4_ = auVar4._20_4_;
      auVar3._12_4_ = auVar4._16_4_;
      auVar3._8_4_ = auVar4._8_4_;
      auVar3._4_4_ = auVar4._4_4_;
      auVar3._0_4_ = auVar4._0_4_;
      auVar3 = vmscl_t(auVar3,(*(float *)(param_3[1] + 4) * fVar18) /
                              (float)*(ushort *)(param_3[1] + 8));
      local_170 = auVar3._0_4_;
      uStack_16c = auVar3._4_4_;
      uStack_168 = auVar3._8_4_;
      local_160 = auVar3._12_4_;
      uStack_15c = auVar3._16_4_;
      uStack_158 = auVar3._20_4_;
      local_150 = auVar3._24_4_;
      uStack_14c = auVar3._28_4_;
      uStack_148 = auVar3._32_4_;
      fVar16 = fVar14 * 57.295776 * 0.017453292;
      local_b0 = fVar18;
      fVar14 = (float)FUN_089a2c70(fVar16);
      local_ac = FUN_089a2db4(fVar16);
      local_a4 = 0;
      local_a0 = 0;
      local_9c = -fVar14;
      local_94 = 0;
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0x3f800000;
      local_80 = 0;
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      local_70 = 0x3f800000;
      local_a8 = fVar14;
      local_98 = local_ac;
      FUN_08963400(&local_170,&local_ac,&local_170);
      auVar4._60_4_ = *(undefined4 *)(iVar11 + 0x9c);
      auVar4._56_4_ = *(undefined4 *)(iVar11 + 0x8c);
      auVar4._52_4_ = *(undefined4 *)(iVar11 + 0x7c);
      auVar4._48_4_ = *(undefined4 *)(iVar11 + 0x6c);
      auVar4._44_4_ = *(undefined4 *)(iVar11 + 0x98);
      auVar4._40_4_ = *(undefined4 *)(iVar11 + 0x88);
      auVar4._36_4_ = *(undefined4 *)(iVar11 + 0x78);
      auVar4._32_4_ = *(undefined4 *)(iVar11 + 0x68);
      auVar4._28_4_ = *(undefined4 *)(iVar11 + 0x94);
      auVar4._24_4_ = *(undefined4 *)(iVar11 + 0x84);
      auVar4._20_4_ = *(undefined4 *)(iVar11 + 0x74);
      auVar4._16_4_ = *(undefined4 *)(iVar11 + 100);
      auVar4._12_4_ = *(undefined4 *)(iVar11 + 0x90);
      auVar4._8_4_ = *(undefined4 *)(iVar11 + 0x80);
      auVar4._4_4_ = *(undefined4 *)(iVar11 + 0x70);
      auVar4._0_4_ = *(undefined4 *)(iVar11 + 0x60);
      auVar5._60_4_ = uStack_134;
      auVar5._56_4_ = uStack_144;
      auVar5._52_4_ = uStack_154;
      auVar5._48_4_ = uStack_164;
      auVar5._44_4_ = uStack_138;
      auVar5._40_4_ = uStack_148;
      auVar5._36_4_ = uStack_158;
      auVar5._32_4_ = uStack_168;
      auVar5._28_4_ = uStack_13c;
      auVar5._24_4_ = uStack_14c;
      auVar5._20_4_ = uStack_15c;
      auVar5._16_4_ = uStack_16c;
      auVar5._12_4_ = local_140;
      auVar5._8_4_ = local_150;
      auVar5._4_4_ = local_160;
      auVar5._0_4_ = local_170;
      auVar4 = vmmul_q(auVar4,auVar5);
      local_170 = auVar4._0_4_;
      local_160 = auVar4._4_4_;
      local_150 = auVar4._8_4_;
      local_140 = auVar4._12_4_;
      uStack_16c = auVar4._16_4_;
      uStack_15c = auVar4._20_4_;
      uStack_14c = auVar4._24_4_;
      uStack_13c = auVar4._28_4_;
      uStack_168 = auVar4._32_4_;
      uStack_158 = auVar4._36_4_;
      uStack_148 = auVar4._40_4_;
      uStack_138 = auVar4._44_4_;
      uStack_164 = auVar4._48_4_;
      uStack_154 = auVar4._52_4_;
      uStack_144 = auVar4._56_4_;
      uStack_134 = auVar4._60_4_;
      if (fVar18 < (float)*(ushort *)(param_3[1] + 10)) {
        fVar15 = fVar18 / (float)*(ushort *)(param_3[1] + 10);
      }
      FUN_089a0384(9);
      FUN_089a0f84(0,0);
      FUN_089a119c(1);
      FUN_089a03dc(5);
      FUN_0896fb5c(&local_170);
      uVar17 = FUN_089a04c4(1);
      FUN_089a03dc(1);
      auVar1 = vmul_q(*(undefined1 (*) [16])
                       (*(int *)(param_2 + 0x8c) +
                        (uint)*(ushort *)
                               (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                               *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60),
                      *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
      local_f0 = auVar1._0_4_;
      uStack_ec = auVar1._4_4_;
      uStack_e8 = auVar1._8_4_;
      local_e4 = auVar1._12_4_;
      auVar1 = vscl_q(*param_3,0x3c000000);
      *(int *)*pauVar9 = auVar1._0_4_;
      *(int *)(*pauVar9 + 4) = auVar1._4_4_;
      *(int *)(*pauVar9 + 8) = auVar1._8_4_;
      *(int *)(*pauVar9 + 0xc) = auVar1._12_4_;
      auVar7._8_4_ = local_e4;
      auVar7._4_4_ = uStack_e8;
      auVar6._8_4_ = local_e4;
      auVar6._4_4_ = uStack_e8;
      auVar1._4_4_ = uStack_ec;
      auVar1._0_4_ = local_f0;
      auVar1._8_4_ = uStack_e8;
      auVar1._12_4_ = local_e4;
      auVar1 = vmul_q(auVar1,*pauVar9);
      auVar8._12_4_ = *(float *)(iVar11 + 0xb0) * fVar15 * auVar1._12_4_;
      auVar8._0_12_ = auVar1._0_12_;
      vpfxt(0,0,0,0);
      auVar6._0_4_ = 0x437f0000;
      auVar6._12_4_ = 0;
      auVar1 = vmax_q(auVar8,auVar6 << 0x20);
      vpfxt(1,1,1,1);
      auVar7._0_4_ = 0x437f0000;
      auVar7._12_4_ = 0;
      auVar1 = vmin_q(auVar1,auVar7 << 0x20);
      local_f0 = auVar1._0_4_;
      uStack_ec = auVar1._4_4_;
      uStack_e8 = auVar1._8_4_;
      local_e4 = auVar1._12_4_;
      *(undefined4 *)(*(int *)(param_2 + 0x9c) + 0x2c) = 0xffffffff;
      FUN_08942fb8(*(undefined4 *)(param_2 + 0x9c),iVar12,*(undefined4 *)(iVar13 + 4),&local_f0);
      FUN_089a0438(1,uVar17);
    }
  }
  return;
}

