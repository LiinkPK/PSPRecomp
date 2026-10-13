/* Entry 0x08946D04 | file offset 0x00143CDC | FUN_08946d04 | bytes 132 */

void FUN_08946d04(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = vdot_q(*param_2,*param_2);
  uVar4 = vzero_s();
  uVar5 = vcmp_s(8,uVar3,*(undefined4 *)*param_2);
  vrsq_s(uVar3);
  uVar3 = vcmovt_s(uVar4,(byte)uVar5 & 1);
  vpfxd(4,4,4,4);
  auVar1 = vscl_q(*param_2,uVar3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  pauVar2 = param_2 + 1;
  uVar3 = vdot_q(*pauVar2,*pauVar2);
  uVar4 = vzero_s();
  uVar5 = vcmp_s(8,uVar3,*(undefined4 *)*pauVar2);
  vrsq_s(uVar3);
  uVar3 = vcmovt_s(uVar4,(byte)uVar5 & 1);
  vpfxd(4,4,4,4);
  auVar1 = vscl_q(*pauVar2,uVar3);
  param_1[4] = auVar1._0_4_;
  param_1[5] = auVar1._4_4_;
  param_1[6] = auVar1._8_4_;
  param_1[7] = auVar1._12_4_;
  param_2 = param_2 + 2;
  uVar3 = vdot_q(*param_2,*param_2);
  uVar4 = vzero_s();
  uVar5 = vcmp_s(8,uVar3,*(undefined4 *)*param_2);
  vrsq_s(uVar3);
  uVar3 = vcmovt_s(uVar4,(byte)uVar5 & 1);
  vpfxd(4,4,4,4);
  auVar1 = vscl_q(*param_2,uVar3);
  param_1[8] = auVar1._0_4_;
  param_1[9] = auVar1._4_4_;
  param_1[10] = auVar1._8_4_;
  param_1[0xb] = auVar1._12_4_;
  return;
}

