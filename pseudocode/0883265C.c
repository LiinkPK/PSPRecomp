/* Entry 0x0883265C | file offset 0x0002F634 | FUN_0883265c | bytes 232 */

void FUN_0883265c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,char param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_089a3868(&local_30,*(int *)(param_3 + 0x304) + 0x10);
  auVar3._4_4_ = uStack_2c;
  auVar3._0_4_ = local_30;
  auVar3._8_4_ = uStack_28;
  auVar2._4_4_ = uStack_2c;
  auVar2._0_4_ = local_30;
  auVar2._8_4_ = uStack_28;
  auVar1._4_4_ = uStack_2c;
  auVar1._0_4_ = local_30;
  auVar1._8_4_ = uStack_28;
  uVar4 = vdot_t(auVar1,auVar2);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,local_30);
  local_20 = vsqrt_s(uVar4);
  vrcp_s(local_20);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar4);
  local_30 = auVar1._0_4_;
  uStack_2c = auVar1._4_4_;
  uStack_28 = auVar1._8_4_;
  local_24 = 0;
  if (param_5 == '\0') {
    FUN_089a3a44(0xbf800000,&local_30,&local_30);
  }
  FUN_089a3a44(param_1,&local_30,&local_30);
  local_24 = param_2;
  func_0x08a6158c(param_3,&local_30,1,0);
  *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 1;
  return;
}

