/* Entry 0x089BA280 | file offset 0x001B7258 | FUN_089ba280 | bytes 68 */

undefined4 * FUN_089ba280(undefined4 *param_1,undefined1 (*param_2) [64],int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = *(undefined4 *)(*param_2 + 0x20);
  uVar5 = *(undefined4 *)(*param_2 + 0x24);
  uVar6 = *(undefined4 *)(*param_2 + 0x28);
  uVar7 = *(undefined4 *)(*param_2 + 0x2c);
  auVar1 = vscl_q(*(undefined1 (*) [16])*param_2,*(undefined4 *)(param_3 + 8));
  auVar2 = vscl_q(*(undefined1 (*) [16])(*param_2 + 0x10),*(undefined4 *)(param_3 + 0xc));
  vpfxd(5,5,1,1);
  auVar3 = vidt_q();
  auVar3 = vtfm4_q(*param_2,auVar3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar2._12_4_;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = auVar3._0_4_;
  param_1[0xd] = auVar3._4_4_;
  param_1[0xe] = auVar3._8_4_;
  param_1[0xf] = auVar3._12_4_;
  return param_1;
}

