/* Entry 0x089A2820 | file offset 0x0019F7F8 | FUN_089a2820 | bytes 164 */

void FUN_089a2820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 (*pauVar5) [64];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  pauVar5 = DAT_09af7134;
  auVar3 = vmidt_q();
  auVar2._4_4_ = param_2;
  auVar2._0_4_ = param_1;
  auVar2._8_4_ = param_3;
  auVar2._12_4_ = param_4;
  uVar8 = vfim_s(0x4000);
  auVar2 = vbfy1_q(auVar2);
  uVar1 = vbfy1_p(CONCAT44(param_6,param_5));
  uVar6 = vrcp_s(auVar2._4_4_);
  uVar9 = vrcp_s(auVar2._12_4_);
  uVar7 = vrcp_s((int)((ulonglong)uVar1 >> 0x20));
  vpfxs(0x10,1,2,3);
  uVar10 = vmul_s(uVar8,uVar6);
  vpfxs(0x10,1,2,3);
  uVar11 = vmul_s(uVar8,uVar9);
  uVar12 = vmul_s(uVar8,uVar7);
  uVar6 = vmul_s(auVar2._0_4_,uVar6);
  uVar8 = vmul_s(auVar2._8_4_,uVar9);
  uVar7 = vmul_s((int)uVar1,uVar7);
  auVar4._60_4_ = auVar3._60_4_;
  auVar4._56_4_ = uVar7;
  auVar4._52_4_ = uVar8;
  auVar4._48_4_ = uVar6;
  auVar4._44_4_ = auVar3._44_4_;
  auVar4._40_4_ = uVar12;
  auVar4._36_4_ = auVar3._36_4_;
  auVar4._32_4_ = auVar3._32_4_;
  auVar4._28_4_ = auVar3._28_4_;
  auVar4._24_4_ = auVar3._24_4_;
  auVar4._20_4_ = uVar11;
  auVar4._16_4_ = auVar3._16_4_;
  auVar4._12_4_ = auVar3._12_4_;
  auVar4._8_4_ = auVar3._8_4_;
  auVar4._4_4_ = auVar3._4_4_;
  auVar4._0_4_ = uVar10;
  auVar3 = vmmul_q(auVar4,*DAT_09af7134);
  *(int *)*DAT_09af7134 = auVar3._0_4_;
  *(int *)(*pauVar5 + 4) = auVar3._4_4_;
  *(int *)(*pauVar5 + 8) = auVar3._8_4_;
  *(int *)(*pauVar5 + 0xc) = auVar3._12_4_;
  *(int *)(*pauVar5 + 0x10) = auVar3._16_4_;
  *(int *)(*pauVar5 + 0x14) = auVar3._20_4_;
  *(int *)(*pauVar5 + 0x18) = auVar3._24_4_;
  *(int *)(*pauVar5 + 0x1c) = auVar3._28_4_;
  *(int *)(*pauVar5 + 0x20) = auVar3._32_4_;
  *(int *)(*pauVar5 + 0x24) = auVar3._36_4_;
  *(int *)(*pauVar5 + 0x28) = auVar3._40_4_;
  *(int *)(*pauVar5 + 0x2c) = auVar3._44_4_;
  *(int *)(*pauVar5 + 0x30) = auVar3._48_4_;
  *(int *)(*pauVar5 + 0x34) = auVar3._52_4_;
  *(int *)(*pauVar5 + 0x38) = auVar3._56_4_;
  *(int *)(*pauVar5 + 0x3c) = auVar3._60_4_;
  return;
}

