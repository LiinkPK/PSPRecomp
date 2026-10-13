/* Entry 0x0880B508 | file offset 0x000084E0 | FUN_0880b508 | bytes 600 */

void FUN_0880b508(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  
  if ((*(uint *)(param_2 + 0xc0) & 2) == 0) {
    FUN_08807ab8(&local_70,param_2,param_3);
    *param_1 = local_70;
    param_1[1] = local_6c;
    param_1[2] = local_68;
    param_1[3] = local_64;
  }
  else {
    iVar4 = FUN_089a3b70(param_2 + 0xa0);
    if (iVar4 == 1) {
      FUN_089a38e0(&local_60,param_3 + 0x80,param_2 + 0x90);
      local_a0 = local_60;
      local_9c = local_5c;
      local_98 = local_58;
      local_94 = local_54;
      local_b0 = local_60;
      local_ac = local_5c;
      local_a8 = local_58;
      local_a4 = local_54;
      FUN_089a3868(&local_c0,&local_b0);
      local_bc = 0;
      iVar4 = FUN_089a3b70(&local_c0);
      if (iVar4 == 1) {
        local_90 = -*(float *)(param_3 + 0x90);
        local_8c = -*(float *)(param_3 + 0x94);
        local_88 = -*(float *)(param_3 + 0x98);
        local_34 = 0x3f800000;
        local_74 = 0x3f800000;
        local_84 = 0x3f800000;
        local_80 = local_90;
        local_7c = local_8c;
        local_78 = local_88;
        local_40 = local_90;
        local_3c = local_8c;
        local_38 = local_88;
        FUN_089a3868(&local_c0,&local_90);
      }
    }
    else {
      FUN_089a3868(&local_c0,param_2 + 0xa0);
    }
    auVar3._4_4_ = local_bc;
    auVar3._0_4_ = local_c0;
    auVar3._8_4_ = local_b8;
    auVar2._4_4_ = local_bc;
    auVar2._0_4_ = local_c0;
    auVar2._8_4_ = local_b8;
    auVar1._4_4_ = local_bc;
    auVar1._0_4_ = local_c0;
    auVar1._8_4_ = local_b8;
    uVar5 = vdot_t(auVar1,auVar2);
    uVar6 = vzero_s();
    uVar7 = vcmp_s(8,uVar5,local_c0);
    uVar5 = vsqrt_s(uVar5);
    vrcp_s(uVar5);
    uVar5 = vcmovt_s(uVar6,(byte)uVar7 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar3,uVar5);
    *param_1 = auVar1._0_4_;
    param_1[1] = auVar1._4_4_;
    param_1[2] = auVar1._8_4_;
    param_1[3] = 0x3f800000;
  }
  return;
}

