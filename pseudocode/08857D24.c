/* Entry 0x08857D24 | file offset 0x00054CFC | FUN_08857d24 | bytes 1948 */

/* WARNING: Removing unreachable block (ram,0x08857e48) */

void FUN_08857d24(undefined4 *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float local_210;
  float local_20c;
  float local_208;
  undefined1 auStack_200 [4];
  float local_1fc;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  float local_170 [3];
  undefined1 local_164 [160];
  float local_c4 [5];
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a0;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 *local_74;
  undefined1 *local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float *local_50;
  
  local_170[0] = 1.0;
  local_170[1] = 1.46;
  local_170[2] = 3.04;
  local_c4[0] = -3.705346e-39;
  local_c4[1] = -1.5810412e-38;
  local_74 = param_1;
  local_68 = FUN_08857afc(param_1,local_164);
  local_6c = 0;
  if (0 < local_68) {
    local_64 = &DAT_09af84e0;
    local_70 = (undefined1 *)&local_210;
    do {
      puVar7 = local_74;
      iVar10 = *(int *)(local_70 + 0xac);
      FUN_089a3868(auStack_200,local_74 + iVar10 * 0x18 + 0x18);
      puVar12 = local_64;
      if (*(char *)(puVar7 + iVar10 * 0x18 + 0x1c) == '\0') {
        local_1fc = local_1fc + 0.4;
      }
      fVar17 = (float)(*(byte *)((int)puVar7 + iVar10 * 0x60 + 0x71) & 3) * 0.25;
      fVar16 = (float)((int)(uint)*(byte *)((int)puVar7 + iVar10 * 0x60 + 0x71) >> 2) * 0.25;
      uVar9 = FUN_0885ea90(DAT_089d5ec0 + 0x720);
      FUN_089a38e0(&local_1c0,auStack_200,uVar9);
      FUN_089a3bc8(&local_1c0,&local_1c0);
      FUN_089a3b30(auStack_1d0,puVar12,&local_1c0);
      FUN_089a3bc8(auStack_1d0,auStack_1d0);
      fVar19 = fVar17 + 0.25;
      iVar11 = 0;
      fVar18 = fVar16 + 0.25;
      puVar12 = puVar7;
      pfVar13 = &local_210;
      do {
        local_60 = fVar18;
        local_5c = fVar19;
        local_58 = fVar16;
        local_54 = fVar17;
        local_50 = (float *)FUN_0885cd44(0x60);
        uVar9 = puVar7[iVar10 * 0x18 + 0x1d];
        auVar3._4_4_ = local_1bc;
        auVar3._0_4_ = local_1c0;
        auVar3._8_4_ = local_1b8;
        auVar2._4_4_ = local_1bc;
        auVar2._0_4_ = local_1c0;
        auVar2._8_4_ = local_1b8;
        auVar1._4_4_ = local_1bc;
        auVar1._0_4_ = local_1c0;
        auVar1._8_4_ = local_1b8;
        uVar20 = vdot_t(auVar1,auVar2);
        uVar21 = vzero_s();
        uVar22 = vcmp_s(8,uVar20,local_1c0);
        local_a0 = vsqrt_s(uVar20);
        vrcp_s(local_a0);
        uVar20 = vcmovt_s(uVar21,(byte)uVar22 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar3,uVar20);
        fVar19 = auVar1._0_4_;
        fVar18 = auVar1._4_4_;
        fVar16 = auVar1._8_4_;
        local_b0 = fVar19;
        local_ac = fVar18;
        local_a8 = fVar16;
        fVar17 = (float)FUN_089a47a4(uVar9);
        local_188 = (float)FUN_089a46dc(uVar9);
        fVar14 = 1.0 - local_188;
        local_1b0 = fVar19 * fVar19 * fVar14 + local_188;
        local_1a0 = fVar19 * fVar18 * fVar14;
        local_1ac = local_1a0 + fVar17 * fVar16;
        local_190 = fVar19 * fVar16 * fVar14;
        local_1a8 = local_190 - fVar17 * fVar18;
        local_1a4 = 0;
        local_1a0 = local_1a0 - fVar17 * fVar16;
        local_19c = fVar18 * fVar18 * fVar14 + local_188;
        local_18c = fVar18 * fVar16 * fVar14;
        local_198 = local_18c + fVar17 * fVar19;
        local_194 = 0;
        local_190 = local_190 + fVar17 * fVar18;
        local_18c = local_18c - fVar17 * fVar19;
        local_188 = fVar16 * fVar16 * fVar14 + local_188;
        local_184 = 0;
        local_180 = 0;
        local_17c = 0;
        local_178 = 0;
        local_174 = 0x3f800000;
        FUN_089a3a44(*(float *)((int)pfVar13 + 0xa0) * 0.56568545,auStack_1e0,auStack_1d0);
        FUN_089a3f40(auStack_1f0,&local_1b0,auStack_1e0);
        FUN_089a38a8(&local_210,auStack_200,auStack_1f0);
        pfVar8 = local_50;
        fVar17 = local_54;
        fVar16 = local_58;
        fVar18 = local_5c;
        fVar19 = local_60;
        if (iVar11 == 2) {
          fVar14 = local_c4[*(byte *)(puVar7 + iVar10 * 0x18 + 0x1c)];
          local_50[3] = local_210;
          local_50[4] = local_20c;
          *local_50 = local_5c;
          local_50[5] = local_208;
          local_50[1] = local_60;
          local_50[2] = fVar14;
        }
        else {
          local_50[3] = local_210;
          local_50[4] = local_20c;
          *local_50 = 1.0;
          local_50[5] = local_208;
          local_50[1] = 1.0;
          local_50[2] = -NAN;
        }
        FUN_089a38e0(&local_210,auStack_200,auStack_1f0);
        if (iVar11 == 2) {
          fVar14 = local_c4[*(byte *)(puVar7 + iVar10 * 0x18 + 0x1c)];
          pfVar8[0x15] = local_210;
          pfVar8[0x16] = local_20c;
          pfVar8[0x12] = fVar17;
          pfVar8[0x17] = local_208;
          pfVar8[0x13] = fVar16;
          pfVar8[0x14] = fVar14;
        }
        else {
          pfVar8[0x15] = local_210;
          pfVar8[0x16] = local_20c;
          pfVar8[0x12] = 0.0;
          pfVar8[0x17] = local_208;
          pfVar8[0x13] = 0.0;
          pfVar8[0x14] = -NAN;
        }
        local_60 = fVar18;
        local_5c = fVar19;
        fVar15 = (float)puVar7[iVar10 * 0x18 + 0x1d];
        auVar6._4_4_ = local_1bc;
        auVar6._0_4_ = local_1c0;
        auVar6._8_4_ = local_1b8;
        auVar5._4_4_ = local_1bc;
        auVar5._0_4_ = local_1c0;
        auVar5._8_4_ = local_1b8;
        auVar4._4_4_ = local_1bc;
        auVar4._0_4_ = local_1c0;
        auVar4._8_4_ = local_1b8;
        uVar9 = vdot_t(auVar4,auVar5);
        uVar20 = vzero_s();
        uVar21 = vcmp_s(8,uVar9,local_1c0);
        local_80 = vsqrt_s(uVar9);
        vrcp_s(local_80);
        uVar9 = vcmovt_s(uVar20,(byte)uVar21 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar6,uVar9);
        fVar19 = auVar1._0_4_;
        fVar18 = auVar1._4_4_;
        fVar14 = auVar1._8_4_;
        local_90 = fVar19;
        local_8c = fVar18;
        local_88 = fVar14;
        local_58 = fVar16;
        local_54 = fVar17;
        fVar16 = (float)FUN_089a47a4(fVar15 + 1.5707964);
        local_188 = (float)FUN_089a46dc(fVar15 + 1.5707964);
        fVar17 = 1.0 - local_188;
        local_1b0 = fVar19 * fVar19 * fVar17 + local_188;
        local_1a0 = fVar19 * fVar18 * fVar17;
        local_1ac = local_1a0 + fVar16 * fVar14;
        local_190 = fVar19 * fVar14 * fVar17;
        local_1a8 = local_190 - fVar16 * fVar18;
        local_1a4 = 0;
        local_1a0 = local_1a0 - fVar16 * fVar14;
        local_19c = fVar18 * fVar18 * fVar17 + local_188;
        local_18c = fVar18 * fVar14 * fVar17;
        local_198 = local_18c + fVar16 * fVar19;
        local_194 = 0;
        local_190 = local_190 + fVar16 * fVar18;
        local_18c = local_18c - fVar16 * fVar19;
        local_188 = fVar14 * fVar14 * fVar17 + local_188;
        local_184 = 0;
        local_180 = 0;
        local_17c = 0;
        local_178 = 0;
        local_174 = 0x3f800000;
        FUN_089a3f40(auStack_1f0,&local_1b0,auStack_1e0);
        FUN_089a38a8(&local_210,auStack_200,auStack_1f0);
        fVar17 = local_54;
        fVar16 = local_58;
        fVar18 = local_5c;
        fVar19 = local_60;
        if (iVar11 == 2) {
          fVar14 = local_c4[*(byte *)(puVar7 + iVar10 * 0x18 + 0x1c)];
          pfVar8[9] = local_210;
          pfVar8[10] = local_20c;
          pfVar8[6] = local_54;
          pfVar8[0xb] = local_208;
          pfVar8[7] = local_5c;
          pfVar8[8] = fVar14;
        }
        else {
          pfVar8[9] = local_210;
          pfVar8[10] = local_20c;
          pfVar8[6] = 0.0;
          pfVar8[0xb] = local_208;
          pfVar8[7] = 1.0;
          pfVar8[8] = -NAN;
        }
        FUN_089a38e0(&local_210,auStack_200,auStack_1f0);
        if (iVar11 == 2) {
          fVar14 = local_c4[*(byte *)(puVar7 + iVar10 * 0x18 + 0x1c)];
          pfVar8[0xf] = local_210;
          pfVar8[0x10] = local_20c;
          pfVar8[0xc] = fVar19;
          pfVar8[0x11] = local_208;
          pfVar8[0xd] = fVar16;
          pfVar8[0xe] = fVar14;
        }
        else {
          pfVar8[0xf] = local_210;
          pfVar8[0x10] = local_20c;
          pfVar8[0xc] = 1.0;
          pfVar8[0x11] = local_208;
          pfVar8[0xd] = 0.0;
          pfVar8[0xe] = -NAN;
        }
        if (iVar11 == 0) {
          FUN_089a12a4(0,2,3,0,0);
        }
        else {
          FUN_089a12a4(0,2,10,0,0xffffffff);
        }
        if ((*(char *)(puVar7 + iVar10 * 0x18 + 0x1c) == '\0') && (iVar11 == 1)) {
          FUN_0899d2f8(local_74[3]);
        }
        else {
          FUN_0899d2f8(*puVar12);
        }
        FUN_089a0520(4,0x19f,4,0,pfVar8);
        iVar11 = iVar11 + 1;
        pfVar13 = (float *)((int)pfVar13 + 4);
        puVar12 = puVar12 + 1;
      } while (iVar11 < 3);
      local_6c = local_6c + 1;
      local_70 = local_70 + 4;
    } while (local_6c < local_68);
  }
  return;
}

