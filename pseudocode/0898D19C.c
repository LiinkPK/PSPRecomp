/* Entry 0x0898D19C | file offset 0x0018A174 | FUN_0898d19c | bytes 108 */

void FUN_0898d19c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,
                 undefined1 (*param_4) [12],undefined1 (*param_5) [12],undefined1 (*param_6) [12],
                 undefined1 (*param_7) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  auVar1 = vsub_t(*param_5,*param_4);
  auVar2 = vsub_t(*param_7,*param_6);
  auVar1 = vcrsp_t(auVar1,auVar2);
  uVar3 = vdot_t(auVar1,auVar1);
  uVar4 = vzero_s();
  uVar5 = vcmp_s(8,uVar3,*(undefined4 *)*param_4);
  vrsq_s(uVar3);
  uVar3 = vcmovt_s(uVar4,(byte)uVar5 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar1,uVar3);
  auVar1 = vscl_t(auVar1,param_1);
  auVar2 = vsub_t(*param_6,auVar1);
  auVar1 = vadd_t(*param_6,auVar1);
  *param_2 = auVar2._0_4_;
  param_2[1] = auVar2._4_4_;
  param_2[2] = auVar2._8_4_;
  *param_3 = auVar1._0_4_;
  param_3[1] = auVar1._4_4_;
  param_3[2] = auVar1._8_4_;
  return;
}

