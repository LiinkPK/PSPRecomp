/* Entry 0x08962B64 | file offset 0x0015FB3C | FUN_08962b64 | bytes 1704 */

void FUN_08962b64(undefined4 param_1,int param_2,undefined1 (*param_3) [16],int *param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  int iVar13;
  undefined1 (*pauVar14) [12];
  uint uVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_70;
  int local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  
  iVar13 = *(int *)(param_2 + 0x8c) +
           (uint)*(ushort *)
                  (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                  (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  local_5c = iVar13 + 0x60;
  if (0.0 < *(float *)(iVar13 + 0xb0)) {
    if (*(int *)param_3[1] < 0) {
      local_68 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) == 0) {
      local_68 = -1;
    }
    else {
      local_68 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) +
                                  *(int *)param_3[1] * 4) + 0x10);
    }
    if (local_68 != -1) {
      local_60 = *param_4;
      local_54 = *(int *)(*(int *)(param_2 + 0xac) + 0x14);
      local_58 = *(int *)(*(int *)(param_2 + 0xac) + 0x18);
      pauVar14 = (undefined1 (*) [12])(iVar13 + 0xa0);
      local_110 = -*(float *)*pauVar14;
      local_10c = -*(float *)(iVar13 + 0xa4);
      local_108 = 0;
      local_104 = 0x3f800000;
      auVar1._4_4_ = local_10c;
      auVar1._0_4_ = local_110;
      auVar1._8_4_ = 0;
      auVar1 = vsub_t(auVar1,*pauVar14);
      local_100 = auVar1._0_4_;
      local_fc = auVar1._4_4_;
      uStack_f8 = auVar1._8_4_;
      uStack_f4 = vzero_s();
      uVar20 = vdot_t(auVar1,auVar1);
      fVar21 = (float)vsqrt_s(uVar20);
      local_c0 = fVar21;
      local_6c = param_2;
      uVar24 = FUN_0899a7ec(local_54 * local_54 + local_58 * local_58);
      uVar24 = FUN_08994030((int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
      fVar17 = (float)FUN_0899aa14((int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
      local_64 = 1.0 - (fVar21 * 0.5) / fVar17;
      auVar8._4_4_ = local_fc;
      auVar8._0_4_ = local_100;
      auVar8._8_4_ = uStack_f8;
      auVar7._4_4_ = local_fc;
      auVar7._0_4_ = local_100;
      auVar7._8_4_ = uStack_f8;
      auVar6._4_4_ = local_fc;
      auVar6._0_4_ = local_100;
      auVar6._8_4_ = uStack_f8;
      uVar20 = vdot_t(auVar6,auVar7);
      uVar22 = vzero_s();
      uVar23 = vcmp_s(8,uVar20,local_100);
      vrsq_s(uVar20);
      uVar20 = vcmovt_s(uVar22,(byte)uVar23 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar8,uVar20);
      local_100 = auVar1._0_4_;
      local_fc = auVar1._4_4_;
      uStack_f8 = auVar1._8_4_;
      uStack_f4 = vone_s();
      local_f0 = *(float *)*pauVar14 + local_100 * fVar21 * *(float *)(param_3[1] + 0xc);
      local_ec = *(float *)(iVar13 + 0xa4) + local_fc * fVar21 * *(float *)(param_3[1] + 0xc);
      local_e8 = 0;
      local_e0 = *(float *)*pauVar14 + local_100 * fVar21 * *(float *)param_3[2];
      local_dc = *(float *)(iVar13 + 0xa4) + local_fc * fVar21 * *(float *)param_3[2];
      local_d8 = 0;
      auVar12._4_4_ = local_dc;
      auVar12._0_4_ = local_e0;
      auVar12._8_4_ = 0;
      auVar9._4_4_ = local_ec;
      auVar9._0_4_ = local_f0;
      auVar9._8_4_ = 0;
      auVar1 = vsub_t(auVar12,auVar9);
      uVar20 = vdot_t(auVar1,auVar1);
      local_b4 = (float)vsqrt_s(uVar20);
      if (*(int *)(param_3[1] + 8) == 1) {
        fVar17 = 0.0;
      }
      else {
        fVar17 = local_b4 / (float)(*(int *)(param_3[1] + 8) + -1);
      }
      uVar20 = vdot_t(*pauVar14,*pauVar14);
      fVar21 = (float)vsqrt_s(uVar20);
      local_bc = fVar21;
      FUN_089a0384(9);
      FUN_089a0f84(0,0);
      FUN_089a119c(1);
      FUN_089a03dc(5);
      local_50 = FUN_089a04c4(1);
      FUN_089a03dc(1);
      auVar4 = vmidt_q();
      local_1b0 = auVar4._0_4_;
      local_1ac = auVar4._4_4_;
      local_1a8 = auVar4._8_4_;
      local_1a4 = auVar4._12_4_;
      local_1a0 = auVar4._16_4_;
      local_19c = auVar4._20_4_;
      local_198 = auVar4._24_4_;
      local_194 = auVar4._28_4_;
      local_190 = auVar4._32_4_;
      local_18c = auVar4._36_4_;
      local_188 = auVar4._40_4_;
      local_184 = auVar4._44_4_;
      local_180 = auVar4._48_4_;
      local_17c = auVar4._52_4_;
      local_178 = auVar4._56_4_;
      local_174 = auVar4._60_4_;
      FUN_089a04f4(1,&local_1b0);
      auVar2 = vmul_q(*(undefined1 (*) [16])
                       (*(int *)(local_6c + 0x8c) +
                        (uint)*(ushort *)
                               (*(int *)(*(int *)(local_6c + 0x90) + 8) +
                               *(int *)(*(int *)(local_6c + 0x90) + 4) * 2) + 0x60),
                      *(undefined1 (*) [16])(*(int *)(local_6c + 0x88) + 0x40));
      auVar3 = vscl_q(*param_3,0x3c000000);
      local_120 = auVar3._0_4_;
      local_11c = auVar3._4_4_;
      local_118 = auVar3._8_4_;
      local_114 = auVar3._12_4_;
      auVar3 = vmul_q(auVar2,auVar3);
      vpfxt(0,0,0,0);
      auVar5._4_8_ = auVar2._8_8_;
      auVar5._0_4_ = 0x437f0000;
      auVar5._12_4_ = 0;
      auVar3 = vmax_q(auVar3,auVar5 << 0x20);
      vpfxt(1,1,1,1);
      auVar2._4_8_ = auVar2._8_8_;
      auVar2._0_4_ = 0x437f0000;
      auVar2._12_4_ = 0;
      auVar2 = vmin_q(auVar3,auVar2 << 0x20);
      local_130 = auVar2._0_4_;
      local_12c = auVar2._4_4_;
      local_128 = auVar2._8_4_;
      local_124 = auVar2._12_4_;
      if (*(char *)(*(int *)(local_6c + 0x8c) + 0x58) == '\x02') {
        pfVar16 = (float *)&DAT_089da070;
      }
      else {
        pfVar16 = (float *)(*(int *)(local_6c + 0x88) + 0x30);
      }
      *(undefined4 *)(*(int *)(local_6c + 0x9c) + 0x2c) = 0xffffffff;
      uVar15 = 0;
      local_70 = fVar17;
      if (*(int *)(param_3[1] + 8) != 0) {
        fVar19 = (float)local_54;
        fVar17 = (float)local_58;
        do {
          auVar11._4_4_ = local_ec;
          auVar11._0_4_ = local_f0;
          auVar11._8_4_ = local_e8;
          auVar10._4_4_ = local_ec;
          auVar10._0_4_ = local_f0;
          auVar10._8_4_ = local_e8;
          uVar20 = vdot_t(auVar10,auVar11);
          local_b8 = (float)vsqrt_s(uVar20);
          if ((fVar21 == 0.0) || (fVar18 = (local_b8 / fVar21) * 0.5 + 0.5, 1.0 < fVar18)) {
            fVar18 = 1.0;
          }
          local_114 = local_64 * fVar18 * *(float *)(local_5c + 0x50);
          auVar4 = vmidt_q();
          local_1ac = auVar4._4_4_;
          local_1a8 = auVar4._8_4_;
          local_1a4 = auVar4._12_4_;
          local_1a0 = auVar4._16_4_;
          local_198 = auVar4._24_4_;
          local_194 = auVar4._28_4_;
          local_190 = auVar4._32_4_;
          local_18c = auVar4._36_4_;
          local_184 = auVar4._44_4_;
          local_180 = auVar4._48_4_;
          local_17c = auVar4._52_4_;
          local_174 = auVar4._60_4_;
          local_188 = *(float *)(param_3[1] + 4) * local_114 * 0.1;
          local_1b0 = local_188 * *pfVar16;
          local_19c = local_188 * pfVar16[1];
          local_188 = local_188 * pfVar16[2];
          local_178 = -100.0;
          local_120 = local_130;
          local_11c = local_12c;
          local_118 = local_128;
          local_114 = local_124 * local_114;
          FUN_089a04f4(2,&local_1b0);
          local_1b0 = *DAT_089da280;
          local_1ac = DAT_089da280[1];
          local_1a8 = DAT_089da280[2];
          local_1a4 = DAT_089da280[3];
          local_1a0 = DAT_089da280[4];
          local_19c = DAT_089da280[5];
          local_198 = DAT_089da280[6];
          local_194 = DAT_089da280[7];
          local_188 = DAT_089da280[10];
          local_184 = DAT_089da280[0xb];
          local_180 = DAT_089da280[0xc];
          local_17c = DAT_089da280[0xd];
          local_178 = DAT_089da280[0xe];
          local_174 = DAT_089da280[0xf];
          local_190 = -local_f0 / (fVar19 * 0.5);
          local_18c = -local_ec / (fVar17 * 0.5);
          FUN_089a04f4(0,&local_1b0);
          local_f0 = local_f0 + local_100 * local_70;
          local_ec = local_ec + local_fc * local_70;
          FUN_08942fb8(*(undefined4 *)(local_6c + 0x9c),local_68,*(undefined4 *)(local_60 + 4),
                       &local_120);
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(param_3[1] + 8));
      }
      FUN_0896fbc0();
      FUN_089a0438(1,local_50);
    }
  }
  return;
}

