/* Entry 0x0898400C | file offset 0x00180FE4 | FUN_0898400c | bytes 128 */

void FUN_0898400c(undefined1 (*param_1) [16],undefined4 *param_2,undefined4 param_3,
                 undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  
  FUN_08983ff0(param_1,param_3,param_4);
  auVar1 = vsub_q(param_1[1],*param_1);
  auVar1 = vscl_q(auVar1,0x3f000000);
  uVar4 = vone_s();
  auVar2._12_4_ = uVar4;
  auVar2._8_4_ = auVar1._8_4_;
  auVar2._4_4_ = auVar1._4_4_;
  auVar2._0_4_ = auVar1._0_4_;
  auVar1 = vadd_q(auVar2,*param_1);
  auVar2 = vsub_q(param_1[2],param_1[3]);
  auVar2 = vscl_q(auVar2,0x3f000000);
  uVar4 = vone_s();
  auVar3._12_4_ = uVar4;
  auVar3._8_4_ = auVar2._8_4_;
  auVar3._4_4_ = auVar2._4_4_;
  auVar3._0_4_ = auVar2._0_4_;
  auVar2 = vadd_q(auVar3,param_1[3]);
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

