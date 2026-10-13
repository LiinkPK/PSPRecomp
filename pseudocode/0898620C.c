/* Entry 0x0898620C | file offset 0x001831E4 | FUN_0898620c | bytes 896 */

void FUN_0898620c(int param_1,int param_2)

{
  undefined1 auVar1 [64];
  undefined1 auVar2 [64];
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
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
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_2 != 0) {
    iVar6 = *(int *)(*(int *)(param_2 + 0x8c) +
                     (uint)*(ushort *)
                            (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                            (*(int *)(*(int *)(param_2 + 0x90) + 4) + *(int *)(param_1 + 0xbc)) * 2)
                    + 0x60);
    if (*(char *)(param_1 + 0xc0) == '\0') {
      FUN_089a03dc(9);
    }
    else {
      FUN_089a0384(9);
      if (*(int *)(param_1 + 0xc4) < 0) {
        iVar4 = -1;
      }
      else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x30) == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x30) +
                                 *(int *)(param_1 + 0xc4) * 4) + 0x10);
      }
      if (iVar4 == -1) {
        return;
      }
      FUN_08973334(*(undefined4 *)(param_2 + 0xa4),iVar4,5,1,0,0);
    }
    FUN_089a0f84(0,0);
    FUN_089a119c(1);
    FUN_089a03dc(5);
    FUN_089a0384(4);
    uVar3 = FUN_08983db4(*(undefined1 *)(param_1 + 0xb2),0,1,2);
    FUN_08983cd8(uVar3);
    FUN_08983b74(0);
    iVar4 = *(int *)(iVar6 + 0x20);
    iVar6 = (**(code **)(iVar4 + 0x1c))(iVar6 + *(short *)(iVar4 + 0x18));
    if (iVar6 < 2) {
      if (iVar6 < 1) {
        return;
      }
      if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
        puVar5 = (undefined4 *)(*(int *)(param_2 + 0x88) + 0x50);
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
      }
      local_a0 = *puVar5;
      local_9c = puVar5[1];
      local_98 = puVar5[2];
      local_94 = puVar5[3];
      local_90 = puVar5[4];
      local_8c = puVar5[5];
      local_88 = puVar5[6];
      local_84 = puVar5[7];
      local_80 = puVar5[8];
      local_7c = puVar5[9];
      local_78 = puVar5[10];
      local_74 = puVar5[0xb];
      local_70 = puVar5[0xc];
      local_6c = puVar5[0xd];
      local_68 = puVar5[0xe];
      local_64 = puVar5[0xf];
    }
    else if (iVar6 < 3) {
      FUN_0894c5ac(param_2,*(undefined4 *)(param_2 + 0x88),&local_a0);
    }
    else {
      if (3 < iVar6) {
        return;
      }
      FUN_089a3ebc(&local_a0);
    }
    auVar1._60_4_ = DAT_089da278[0xf];
    auVar1._56_4_ = DAT_089da278[0xb];
    auVar1._52_4_ = DAT_089da278[7];
    auVar1._48_4_ = DAT_089da278[3];
    auVar1._44_4_ = DAT_089da278[0xe];
    auVar1._40_4_ = DAT_089da278[10];
    auVar1._36_4_ = DAT_089da278[6];
    auVar1._32_4_ = DAT_089da278[2];
    auVar1._28_4_ = DAT_089da278[0xd];
    auVar1._24_4_ = DAT_089da278[9];
    auVar1._20_4_ = DAT_089da278[5];
    auVar1._16_4_ = DAT_089da278[1];
    auVar1._12_4_ = DAT_089da278[0xc];
    auVar1._8_4_ = DAT_089da278[8];
    auVar1._4_4_ = DAT_089da278[4];
    auVar1._0_4_ = *DAT_089da278;
    auVar2._60_4_ = local_64;
    auVar2._56_4_ = local_74;
    auVar2._52_4_ = local_84;
    auVar2._48_4_ = local_94;
    auVar2._44_4_ = local_68;
    auVar2._40_4_ = local_78;
    auVar2._36_4_ = local_88;
    auVar2._32_4_ = local_98;
    auVar2._28_4_ = local_6c;
    auVar2._24_4_ = local_7c;
    auVar2._20_4_ = local_8c;
    auVar2._16_4_ = local_9c;
    auVar2._12_4_ = local_70;
    auVar2._8_4_ = local_80;
    auVar2._4_4_ = local_90;
    auVar2._0_4_ = local_a0;
    auVar1 = vmmul_q(auVar1,auVar2);
    local_60 = auVar1._0_4_;
    local_50 = auVar1._4_4_;
    local_40 = auVar1._8_4_;
    local_30 = auVar1._12_4_;
    uStack_5c = auVar1._16_4_;
    uStack_4c = auVar1._20_4_;
    uStack_3c = auVar1._24_4_;
    uStack_2c = auVar1._28_4_;
    uStack_58 = auVar1._32_4_;
    uStack_48 = auVar1._36_4_;
    uStack_38 = auVar1._40_4_;
    uStack_28 = auVar1._44_4_;
    uStack_54 = auVar1._48_4_;
    uStack_44 = auVar1._52_4_;
    uStack_34 = auVar1._56_4_;
    uStack_24 = auVar1._60_4_;
    FUN_0896fb5c(&local_a0);
    if (*(char *)(param_1 + 0xb1) == '\0') {
      iVar6 = FUN_0898658c(param_1,param_2,&local_60);
      if (iVar6 == 1) {
        FUN_089869d4(param_1,param_2,&local_a0);
      }
    }
    else if (*(float *)(param_1 + 0xa0) == 0.0) {
      iVar6 = FUN_089866c8(param_1,param_2,&local_60);
      if (iVar6 == 1) {
        FUN_08986a58(param_1,param_2,&local_a0);
      }
    }
    else {
      iVar6 = FUN_08986834(param_1,param_2,&local_60);
      if (iVar6 == 1) {
        FUN_08986b00(param_1,param_2,&local_a0);
      }
    }
  }
  return;
}

