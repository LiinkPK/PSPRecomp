/* Entry 0x08835F60 | file offset 0x00032F38 | FUN_08835f60 | bytes 348 */

undefined4 FUN_08835f60(undefined4 param_1,int param_2,int param_3)

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
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_20;
  
  if ((param_3 == 0) && (param_3 = *(int *)(param_2 + 0x2fc), param_3 == 0)) {
    uVar4 = 0;
  }
  else {
    FUN_089a38e0(&local_40,param_3 + 0x80,param_2 + 0x80);
    local_50 = local_40;
    local_4c = local_3c;
    local_48 = local_38;
    local_44 = local_34;
    local_70 = local_40;
    local_6c = local_3c;
    local_68 = local_38;
    local_64 = local_34;
    FUN_089a3868(&local_60,&local_70);
    auVar3._4_4_ = 0;
    auVar3._0_4_ = local_60;
    auVar3._8_4_ = uStack_58;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = local_60;
    auVar2._8_4_ = uStack_58;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = local_60;
    auVar1._8_4_ = uStack_58;
    uVar4 = vdot_t(auVar1,auVar2);
    uVar5 = vzero_s();
    uVar6 = vcmp_s(8,uVar4,local_60);
    local_20 = (float)vsqrt_s(uVar4);
    vrcp_s(local_20);
    uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar3,uVar4);
    local_60 = auVar1._0_4_;
    local_5c = auVar1._4_4_;
    uStack_58 = auVar1._8_4_;
    if (0.01 < local_20) {
      FUN_08835cf8(param_1,param_2,&local_60);
    }
    *(undefined4 *)(param_2 + 0x3d0) = 0;
    uVar4 = 1;
  }
  return uVar4;
}

