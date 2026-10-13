/* Entry 0x0895F8D0 | file offset 0x0015C8A8 | FUN_0895f8d0 | bytes 276 */

void FUN_0895f8d0(int param_1,int *param_2,undefined4 param_3)

{
  undefined1 auVar1 [64];
  undefined1 auVar2 [64];
  int iVar3;
  undefined1 *puVar4;
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
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [96];
  
  iVar3 = *(int *)(DAT_09b6f478 + 0x8c);
  puVar4 = *(undefined1 **)
            (*(int *)(iVar3 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(0x3f800000,DAT_09b6f478,iVar3,*(undefined4 *)(iVar3 + 0x50),*puVar4,puVar4[1],
               puVar4[2],&local_100);
  auVar1._60_4_ = DAT_089da284[0xf];
  auVar1._56_4_ = DAT_089da284[0xb];
  auVar1._52_4_ = DAT_089da284[7];
  auVar1._48_4_ = DAT_089da284[3];
  auVar1._44_4_ = DAT_089da284[0xe];
  auVar1._40_4_ = DAT_089da284[10];
  auVar1._36_4_ = DAT_089da284[6];
  auVar1._32_4_ = DAT_089da284[2];
  auVar1._28_4_ = DAT_089da284[0xd];
  auVar1._24_4_ = DAT_089da284[9];
  auVar1._20_4_ = DAT_089da284[5];
  auVar1._16_4_ = DAT_089da284[1];
  auVar1._12_4_ = DAT_089da284[0xc];
  auVar1._8_4_ = DAT_089da284[8];
  auVar1._4_4_ = DAT_089da284[4];
  auVar1._0_4_ = *DAT_089da284;
  auVar2._60_4_ = uStack_c4;
  auVar2._56_4_ = uStack_d4;
  auVar2._52_4_ = uStack_e4;
  auVar2._48_4_ = uStack_f4;
  auVar2._44_4_ = uStack_c8;
  auVar2._40_4_ = uStack_d8;
  auVar2._36_4_ = uStack_e8;
  auVar2._32_4_ = uStack_f8;
  auVar2._28_4_ = uStack_cc;
  auVar2._24_4_ = uStack_dc;
  auVar2._20_4_ = uStack_ec;
  auVar2._16_4_ = uStack_fc;
  auVar2._12_4_ = local_d0;
  auVar2._8_4_ = local_e0;
  auVar2._4_4_ = local_f0;
  auVar2._0_4_ = local_100;
  auVar1 = vmmul_q(auVar1,auVar2);
  local_c0 = auVar1._0_4_;
  local_b0 = auVar1._4_4_;
  local_a0 = auVar1._8_4_;
  local_90 = auVar1._12_4_;
  uStack_bc = auVar1._16_4_;
  uStack_ac = auVar1._20_4_;
  uStack_9c = auVar1._24_4_;
  uStack_8c = auVar1._28_4_;
  uStack_b8 = auVar1._32_4_;
  uStack_a8 = auVar1._36_4_;
  uStack_98 = auVar1._40_4_;
  uStack_88 = auVar1._44_4_;
  uStack_b4 = auVar1._48_4_;
  uStack_a4 = auVar1._52_4_;
  uStack_94 = auVar1._56_4_;
  uStack_84 = auVar1._60_4_;
  FUN_0895f9e4(*(undefined4 *)(param_1 + 4),local_80);
  (**(code **)(*param_2 + 0x1c))((int)param_2 + (int)*(short *)(*param_2 + 0x18),param_3,local_80);
  return;
}

