/* Entry 0x08834E08 | file offset 0x00031DE0 | FUN_08834e08 | bytes 296 */

float FUN_08834e08(float param_1,int param_2,undefined4 param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_20;
  
  FUN_089a38e0(&local_40,param_3,param_2 + 0x80);
  local_50 = local_40;
  local_4c = local_3c;
  local_48 = local_38;
  local_44 = local_34;
  auVar3._4_4_ = local_3c;
  auVar3._0_4_ = local_40;
  auVar3._8_4_ = local_38;
  auVar2._4_4_ = local_3c;
  auVar2._0_4_ = local_40;
  auVar2._8_4_ = local_38;
  auVar1._4_4_ = local_3c;
  auVar1._0_4_ = local_40;
  auVar1._8_4_ = local_38;
  uVar4 = vdot_t(auVar1,auVar2);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,local_40);
  local_20 = (float)vsqrt_s(uVar4);
  vrcp_s(local_20);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar4);
  local_70 = auVar1._0_4_;
  local_6c = auVar1._4_4_;
  local_68 = auVar1._8_4_;
  local_54 = param_1;
  if (local_20 <= param_1) {
    local_54 = local_20;
  }
  local_64 = local_54;
  local_60 = local_70;
  local_5c = local_6c;
  local_58 = local_68;
  FUN_088339fc(param_2,&local_70);
  return local_54;
}

