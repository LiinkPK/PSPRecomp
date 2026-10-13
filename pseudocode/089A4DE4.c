/* Entry 0x089A4DE4 | file offset 0x001A1DBC | FUN_089a4de4 | bytes 100 */

undefined4 * FUN_089a4de4(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  
  vpfxs(3,2,0x11,0x10);
  auVar1 = vmov_q(*param_2);
  vpfxs(0x12,3,0,0x11);
  auVar2 = vmov_q(*param_2);
  vpfxs(1,0x10,3,0x12);
  auVar3 = vmov_q(*param_2);
  vpfxs(3,2,0x11,0);
  auVar4 = vmov_q(*param_2);
  vpfxs(0x12,3,0,1);
  auVar5 = vmov_q(*param_2);
  vpfxs(1,0x10,3,2);
  auVar6 = vmov_q(*param_2);
  vpfxs(0x10,0x11,0x12,3);
  auVar7 = vmov_q(*param_2);
  auVar8._48_16_ = auVar7;
  auVar8._44_4_ = auVar6._12_4_;
  auVar8._40_4_ = auVar6._8_4_;
  auVar8._36_4_ = auVar6._4_4_;
  auVar8._32_4_ = auVar6._0_4_;
  auVar8._28_4_ = auVar5._12_4_;
  auVar8._24_4_ = auVar5._8_4_;
  auVar8._20_4_ = auVar5._4_4_;
  auVar8._16_4_ = auVar5._0_4_;
  auVar8._12_4_ = auVar4._12_4_;
  auVar8._8_4_ = auVar4._8_4_;
  auVar8._4_4_ = auVar4._4_4_;
  auVar8._0_4_ = auVar4._0_4_;
  auVar9._48_16_ = *param_2;
  auVar9._44_4_ = auVar3._12_4_;
  auVar9._40_4_ = auVar3._8_4_;
  auVar9._36_4_ = auVar3._4_4_;
  auVar9._32_4_ = auVar3._0_4_;
  auVar9._28_4_ = auVar2._12_4_;
  auVar9._24_4_ = auVar2._8_4_;
  auVar9._20_4_ = auVar2._4_4_;
  auVar9._16_4_ = auVar2._0_4_;
  auVar9._12_4_ = auVar1._12_4_;
  auVar9._8_4_ = auVar1._8_4_;
  auVar9._4_4_ = auVar1._4_4_;
  auVar9._0_4_ = auVar1._0_4_;
  auVar8 = vmmul_q(auVar8,auVar9);
  auVar1 = vidt_q();
  auVar2 = vidt_q();
  *param_1 = auVar8._0_4_;
  param_1[1] = auVar8._4_4_;
  param_1[2] = auVar8._8_4_;
  param_1[3] = auVar1._0_4_;
  param_1[4] = auVar8._16_4_;
  param_1[5] = auVar8._20_4_;
  param_1[6] = auVar8._24_4_;
  param_1[7] = auVar1._4_4_;
  param_1[8] = auVar8._32_4_;
  param_1[9] = auVar8._36_4_;
  param_1[10] = auVar8._40_4_;
  param_1[0xb] = auVar1._8_4_;
  param_1[0xc] = auVar2._0_4_;
  param_1[0xd] = auVar2._4_4_;
  param_1[0xe] = auVar2._8_4_;
  param_1[0xf] = auVar2._12_4_;
  return param_1;
}

