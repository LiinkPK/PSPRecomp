/* Entry 0x0898D048 | file offset 0x0018A020 | FUN_0898d048 | bytes 256 */

void FUN_0898d048(float param_1,float param_2,undefined4 *param_3,int param_4,
                 undefined1 (*param_5) [64])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 in_V3C;
  undefined1 auVar8 [16];
  undefined1 auVar13 [12];
  
  if (*(char *)(*(int *)(param_4 + 0x8c) + 0x58) == '\x02') {
    pauVar15 = (undefined1 (*) [16])&DAT_089da3b0;
  }
  else {
    pauVar15 = (undefined1 (*) [16])(*(int *)(param_4 + 0x88) + 0x30);
  }
  auVar6._4_8_ = 0;
  auVar6._0_4_ = param_1 * 0.5;
  auVar6._12_4_ = 0x3f800000;
  auVar8 = vmov_q(*(undefined1 (*) [16])(*param_5 + 0x30));
  uVar7 = auVar8._0_4_;
  uVar9 = auVar8._4_4_;
  uVar10 = auVar8._8_4_;
  uVar22 = vone_s();
  auVar8 = vtfm4_q(*param_5,auVar6);
  auVar1._12_4_ = uVar22;
  auVar1._8_4_ = uVar10;
  auVar1._4_4_ = uVar9;
  auVar1._0_4_ = uVar7;
  auVar1 = vsub_q(auVar8,auVar1);
  uVar16 = vmov_s(auVar1._4_4_);
  uVar18 = vneg_s(auVar1._0_4_);
  uVar20 = vzero_s();
  vone_s();
  auVar5._8_4_ = uVar20;
  auVar5._4_4_ = uVar18;
  auVar5._0_4_ = uVar16;
  auVar11._8_4_ = uVar20;
  auVar11._4_4_ = uVar18;
  auVar11._0_4_ = uVar16;
  uVar17 = vdot_t(auVar5,auVar11);
  uVar17 = vsqrt_s(uVar17);
  uVar19 = vmov_s(uVar17);
  uVar21 = vmov_s(uVar17);
  auVar12._8_4_ = uVar20;
  auVar12._4_4_ = uVar18;
  auVar12._0_4_ = uVar16;
  auVar13._8_4_ = uVar21;
  auVar13._4_4_ = uVar19;
  auVar13._0_4_ = uVar17;
  auVar5 = vdiv_t(auVar12,auVar13);
  auVar8._12_4_ = in_V3C;
  auVar8._8_4_ = auVar5._8_4_;
  auVar8._4_4_ = auVar5._4_4_;
  auVar8._0_4_ = auVar5._0_4_;
  auVar8 = vscl_q(auVar8,param_2 * 0.5);
  auVar6 = vmul_q(auVar8,*pauVar15);
  auVar2._12_4_ = uVar22;
  auVar2._8_4_ = uVar10;
  auVar2._4_4_ = uVar9;
  auVar2._0_4_ = uVar7;
  auVar2 = vsub_q(auVar2,auVar1);
  auVar3._12_4_ = uVar22;
  auVar3._8_4_ = uVar10;
  auVar3._4_4_ = uVar9;
  auVar3._0_4_ = uVar7;
  auVar3 = vsub_q(auVar3,auVar1);
  auVar4._12_4_ = uVar22;
  auVar4._8_4_ = uVar10;
  auVar4._4_4_ = uVar9;
  auVar4._0_4_ = uVar7;
  auVar8 = vadd_q(auVar4,auVar1);
  auVar14._12_4_ = uVar22;
  auVar14._8_4_ = uVar10;
  auVar14._4_4_ = uVar9;
  auVar14._0_4_ = uVar7;
  auVar1 = vadd_q(auVar14,auVar1);
  auVar2 = vadd_q(auVar2,auVar6);
  auVar3 = vsub_q(auVar3,auVar6);
  auVar4 = vsub_q(auVar8,auVar6);
  auVar8 = vadd_q(auVar1,auVar6);
  *param_3 = auVar2._0_4_;
  param_3[1] = auVar2._4_4_;
  param_3[2] = auVar2._8_4_;
  param_3[3] = auVar2._12_4_;
  param_3[4] = auVar3._0_4_;
  param_3[5] = auVar3._4_4_;
  param_3[6] = auVar3._8_4_;
  param_3[7] = auVar3._12_4_;
  param_3[8] = auVar4._0_4_;
  param_3[9] = auVar4._4_4_;
  param_3[10] = auVar4._8_4_;
  param_3[0xb] = auVar4._12_4_;
  param_3[0xc] = auVar8._0_4_;
  param_3[0xd] = auVar8._4_4_;
  param_3[0xe] = auVar8._8_4_;
  param_3[0xf] = auVar8._12_4_;
  return;
}

