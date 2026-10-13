/* Entry 0x089A28C4 | file offset 0x0019F89C | FUN_089a28c4 | bytes 168 */

void FUN_089a28c4(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [64];
  undefined1 (*pauVar7) [64];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  pauVar7 = DAT_09af7134;
  auVar1 = vsub_q(*param_1,*param_2);
  auVar2 = auVar1._0_12_;
  uVar8 = vdot_t(auVar2,auVar2);
  uVar9 = vzero_s();
  uVar10 = vcmp_s(8,uVar8,uVar8);
  vrsq_s(uVar8);
  uVar8 = vcmovt_s(uVar9,(byte)uVar10 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar8);
  auVar3 = vcrsp_t(*param_3,auVar2);
  auVar4 = vcrsp_t(auVar2,auVar3);
  uVar8 = vdot_t(auVar3,auVar3);
  uVar10 = vdot_t(auVar4,auVar4);
  uVar11 = vcmp_p(8,CONCAT44(uVar10,uVar8),CONCAT44(uVar10,uVar8));
  vrsq_p(CONCAT44(uVar10,uVar8));
  uVar8 = vcmovt_s(uVar9,(byte)uVar11 & 1);
  uVar10 = vcmovt_s(uVar9,(byte)(uVar11 >> 1) & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(auVar3,uVar8);
  vpfxd(4,4,4,5);
  auVar4 = vscl_t(auVar4,uVar10);
  auVar1 = vidt_q();
  auVar5 = vzero_t();
  auVar6._60_4_ = auVar1._12_4_;
  auVar6._56_4_ = auVar5._8_4_;
  auVar6._52_4_ = auVar5._4_4_;
  auVar6._48_4_ = auVar5._0_4_;
  auVar6._44_4_ = auVar1._8_4_;
  auVar6._40_4_ = auVar2._8_4_;
  auVar6._36_4_ = auVar4._8_4_;
  auVar6._32_4_ = auVar3._8_4_;
  auVar6._28_4_ = auVar1._4_4_;
  auVar6._24_4_ = auVar2._4_4_;
  auVar6._20_4_ = auVar4._4_4_;
  auVar6._16_4_ = auVar3._4_4_;
  auVar6._12_4_ = auVar1._0_4_;
  auVar6._8_4_ = auVar2._0_4_;
  auVar6._4_4_ = auVar4._0_4_;
  auVar6._0_4_ = auVar3._0_4_;
  auVar6 = vmmul_q(auVar6,*DAT_09af7134);
  auVar6 = vmmov_q(auVar6);
  auVar2 = vneg_t(*(undefined1 (*) [12])*param_1);
  auVar1._12_4_ = auVar1._0_4_;
  auVar1._8_4_ = auVar2._8_4_;
  auVar1._4_4_ = auVar2._4_4_;
  auVar1._0_4_ = auVar2._0_4_;
  auVar1 = vhtfm4_q(auVar6,auVar1);
  auVar1 = vmov_q(auVar1);
  *(int *)*DAT_09af7134 = auVar6._0_4_;
  *(int *)(*pauVar7 + 4) = auVar6._4_4_;
  *(int *)(*pauVar7 + 8) = auVar6._8_4_;
  *(int *)(*pauVar7 + 0xc) = auVar6._12_4_;
  *(int *)(*pauVar7 + 0x10) = auVar6._16_4_;
  *(int *)(*pauVar7 + 0x14) = auVar6._20_4_;
  *(int *)(*pauVar7 + 0x18) = auVar6._24_4_;
  *(int *)(*pauVar7 + 0x1c) = auVar6._28_4_;
  *(int *)(*pauVar7 + 0x20) = auVar6._32_4_;
  *(int *)(*pauVar7 + 0x24) = auVar6._36_4_;
  *(int *)(*pauVar7 + 0x28) = auVar6._40_4_;
  *(int *)(*pauVar7 + 0x2c) = auVar6._44_4_;
  *(int *)(*pauVar7 + 0x30) = auVar1._0_4_;
  *(int *)(*pauVar7 + 0x34) = auVar1._4_4_;
  *(int *)(*pauVar7 + 0x38) = auVar1._8_4_;
  *(int *)(*pauVar7 + 0x3c) = auVar1._12_4_;
  return;
}

