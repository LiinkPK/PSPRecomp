/* Entry 0x08962218 | file offset 0x0015F1F0 | FUN_08962218 | bytes 1728 */

void FUN_08962218(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 (*pauVar14) [16];
  float *pfVar15;
  int iVar16;
  undefined1 (*pauVar17) [12];
  float *pfVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
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
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined1 local_120 [16];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 (*local_78) [16];
  int local_68;
  float local_64;
  int local_60;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  
  iVar16 = *(int *)(param_2 + 0x8c) +
           (uint)*(ushort *)
                  (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                  (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  local_54 = iVar16 + 0x60;
  if (0.0 < *(float *)(iVar16 + 0xb0)) {
    if (*(int *)(param_3 + 0xa0) < 0) {
      local_60 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) == 0) {
      local_60 = -1;
    }
    else {
      local_60 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) +
                                  *(int *)(param_3 + 0xa0) * 4) + 0x10);
    }
    if (local_60 != -1) {
      local_58 = *param_4;
      local_78 = &local_120;
      local_4c = *(int *)(*(int *)(param_2 + 0xac) + 0x14);
      local_50 = *(int *)(*(int *)(param_2 + 0xac) + 0x18);
      pauVar17 = (undefined1 (*) [12])(iVar16 + 0xa0);
      local_100 = -*(float *)*pauVar17;
      local_fc = -*(float *)(iVar16 + 0xa4);
      local_f8 = 0;
      local_f4 = 0x3f800000;
      auVar1._4_4_ = local_fc;
      auVar1._0_4_ = local_100;
      auVar1._8_4_ = 0;
      auVar1 = vsub_t(auVar1,*pauVar17);
      local_f0 = auVar1._0_4_;
      local_ec = auVar1._4_4_;
      uStack_e8 = auVar1._8_4_;
      uStack_e4 = vzero_s();
      uVar23 = vdot_t(auVar1,auVar1);
      fVar24 = (float)vsqrt_s(uVar23);
      local_b0 = fVar24;
      local_68 = param_2;
      uVar27 = FUN_0899a7ec(local_4c * local_4c + local_50 * local_50);
      uVar27 = FUN_08994030((int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
      fVar20 = (float)FUN_0899aa14((int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
      local_5c = 1.0 - (fVar24 * 0.5) / fVar20;
      auVar9._4_4_ = local_ec;
      auVar9._0_4_ = local_f0;
      auVar9._8_4_ = uStack_e8;
      auVar8._4_4_ = local_ec;
      auVar8._0_4_ = local_f0;
      auVar8._8_4_ = uStack_e8;
      auVar7._4_4_ = local_ec;
      auVar7._0_4_ = local_f0;
      auVar7._8_4_ = uStack_e8;
      uVar23 = vdot_t(auVar7,auVar8);
      uVar25 = vzero_s();
      uVar26 = vcmp_s(8,uVar23,local_f0);
      vrsq_s(uVar23);
      uVar23 = vcmovt_s(uVar25,(byte)uVar26 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar9,uVar23);
      local_f0 = auVar1._0_4_;
      local_ec = auVar1._4_4_;
      uStack_e8 = auVar1._8_4_;
      uStack_e4 = vone_s();
      local_e0 = *(float *)*pauVar17 + local_f0 * fVar24 * *(float *)(param_3 + 0xb0);
      local_dc = *(float *)(iVar16 + 0xa4) + local_ec * fVar24 * *(float *)(param_3 + 0xb0);
      local_d8 = 0;
      local_d0 = *(float *)*pauVar17 + local_f0 * fVar24 * *(float *)(param_3 + 0xb4);
      local_cc = *(float *)(iVar16 + 0xa4) + local_ec * fVar24 * *(float *)(param_3 + 0xb4);
      local_c8 = 0;
      auVar13._4_4_ = local_cc;
      auVar13._0_4_ = local_d0;
      auVar13._8_4_ = 0;
      auVar10._4_4_ = local_dc;
      auVar10._0_4_ = local_e0;
      auVar10._8_4_ = 0;
      auVar1 = vsub_t(auVar13,auVar10);
      uVar23 = vdot_t(auVar1,auVar1);
      local_a4 = (float)vsqrt_s(uVar23);
      if (*(int *)(param_3 + 0xac) == 1) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = local_a4 / (float)(*(int *)(param_3 + 0xac) + -1);
      }
      uVar23 = vdot_t(*pauVar17,*pauVar17);
      fVar24 = (float)vsqrt_s(uVar23);
      local_ac = fVar24;
      FUN_089a0384(9);
      FUN_089a0f84(0,0);
      FUN_089a119c(1);
      FUN_089a03dc(5);
      local_48 = FUN_089a04c4(1);
      FUN_089a03dc(1);
      auVar3 = vmidt_q();
      local_1a0 = auVar3._0_4_;
      local_19c = auVar3._4_4_;
      local_198 = auVar3._8_4_;
      local_194 = auVar3._12_4_;
      local_190 = auVar3._16_4_;
      local_18c = auVar3._20_4_;
      local_188 = auVar3._24_4_;
      local_184 = auVar3._28_4_;
      local_180 = auVar3._32_4_;
      local_17c = auVar3._36_4_;
      local_178 = auVar3._40_4_;
      local_174 = auVar3._44_4_;
      local_170 = auVar3._48_4_;
      local_16c = auVar3._52_4_;
      local_168 = auVar3._56_4_;
      local_164 = auVar3._60_4_;
      FUN_089a04f4(1,&local_1a0);
      iVar16 = local_68;
      pauVar14 = local_78;
      auVar2 = vmul_q(*(undefined1 (*) [16])
                       (*(int *)(local_68 + 0x8c) +
                        (uint)*(ushort *)
                               (*(int *)(*(int *)(local_68 + 0x90) + 8) +
                               *(int *)(*(int *)(local_68 + 0x90) + 4) * 2) + 0x60),
                      *(undefined1 (*) [16])(*(int *)(local_68 + 0x88) + 0x40));
      *(int *)*local_78 = auVar2._0_4_;
      *(int *)(*pauVar14 + 4) = auVar2._4_4_;
      *(int *)(*pauVar14 + 8) = auVar2._8_4_;
      *(int *)(*pauVar14 + 0xc) = auVar2._12_4_;
      if (*(char *)(*(int *)(iVar16 + 0x8c) + 0x58) == '\x02') {
        pfVar15 = (float *)&DAT_089da060;
      }
      else {
        pfVar15 = (float *)(*(int *)(iVar16 + 0x88) + 0x30);
      }
      *(undefined4 *)(*(int *)(iVar16 + 0x9c) + 0x2c) = 0xffffffff;
      uVar19 = 0;
      pfVar18 = (float *)param_4[1];
      local_64 = fVar20;
      if (*(int *)(param_3 + 0xac) != 0) {
        fVar22 = (float)local_4c;
        fVar20 = (float)local_50;
        do {
          auVar12._4_4_ = local_dc;
          auVar12._0_4_ = local_e0;
          auVar12._8_4_ = local_d8;
          auVar11._4_4_ = local_dc;
          auVar11._0_4_ = local_e0;
          auVar11._8_4_ = local_d8;
          uVar23 = vdot_t(auVar11,auVar12);
          local_a8 = (float)vsqrt_s(uVar23);
          if ((fVar24 == 0.0) || (fVar21 = (local_a8 / fVar24) * 0.5 + 0.5, 1.0 < fVar21)) {
            fVar21 = 1.0;
          }
          fVar21 = local_5c * fVar21 * *(float *)(local_54 + 0x50);
          auVar3 = vmidt_q();
          local_19c = auVar3._4_4_;
          local_198 = auVar3._8_4_;
          local_194 = auVar3._12_4_;
          local_190 = auVar3._16_4_;
          local_188 = auVar3._24_4_;
          local_184 = auVar3._28_4_;
          local_180 = auVar3._32_4_;
          local_17c = auVar3._36_4_;
          local_174 = auVar3._44_4_;
          local_170 = auVar3._48_4_;
          local_16c = auVar3._52_4_;
          local_164 = auVar3._60_4_;
          local_178 = *(float *)(param_3 + 0xa4) * (fVar21 + pfVar18[5]) * 0.1;
          local_1a0 = local_178 * *pfVar15;
          local_18c = local_178 * pfVar15[1];
          local_178 = local_178 * pfVar15[2];
          local_168 = -100.0;
          auVar5._4_4_ = pfVar18[1] * 0.0078125;
          auVar5._0_4_ = *pfVar18 * 0.0078125;
          auVar5._8_4_ = pfVar18[2] * 0.0078125;
          auVar5._12_4_ = pfVar18[3] * 0.0078125;
          auVar2 = vmul_q(*local_78,auVar5);
          auVar6._12_4_ = auVar2._12_4_ * fVar21;
          auVar6._0_12_ = auVar2._0_12_;
          vpfxt(0,0,0,0);
          auVar2._4_8_ = *(undefined8 *)(*local_78 + 8);
          auVar2._0_4_ = 0x437f0000;
          auVar2._12_4_ = 0;
          auVar2 = vmax_q(auVar6,auVar2 << 0x20);
          vpfxt(1,1,1,1);
          auVar4._4_8_ = *(undefined8 *)(*local_78 + 8);
          auVar4._0_4_ = 0x437f0000;
          auVar4._12_4_ = 0;
          auVar2 = vmin_q(auVar2,auVar4 << 0x20);
          local_110 = auVar2._0_4_;
          local_10c = auVar2._4_4_;
          local_108 = auVar2._8_4_;
          local_104 = auVar2._12_4_;
          FUN_089a04f4(2,&local_1a0);
          local_1a0 = *DAT_089da280;
          local_19c = DAT_089da280[1];
          local_198 = DAT_089da280[2];
          local_194 = DAT_089da280[3];
          local_190 = DAT_089da280[4];
          local_18c = DAT_089da280[5];
          local_188 = DAT_089da280[6];
          local_184 = DAT_089da280[7];
          local_178 = DAT_089da280[10];
          local_174 = DAT_089da280[0xb];
          local_170 = DAT_089da280[0xc];
          local_16c = DAT_089da280[0xd];
          local_168 = DAT_089da280[0xe];
          local_164 = DAT_089da280[0xf];
          local_180 = -local_e0 / (fVar22 * 0.5);
          local_17c = -local_dc / (fVar20 * 0.5);
          FUN_089a04f4(0,&local_1a0);
          fVar21 = (pfVar18[4] + 1.0) * local_64;
          local_e0 = local_e0 + local_f0 * fVar21;
          local_dc = local_dc + local_ec * fVar21;
          FUN_08942fb8(*(undefined4 *)(local_68 + 0x9c),local_60,*(undefined4 *)(local_58 + 4),
                       &local_110);
          pfVar18 = pfVar18 + 6;
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(param_3 + 0xac));
      }
      FUN_0896fbc0();
      FUN_089a0438(1,local_48);
    }
  }
  return;
}

