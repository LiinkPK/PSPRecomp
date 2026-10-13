/* Entry 0x089841E4 | file offset 0x001811BC | FUN_089841e4 | bytes 216 */

void FUN_089841e4(undefined1 (*param_1) [16],undefined4 *param_2,undefined1 (*param_3) [16],
                 undefined4 *param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  
  FUN_0898408c(param_1,param_3,param_5,param_6,param_7);
  auVar6 = *param_1;
  auVar5 = *param_1;
  auVar4 = param_1[1];
  auVar7 = param_1[2];
  auVar9 = param_1[3];
  auVar8 = param_1[3];
  auVar1 = vsub_q(param_3[1],*param_3);
  auVar1 = vscl_q(auVar1,0x3f000000);
  uVar10 = vone_s();
  auVar2._12_4_ = uVar10;
  auVar2._8_4_ = auVar1._8_4_;
  auVar2._4_4_ = auVar1._4_4_;
  auVar2._0_4_ = auVar1._0_4_;
  auVar1 = vadd_q(auVar2,*param_3);
  auVar2 = vsub_q(param_3[2],param_3[3]);
  auVar2 = vscl_q(auVar2,0x3f000000);
  uVar10 = vone_s();
  auVar3._12_4_ = uVar10;
  auVar3._8_4_ = auVar2._8_4_;
  auVar3._4_4_ = auVar2._4_4_;
  auVar3._0_4_ = auVar2._0_4_;
  auVar2 = vadd_q(auVar3,param_3[3]);
  *param_4 = auVar1._0_4_;
  param_4[1] = auVar1._4_4_;
  param_4[2] = auVar1._8_4_;
  param_4[3] = auVar1._12_4_;
  param_4[4] = auVar2._0_4_;
  param_4[5] = auVar2._4_4_;
  param_4[6] = auVar2._8_4_;
  param_4[7] = auVar2._12_4_;
  auVar1 = vsub_q(auVar4,auVar5);
  auVar1 = vscl_q(auVar1,0x3f000000);
  uVar10 = vone_s();
  auVar4._12_4_ = uVar10;
  auVar4._8_4_ = auVar1._8_4_;
  auVar4._4_4_ = auVar1._4_4_;
  auVar4._0_4_ = auVar1._0_4_;
  auVar1 = vadd_q(auVar4,auVar6);
  auVar2 = vsub_q(auVar7,auVar8);
  auVar2 = vscl_q(auVar2,0x3f000000);
  uVar10 = vone_s();
  auVar5._12_4_ = uVar10;
  auVar5._8_4_ = auVar2._8_4_;
  auVar5._4_4_ = auVar2._4_4_;
  auVar5._0_4_ = auVar2._0_4_;
  auVar2 = vadd_q(auVar5,auVar9);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = auVar1._12_4_;
  param_2[4] = auVar2._0_4_;
  param_2[5] = auVar2._4_4_;
  param_2[6] = auVar2._8_4_;
  param_2[7] = auVar2._12_4_;
  return;
}

