/* Entry 0x08807AB8 | file offset 0x00004A90 | FUN_08807ab8 | bytes 600 */

void FUN_08807ab8(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    FUN_089a3a44(0xbf800000,&local_40,param_3 + 0x90);
    local_90 = local_40;
    local_8c = local_3c;
    local_88 = local_38;
    local_84 = local_34;
    local_a0 = local_40;
    local_9c = local_3c;
    local_98 = local_38;
    local_94 = local_34;
    FUN_089a3868(&local_f0,&local_a0);
  }
  else {
    FUN_089a38e0(&local_80,param_3 + 0x80,*(int *)(param_2 + 0x14) + 0x80);
    local_d0 = local_80;
    local_cc = local_7c;
    local_c8 = local_78;
    local_c4 = local_74;
    local_e0 = local_80;
    local_dc = local_7c;
    local_d8 = local_78;
    local_d4 = local_74;
    FUN_089a3868(&local_f0,&local_e0);
    local_ec = 0;
    iVar4 = FUN_089a3b70(&local_f0);
    if (iVar4 == 1) {
      local_c0 = -*(float *)(param_3 + 0x90);
      local_bc = -*(float *)(param_3 + 0x94);
      local_b8 = -*(float *)(param_3 + 0x98);
      local_54 = 0x3f800000;
      local_a4 = 0x3f800000;
      local_b4 = 0x3f800000;
      local_b0 = local_c0;
      local_ac = local_bc;
      local_a8 = local_b8;
      local_60 = local_c0;
      local_5c = local_bc;
      local_58 = local_b8;
      FUN_089a3868(&local_f0,&local_c0);
    }
    auVar3._4_4_ = local_ec;
    auVar3._0_4_ = local_f0;
    auVar3._8_4_ = local_e8;
    auVar2._4_4_ = local_ec;
    auVar2._0_4_ = local_f0;
    auVar2._8_4_ = local_e8;
    auVar1._4_4_ = local_ec;
    auVar1._0_4_ = local_f0;
    auVar1._8_4_ = local_e8;
    uVar5 = vdot_t(auVar1,auVar2);
    uVar6 = vzero_s();
    uVar7 = vcmp_s(8,uVar5,local_f0);
    uVar5 = vsqrt_s(uVar5);
    vrcp_s(uVar5);
    uVar5 = vcmovt_s(uVar6,(byte)uVar7 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar3,uVar5);
    local_f0 = auVar1._0_4_;
    local_ec = auVar1._4_4_;
    local_e8 = auVar1._8_4_;
    local_e4 = 0x3f800000;
  }
  *param_1 = local_f0;
  param_1[1] = local_ec;
  param_1[2] = local_e8;
  param_1[3] = local_e4;
  return;
}

