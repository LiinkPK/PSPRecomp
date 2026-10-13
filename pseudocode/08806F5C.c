/* Entry 0x08806F5C | file offset 0x00003F34 | FUN_08806f5c | bytes 1500 */

void FUN_08806f5c(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  float fVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  int iVar11;
  undefined1 (*pauVar12) [12];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_50;
  float local_3c;
  
  pauVar12 = (undefined1 (*) [12])(param_1 + 0x10);
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_089a3868(&local_190,param_2 + 0x90);
  }
  else {
    FUN_08806a34(&local_130,*(undefined4 *)(param_1 + 0x54));
    local_160 = local_130;
    local_15c = local_12c;
    local_158 = local_128;
    local_154 = local_124;
    FUN_08806a34(&local_120,param_2);
    local_150 = local_120;
    local_14c = local_11c;
    local_148 = local_118;
    local_144 = local_114;
    FUN_089a38e0(&local_d0,&local_160,&local_150);
    local_140 = local_d0;
    local_13c = local_cc;
    local_138 = local_c8;
    local_134 = local_c4;
    local_170 = local_d0;
    local_16c = local_cc;
    local_168 = local_c8;
    local_164 = local_c4;
    FUN_089a3868(&local_190,&local_170);
  }
  auVar4._4_4_ = uStack_18c;
  auVar4._0_4_ = local_190;
  auVar4._8_4_ = uStack_188;
  auVar3._4_4_ = uStack_18c;
  auVar3._0_4_ = local_190;
  auVar3._8_4_ = uStack_188;
  auVar1._4_4_ = uStack_18c;
  auVar1._0_4_ = local_190;
  auVar1._8_4_ = uStack_188;
  uVar17 = vdot_t(auVar1,auVar3);
  uVar18 = vzero_s();
  uVar19 = vcmp_s(8,uVar17,local_190);
  local_70 = vsqrt_s(uVar17);
  vrcp_s(local_70);
  uVar17 = vcmovt_s(uVar18,(byte)uVar19 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar4,uVar17);
  local_190 = auVar1._0_4_;
  uStack_18c = auVar1._4_4_;
  uStack_188 = auVar1._8_4_;
  local_184 = 0;
  FUN_089a3b30(&local_180,&DAT_09af84e0,&local_190);
  FUN_089a3ebc(&local_1d0);
  local_110 = local_1d0;
  local_10c = local_1cc;
  local_108 = local_1c8;
  local_104 = local_1c4;
  local_100 = local_1c0;
  local_fc = local_1bc;
  local_f8 = local_1b8;
  local_f4 = local_1b4;
  local_f0 = local_1b0;
  local_ec = local_1ac;
  local_e8 = local_1a8;
  local_e4 = local_1a4;
  local_e0 = local_1a0;
  local_dc = local_19c;
  local_d8 = local_198;
  local_d4 = local_194;
  local_3c = 180.0;
  fVar16 = *(float *)(param_1 + 0x28) * 0.017453292;
  auVar10._4_4_ = local_17c;
  auVar10._0_4_ = local_180;
  auVar10._8_4_ = local_178;
  auVar9._4_4_ = local_17c;
  auVar9._0_4_ = local_180;
  auVar9._8_4_ = local_178;
  auVar8._4_4_ = local_17c;
  auVar8._0_4_ = local_180;
  auVar8._8_4_ = local_178;
  uVar17 = vdot_t(auVar8,auVar9);
  uVar18 = vzero_s();
  uVar19 = vcmp_s(8,uVar17,local_180);
  local_50 = vsqrt_s(uVar17);
  vrcp_s(local_50);
  uVar17 = vcmovt_s(uVar18,(byte)uVar19 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar10,uVar17);
  fVar15 = auVar1._0_4_;
  fVar14 = auVar1._4_4_;
  fVar2 = auVar1._8_4_;
  local_60 = fVar15;
  local_5c = fVar14;
  local_58 = fVar2;
  fVar13 = (float)FUN_089a47a4(fVar16);
  local_1a8 = (float)FUN_089a46dc(fVar16);
  fVar16 = 1.0 - local_1a8;
  local_1d0 = fVar15 * fVar15 * fVar16 + local_1a8;
  local_1c0 = fVar15 * fVar14 * fVar16;
  local_1cc = local_1c0 + fVar13 * fVar2;
  local_1b0 = fVar15 * fVar2 * fVar16;
  local_1c8 = local_1b0 - fVar13 * fVar14;
  local_1c4 = 0;
  local_1c0 = local_1c0 - fVar13 * fVar2;
  local_1bc = fVar14 * fVar14 * fVar16 + local_1a8;
  local_1ac = fVar14 * fVar2 * fVar16;
  local_1b8 = local_1ac + fVar13 * fVar15;
  local_1b4 = 0;
  local_1b0 = local_1b0 + fVar13 * fVar14;
  local_1ac = local_1ac - fVar13 * fVar15;
  local_1a8 = fVar2 * fVar2 * fVar16 + local_1a8;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  local_194 = 0x3f800000;
  FUN_089a4124((3.1415927 / local_3c) * *(float *)(param_1 + 0x2c),&local_1d0,&local_1d0);
  FUN_089a3f40(&local_190,&local_1d0,&local_190);
  auVar7._4_4_ = uStack_18c;
  auVar7._0_4_ = local_190;
  auVar7._8_4_ = uStack_188;
  auVar6._4_4_ = uStack_18c;
  auVar6._0_4_ = local_190;
  auVar6._8_4_ = uStack_188;
  auVar5._4_4_ = uStack_18c;
  auVar5._0_4_ = local_190;
  auVar5._8_4_ = uStack_188;
  uVar17 = vdot_t(auVar5,auVar6);
  uVar18 = vzero_s();
  uVar19 = vcmp_s(8,uVar17,local_190);
  local_6c = vsqrt_s(uVar17);
  vrcp_s(local_6c);
  uVar17 = vcmovt_s(uVar18,(byte)uVar19 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar7,uVar17);
  local_190 = auVar1._0_4_;
  uStack_18c = auVar1._4_4_;
  uStack_188 = auVar1._8_4_;
  fVar15 = 1.0;
  if (0.0 < *(float *)(param_1 + 0x20)) {
    fVar15 = (float)FUN_089a47a4((*(float *)(param_1 + 0x24) / *(float *)(param_1 + 0x20)) *
                                 3.1415927 * 0.5);
  }
  iVar11 = FUN_08869520(fVar15,pauVar12,param_1,&local_190,0);
  if (iVar11 == 0) {
    FUN_089a3868(pauVar12,&local_190);
  }
  uVar17 = *(undefined4 *)(param_1 + 0x1c);
  uVar18 = vdot_t(*pauVar12,*pauVar12);
  uVar19 = vzero_s();
  uVar20 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar12);
  local_68 = vsqrt_s(uVar18);
  vrcp_s(local_68);
  uVar18 = vcmovt_s(uVar19,(byte)uVar20 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar12,uVar18);
  *(int *)*pauVar12 = auVar1._0_4_;
  *(int *)(param_1 + 0x14) = auVar1._4_4_;
  *(int *)(param_1 + 0x18) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x1c) = uVar17;
  if (0.0 < *(float *)(param_1 + 0x3c)) {
    fVar14 = (float)FUN_089a47a4((*(float *)(param_1 + 0x40) / *(float *)(param_1 + 0x3c)) *
                                 3.1415927 * 0.5);
    fVar14 = (float)FUN_089a47a4(fVar14 * 3.1415927);
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x34) * fVar14;
    fVar14 = (float)FUN_08838300(param_2);
    fVar14 = *(float *)(param_1 + 0x40) + fVar14;
    *(float *)(param_1 + 0x40) = fVar14;
    if (*(float *)(param_1 + 0x3c) < fVar14) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x4c)) {
    fVar14 = (float)FUN_089a47a4((*(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x4c)) *
                                 3.1415927 * 0.5);
    fVar14 = (float)FUN_089a47a4(fVar14 * 3.1415927 * 2.0);
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x44) * fVar14;
    fVar14 = (float)FUN_08838300(param_2);
    fVar14 = *(float *)(param_1 + 0x50) + fVar14;
    *(float *)(param_1 + 0x50) = fVar14;
    if (*(float *)(param_1 + 0x4c) < fVar14) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    fVar14 = *(float *)(param_1 + 0x30);
  }
  else {
    fVar14 = *(float *)(param_1 + 0x30);
  }
  *(float *)(param_1 + 0x5c) =
       (fVar14 - *(float *)(param_1 + 0x58)) * fVar15 + *(float *)(param_1 + 0x58);
  if (1.0 <= fVar15) {
    FUN_089a3868(param_1,pauVar12);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
  }
  return;
}

