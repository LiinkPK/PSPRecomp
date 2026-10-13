/* Entry 0x08849B50 | file offset 0x00046B28 | FUN_08849b50 | bytes 1860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_08849b50(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 auVar1 [12];
  bool bVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined1 auStack_1c0 [4];
  float local_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  undefined4 local_194;
  uint local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  int local_170;
  int local_16c;
  int local_168;
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
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  int local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  *param_1 = param_3;
  param_1[4] = 0;
  param_1[0xc] = param_2;
  param_1[0x10] = *(int *)(param_2 + 0x80);
  param_1[0x11] = *(int *)(param_2 + 0x84);
  param_1[0x12] = *(int *)(param_2 + 0x88);
  param_1[0x13] = *(int *)(param_2 + 0x8c);
  param_1[0x14] = *(int *)(param_2 + 0x100);
  param_1[0x15] = *(int *)(param_2 + 0x104);
  param_1[0x16] = *(int *)(param_2 + 0x108);
  iVar12 = 0;
  param_1[0x17] = *(int *)(param_2 + 0x10c);
  piVar13 = param_1;
  do {
    piVar13[0x18] = 0;
    iVar12 = iVar12 + 1;
    piVar13 = piVar13 + 1;
  } while (iVar12 < 6);
  param_1[0x1e] = 0;
  param_1[0x1f] = param_4;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  if ((*(byte *)(param_1[0xc] + 0x198) & 2) != 0) {
    *(undefined1 *)((int)param_1 + 0x81) = 1;
  }
  FUN_08848078(DAT_089d4974,*(undefined4 *)(*(int *)(param_2 + 0x390) + 0x88));
  uVar17 = _DAT_08ab8388;
  iVar12 = param_1[0xc];
  uVar14 = *(undefined4 *)(*(int *)(iVar12 + 0x390) + 0x8c);
  uVar15 = *(undefined4 *)(iVar12 + 0x30c);
  uVar11 = func_0x08acf234(iVar12 + 0xd5c);
  func_0x08ab7f40(uVar17,uVar14,uVar15,uVar11,(int)*(char *)(param_1[0xc] + 0x107e));
  bVar2 = false;
  if ((*param_1 != 0) && (iVar12 = FUN_08835174(*param_1,1,0xffffffff), iVar12 != 0)) {
    FUN_08812664(param_1 + 1,*param_1,iVar12);
    local_1a0 = param_1[5];
    local_19c = param_1[6];
    local_198 = param_1[7];
    local_f4 = 0x3f800000;
    local_164 = 0x3f800000;
    local_194 = 0x3f800000;
    local_170 = local_1a0;
    local_16c = local_19c;
    local_168 = local_198;
    local_100 = local_1a0;
    local_fc = local_19c;
    local_f8 = local_198;
    FUN_089a38e0(&local_e0,&local_1a0,param_1 + 0x10);
    local_180 = local_e0;
    local_17c = local_dc;
    local_178 = local_d8;
    local_174 = local_d4;
    local_1b0 = local_e0;
    local_1ac = local_dc;
    local_1a8 = local_d8;
    local_1a4 = local_d4;
    FUN_089a3868(&local_190,&local_1b0);
    auVar10._4_4_ = 0;
    auVar10._0_4_ = local_190;
    auVar10._8_4_ = uStack_188;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = local_190;
    auVar9._8_4_ = uStack_188;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = local_190;
    auVar1._8_4_ = uStack_188;
    uVar17 = vdot_t(auVar1,auVar9);
    uVar11 = vzero_s();
    uVar14 = vcmp_s(8,uVar17,local_190);
    local_60 = vsqrt_s(uVar17);
    vrcp_s(local_60);
    uVar17 = vcmovt_s(uVar11,(byte)uVar14 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar10,uVar17);
    local_190 = auVar1._0_4_;
    local_18c = auVar1._4_4_;
    uStack_188 = auVar1._8_4_;
    FUN_089a3868(param_1 + 8,&local_190);
    bVar2 = true;
  }
  if (!bVar2) {
    FUN_089a3868(param_1 + 8,param_1[0xc] + 0x90);
  }
  FUN_089a3868(&local_1e0,param_1[0xc] + 0x550);
  if (*param_1 == 0) {
    iVar12 = *(int *)(param_1[0xc] + 0x544);
    iVar12 = (**(code **)(iVar12 + 0x134))(param_1[0xc] + (int)*(short *)(iVar12 + 0x130));
    if (iVar12 == 0) {
      FUN_089a3868(&local_1d0,param_1[0xc] + 0x90);
    }
    else {
      iVar12 = *(int *)(param_1[0xc] + 0x544);
      iVar12 = (**(code **)(iVar12 + 0x134))(param_1[0xc] + (int)*(short *)(iVar12 + 0x130));
      FUN_089a38e0(&local_a0,iVar12 + 0x80,param_1[0xc] + 0x80);
      local_130 = local_a0;
      local_12c = local_9c;
      local_128 = local_98;
      local_124 = local_94;
      local_140 = local_a0;
      local_13c = local_9c;
      local_138 = local_98;
      local_134 = local_94;
      FUN_089a3868(&local_1d0,&local_140);
    }
  }
  else {
    FUN_089a38e0(&local_c0,*param_1 + 0x80,param_1[0xc] + 0x80);
    local_150 = local_c0;
    local_14c = local_bc;
    local_148 = local_b8;
    local_144 = local_b4;
    local_160 = local_c0;
    local_15c = local_bc;
    local_158 = local_b8;
    local_154 = local_b4;
    FUN_089a3868(&local_1d0,&local_160);
  }
  auVar5._4_4_ = uStack_1dc;
  auVar5._0_4_ = local_1e0;
  auVar5._8_4_ = uStack_1d8;
  auVar4._4_4_ = uStack_1dc;
  auVar4._0_4_ = local_1e0;
  auVar4._8_4_ = uStack_1d8;
  auVar3._4_4_ = uStack_1dc;
  auVar3._0_4_ = local_1e0;
  auVar3._8_4_ = uStack_1d8;
  uVar17 = vdot_t(auVar3,auVar4);
  uVar11 = vzero_s();
  uVar14 = vcmp_s(8,uVar17,local_1e0);
  local_5c = vsqrt_s(uVar17);
  vrcp_s(local_5c);
  uVar17 = vcmovt_s(uVar11,(byte)uVar14 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar5,uVar17);
  local_1e0 = auVar1._0_4_;
  uStack_1dc = auVar1._4_4_;
  uStack_1d8 = auVar1._8_4_;
  auVar8._4_4_ = uStack_1cc;
  auVar8._0_4_ = local_1d0;
  auVar8._8_4_ = uStack_1c8;
  auVar7._4_4_ = uStack_1cc;
  auVar7._0_4_ = local_1d0;
  auVar7._8_4_ = uStack_1c8;
  auVar6._4_4_ = uStack_1cc;
  auVar6._0_4_ = local_1d0;
  auVar6._8_4_ = uStack_1c8;
  uVar17 = vdot_t(auVar6,auVar7);
  uVar11 = vzero_s();
  uVar14 = vcmp_s(8,uVar17,local_1d0);
  local_58 = vsqrt_s(uVar17);
  vrcp_s(local_58);
  uVar17 = vcmovt_s(uVar11,(byte)uVar14 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar8,uVar17);
  local_1d0 = auVar1._0_4_;
  uStack_1cc = auVar1._4_4_;
  uStack_1c8 = auVar1._8_4_;
  iVar12 = FUN_089a3b70(&local_1e0);
  if (iVar12 == 1) {
    param_1[0x1e] = param_1[0x1e] | 1;
  }
  else {
    uVar17 = FUN_08868128(&local_1e0,&local_1d0,0);
    fVar16 = (float)FUN_089a4500(uVar17);
    if (fVar16 < 1.3962634) {
      param_1[0x1e] = param_1[0x1e] | 2;
    }
    else if (1.7453294 <= fVar16) {
      param_1[0x1e] = param_1[0x1e] | 4;
    }
    else {
      FUN_089a3b30(&local_80,&local_1e0,&local_1d0);
      local_110 = local_80;
      local_10c = local_7c;
      local_108 = local_78;
      local_104 = local_74;
      local_120 = local_80;
      local_11c = local_7c;
      local_118 = local_78;
      local_114 = local_74;
      FUN_089a3868(auStack_1c0,&local_120);
      if (0.0 <= local_1bc) {
        param_1[0x1e] = param_1[0x1e] | 8;
      }
      else {
        param_1[0x1e] = param_1[0x1e] | 0x10;
      }
    }
    if (fVar16 < 1.5707964) {
      param_1[0x1e] = param_1[0x1e] | 0x80;
    }
    else {
      param_1[0x1e] = param_1[0x1e] | 0x100;
    }
    iVar12 = func_0x08b2f3b0(param_1[0xc]);
    if ((iVar12 == 0) && (iVar12 = func_0x08b2f408(param_1[0xc]), iVar12 == 0)) {
      iVar12 = func_0x08b32ac4(param_1[0xc]);
      if (iVar12 == 0) {
        iVar12 = func_0x08b32b6c(param_1[0xc]);
        if (iVar12 != 0) {
          param_1[0x1e] = param_1[0x1e] | 0x40;
        }
      }
      else {
        param_1[0x1e] = param_1[0x1e] | 0x20;
      }
    }
    else if ((param_1[0x1e] & 0x80U) == 0) {
      if ((param_1[0x1e] & 0x100U) != 0) {
        param_1[0x1e] = param_1[0x1e] | 0x40;
      }
    }
    else {
      param_1[0x1e] = param_1[0x1e] | 0x20;
    }
  }
  return param_1;
}

