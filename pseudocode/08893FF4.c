/* Entry 0x08893FF4 | file offset 0x00090FCC | FUN_08893ff4 | bytes 2928 */

void FUN_08893ff4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                 char param_5)

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [12];
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
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
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
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
  undefined4 local_1a0 [3];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  float local_17c [3];
  undefined1 auStack_170 [16];
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
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_58;
  int *local_54;
  int local_50;
  int local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  char *local_40;
  char *local_3c;
  code *local_38;
  int local_34;
  
  FUN_08865828();
  FUN_08865814(1);
  uVar2 = FUN_0889381c(param_1);
  uVar2 = FUN_0886d2c4(uVar2,param_2,param_3);
  param_1[0x1d] = uVar2;
  FUN_0886b230(uVar2);
  local_44 = *(undefined4 *)(param_1[0x1d] + 0xc);
  iVar3 = FUN_08940490(param_2,param_3);
  local_38 = param_4;
  if (param_5 == '\0') {
    FUN_08892ac0(param_1,param_2,param_3);
  }
  else {
    param_1[0x1cb] = 0;
    if ((iVar3 != 0) && (iVar12 = FUN_08940528(iVar3,3,0), iVar12 != 0)) {
      iVar13 = FUN_089404a8(iVar12,4);
      iVar6 = 0;
      if (0 < iVar13) {
        do {
          puVar4 = (ushort *)FUN_08940528(iVar12,4,iVar6);
          puVar7 = puVar4 + 8;
          if ((*puVar4 & 0x8000) != 0) {
            puVar7 = (ushort *)&DAT_089ca778;
          }
          iVar11 = FUN_08935b50(puVar7,&DAT_089ca788,4);
          if ((iVar11 == 0) || (iVar11 = FUN_08935b50(puVar7,&DAT_089ca790,4), iVar11 == 0)) {
            FUN_08935bb4(param_1[0x1cc] + param_1[0x1cb] * 0x28,puVar7,0x23);
            *(undefined1 *)(param_1[0x1cc] + param_1[0x1cb] * 0x28 + 0x23) = 0;
            *(int *)(param_1[0x1cc] + param_1[0x1cb] * 0x28 + 0x24) = iVar6;
            param_1[0x1cb] = param_1[0x1cb] + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar13);
      }
    }
  }
  if (local_38 != (code *)0x0) {
    (*local_38)();
  }
  uVar2 = local_44;
  puVar5 = (undefined4 *)FUN_089b0e10(local_44);
  if (puVar5 == (undefined4 *)0x0) {
    param_1[0x44] = 0;
    param_1[0x45] = 0;
  }
  else {
    uVar14 = puVar5[1];
    uVar16 = puVar5[2];
    uVar15 = puVar5[3];
    param_1[0x44] = *puVar5;
    param_1[0x45] = uVar14;
    param_1[0x46] = uVar16;
    param_1[0x47] = uVar15;
  }
  FUN_089b0dac(uVar2,0x1000,0x1000);
  FUN_089b0dac(uVar2,0x2000,0x2000);
  FUN_089b0dac(uVar2,0x4000,0x4000);
  FUN_089b0dac(uVar2,0x8000,0x8000);
  if (*(short *)(param_1[0x1c4] + 0x48) == 0) {
    *(uint *)(param_1[0x1d] + 0x90) = *(uint *)(param_1[0x1d] + 0x90) | 8;
  }
  else {
    *(uint *)(param_1[0x1d] + 0x90) = *(uint *)(param_1[0x1d] + 0x90) | 4;
  }
  puVar5 = param_1 + 4;
  FUN_089a3ebc(puVar5);
  local_2a0 = *puVar5;
  local_29c = param_1[5];
  local_298 = param_1[6];
  local_294 = param_1[7];
  local_290 = param_1[8];
  local_28c = param_1[9];
  local_288 = param_1[10];
  local_284 = param_1[0xb];
  local_280 = param_1[0xc];
  local_27c = param_1[0xd];
  local_278 = param_1[0xe];
  local_274 = param_1[0xf];
  local_270 = param_1[0x10];
  local_26c = param_1[0x11];
  local_268 = param_1[0x12];
  local_264 = param_1[0x13];
  param_1[0x1c2] = 0xff808080;
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x15] = 0xff808080;
  FUN_089ad2d0(*(undefined4 *)(param_1[0x1d] + 0xc));
  FUN_0886e86c(param_1[0x1d],puVar5,param_1 + 0x18);
  FUN_08865814(0);
  iVar12 = 0;
  param_1[0x1af] = 0;
  puVar5 = (undefined4 *)FUN_089b0de4(uVar2);
  local_2e0 = puVar5[3];
  local_2dc = 0;
  local_2d8 = 0;
  local_2d4 = 0;
  local_2d0 = 0;
  local_2cc = puVar5[3];
  local_2c8 = 0;
  local_2c4 = 0;
  local_2c0 = 0;
  local_2bc = 0;
  local_2b8 = puVar5[3];
  local_2b4 = 0;
  local_2b0 = *puVar5;
  local_2ac = puVar5[1];
  local_2a8 = puVar5[2];
  local_2a4 = 0x3f800000;
  local_48 = (undefined1 *)&local_2e0;
  FUN_088950cc(param_1,iVar3);
  (**(code **)(param_1[0x1cd] + 0xc))((int)param_1 + (int)*(short *)(param_1[0x1cd] + 8));
  FUN_088953f0(param_1);
  *(undefined1 *)((int)param_1 + 0x6b5) = 1;
  if (iVar3 != 0) {
    local_4c = FUN_08940528(iVar3,3,0);
    if (local_4c != 0) {
      iVar3 = FUN_089404a8(local_4c,4);
      local_50 = iVar3;
      uVar2 = FUN_0885c6cc(*param_1,iVar3 * 0x50,0,0,1,0);
      param_1[0x1ae] = uVar2;
      iVar13 = 0;
      param_1[0x1af] = 0;
      if (0 < iVar3) {
        local_3c = "AFTERDRAW";
        local_54 = param_1 + 0x1af;
        local_40 = "DISABLE_SEMITRANS";
        iVar3 = 0;
        do {
          uVar2 = FUN_08940528(local_4c,4,iVar13);
          iVar6 = FUN_089404a8(uVar2,0xf1);
          iVar11 = 0;
          if (0 < iVar6) {
            do {
              puVar7 = (ushort *)FUN_08940528(uVar2,0xf1,iVar11);
              if ((*puVar7 & 0x8000) == 0) {
                puVar7 = (ushort *)((int)puVar7 + (uint)puVar7[1]);
              }
              else {
                puVar7 = puVar7 + 4;
              }
              iVar8 = FUN_08935970(puVar7,local_3c);
              if (iVar8 == 0) {
                FUN_08893938(param_1,iVar13,0);
                iVar12 = iVar12 + 1;
                *(undefined1 *)(*(int *)(param_1[0x1d] + 0x108) + iVar3 + 9) = 1;
              }
              iVar8 = FUN_08935970(puVar7,local_40);
              if (iVar8 == 0) {
                iVar8 = *(int *)(param_1[0x1d] + 0x108) + iVar3;
                *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) & 0xfffbffff | 0x40000;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar6);
          }
          iVar6 = FUN_089404a8(uVar2,0x16);
          if (0 < iVar6) {
            iVar11 = param_1[0x1ae];
            iVar6 = *local_54;
            *local_54 = iVar6 + 1;
            puVar7 = (ushort *)FUN_08940528(uVar2,0x16,0);
            if ((*puVar7 & 0x8000) == 0) {
              puVar7 = (ushort *)((int)puVar7 + (uint)puVar7[1]);
            }
            else {
              puVar7 = puVar7 + 4;
            }
            local_34 = iVar11 + iVar6 * 0x50;
            uVar2 = FUN_089b0e78(local_44,iVar13);
            puVar5 = (undefined4 *)FUN_089b1224(uVar2);
            local_230 = *puVar5;
            local_22c = puVar5[1];
            local_228 = puVar5[2];
            local_224 = puVar5[3];
            local_220 = puVar5[4];
            local_21c = puVar5[5];
            local_218 = puVar5[6];
            local_214 = puVar5[7];
            local_210 = puVar5[8];
            local_20c = puVar5[9];
            local_208 = puVar5[10];
            local_204 = puVar5[0xb];
            local_200 = puVar5[0xc];
            local_1fc = puVar5[0xd];
            local_1f8 = puVar5[0xe];
            local_1f4 = puVar5[0xf];
            FUN_089a3fb8(&local_230,&local_230,local_48);
            iVar6 = local_34;
            local_1f0 = *(undefined4 *)(puVar7 + 2);
            local_1ec = *(undefined4 *)(puVar7 + 4);
            local_1e8 = *(undefined4 *)(puVar7 + 6);
            local_1e4 = 0x3f800000;
            local_1e0 = *(undefined4 *)(puVar7 + 8);
            local_1dc = *(undefined4 *)(puVar7 + 10);
            local_1d8 = *(undefined4 *)(puVar7 + 0xc);
            local_1d4 = 0x3f800000;
            local_1d0 = *(undefined4 *)(puVar7 + 0xe);
            local_1cc = *(undefined4 *)(puVar7 + 0x10);
            local_1c8 = *(undefined4 *)(puVar7 + 0x12);
            local_1c4 = 0x3f800000;
            local_1c0 = *(undefined4 *)(puVar7 + 0x1a);
            local_1bc = *(undefined4 *)(puVar7 + 0x1c);
            local_1b8 = *(undefined4 *)(puVar7 + 0x1e);
            local_1b4 = 0x3f800000;
            local_1b0 = *(undefined4 *)(puVar7 + 0x2c);
            local_1ac = *(undefined4 *)(puVar7 + 0x2e);
            iVar11 = 0;
            local_1a8 = *(undefined4 *)(puVar7 + 0x30);
            local_1a4 = 0x3f800000;
            puVar5 = &local_1f0;
            do {
              FUN_089a3f40(puVar5,&local_230,puVar5);
              iVar11 = iVar11 + 1;
              puVar5 = puVar5 + 4;
            } while (iVar11 < 5);
            FUN_089a38e0(&local_d0,&local_1e0,&local_1f0);
            local_160 = local_d0;
            local_15c = local_cc;
            local_158 = local_c8;
            local_154 = local_c4;
            local_260 = local_d0;
            local_25c = local_cc;
            local_258 = local_c8;
            local_254 = local_c4;
            FUN_089a34c0(&local_188,&local_260);
            FUN_089a38e0(&local_b0,&local_1d0,&local_1f0);
            local_150 = local_b0;
            local_14c = local_ac;
            local_148 = local_a8;
            local_144 = local_a4;
            local_260 = local_b0;
            local_25c = local_ac;
            local_258 = local_a8;
            local_254 = local_a4;
            FUN_089a34c0(&local_194,&local_260);
            FUN_089a38e0(&local_90,&local_1c0,&local_1f0);
            local_140 = local_90;
            local_13c = local_8c;
            local_138 = local_88;
            local_134 = local_84;
            local_260 = local_90;
            local_25c = local_8c;
            local_258 = local_88;
            local_254 = local_84;
            FUN_089a34c0(local_1a0,&local_260);
            iVar11 = 0;
            pfVar9 = local_17c;
            pauVar10 = (undefined1 (*) [12])local_1a0;
            do {
              uVar2 = vdot_t(*pauVar10,*pauVar10);
              uVar14 = vzero_s();
              uVar15 = vcmp_s(8,uVar2,*(undefined4 *)*pauVar10);
              local_58 = (float)vsqrt_s(uVar2);
              vrcp_s(local_58);
              uVar2 = vcmovt_s(uVar14,(byte)uVar15 & 1);
              vpfxd(4,4,4,5);
              auVar1 = vscl_t(*pauVar10,uVar2);
              *(int *)*pauVar10 = auVar1._0_4_;
              *(int *)(*pauVar10 + 4) = auVar1._4_4_;
              *(int *)(*pauVar10 + 8) = auVar1._8_4_;
              *pfVar9 = local_58;
              *pfVar9 = *pfVar9 * 0.5;
              iVar11 = iVar11 + 1;
              pauVar10 = pauVar10 + 1;
              pfVar9 = pfVar9 + 1;
            } while (iVar11 < 3);
            local_130 = local_1b0;
            local_12c = local_1ac;
            local_128 = local_1a8;
            local_250 = local_1b0;
            local_24c = local_1ac;
            local_248 = local_1a8;
            local_124 = local_1f0;
            local_120 = local_1ec;
            local_11c = local_1e8;
            local_244 = local_1f0;
            local_240 = local_1ec;
            local_23c = local_1e8;
            FUN_089a34f4(auStack_170,&local_250,&local_244);
            FUN_089a3680(0x3f000000,auStack_170,auStack_170);
            FUN_089a34c0(iVar6,auStack_170);
            *(undefined4 *)(iVar6 + 0x10) = local_1a0[0];
            *(undefined4 *)(iVar6 + 0x20) = local_1a0[1];
            *(undefined4 *)(iVar6 + 0x30) = local_1a0[2];
            *(undefined4 *)(iVar6 + 0x14) = local_194;
            *(undefined4 *)(iVar6 + 0x24) = local_190;
            *(undefined4 *)(iVar6 + 0x34) = local_18c;
            *(undefined4 *)(iVar6 + 0x18) = local_188;
            *(undefined4 *)(iVar6 + 0x28) = local_184;
            *(undefined4 *)(iVar6 + 0x38) = local_180;
            *(float *)(iVar6 + 0x1c) = local_17c[0];
            *(float *)(iVar6 + 0x2c) = local_17c[1];
            *(float *)(iVar6 + 0x3c) = local_17c[2];
            uVar2 = FUN_089a37dc(local_17c);
            *(undefined4 *)(iVar6 + 0xc) = uVar2;
            *(undefined4 *)(iVar6 + 0x40) = 1;
            *(undefined4 *)(iVar6 + 0x44) = 0;
            *(int *)(iVar6 + 0x4c) = iVar13;
          }
          iVar13 = iVar13 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar13 < local_50);
      }
    }
  }
  if (0 < iVar12) {
    FUN_0886c8c4(param_1[0x1d],1,0);
    FUN_0886c9ac(param_1[0x1d],1);
  }
  param_1[0x4c] = param_1[0x4c] | 1;
  FUN_08892418(param_1);
  param_1[0x134] = 0xffffffff;
  return;
}

