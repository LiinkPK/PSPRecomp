/* Entry 0x0880966C | file offset 0x00006644 | FUN_0880966c | bytes 1656 */

int FUN_0880966c(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int local_240;
  uint local_23c;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
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
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  local_23c = param_5 & 0xff;
  if (local_23c == 0) {
    cVar1 = *(char *)(*(int *)(param_4 + 0x30) + 0xc);
  }
  else {
    cVar1 = *(char *)(*(int *)(param_4 + 0x30) + 6);
  }
  if (cVar1 == -1) {
    iVar19 = 0;
  }
  else {
    iVar19 = 0;
    if (param_3 == 0) {
      iVar18 = *(int *)(DAT_089d6ae0 + 8);
    }
    else {
      iVar18 = *(int *)(*(int *)(param_3 + 0x390) + 0x5c);
    }
    if ((iVar18 != 0) &&
       (local_240 = param_4, iVar19 = FUN_088a9e24(iVar18,&LAB_08808968,&local_240,0,0,0),
       iVar19 != 0)) {
      iVar18 = *(int *)(*(int *)(iVar19 + 0xc0) + 0x50);
      if (iVar18 < 2) {
        if (0 < iVar18) {
          local_1e0 = *(undefined4 *)(param_4 + 0x10);
          local_1dc = *(undefined4 *)(param_4 + 0x14);
          local_1d8 = *(undefined4 *)(param_4 + 0x18);
          local_1d4 = *(undefined4 *)(param_4 + 0x1c);
          if ((*(uint *)(*(int *)(param_4 + 0x30) + 8) & 0x800) != 0) {
            FUN_089a3868(&local_1e0,param_1 + 0xb0);
            auVar7._4_4_ = local_1dc;
            auVar7._0_4_ = local_1e0;
            auVar7._8_4_ = local_1d8;
            auVar6._4_4_ = local_1dc;
            auVar6._0_4_ = local_1e0;
            auVar6._8_4_ = local_1d8;
            auVar2._4_4_ = local_1dc;
            auVar2._0_4_ = local_1e0;
            auVar2._8_4_ = local_1d8;
            uVar20 = vdot_t(auVar2,auVar6);
            uVar21 = vzero_s();
            uVar22 = vcmp_s(8,uVar20,local_1e0);
            local_50 = vsqrt_s(uVar20);
            vrcp_s(local_50);
            uVar20 = vcmovt_s(uVar21,(byte)uVar22 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(auVar7,uVar20);
            local_1e0 = auVar2._0_4_;
            local_1dc = auVar2._4_4_;
            local_1d8 = auVar2._8_4_;
          }
          local_1d4 = 0;
          iVar18 = FUN_089a3b70(&local_1e0);
          if (iVar18 == 1) {
            if (param_1 == 0) {
              FUN_089a3868(&local_1d0,param_2 + 0x90);
            }
            else {
              FUN_089a38e0(&local_1d0,param_2 + 0x100,param_1 + 0x100);
            }
            auVar10._4_4_ = local_1cc;
            auVar10._0_4_ = local_1d0;
            auVar10._8_4_ = local_1c8;
            auVar9._4_4_ = local_1cc;
            auVar9._0_4_ = local_1d0;
            auVar9._8_4_ = local_1c8;
            auVar8._4_4_ = local_1cc;
            auVar8._0_4_ = local_1d0;
            auVar8._8_4_ = local_1c8;
            uVar20 = vdot_t(auVar8,auVar9);
            uVar21 = vzero_s();
            uVar22 = vcmp_s(8,uVar20,local_1d0);
            local_4c = vsqrt_s(uVar20);
            vrcp_s(local_4c);
            uVar20 = vcmovt_s(uVar21,(byte)uVar22 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(auVar10,uVar20);
            local_1d0 = auVar2._0_4_;
            local_1cc = auVar2._4_4_;
            local_1c8 = auVar2._8_4_;
            FUN_089a383c(local_1d0,local_1cc,local_1c8,local_1c4,auStack_200);
          }
          else {
            FUN_089a3868(auStack_200,&local_1e0);
          }
          FUN_089a383c(0,0x3f800000,0,0,auStack_210);
          FUN_089a3b30(&local_b0,auStack_210,auStack_200);
          local_1c0 = local_b0;
          local_1bc = local_ac;
          local_1b8 = local_a8;
          local_1b4 = local_a4;
          local_230 = local_b0;
          local_22c = local_ac;
          local_228 = local_a8;
          local_224 = local_a4;
          FUN_089a3868(&local_220,&local_230);
          auVar5._4_4_ = uStack_21c;
          auVar5._0_4_ = local_220;
          auVar5._8_4_ = uStack_218;
          auVar4._4_4_ = uStack_21c;
          auVar4._0_4_ = local_220;
          auVar4._8_4_ = uStack_218;
          auVar3._4_4_ = uStack_21c;
          auVar3._0_4_ = local_220;
          auVar3._8_4_ = uStack_218;
          uVar20 = vdot_t(auVar3,auVar4);
          uVar21 = vzero_s();
          uVar22 = vcmp_s(8,uVar20,local_220);
          local_48 = vsqrt_s(uVar20);
          vrcp_s(local_48);
          uVar20 = vcmovt_s(uVar21,(byte)uVar22 & 1);
          vpfxd(4,4,4,5);
          auVar2 = vscl_t(auVar5,uVar20);
          local_220 = auVar2._0_4_;
          uStack_21c = auVar2._4_4_;
          uStack_218 = auVar2._8_4_;
          FUN_089a3b30(&local_90,auStack_200,&local_220);
          local_1b0 = local_90;
          local_1ac = local_8c;
          local_1a8 = local_88;
          local_1a4 = local_84;
          local_230 = local_90;
          local_22c = local_8c;
          local_228 = local_88;
          local_224 = local_84;
          FUN_089a3868(auStack_210,&local_230);
          FUN_089a383c(0,0,0,0x3f800000,auStack_1f0);
          FUN_088a731c(iVar19,&local_220);
        }
      }
      else if (iVar18 < 3) {
        local_190 = *(undefined4 *)(param_4 + 0x10);
        local_18c = *(undefined4 *)(param_4 + 0x14);
        local_188 = *(undefined4 *)(param_4 + 0x18);
        local_184 = *(undefined4 *)(param_4 + 0x1c);
        puVar17 = (undefined4 *)FUN_0885ea88(DAT_089d5ec0 + 0x720);
        local_180 = *puVar17;
        local_17c = puVar17[1];
        local_178 = puVar17[2];
        local_174 = puVar17[3];
        local_170 = puVar17[4];
        local_16c = puVar17[5];
        local_168 = puVar17[6];
        local_164 = puVar17[7];
        local_160 = puVar17[8];
        local_15c = puVar17[9];
        local_158 = puVar17[10];
        local_154 = puVar17[0xb];
        local_150 = puVar17[0xc];
        local_14c = puVar17[0xd];
        local_148 = puVar17[0xe];
        local_144 = puVar17[0xf];
        FUN_089a383c(0,0,0,0x3f800000,&local_150);
        FUN_089a405c(auStack_140,&local_180);
        local_184 = 0;
        iVar18 = FUN_089a3b70(&local_190);
        if (iVar18 == 1) {
          if (param_1 == 0) {
            FUN_089a3868(&local_190,param_2 + 0x90);
          }
          else {
            FUN_089a38e0(&local_190,param_2 + 0x100,param_1 + 0x100);
          }
          auVar13._4_4_ = local_18c;
          auVar13._0_4_ = local_190;
          auVar13._8_4_ = local_188;
          auVar12._4_4_ = local_18c;
          auVar12._0_4_ = local_190;
          auVar12._8_4_ = local_188;
          auVar11._4_4_ = local_18c;
          auVar11._0_4_ = local_190;
          auVar11._8_4_ = local_188;
          uVar20 = vdot_t(auVar11,auVar12);
          uVar21 = vzero_s();
          uVar22 = vcmp_s(8,uVar20,local_190);
          local_44 = vsqrt_s(uVar20);
          vrcp_s(local_44);
          uVar20 = vcmovt_s(uVar21,(byte)uVar22 & 1);
          vpfxd(4,4,4,5);
          auVar2 = vscl_t(auVar13,uVar20);
          local_190 = auVar2._0_4_;
          local_18c = auVar2._4_4_;
          local_188 = auVar2._8_4_;
        }
        FUN_089a3f40(&local_190,&local_180,&local_190);
        auVar16._4_4_ = local_18c;
        auVar16._0_4_ = local_190;
        auVar16._8_4_ = 0;
        auVar15._4_4_ = local_18c;
        auVar15._0_4_ = local_190;
        auVar15._8_4_ = 0;
        auVar14._4_4_ = local_18c;
        auVar14._0_4_ = local_190;
        auVar14._8_4_ = 0;
        uVar20 = vdot_t(auVar14,auVar15);
        uVar21 = vzero_s();
        uVar22 = vcmp_s(8,uVar20,local_190);
        local_40 = vsqrt_s(uVar20);
        vrcp_s(local_40);
        uVar20 = vcmovt_s(uVar21,(byte)uVar22 & 1);
        vpfxd(4,4,4,5);
        auVar2 = vscl_t(auVar16,uVar20);
        local_190 = auVar2._0_4_;
        local_18c = auVar2._4_4_;
        local_188 = auVar2._8_4_;
        FUN_089a3f40(&local_190,auStack_140,&local_190);
        FUN_089a383c(0,0,0x3f800000,0,auStack_e0);
        FUN_089a3f40(auStack_e0,auStack_140,auStack_e0);
        FUN_089a3868(auStack_f0,&local_190);
        FUN_089a3b30(&local_70,auStack_f0,auStack_e0);
        local_c0 = local_70;
        local_bc = local_6c;
        local_b8 = local_68;
        local_b4 = local_64;
        local_1a0 = local_70;
        local_19c = local_6c;
        local_198 = local_68;
        local_194 = local_64;
        FUN_089a3868(auStack_100,&local_1a0);
        FUN_089a383c(0,0,0,0x3f800000,auStack_d0);
        FUN_088a731c(iVar19,auStack_100);
      }
    }
  }
  return iVar19;
}

