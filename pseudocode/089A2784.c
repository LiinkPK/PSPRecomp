/* Entry 0x089A2784 | file offset 0x0019F75C | FUN_089a2784 | bytes 156 */

void FUN_089a2784(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auVar1 [64];
  undefined8 uVar2;
  undefined1 auVar3 [64];
  undefined1 (*pauVar4) [64];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pauVar4 = DAT_09af7134;
  auVar1 = vmzero_q();
  uVar5 = vcst_s(6);
  uVar5 = vmul_s(param_1,uVar5);
  uVar7 = vrcp_s(param_2);
  uVar6 = vsub_s(param_3,param_4);
  uVar8 = vadd_s(param_3,param_4);
  uVar10 = vmul_s(param_3,param_4);
  uVar2 = vrot_p(uVar5,1,2);
  uVar9 = vrcp_s((int)((ulonglong)uVar2 >> 0x20));
  uVar5 = vrcp_s(uVar6);
  uVar8 = vmul_s(uVar5,uVar8);
  uVar5 = vmul_s(uVar10,uVar5);
  uVar10 = vadd_s(uVar5,uVar5);
  uVar6 = vmul_s((int)uVar2,uVar9);
  uVar5 = vmul_s(uVar6,uVar7);
  uVar7 = vfim_s(0xbc00);
  uVar9 = vzero_s();
  auVar3._60_4_ = uVar9;
  auVar3._56_4_ = uVar10;
  auVar3._52_4_ = auVar1._52_4_;
  auVar3._48_4_ = auVar1._48_4_;
  auVar3._44_4_ = uVar7;
  auVar3._40_4_ = uVar8;
  auVar3._36_4_ = auVar1._36_4_;
  auVar3._32_4_ = auVar1._32_4_;
  auVar3._28_4_ = auVar1._28_4_;
  auVar3._24_4_ = auVar1._24_4_;
  auVar3._20_4_ = uVar6;
  auVar3._16_4_ = auVar1._16_4_;
  auVar3._12_4_ = auVar1._12_4_;
  auVar3._8_4_ = auVar1._8_4_;
  auVar3._4_4_ = auVar1._4_4_;
  auVar3._0_4_ = uVar5;
  auVar1 = vmmul_q(auVar3,*DAT_09af7134);
  *(int *)*DAT_09af7134 = auVar1._0_4_;
  *(int *)(*pauVar4 + 4) = auVar1._4_4_;
  *(int *)(*pauVar4 + 8) = auVar1._8_4_;
  *(int *)(*pauVar4 + 0xc) = auVar1._12_4_;
  *(int *)(*pauVar4 + 0x10) = auVar1._16_4_;
  *(int *)(*pauVar4 + 0x14) = auVar1._20_4_;
  *(int *)(*pauVar4 + 0x18) = auVar1._24_4_;
  *(int *)(*pauVar4 + 0x1c) = auVar1._28_4_;
  *(int *)(*pauVar4 + 0x20) = auVar1._32_4_;
  *(int *)(*pauVar4 + 0x24) = auVar1._36_4_;
  *(int *)(*pauVar4 + 0x28) = auVar1._40_4_;
  *(int *)(*pauVar4 + 0x2c) = auVar1._44_4_;
  *(int *)(*pauVar4 + 0x30) = auVar1._48_4_;
  *(int *)(*pauVar4 + 0x34) = auVar1._52_4_;
  *(int *)(*pauVar4 + 0x38) = auVar1._56_4_;
  *(int *)(*pauVar4 + 0x3c) = auVar1._60_4_;
  return;
}

