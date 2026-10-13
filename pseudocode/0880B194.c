/* Entry 0x0880B194 | file offset 0x0000816C | FUN_0880b194 | bytes 616 */

void FUN_0880b194(undefined1 (*param_1) [12],undefined4 param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 (*local_b0) [12];
  undefined1 auStack_ac [12];
  undefined4 local_a0;
  undefined1 auStack_9c [12];
  undefined1 local_90;
  undefined1 local_8f;
  undefined2 local_8e;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined2 local_8a;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_3c;
  
  local_a0 = 0;
  local_90 = 0;
  local_8f = 0;
  local_8e = 0;
  local_8a = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = *(undefined4 *)(param_1[0xe] + 8);
  local_74 = *(undefined4 *)param_1[0xf];
  local_8c = 4;
  local_8b = (undefined1)*(undefined4 *)(param_1[0xf] + 4);
  local_b0 = param_1;
  FUN_08812664(auStack_ac,*(undefined4 *)param_1[2],&local_90);
  local_c0 = *(undefined4 *)param_1[0xc];
  local_bc = *(undefined4 *)(param_1[0xc] + 4);
  local_b8 = *(undefined4 *)(param_1[0xc] + 8);
  local_b4 = *(undefined4 *)param_1[0xd];
  FUN_089a34c0(auStack_9c,&local_c0);
  FUN_088091a0(param_2,&local_b0);
  FUN_089a38e0(&local_70,param_1[10] + 8,param_1 + 0xc);
  auVar3._4_4_ = local_6c;
  auVar3._0_4_ = local_70;
  auVar3._8_4_ = local_68;
  auVar2._4_4_ = local_6c;
  auVar2._0_4_ = local_70;
  auVar2._8_4_ = local_68;
  auVar1._4_4_ = local_6c;
  auVar1._0_4_ = local_70;
  auVar1._8_4_ = local_68;
  uVar5 = vdot_t(auVar1,auVar2);
  uVar7 = vzero_s();
  uVar8 = vcmp_s(8,uVar5,local_70);
  fVar6 = (float)vsqrt_s(uVar5);
  vrcp_s(fVar6);
  uVar5 = vcmovt_s(uVar7,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar5);
  local_70 = auVar1._0_4_;
  local_6c = auVar1._4_4_;
  local_68 = auVar1._8_4_;
  local_3c = fVar6;
  FUN_089a3a44(*(undefined4 *)(param_1[0xe] + 8),&local_70,&local_70);
  if (*(float *)(param_1[0xe] + 8) * 1.5 < fVar6) {
    do {
      local_54 = local_70;
      local_50 = local_6c;
      local_4c = local_68;
      local_60 = local_70;
      local_5c = local_6c;
      local_58 = local_68;
      FUN_089a34f4(auStack_9c,auStack_9c,&local_60);
      iVar4 = FUN_088091a0(param_2,&local_b0);
      if (iVar4 == 0) break;
      fVar6 = fVar6 - *(float *)(param_1[0xe] + 8);
    } while (*(float *)(param_1[0xe] + 8) * 1.5 < fVar6);
  }
  FUN_089a3868(param_1,param_1[0xd] + 4);
  iVar4 = FUN_089a3b70(param_1);
  if (iVar4 != 1) {
    uVar5 = *(undefined4 *)param_1[1];
    uVar7 = vdot_t(*param_1,*param_1);
    uVar8 = vzero_s();
    uVar9 = vcmp_s(8,uVar7,*(undefined4 *)*param_1);
    uVar7 = vsqrt_s(uVar7);
    vrcp_s(uVar7);
    uVar7 = vcmovt_s(uVar8,(byte)uVar9 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*param_1,uVar7);
    *(int *)*param_1 = auVar1._0_4_;
    *(int *)(*param_1 + 4) = auVar1._4_4_;
    *(int *)(*param_1 + 8) = auVar1._8_4_;
    *(undefined4 *)param_1[1] = uVar5;
  }
  return;
}

