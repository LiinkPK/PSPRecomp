/* Entry 0x08961980 | file offset 0x0015E958 | FUN_08961980 | bytes 672 */

void FUN_08961980(undefined4 param_1,int param_2,undefined1 (*param_3) [16],int *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [36];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auVar6 [64];
  
  iVar9 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  if (0.0 < *(float *)(iVar9 + 0xb0)) {
    if (*(int *)param_3[1] < 0) {
      iVar10 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) +
                                *(int *)param_3[1] * 4) + 0x10);
    }
    if (iVar10 != -1) {
      iVar11 = *param_4;
      vmidt_q();
      auVar4 = vmidt_q();
      auVar3._24_12_ = auVar4._32_12_;
      auVar3._20_4_ = auVar4._24_4_;
      auVar3._16_4_ = auVar4._20_4_;
      auVar3._12_4_ = auVar4._16_4_;
      auVar3._8_4_ = auVar4._8_4_;
      auVar3._4_4_ = auVar4._4_4_;
      auVar3._0_4_ = auVar4._0_4_;
      auVar3 = vmscl_t(auVar3,*(undefined4 *)(param_3[1] + 4));
      auVar5._60_4_ = *(undefined4 *)(iVar9 + 0x9c);
      auVar5._56_4_ = *(undefined4 *)(iVar9 + 0x8c);
      auVar5._52_4_ = *(undefined4 *)(iVar9 + 0x7c);
      auVar5._48_4_ = *(undefined4 *)(iVar9 + 0x6c);
      auVar5._44_4_ = *(undefined4 *)(iVar9 + 0x98);
      auVar5._40_4_ = *(undefined4 *)(iVar9 + 0x88);
      auVar5._36_4_ = *(undefined4 *)(iVar9 + 0x78);
      auVar5._32_4_ = *(undefined4 *)(iVar9 + 0x68);
      auVar5._28_4_ = *(undefined4 *)(iVar9 + 0x94);
      auVar5._24_4_ = *(undefined4 *)(iVar9 + 0x84);
      auVar5._20_4_ = *(undefined4 *)(iVar9 + 0x74);
      auVar5._16_4_ = *(undefined4 *)(iVar9 + 100);
      auVar5._12_4_ = *(undefined4 *)(iVar9 + 0x90);
      auVar5._8_4_ = *(undefined4 *)(iVar9 + 0x80);
      auVar5._4_4_ = *(undefined4 *)(iVar9 + 0x70);
      auVar5._0_4_ = *(undefined4 *)(iVar9 + 0x60);
      auVar6._60_4_ = auVar4._60_4_;
      auVar6._56_4_ = auVar4._44_4_;
      auVar6._52_4_ = auVar4._28_4_;
      auVar6._48_4_ = auVar4._12_4_;
      auVar6._44_4_ = auVar4._56_4_;
      auVar6._40_4_ = auVar3._32_4_;
      auVar6._36_4_ = auVar3._20_4_;
      auVar6._32_4_ = auVar3._8_4_;
      auVar6._28_4_ = auVar4._52_4_;
      auVar6._24_4_ = auVar3._28_4_;
      auVar6._20_4_ = auVar3._16_4_;
      auVar6._16_4_ = auVar3._4_4_;
      auVar6._12_4_ = auVar4._48_4_;
      auVar6._8_4_ = auVar3._24_4_;
      auVar6._4_4_ = auVar3._12_4_;
      auVar6._0_4_ = auVar3._0_4_;
      auVar4 = vmmul_q(auVar5,auVar6);
      local_100 = auVar4._0_4_;
      local_f0 = auVar4._4_4_;
      local_e0 = auVar4._8_4_;
      local_d0 = auVar4._12_4_;
      uStack_fc = auVar4._16_4_;
      uStack_ec = auVar4._20_4_;
      uStack_dc = auVar4._24_4_;
      uStack_cc = auVar4._28_4_;
      uStack_f8 = auVar4._32_4_;
      uStack_e8 = auVar4._36_4_;
      uStack_d8 = auVar4._40_4_;
      uStack_c8 = auVar4._44_4_;
      uStack_f4 = auVar4._48_4_;
      uStack_e4 = auVar4._52_4_;
      uStack_d4 = auVar4._56_4_;
      uStack_c4 = auVar4._60_4_;
      FUN_089a0384(9);
      FUN_089a0f84(0,0);
      FUN_089a119c(1);
      FUN_089a03dc(5);
      FUN_0896fb5c(&local_100);
      uVar8 = FUN_089a04c4(1);
      FUN_089a03dc(1);
      auVar1 = vmul_q(*(undefined1 (*) [16])
                       (*(int *)(param_2 + 0x8c) +
                        (uint)*(ushort *)
                               (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                               *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60),
                      *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
      auVar2 = vscl_q(*param_3,0x3c000000);
      local_70 = auVar2._0_4_;
      uStack_6c = auVar2._4_4_;
      uStack_68 = auVar2._8_4_;
      uStack_64 = auVar2._12_4_;
      auVar2 = vmul_q(auVar1,auVar2);
      auVar7._12_4_ = auVar2._12_4_ * *(float *)(iVar9 + 0xb0);
      auVar7._0_12_ = auVar2._0_12_;
      vpfxt(0,0,0,0);
      auVar2._4_8_ = auVar1._8_8_;
      auVar2._0_4_ = 0x437f0000;
      auVar2._12_4_ = 0;
      auVar2 = vmax_q(auVar7,auVar2 << 0x20);
      vpfxt(1,1,1,1);
      auVar1._4_8_ = auVar1._8_8_;
      auVar1._0_4_ = 0x437f0000;
      auVar1._12_4_ = 0;
      auVar1 = vmin_q(auVar2,auVar1 << 0x20);
      local_80 = auVar1._0_4_;
      uStack_7c = auVar1._4_4_;
      uStack_78 = auVar1._8_4_;
      local_74 = auVar1._12_4_;
      *(undefined4 *)(*(int *)(param_2 + 0x9c) + 0x2c) = 0xffffffff;
      FUN_08942fb8(*(undefined4 *)(param_2 + 0x9c),iVar10,*(undefined4 *)(iVar11 + 4),&local_80);
      FUN_089a0438(1,uVar8);
    }
  }
  return;
}

