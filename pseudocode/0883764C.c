/* Entry 0x0883764C | file offset 0x00034624 | FUN_0883764c | bytes 280 */

bool FUN_0883764c(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  bool bVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  
  if (*(short *)(*(int *)(param_2 + 0x2c) + 0x2c) == 1) {
    FUN_089a3868(&local_30,param_2);
  }
  else {
    FUN_089a3868(&local_30,param_2 + 0x10);
  }
  auVar3._4_4_ = 0;
  auVar3._0_4_ = local_30;
  auVar3._8_4_ = uStack_28;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = local_30;
  auVar2._8_4_ = uStack_28;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = local_30;
  auVar1._8_4_ = uStack_28;
  uVar7 = vdot_t(auVar1,auVar2);
  uVar8 = vzero_s();
  uVar9 = vcmp_s(8,uVar7,local_30);
  local_20 = vsqrt_s(uVar7);
  vrcp_s(local_20);
  uVar7 = vcmovt_s(uVar8,(byte)uVar9 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar7);
  local_30 = auVar1._0_4_;
  local_2c = auVar1._4_4_;
  uStack_28 = auVar1._8_4_;
  iVar5 = FUN_089a3b70(&local_30);
  if (iVar5 == 1) {
    bVar4 = true;
  }
  else {
    uVar7 = FUN_08868128(param_1 + 0x90,&local_30,0);
    fVar6 = (float)FUN_089a4500(uVar7);
    bVar4 = 1.5707964 < fVar6;
  }
  return bVar4;
}

