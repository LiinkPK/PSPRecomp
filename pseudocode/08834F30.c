/* Entry 0x08834F30 | file offset 0x00031F08 | FUN_08834f30 | bytes 260 */

undefined4 FUN_08834f30(int param_1,undefined4 param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_10;
  
  FUN_089a38e0(&local_30,param_2,param_1 + 0x80);
  local_40 = local_30;
  local_3c = local_2c;
  local_38 = local_28;
  local_34 = local_24;
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
  local_54 = vsqrt_s(uVar4);
  vrcp_s(local_54);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar4);
  local_60 = auVar1._0_4_;
  local_5c = auVar1._4_4_;
  local_58 = auVar1._8_4_;
  local_50 = local_60;
  local_4c = local_5c;
  local_48 = local_58;
  local_44 = local_54;
  local_10 = local_54;
  FUN_088339fc(param_1,&local_60);
  return local_44;
}

