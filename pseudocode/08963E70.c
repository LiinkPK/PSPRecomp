/* Entry 0x08963E70 | file offset 0x00160E48 | FUN_08963e70 | bytes 992 */

void FUN_08963e70(undefined4 param_1,int param_2,undefined1 (*param_3) [16],int *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [36];
  undefined1 auVar4 [64];
  undefined1 auVar5 [36];
  undefined1 auVar6 [16];
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_60;
  
  iVar7 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  if (0.0 < *(float *)(iVar7 + 0xb0)) {
    if (*(int *)param_3[1] < 0) {
      iVar9 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) +
                               *(int *)param_3[1] * 4) + 0x10);
    }
    if (iVar9 != -1) {
      iVar10 = *param_4;
      uVar14 = vdot_t(*(undefined1 (*) [12])(iVar7 + 0xa0),*(undefined1 (*) [12])(iVar7 + 0xa0));
      local_60 = (float)vsqrt_s(uVar14);
      if (0.0 <= (float)*(ushort *)(param_3[1] + 8)) {
        fVar12 = 1.0;
        if ((float)*(ushort *)(param_3[1] + 8) < local_60) {
          fVar13 = 0.0;
        }
        else {
          fVar12 = local_60 / (float)*(ushort *)(param_3[1] + 8);
          fVar13 = 1.0 - fVar12;
        }
        fVar13 = fVar13 * *(float *)(iVar7 + 0xb0);
        fVar12 = fVar12 * *(float *)(iVar7 + 0xb0);
        auVar4 = vmidt_q();
        if (*(char *)(*(int *)(param_2 + 0x8c) + 0x58) == '\x02') {
          pfVar8 = (float *)&DAT_089da080;
        }
        else {
          pfVar8 = (float *)(*(int *)(param_2 + 0x88) + 0x30);
        }
        if (param_3[1][10] == '\0') {
          fVar11 = *(float *)(param_3[1] + 4) * fVar13 * *pfVar8;
        }
        else {
          fVar11 = *(float *)(param_3[1] + 4) * fVar12 * *pfVar8;
        }
        if (param_3[1][0xb] == '\0') {
          fVar12 = *(float *)(param_3[1] + 4) * fVar13 * pfVar8[1];
        }
        else {
          fVar12 = *(float *)(param_3[1] + 4) * fVar12 * pfVar8[1];
        }
        local_e0 = *(undefined4 *)(iVar7 + 0x90);
        local_dc = *(undefined4 *)(iVar7 + 0x94);
        local_d8 = *(undefined4 *)(iVar7 + 0x98);
        local_d4 = *(undefined4 *)(iVar7 + 0x9c);
        auVar3._32_4_ = DAT_089da27c[10];
        auVar3._28_4_ = DAT_089da27c[6];
        auVar3._24_4_ = DAT_089da27c[2];
        auVar3._20_4_ = DAT_089da27c[9];
        auVar3._16_4_ = DAT_089da27c[5];
        auVar3._12_4_ = DAT_089da27c[1];
        auVar3._8_4_ = DAT_089da27c[8];
        auVar3._4_4_ = DAT_089da27c[4];
        auVar3._0_4_ = *DAT_089da27c;
        auVar5._32_4_ = *(float *)(param_3[1] + 4) * pfVar8[2];
        auVar5._28_4_ = auVar4._24_4_;
        auVar5._24_4_ = auVar4._8_4_;
        auVar5._20_4_ = auVar4._36_4_;
        auVar5._16_4_ = fVar12;
        auVar5._12_4_ = auVar4._4_4_;
        auVar5._8_4_ = auVar4._32_4_;
        auVar5._4_4_ = auVar4._16_4_;
        auVar5._0_4_ = fVar11;
        auVar3 = vmmul_t(auVar3,auVar5);
        local_110 = auVar3._0_4_;
        local_100 = auVar3._4_4_;
        local_f0 = auVar3._8_4_;
        uStack_10c = auVar3._12_4_;
        local_fc = auVar3._16_4_;
        uStack_ec = auVar3._20_4_;
        uStack_108 = auVar3._24_4_;
        uStack_f8 = auVar3._28_4_;
        local_e8 = auVar3._32_4_;
        uStack_104 = vzero_s();
        uStack_f4 = vzero_s();
        uStack_e4 = vzero_s();
        FUN_089a0384(9);
        FUN_089a0f84(0,0);
        FUN_089a119c(1);
        FUN_089a03dc(5);
        FUN_0896fb5c(&local_110);
        uVar14 = FUN_089a04c4(1);
        FUN_089a03dc(1);
        auVar1 = vmul_q(*(undefined1 (*) [16])
                         (*(int *)(param_2 + 0x8c) +
                          (uint)*(ushort *)
                                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                                 *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60),
                        *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
        auVar2 = vscl_q(*param_3,0x3c000000);
        local_80 = auVar2._0_4_;
        uStack_7c = auVar2._4_4_;
        uStack_78 = auVar2._8_4_;
        uStack_74 = auVar2._12_4_;
        auVar2 = vmul_q(auVar1,auVar2);
        auVar6._12_4_ = auVar2._12_4_ * fVar13;
        auVar6._0_12_ = auVar2._0_12_;
        vpfxt(0,0,0,0);
        auVar2._4_8_ = auVar1._8_8_;
        auVar2._0_4_ = 0x437f0000;
        auVar2._12_4_ = 0;
        auVar2 = vmax_q(auVar6,auVar2 << 0x20);
        vpfxt(1,1,1,1);
        auVar1._4_8_ = auVar1._8_8_;
        auVar1._0_4_ = 0x437f0000;
        auVar1._12_4_ = 0;
        auVar1 = vmin_q(auVar2,auVar1 << 0x20);
        local_90 = auVar1._0_4_;
        uStack_8c = auVar1._4_4_;
        uStack_88 = auVar1._8_4_;
        local_84 = auVar1._12_4_;
        *(undefined4 *)(*(int *)(param_2 + 0x9c) + 0x2c) = 0xffffffff;
        FUN_08942fb8(*(undefined4 *)(param_2 + 0x9c),iVar9,*(undefined4 *)(iVar10 + 4),&local_90);
        FUN_089a0438(1,uVar14);
      }
    }
  }
  return;
}

