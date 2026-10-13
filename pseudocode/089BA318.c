/* Entry 0x089BA318 | file offset 0x001B72F0 | FUN_089ba318 | bytes 72 */

undefined4 * FUN_089ba318(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pauVar1 = param_2 + 1;
  pauVar2 = param_2 + 2;
  uVar8 = vdot_t(*(undefined1 (*) [12])*param_2,*(undefined1 (*) [12])*param_2);
  uVar9 = vdot_t(*(undefined1 (*) [12])*pauVar1,*(undefined1 (*) [12])*pauVar1);
  uVar10 = vdot_t(*(undefined1 (*) [12])*pauVar2,*(undefined1 (*) [12])*pauVar2);
  auVar7._8_4_ = uVar10;
  auVar7._4_4_ = uVar9;
  auVar7._0_4_ = uVar8;
  auVar7 = vrsq_t(auVar7);
  auVar3 = vscl_q(*param_2,auVar7._0_4_);
  auVar4 = vscl_q(*pauVar1,auVar7._4_4_);
  auVar5 = vscl_q(*pauVar2,auVar7._8_4_);
  auVar6 = vidt_q();
  *param_1 = auVar3._0_4_;
  param_1[1] = auVar3._4_4_;
  param_1[2] = auVar3._8_4_;
  param_1[3] = auVar3._12_4_;
  param_1[4] = auVar4._0_4_;
  param_1[5] = auVar4._4_4_;
  param_1[6] = auVar4._8_4_;
  param_1[7] = auVar4._12_4_;
  param_1[8] = auVar5._0_4_;
  param_1[9] = auVar5._4_4_;
  param_1[10] = auVar5._8_4_;
  param_1[0xb] = auVar5._12_4_;
  param_1[0xc] = auVar6._0_4_;
  param_1[0xd] = auVar6._4_4_;
  param_1[0xe] = auVar6._8_4_;
  param_1[0xf] = auVar6._12_4_;
  return param_1;
}

