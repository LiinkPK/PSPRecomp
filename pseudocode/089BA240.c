/* Entry 0x089BA240 | file offset 0x001B7218 | FUN_089ba240 | bytes 64 */

undefined4 * FUN_089ba240(undefined4 *param_1,undefined1 (*param_2) [64],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(*param_3 + 0xc);
  auVar1 = vscl_q(*(undefined1 (*) [16])*param_2,uVar5);
  auVar2 = vscl_q(*(undefined1 (*) [16])(*param_2 + 0x10),uVar5);
  auVar3 = vscl_q(*(undefined1 (*) [16])(*param_2 + 0x20),uVar5);
  auVar4 = vhtfm4_q(*param_2,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar2._12_4_;
  param_1[8] = auVar3._0_4_;
  param_1[9] = auVar3._4_4_;
  param_1[10] = auVar3._8_4_;
  param_1[0xb] = auVar3._12_4_;
  param_1[0xc] = auVar4._0_4_;
  param_1[0xd] = auVar4._4_4_;
  param_1[0xe] = auVar4._8_4_;
  param_1[0xf] = auVar4._12_4_;
  return param_1;
}

