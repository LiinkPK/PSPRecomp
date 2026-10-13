/* Entry 0x088E7AE0 | file offset 0x000E4AB8 | FUN_088e7ae0 | bytes 1760 */

void FUN_088e7ae0(int param_1,char param_2)

{
  float fVar1;
  float fVar3;
  undefined1 auVar2 [12];
  float fVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined1 auStack_1f0 [16];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 auStack_1a0 [16];
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 auStack_140 [16];
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
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
  undefined4 local_5c;
  undefined4 local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40;
  
  iVar17 = 0;
  iVar16 = param_1 + 0x70;
  do {
    FUN_088e7188(iVar16);
    iVar17 = iVar17 + 1;
    iVar16 = iVar16 + 0x20;
  } while (iVar17 < 4);
  if (param_2 != '\0') {
    bVar6 = false;
    iVar16 = DAT_089d5ec0 + 0x720;
    puVar12 = (undefined4 *)FUN_0885ea90(iVar16);
    local_1e0 = *puVar12;
    local_1dc = puVar12[1];
    local_1d8 = puVar12[2];
    local_1d4 = puVar12[3];
    if (*(char *)(param_1 + 0x8c) == '\0') {
      if (*(char *)(param_1 + 0xfa) != '\0') {
        FUN_089a3868(auStack_1f0,param_1);
        if (*(int *)(param_1 + 0xf0) != 0) {
          FUN_088e6c08(*(undefined4 *)(param_1 + 0xf0),auStack_1f0);
        }
        FUN_0885eaa8(iVar16,auStack_1f0);
        bVar6 = true;
      }
    }
    else {
      FUN_088e7318(param_1 + 0x70,auStack_1f0);
      if (*(int *)(param_1 + 0xf0) != 0) {
        FUN_088e6c08(*(undefined4 *)(param_1 + 0xf0),auStack_1f0);
      }
      FUN_0885eaa8(iVar16,auStack_1f0);
      bVar6 = true;
    }
    if (*(char *)(param_1 + 0xac) == '\0') {
      if (*(char *)(param_1 + 0xfb) != '\0') {
        FUN_089a3868(auStack_1f0,param_1 + 0x30);
        if (*(int *)(param_1 + 0xf4) != 0) {
          FUN_088e6c08(*(undefined4 *)(param_1 + 0xf4),auStack_1f0);
        }
        FUN_0885eac4(iVar16,auStack_1f0);
        bVar6 = true;
      }
    }
    else {
      FUN_088e7318(param_1 + 0x90,auStack_1f0);
      if (*(int *)(param_1 + 0xf4) != 0) {
        FUN_088e6c08(*(undefined4 *)(param_1 + 0xf4),auStack_1f0);
      }
      FUN_0885eac4(iVar16,auStack_1f0);
      bVar6 = true;
    }
    local_1d0 = 0.0;
    bVar5 = false;
    if (*(char *)(param_1 + 0xcc) == '\0') {
      if (*(char *)(param_1 + 0xfc) != '\0') {
        local_1d0 = *(float *)(param_1 + 0x60);
        bVar5 = true;
      }
    }
    else {
      FUN_088e7400(param_1 + 0xb0,&local_1d0);
      bVar5 = true;
    }
    if (bVar5) {
      FUN_089a3ebc(&local_190);
      local_130 = local_190;
      local_12c = local_18c;
      local_128 = local_188;
      local_124 = local_184;
      local_120 = local_180;
      local_11c = local_17c;
      local_118 = local_178;
      local_114 = local_174;
      local_110 = local_170;
      local_10c = local_16c;
      local_108 = local_168;
      local_104 = local_164;
      local_100 = local_160;
      local_fc = local_15c;
      local_f8 = local_158;
      local_f4 = local_154;
      uVar13 = FUN_0885ea98(iVar16);
      uVar14 = FUN_0885ea90(iVar16);
      FUN_089a38e0(&local_150,uVar13,uVar14);
      auVar11._4_4_ = local_14c;
      auVar11._0_4_ = local_150;
      auVar11._8_4_ = local_148;
      auVar10._4_4_ = local_14c;
      auVar10._0_4_ = local_150;
      auVar10._8_4_ = local_148;
      auVar2._4_4_ = local_14c;
      auVar2._0_4_ = local_150;
      auVar2._8_4_ = local_148;
      uVar13 = vdot_t(auVar2,auVar10);
      uVar14 = vzero_s();
      uVar20 = vcmp_s(8,uVar13,local_150);
      local_5c = vsqrt_s(uVar13);
      vrcp_s(local_5c);
      uVar13 = vcmovt_s(uVar14,(byte)uVar20 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(auVar11,uVar13);
      local_150 = auVar2._0_4_;
      local_14c = auVar2._4_4_;
      local_148 = auVar2._8_4_;
      fVar19 = local_1d0 * 0.017453292;
      uVar13 = vdot_t(auVar2,auVar2);
      uVar14 = vzero_s();
      uVar20 = vcmp_s(8,uVar13,local_150);
      local_40 = vsqrt_s(uVar13);
      vrcp_s(local_40);
      uVar13 = vcmovt_s(uVar14,(byte)uVar20 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(auVar2,uVar13);
      fVar1 = auVar2._0_4_;
      fVar3 = auVar2._4_4_;
      fVar4 = auVar2._8_4_;
      local_50 = fVar1;
      local_4c = fVar3;
      local_48 = fVar4;
      fVar18 = (float)FUN_089a47a4(fVar19);
      local_168 = (float)FUN_089a46dc(fVar19);
      fVar19 = 1.0 - local_168;
      local_190 = fVar1 * fVar1 * fVar19 + local_168;
      local_180 = fVar1 * fVar3 * fVar19;
      local_18c = local_180 + fVar18 * fVar4;
      local_170 = fVar1 * fVar4 * fVar19;
      local_188 = local_170 - fVar18 * fVar3;
      local_184 = 0;
      local_180 = local_180 - fVar18 * fVar4;
      local_17c = fVar3 * fVar3 * fVar19 + local_168;
      local_16c = fVar3 * fVar4 * fVar19;
      local_178 = local_16c + fVar18 * fVar1;
      local_174 = 0;
      local_170 = local_170 + fVar18 * fVar3;
      local_16c = local_16c - fVar18 * fVar1;
      local_168 = fVar4 * fVar4 * fVar19 + local_168;
      local_164 = 0;
      local_160 = 0;
      local_15c = 0;
      local_158 = 0;
      local_154 = 0x3f800000;
      FUN_089a383c(0,0x3f800000,0,0,auStack_140);
      FUN_089a3f40(auStack_140,&local_190,auStack_140);
      FUN_0885eae0(iVar16,auStack_140);
      bVar6 = true;
    }
    if (*(char *)(param_1 + 0xec) == '\0') {
      if (*(char *)(param_1 + 0xfd) != '\0') {
        FUN_0887358c(*(undefined4 *)(param_1 + 0x68),DAT_089d5ec0 + 0x7e0);
        bVar6 = true;
      }
    }
    else {
      FUN_088e7400(param_1 + 0xd0,&local_f0);
      FUN_0887358c(local_f0,DAT_089d5ec0 + 0x7e0);
      bVar6 = true;
    }
    if (bVar6) {
      FUN_08866ba8(DAT_089d5ec0);
    }
    iVar17 = DAT_089d6c88;
    iVar15 = DAT_089d6c88 + 0x14;
    puVar12 = (undefined4 *)FUN_0885ea90(iVar16);
    local_1cc = *puVar12;
    local_1c8 = puVar12[1];
    local_1c4 = puVar12[2];
    local_ec = local_1cc;
    local_e8 = local_1c8;
    local_e4 = local_1c4;
    puVar12 = (undefined4 *)FUN_0885eaa0(iVar16);
    local_1c0 = *puVar12;
    local_1bc = puVar12[1];
    local_1b8 = puVar12[2];
    local_e0 = local_1c0;
    local_dc = local_1bc;
    local_d8 = local_1b8;
    puVar12 = (undefined4 *)FUN_0885ea98(iVar16);
    local_208 = *puVar12;
    local_204 = puVar12[1];
    local_200 = puVar12[2];
    local_d4 = local_208;
    local_d0 = local_204;
    local_cc = local_200;
    FUN_089a34c0(&local_1b4,&local_208);
    FUN_089a3528(&local_1b4,&local_1b4,&local_1cc);
    auVar9._4_4_ = local_1b0;
    auVar9._0_4_ = local_1b4;
    auVar9._8_4_ = local_1ac;
    auVar8._4_4_ = local_1b0;
    auVar8._0_4_ = local_1b4;
    auVar8._8_4_ = local_1ac;
    auVar7._4_4_ = local_1b0;
    auVar7._0_4_ = local_1b4;
    auVar7._8_4_ = local_1ac;
    uVar13 = vdot_t(auVar7,auVar8);
    uVar14 = vzero_s();
    uVar20 = vcmp_s(8,uVar13,local_1b4);
    local_58 = vsqrt_s(uVar13);
    vrcp_s(local_58);
    uVar13 = vcmovt_s(uVar14,(byte)uVar20 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar9,uVar13);
    local_1b4 = auVar2._0_4_;
    local_1b0 = auVar2._4_4_;
    local_1ac = auVar2._8_4_;
    uVar13 = FUN_0885ea90(iVar16);
    FUN_089a38fc(auStack_1a0,uVar13,&local_1e0);
    FUN_089a34c0(iVar15,&local_1cc);
    FUN_089a34c0(iVar17 + 0x20,auStack_1a0);
    FUN_088a08cc(iVar15,&local_1b4,&local_1c0);
  }
  return;
}

