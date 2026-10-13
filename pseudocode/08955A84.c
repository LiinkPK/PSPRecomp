/* Entry 0x08955A84 | file offset 0x00152A5C | FUN_08955a84 | bytes 1024 */

void FUN_08955a84(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [36];
  undefined1 auVar3 [36];
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [64];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  if (*(short *)(param_4 + 4) != -1) {
    if (*(int *)(param_3 + 0xc) < 0) {
      iVar6 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) +
                               *(int *)(param_3 + 0xc) * 4) + 0x10);
    }
    if (iVar6 != -1) {
      puVar7 = *(undefined4 **)(*(int *)(param_2 + 0x8c) + 0x50);
      FUN_08970b40(&local_100,*(undefined1 *)(param_4 + 6));
      local_d0 = puVar7[0xc];
      uStack_cc = puVar7[0xd];
      uStack_c8 = puVar7[0xe];
      uStack_c4 = puVar7[0xf];
      auVar2._32_4_ = uStack_d8;
      auVar2._28_4_ = uStack_e8;
      auVar2._24_4_ = uStack_f8;
      auVar2._20_4_ = uStack_dc;
      auVar2._16_4_ = uStack_ec;
      auVar2._12_4_ = uStack_fc;
      auVar2._8_4_ = local_e0;
      auVar2._4_4_ = local_f0;
      auVar2._0_4_ = local_100;
      auVar3._32_4_ = puVar7[10];
      auVar3._28_4_ = puVar7[6];
      auVar3._24_4_ = puVar7[2];
      auVar3._20_4_ = puVar7[9];
      auVar3._16_4_ = puVar7[5];
      auVar3._12_4_ = puVar7[1];
      auVar3._8_4_ = puVar7[8];
      auVar3._4_4_ = puVar7[4];
      auVar3._0_4_ = *puVar7;
      auVar2 = vmmul_t(auVar2,auVar3);
      local_100 = auVar2._0_4_;
      local_f0 = auVar2._4_4_;
      local_e0 = auVar2._8_4_;
      uStack_fc = auVar2._12_4_;
      uStack_ec = auVar2._16_4_;
      uStack_dc = auVar2._20_4_;
      uStack_f8 = auVar2._24_4_;
      uStack_e8 = auVar2._28_4_;
      uStack_d8 = auVar2._32_4_;
      uStack_f4 = vzero_s();
      uStack_e4 = vzero_s();
      uStack_d4 = vzero_s();
      puVar4 = *(undefined1 **)
                (*(int *)(*(int *)(param_2 + 0x8c) + 0x48) +
                (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
      FUN_08946ac4(0x3dcccccd,param_2,*(int *)(param_2 + 0x8c),&local_100,*puVar4,puVar4[1],
                   puVar4[2],&local_100);
      FUN_0896fb5c(&local_100);
      FUN_089a0384(9);
      FUN_089a0f84(0,0);
      FUN_089a119c(1);
      FUN_089a03dc(5);
      auVar1 = vmul_q(*(undefined1 (*) [16])
                       (*(int *)(param_2 + 0x8c) +
                        (uint)*(ushort *)
                               (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                               *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60),
                      *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
      local_50 = auVar1._0_4_;
      local_4c = auVar1._4_4_;
      local_48 = auVar1._8_4_;
      local_44 = auVar1._12_4_;
      if (local_50 < 0.0) {
        local_50 = 0.0;
      }
      else if (255.0 < local_50) {
        local_50 = 255.0;
      }
      if (local_4c < 0.0) {
        local_4c = 0.0;
      }
      else if (255.0 < local_4c) {
        local_4c = 255.0;
      }
      if (local_48 < 0.0) {
        local_48 = 0.0;
      }
      else if (255.0 < local_48) {
        local_48 = 255.0;
      }
      if (local_44 < 0.0) {
        local_44 = 0.0;
      }
      else if (255.0 < local_44) {
        local_44 = 255.0;
      }
      local_80 = local_50;
      local_7c = local_4c;
      local_78 = local_48;
      local_74 = local_44;
      if (*(char *)(param_3 + 0x1d) == '\0') {
        *(undefined4 *)(*(int *)(param_2 + 0x9c) + 0x2c) = 0xffffffff;
        FUN_08942fb8(*(undefined4 *)(param_2 + 0x9c),iVar6,*(undefined2 *)(param_4 + 4),&local_80);
      }
      else {
        local_60 = *(undefined4 *)(param_3 + 0x14);
        iVar5 = *(int *)(param_2 + 0x8c);
        local_5c = local_60;
        local_58 = local_60;
        local_54 = local_60;
        FUN_08947b88(0x3dcccccd,param_2,iVar5,*(undefined4 *)(iVar5 + 0x50),
                     *(undefined1 *)
                      (*(int *)(*(int *)(iVar5 + 0x48) +
                               (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4) +
                      1),*(undefined1 *)(param_3 + 0x1e),param_3,&local_60,auStack_c0);
        uVar8 = FUN_0896fd08(&local_100,auStack_c0);
        FUN_0896fd88(uVar8);
        *(undefined4 *)(*(int *)(param_2 + 0x9c) + 0x2c) = 0xffffffff;
        FUN_08942fb8(*(undefined4 *)(param_2 + 0x9c),iVar6,*(undefined2 *)(param_4 + 4),&local_80);
        FUN_0896fe50();
      }
    }
  }
  return;
}

