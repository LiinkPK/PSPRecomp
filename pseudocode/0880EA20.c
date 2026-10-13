/* Entry 0x0880EA20 | file offset 0x0000B9F8 | FUN_0880ea20 | bytes 4416 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0880ea20(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 auVar1 [12];
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float local_4a0;
  float local_49c;
  float local_498;
  undefined4 local_494;
  float local_490;
  float local_48c;
  float local_488;
  undefined4 local_484;
  float local_480;
  float local_47c;
  float local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined1 auStack_460 [48];
  undefined1 auStack_430 [16];
  undefined1 auStack_420 [64];
  undefined1 auStack_3e0 [64];
  undefined1 auStack_3a0 [64];
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined1 auStack_2e0 [16];
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 auStack_260 [16];
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 auStack_1e0 [12];
  undefined4 local_1d4;
  undefined4 local_1c4;
  undefined4 local_1b4;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
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
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  float fVar2;
  
  fVar14 = (float)FUN_08838300(param_3);
  fVar14 = fVar14 / 60.0;
  fVar15 = (float)FUN_08838300(param_3);
  if (fVar15 <= 0.0) {
    FUN_089a3efc(auStack_3e0,param_3 + 0x330);
    FUN_089a405c(auStack_3a0,auStack_3e0);
    iVar11 = param_1[8];
    iVar12 = 0;
    if (0 < iVar11) {
      iVar9 = 0;
      do {
        iVar9 = param_1[0xd] + iVar9 * 3 + iVar12 * -0x10;
        uVar6 = FUN_089b0e78(param_2,(int)**(short **)(iVar9 + 0x158));
        uVar8 = FUN_089b0f98(uVar6);
        uVar7 = FUN_089b0e78(param_2,uVar8 & 0xfff);
        uVar7 = FUN_089b1224(uVar7);
        if (*(short *)(iVar9 + 0x156) == -1) {
          uVar19 = FUN_089b1224(uVar6);
          FUN_089a3fb8(&local_4a0,auStack_3e0,uVar19);
          FUN_089a3868(auStack_340,&local_470);
        }
        else {
          FUN_089a3868(auStack_340,param_1[0xd] + *(short *)(iVar9 + 0x156) * 0x170);
        }
        if (*(char *)((int)param_1 + 0x3d) != '\0') {
          local_2d0 = *(undefined4 *)(iVar9 + 0x160);
          local_2cc = 0;
          local_2c8 = 0;
          local_2c4 = 0x3f800000;
          FUN_089a3868(&local_360,&local_2d0);
          FUN_089a3f68(&local_360,uVar7,&local_360);
          FUN_089a3f68(&local_360,iVar9 + 0x10,&local_360);
          FUN_089a3f68(&local_360,auStack_3e0,&local_360);
          FUN_089a38a8(iVar9,&local_360,auStack_340);
          uVar19 = *(undefined4 *)(iVar9 + 0x160);
          FUN_089a38e0(auStack_190,iVar9,auStack_340);
          FUN_089a3bc8(auStack_190,auStack_190);
          FUN_089a3a44(uVar19,auStack_190,auStack_190);
          FUN_089a38a8(iVar9,auStack_190,auStack_340);
          *(undefined4 *)(iVar9 + 0xc) = 0x3f800000;
        }
        FUN_0880cab4(param_1,&local_4a0,iVar9,auStack_3a0,auStack_340,uVar7);
        FUN_089b11cc(uVar6,&local_4a0);
        FUN_089a3868(iVar9 + 0xe0,iVar9);
        FUN_089a3868(iVar9 + 0xf0,auStack_340);
        iVar12 = iVar12 + 1;
        iVar9 = iVar12 * 0x80;
      } while (iVar12 < iVar11);
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\0') {
      fVar14 = 0.0;
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_0880c31c(param_1,param_3);
    FUN_089a3efc(auStack_3e0,param_3 + 0x330);
    FUN_089a405c(auStack_3a0,auStack_3e0);
    if ((0.0 < (float)param_1[3]) && (iVar12 = 0, '\0' < *(char *)((int)param_1 + 0x3e))) {
      iVar11 = 0;
      do {
        pfVar10 = (float *)(param_1[0xe] + iVar11 * 3);
        if (*pfVar10 <= pfVar10[1]) {
          pfVar10[2] = pfVar10[3];
          DAT_09af8b00 = DAT_09af8b00 * 0x343fd + 0x269ec3;
          pfVar10[3] = (float)(DAT_09af8b00 >> 0x10 & 0x7fff) * 3.051851e-05 * (float)param_1[3];
          fVar15 = (float)param_1[4];
          fVar18 = (float)param_1[5];
          DAT_09af8b00 = DAT_09af8b00 * 0x343fd + 0x269ec3;
          uVar8 = DAT_09af8b00 >> 0x10;
          pfVar10[1] = 0.0;
          *pfVar10 = (float)(uVar8 & 0x7fff) * 3.051851e-05 * (fVar18 - fVar15) + fVar15;
        }
        fVar15 = 1.0;
        if (0.0 < *pfVar10) {
          fVar15 = pfVar10[1] / *pfVar10;
        }
        pfVar10[4] = fVar15 * (pfVar10[3] - pfVar10[2]) + pfVar10[2];
        fVar15 = (float)FUN_08838300(param_3);
        iVar12 = iVar12 + 1;
        pfVar10[1] = pfVar10[1] + fVar15;
        iVar11 = iVar12 * 8;
      } while (iVar12 < *(char *)((int)param_1 + 0x3e));
    }
    iVar11 = param_1[8];
    iVar12 = 0;
    if (0 < iVar11) {
      iVar9 = 0;
      do {
        iVar9 = param_1[0xd] + iVar9 * 3 + iVar12 * -0x10;
        uVar6 = FUN_089b0e78(param_2,(int)**(short **)(iVar9 + 0x158));
        if (*(short *)(iVar9 + 0x156) == -1) {
          uVar7 = FUN_089b1224(uVar6);
          FUN_089a3fb8(&local_4a0,auStack_3e0,uVar7);
          FUN_089a3868(auStack_340,&local_470);
        }
        else {
          FUN_089a3868(auStack_340,param_1[0xd] + *(short *)(iVar9 + 0x156) * 0x170);
        }
        if (*(char *)(iVar9 + 0x151) == '\0') {
          FUN_089a3efc(auStack_460,iVar9 + 0x50);
        }
        else {
          uVar7 = FUN_089b11b4(uVar6);
          FUN_089a4c80(&local_360,uVar7);
          FUN_089a4180(local_360,iVar9 + 0x90,&DAT_09af8ac0);
          uVar7 = FUN_089b11b4(uVar6);
          FUN_089a4de4(auStack_460,uVar7);
          *(undefined1 *)(iVar9 + 0x151) = 0;
        }
        uVar8 = FUN_089b0f98(uVar6);
        uVar7 = FUN_089b0e78(param_2,uVar8 & 0xfff);
        uVar7 = FUN_089b1224(uVar7);
        FUN_089a3fb8(auStack_460,uVar7,auStack_460);
        FUN_089a3fb8(auStack_460,auStack_3e0,auStack_460);
        FUN_089a3868(auStack_430,auStack_340);
        if (*(char *)((int)param_1 + 0x3d) != '\0') {
          local_2c0 = *(undefined4 *)(iVar9 + 0x160);
          local_2bc = 0;
          local_2b8 = 0;
          local_2b4 = 0x3f800000;
          FUN_089a3868(&local_360,&local_2c0);
          FUN_089a3f68(&local_360,uVar7,&local_360);
          FUN_089a3f68(&local_360,iVar9 + 0x10,&local_360);
          FUN_089a3f68(&local_360,auStack_3e0,&local_360);
          FUN_089a38a8(iVar9,&local_360,auStack_340);
          FUN_089a3868(iVar9 + 0xe0,iVar9);
          FUN_089a3868(iVar9 + 0xf0,auStack_340);
        }
        FUN_089a3868(auStack_300,iVar9);
        if (*(char *)(iVar9 + 0x150) == '\0') {
          local_58 = uVar7;
          local_54 = uVar6;
          local_50 = iVar12;
          local_4c = iVar11;
          uVar6 = FUN_089b1224(uVar6);
          FUN_089a3efc(auStack_460,uVar6);
          FUN_089a3fb8(&local_180,auStack_3e0,auStack_460);
          local_240 = local_180;
          local_23c = local_17c;
          local_238 = local_178;
          local_234 = local_174;
          local_230 = local_170;
          local_22c = local_16c;
          local_228 = local_168;
          local_224 = local_164;
          local_220 = local_160;
          local_21c = local_15c;
          local_218 = local_158;
          local_214 = local_154;
          local_210 = local_150;
          local_20c = local_14c;
          local_208 = local_148;
          local_204 = local_144;
          local_2a0 = local_180;
          local_29c = local_17c;
          local_298 = local_178;
          local_294 = local_174;
          local_290 = local_170;
          local_28c = local_16c;
          local_288 = local_168;
          local_284 = local_164;
          local_280 = local_160;
          local_27c = local_15c;
          local_278 = local_158;
          local_274 = local_154;
          local_270 = local_150;
          local_26c = local_14c;
          local_268 = local_148;
          local_264 = local_144;
          FUN_089a3f40(&local_100,&local_2a0,&DAT_09af8aa0);
          local_250 = local_100;
          local_24c = local_fc;
          local_248 = local_f8;
          local_244 = local_f4;
          local_2b0 = local_100;
          local_2ac = local_fc;
          local_2a8 = local_f8;
          local_2a4 = local_f4;
          FUN_089a3868(auStack_2e0,&local_2b0);
          local_2b0 = *(undefined4 *)(iVar9 + 0x160);
          local_2ac = 0;
          local_2a8 = 0;
          local_2a4 = 0x3f800000;
          FUN_089a3868(&local_360,&local_2b0);
          FUN_089a3fb8(&local_4a0,auStack_3e0,auStack_460);
          FUN_089a3f40(auStack_260,&local_4a0,&local_360);
          FUN_089a38e0(&local_e0,auStack_2e0,auStack_340);
          local_200 = local_e0;
          local_1fc = local_dc;
          local_1f8 = local_d8;
          local_1f4 = local_d4;
          local_2b0 = local_e0;
          local_2ac = local_dc;
          local_2a8 = local_d8;
          local_2a4 = local_d4;
          FUN_089a3868(auStack_2e0,&local_2b0);
          FUN_089a38e0(&local_c0,iVar9,auStack_340);
          local_1f0 = local_c0;
          local_1ec = local_bc;
          local_1e8 = local_b8;
          local_1e4 = local_b4;
          local_2b0 = local_c0;
          local_2ac = local_bc;
          local_2a8 = local_b8;
          local_2a4 = local_b4;
          FUN_089a3868(&local_360,&local_2b0);
          fVar15 = (float)FUN_08867fec(auStack_2e0,&local_360);
          iVar11 = local_4c;
          iVar12 = local_50;
          uVar7 = local_54;
          uVar6 = local_58;
          if (*(short *)(iVar9 + 0x164) == 1) {
            if (fVar15 < *(float *)(iVar9 + 0x168)) {
              FUN_089a3868(iVar9,auStack_260);
              *(undefined2 *)(iVar9 + 0x164) = 2;
            }
            else {
              FUN_089a3b30(&local_2f0,&local_360,auStack_2e0);
              uVar19 = *(undefined4 *)(iVar9 + 0x168);
              auVar5._4_4_ = local_2ec;
              auVar5._0_4_ = local_2f0;
              auVar5._8_4_ = local_2e8;
              auVar4._4_4_ = local_2ec;
              auVar4._0_4_ = local_2f0;
              auVar4._8_4_ = local_2e8;
              auVar1._4_4_ = local_2ec;
              auVar1._0_4_ = local_2f0;
              auVar1._8_4_ = local_2e8;
              uVar20 = vdot_t(auVar1,auVar4);
              uVar21 = vzero_s();
              uVar22 = vcmp_s(8,uVar20,local_2f0);
              local_60 = vsqrt_s(uVar20);
              vrcp_s(local_60);
              uVar20 = vcmovt_s(uVar21,(byte)uVar22 & 1);
              vpfxd(4,4,4,5);
              auVar1 = vscl_t(auVar5,uVar20);
              fVar15 = auVar1._0_4_;
              fVar18 = auVar1._4_4_;
              fVar2 = auVar1._8_4_;
              local_70 = fVar15;
              local_6c = fVar18;
              local_68 = fVar2;
              fVar16 = (float)FUN_089a47a4(uVar19);
              local_478 = (float)FUN_089a46dc(uVar19);
              fVar17 = 1.0 - local_478;
              local_4a0 = fVar15 * fVar15 * fVar17 + local_478;
              local_490 = fVar15 * fVar18 * fVar17;
              local_49c = local_490 + fVar16 * fVar2;
              local_480 = fVar15 * fVar2 * fVar17;
              local_498 = local_480 - fVar16 * fVar18;
              local_494 = 0;
              local_490 = local_490 - fVar16 * fVar2;
              local_48c = fVar18 * fVar18 * fVar17 + local_478;
              local_47c = fVar18 * fVar2 * fVar17;
              local_488 = local_47c + fVar16 * fVar15;
              local_484 = 0;
              local_480 = local_480 + fVar16 * fVar18;
              local_47c = local_47c - fVar16 * fVar15;
              local_478 = fVar2 * fVar2 * fVar17 + local_478;
              local_474 = 0;
              local_470 = 0;
              local_46c = 0;
              local_468 = 0;
              local_464 = 0x3f800000;
              FUN_089a3f40(&local_360,&local_4a0,&local_360);
              FUN_089a38a8(iVar9,&local_360,auStack_340);
              uVar19 = *(undefined4 *)(iVar9 + 0x160);
              FUN_089a38e0(auStack_a0,iVar9,auStack_340);
              FUN_089a3bc8(auStack_a0,auStack_a0);
              FUN_089a3a44(uVar19,auStack_a0,auStack_a0);
              FUN_089a38a8(iVar9,auStack_a0,auStack_340);
              *(undefined4 *)(iVar9 + 0xc) = 0x3f800000;
              FUN_0880cab4(param_1,&local_4a0,iVar9,auStack_3a0,auStack_340,uVar6);
              FUN_089b11cc(uVar7,&local_4a0);
              iVar12 = local_50;
            }
          }
          else {
            FUN_089a3868(iVar9,auStack_260);
            FUN_089a3868(iVar9 + 0xe0,auStack_260);
          }
          FUN_089a3890(iVar9 + 0x100);
          FUN_089a3868(iVar9 + 0xf0,auStack_340);
          *(undefined1 *)(iVar9 + 0x150) = 1;
        }
        else {
          *(undefined2 *)(iVar9 + 0x164) = 0;
          if (*(char *)(*(int *)(iVar9 + 0x158) + 0x19) == '\0') {
            FUN_089a3868(auStack_320,&DAT_09af8b10);
          }
          else {
            FUN_089a3f68(auStack_320,auStack_3e0,iVar9 + 0xd0);
            if (*(char *)(*(int *)(iVar9 + 0x158) + 0x1a) != '\0') {
              local_58 = uVar7;
              uVar7 = FUN_089b1224(uVar6);
              FUN_089a3efc(auStack_1e0,uVar7);
              local_1b4 = 0;
              local_1c4 = 0;
              local_1d4 = 0;
              FUN_089a3890(auStack_1b0);
              FUN_089a3f68(auStack_1a0,auStack_1e0,&DAT_09af8aa0);
              uVar7 = FUN_08868128(iVar9 + 0xd0,auStack_1a0,0);
              FUN_088684fc(uVar7,auStack_320,auStack_320);
              uVar7 = local_58;
            }
          }
          local_58 = uVar7;
          FUN_089a3868(auStack_350,iVar9);
          FUN_089a3a44(fVar14,&local_360,iVar9 + 0x100);
          FUN_089a38a8(iVar9,iVar9,&local_360);
          FUN_089a3a44(fVar14 * 4.9 * fVar14,&local_360,auStack_320);
          FUN_089a38a8(iVar9,iVar9,&local_360);
          uVar7 = *(undefined4 *)(iVar9 + 0x160);
          FUN_089a38e0(auStack_90,iVar9,auStack_340);
          FUN_089a3bc8(auStack_90,auStack_90);
          FUN_089a3a44(uVar7,auStack_90,auStack_90);
          FUN_089a38a8(iVar9,auStack_90,auStack_340);
          uVar7 = local_58;
          *(undefined4 *)(iVar9 + 0xc) = 0x3f800000;
          if (fVar14 != 0.0) {
            FUN_089a38e0(&local_360,iVar9,auStack_350);
            FUN_089a3a44(1.0 / fVar14,iVar9 + 0x100,&local_360);
          }
          FUN_089a3a44(fVar14 * 9.8,&local_360,auStack_320);
          FUN_089a38a8(iVar9 + 0x100,iVar9 + 0x100,&local_360);
          if (((param_1[0xe] != 0) && (*(char *)(*(int *)(iVar9 + 0x158) + 0x1b) == '\0')) &&
             (iVar13 = param_1[0xe] + *(short *)(param_1[9] + iVar12 * 0x40 + 6) * 0x18,
             0.0 < *(float *)(iVar13 + 0x10))) {
            local_360 = *param_1;
            local_35c = param_1[1];
            local_358 = param_1[2];
            local_354 = 0x3f800000;
            local_58 = uVar7;
            fVar15 = (float)FUN_08838300(param_3);
            FUN_089a3a64(*(float *)(iVar13 + 0x10) * *(float *)(iVar13 + 0x14) * fVar15,&local_360,
                         &local_360);
            FUN_089a38c4(iVar9 + 0x100,iVar9 + 0x100,&local_360);
            uVar7 = local_58;
          }
          if (0.0 < **(float **)(iVar9 + 0x15c)) {
            FUN_0880c430(param_1,iVar9,param_3,auStack_460,auStack_340);
          }
          if ('\0' < *(char *)(iVar9 + 0x153)) {
            FUN_0880c5a4(param_1,iVar9,param_2,param_3,auStack_340);
          }
          FUN_0880d370(param_1,iVar9,auStack_3e0,auStack_340);
          if (*(char *)(iVar9 + 0x152) != '\0') {
            FUN_0880c838(param_1,auStack_340,iVar9,auStack_460);
          }
          bVar3 = false;
          if (((*DAT_089d85e8 == '\x01') && (bVar3 = false, *(int *)(_DAT_08a405e0 + 0x278) != 0))
             && (bVar3 = false, *(int *)(_DAT_08a405e0 + 0x278) != 1)) {
            bVar3 = true;
          }
          if (((!bVar3) && (*(char *)(*(int *)(iVar9 + 0x158) + 0x18) != '\0')) &&
             (*(float *)(iVar9 + 4) <
              *(float *)(param_3 + 0x84) + *(float *)(*(int *)(iVar9 + 0x158) + 0x1c))) {
            uVar19 = *(undefined4 *)(iVar9 + 0x160);
            *(float *)(iVar9 + 4) =
                 *(float *)(param_3 + 0x84) + *(float *)(*(int *)(iVar9 + 0x158) + 0x1c);
            local_58 = uVar7;
            FUN_089a38e0(auStack_80,iVar9,auStack_340);
            FUN_089a3bc8(auStack_80,auStack_80);
            FUN_089a3a44(uVar19,auStack_80,auStack_80);
            FUN_089a38a8(iVar9,auStack_80,auStack_340);
            *(undefined4 *)(iVar9 + 0xc) = 0x3f800000;
            uVar7 = local_58;
          }
          local_50 = iVar12;
          local_4c = iVar11;
          FUN_0880cab4(param_1,&local_4a0,iVar9,auStack_3a0,auStack_340,uVar7);
          FUN_089a405c(auStack_420,&local_4a0);
          FUN_089a3f68(auStack_310,auStack_420,iVar9 + 0x100);
          iVar12 = *(int *)(iVar9 + 0x15c);
          FUN_089a3854(*(undefined4 *)(iVar12 + 8),*(undefined4 *)(iVar12 + 0xc),
                       *(undefined4 *)(iVar12 + 0x10),auStack_330);
          FUN_089a3934(auStack_330,auStack_330,auStack_310);
          FUN_089a3934(auStack_330,auStack_330,auStack_310);
          FUN_089a3950(auStack_330,auStack_330,auStack_310);
          FUN_089a39b4(auStack_330,auStack_330);
          FUN_089a3a84(0,0x3f800000,auStack_330,auStack_330);
          FUN_089a3918(&local_360,auStack_310,auStack_330);
          FUN_089a38e0(auStack_310,auStack_310,&local_360);
          FUN_089a3f68(iVar9 + 0x100,&local_4a0,auStack_310);
          *(undefined4 *)(iVar9 + 0x10c) = 0x3f800000;
          FUN_089b11cc(uVar6,&local_4a0);
          FUN_089a3868(iVar9 + 0xe0,iVar9);
          FUN_089a3868(iVar9 + 0xf0,auStack_340);
          iVar11 = local_4c;
          iVar12 = local_50;
        }
        iVar12 = iVar12 + 1;
        iVar9 = iVar12 * 0x80;
      } while (iVar12 < iVar11);
    }
    *(undefined1 *)((int)param_1 + 0x3d) = 0;
  }
  return;
}

