/* Entry 0x089BA2C4 | file offset 0x001B729C | FUN_089ba2c4 | bytes 84 */

undefined4 *
FUN_089ba2c4(undefined4 *param_1,undefined1 (*param_2) [64],undefined1 (*param_3) [64],
            undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(*param_4 + 0xc);
  auVar5 = vhtfm4_q(*param_3,*param_4);
  auVar1 = vscl_q(*(undefined1 (*) [16])*param_3,uVar6);
  auVar2 = vscl_q(*(undefined1 (*) [16])(*param_3 + 0x10),uVar6);
  auVar3 = vscl_q(*(undefined1 (*) [16])(*param_3 + 0x20),uVar6);
  auVar4._48_16_ = auVar5;
  auVar4._44_4_ = auVar3._12_4_;
  auVar4._40_4_ = auVar3._8_4_;
  auVar4._36_4_ = auVar3._4_4_;
  auVar4._32_4_ = auVar3._0_4_;
  auVar4._28_4_ = auVar2._12_4_;
  auVar4._24_4_ = auVar2._8_4_;
  auVar4._20_4_ = auVar2._4_4_;
  auVar4._16_4_ = auVar2._0_4_;
  auVar4._12_4_ = auVar1._12_4_;
  auVar4._8_4_ = auVar1._8_4_;
  auVar4._4_4_ = auVar1._4_4_;
  auVar4._0_4_ = auVar1._0_4_;
  auVar4 = vmmul_q(auVar4,*param_2);
  *param_1 = auVar4._0_4_;
  param_1[1] = auVar4._4_4_;
  param_1[2] = auVar4._8_4_;
  param_1[3] = auVar4._12_4_;
  param_1[4] = auVar4._16_4_;
  param_1[5] = auVar4._20_4_;
  param_1[6] = auVar4._24_4_;
  param_1[7] = auVar4._28_4_;
  param_1[8] = auVar4._32_4_;
  param_1[9] = auVar4._36_4_;
  param_1[10] = auVar4._40_4_;
  param_1[0xb] = auVar4._44_4_;
  param_1[0xc] = auVar4._48_4_;
  param_1[0xd] = auVar4._52_4_;
  param_1[0xe] = auVar4._56_4_;
  param_1[0xf] = auVar4._60_4_;
  return param_1;
}

