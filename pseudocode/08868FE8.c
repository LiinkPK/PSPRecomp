/* Entry 0x08868FE8 | file offset 0x00065FC0 | FUN_08868fe8 | bytes 256 */

void FUN_08868fe8(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_089a38e0(auStack_50,param_3,param_2);
  FUN_089a38e0(auStack_40,param_4,param_2);
  FUN_089a3b30(&local_30,auStack_50,auStack_40);
  auVar3._4_4_ = local_2c;
  auVar3._0_4_ = local_30;
  auVar3._8_4_ = local_28;
  auVar2._4_4_ = local_2c;
  auVar2._0_4_ = local_30;
  auVar2._8_4_ = local_28;
  auVar1._4_4_ = local_2c;
  auVar1._0_4_ = local_30;
  auVar1._8_4_ = local_28;
  uVar7 = vdot_t(auVar1,auVar2);
  uVar8 = vzero_s();
  uVar9 = vcmp_s(8,uVar7,local_30);
  uVar7 = vsqrt_s(uVar7);
  vrcp_s(uVar7);
  uVar7 = vcmovt_s(uVar8,(byte)uVar9 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar7);
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = -(auVar1._0_4_ * fVar4 + auVar1._4_4_ * fVar5 + auVar1._8_4_ * fVar6);
  return;
}

