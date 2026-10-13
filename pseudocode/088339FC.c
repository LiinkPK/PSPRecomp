/* Entry 0x088339FC | file offset 0x000309D4 | FUN_088339fc | bytes 220 */

void FUN_088339fc(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_30 = *(undefined4 *)(param_1 + 0xe0);
  local_2c = *(undefined4 *)(param_1 + 0xe4);
  local_28 = *(undefined4 *)(param_1 + 0xe8);
  local_24 = *(undefined4 *)(param_1 + 0xec);
  FUN_089a3a44(local_24,&local_30,&local_30);
  FUN_089a3a44(*(undefined4 *)(param_2 + 0xc),param_2,param_2);
  FUN_089a38a8(&local_30,&local_30,param_2);
  auVar3._4_4_ = local_2c;
  auVar3._0_4_ = local_30;
  auVar3._8_4_ = local_28;
  auVar2._4_4_ = local_2c;
  auVar2._0_4_ = local_30;
  auVar2._8_4_ = local_28;
  auVar1._4_4_ = local_2c;
  auVar1._0_4_ = local_30;
  auVar1._8_4_ = local_28;
  uVar4 = vdot_t(auVar1,auVar2);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,local_30);
  local_24 = vsqrt_s(uVar4);
  vrcp_s(local_24);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar4);
  local_30 = auVar1._0_4_;
  local_2c = auVar1._4_4_;
  local_28 = auVar1._8_4_;
  local_20 = local_24;
  FUN_089a3868((undefined4 *)(param_1 + 0xe0),&local_30);
  return;
}

