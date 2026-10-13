/* Entry 0x0883B470 | file offset 0x00038448 | FUN_0883b470 | bytes 3704 */

void FUN_0883b470(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_328 [8];
  short local_320;
  int local_310;
  int local_30c;
  byte local_2fc;
  undefined1 auStack_2f8 [12];
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  undefined1 auStack_2dc [4];
  float local_2d8;
  undefined4 local_2d0;
  float local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b0;
  float local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 auStack_290 [4];
  float local_28c;
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
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined1 auStack_228 [12];
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 *local_210;
  byte local_1fc;
  undefined4 local_1f8;
  float local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  undefined4 local_1cc;
  undefined1 auStack_1c8 [12];
  undefined1 auStack_1bc [12];
  undefined4 local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  undefined1 auStack_174 [4];
  float local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
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
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar3 = FUN_08899300();
  uVar6 = *(uint *)(param_1 + 0x388);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(param_1 + 0x388) = uVar6 & 0xf7ffffff;
  if ((uVar6 & 0x10000000) != 0) {
    local_2a0 = *(undefined4 *)(param_1 + 0x2ec);
    local_29c = *(undefined4 *)(param_1 + 0x2f0);
    local_298 = *(undefined4 *)(param_1 + 0x2f4);
    local_294 = 0x3f800000;
    FUN_089a38fc(auStack_290,&local_2a0,param_1 + 0x80);
    FUN_089a38c4(param_1 + 0x100,param_1 + 0x100,auStack_290);
    FUN_089a383c(*(undefined4 *)(param_1 + 0x2ec),*(undefined4 *)(param_1 + 0x2f0),
                 *(undefined4 *)(param_1 + 0x2f4),0,param_1 + 0x80);
    iVar4 = FUN_0883739c(param_1);
    if (iVar4 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x5ac) + 0x124) = 1;
    }
    if (*(int *)(param_1 + 0x3a4) == 0) {
      uVar8 = *(undefined4 *)(param_1 + 0x38c);
    }
    else if ((*(uint *)(*(int *)(param_1 + 0x3a4) + 4) & 1) == 0) {
      uVar8 = *(undefined4 *)(param_1 + 0x38c);
    }
    else {
      pfVar7 = (float *)(*(int *)(param_1 + 0x314) + 0x18);
      *pfVar7 = *pfVar7 + local_28c;
      uVar8 = *(undefined4 *)(param_1 + 0x38c);
    }
    *(undefined4 *)(param_1 + 0x38c) = uVar8;
    *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) & 0xefffffff;
  }
  *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xffffbfff;
  if ((((*(char *)(param_1 + 0x542) == '\x05') || (*(char *)(param_1 + 0x542) == '\a')) ||
      (*(char *)(param_1 + 0x542) == '\b')) ||
     ((*(int *)(*(int *)(param_1 + 0x390) + 0x18) == 0 || (*(int *)(param_1 + 0x3a0) == 0)))) {
    FUN_089a38a8(&local_e0,param_1 + 0x80,param_2);
    local_250 = local_e0;
    local_24c = local_dc;
    local_248 = local_d8;
    local_244 = local_d4;
    local_270 = local_e0;
    local_26c = local_dc;
    local_268 = local_d8;
    local_264 = local_d4;
    FUN_089a38a8(&local_c0,&local_270,param_3);
    local_260 = local_c0;
    local_25c = local_bc;
    local_258 = local_b8;
    local_254 = local_b4;
    local_280 = local_c0;
    local_27c = local_bc;
    local_278 = local_b8;
    local_274 = local_b4;
    FUN_089a3868(param_1 + 0x80,&local_280);
    *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  }
  else if ((*(uint *)(param_1 + 0x38c) & 2) == 0) {
    fVar10 = 0.0;
    iVar4 = 0;
    FUN_089a38a8(&local_2d0,param_2,param_3);
    fVar9 = (float)(**(code **)(*(int *)(param_1 + 0x544) + 0x1e4))
                             (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x1e0));
    local_2cc = local_2cc + fVar9;
    (**(code **)(*(int *)(param_1 + 0x544) + 0x1d4))
              (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x1d0));
    FUN_089a3bf8(&local_2d0);
    if ((*(uint *)(param_1 + 0x388) & 0x2000) == 0) {
      FUN_089a38a8(&local_60,param_1 + 0x80,&local_2d0);
      local_120 = local_60;
      local_11c = local_5c;
      local_118 = local_58;
      local_114 = local_54;
      local_140 = local_60;
      local_13c = local_5c;
      local_138 = local_58;
      local_134 = local_54;
      FUN_089a3868(param_1 + 0x80,&local_140);
      *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
      local_130 = *(undefined4 *)(param_1 + 0x100);
      local_12c = *(undefined4 *)(param_1 + 0x104);
      local_128 = *(undefined4 *)(param_1 + 0x108);
      local_110 = local_130;
      local_10c = local_12c;
      local_108 = local_128;
      fVar10 = (float)FUN_088976e4(uVar3,auStack_328,&local_130,0x22,1,0,0);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x3a0);
      local_2c0 = *(float *)(iVar4 + 8);
      local_2bc = *(float *)(iVar4 + 0xc) + *(float *)(iVar4 + 0x14);
      local_2e8 = *(float *)(param_1 + 0x80) + local_2c0;
      local_2b8 = *(float *)(iVar4 + 0x10);
      local_2e4 = *(float *)(param_1 + 0x84) + local_2bc;
      local_2e0 = *(float *)(param_1 + 0x88) + local_2b8;
      FUN_089a34c0(auStack_2f8,&local_2e8);
      if ((*(uint *)(param_1 + 0x38c) & 0x2000) == 0) {
        local_2ec = *(float *)(*(int *)(param_1 + 0x3a0) + 0x18);
      }
      else {
        local_2ec = 1.0;
      }
      bVar2 = false;
      iVar4 = FUN_0883739c(param_1);
      if ((iVar4 == 1) &&
         ((**(int **)(param_1 + 0x3a4) == 3 || (**(int **)(param_1 + 0x3a4) == 0x17)))) {
        local_1ec = local_2d0;
        local_1e8 = local_2cc;
        local_1e4 = local_2c8;
        local_1f8 = local_2d0;
        local_1f4 = local_2cc;
        local_1f0 = local_2c8;
        iVar4 = FUN_0889cf04(uVar3,auStack_228,auStack_2f8,&local_1f8,auStack_2dc,0x36,1,0,0);
        if (iVar4 == 1) {
          uVar8 = FUN_0881baa8();
          iVar5 = FUN_0881c68c(uVar8,local_1fc);
          if (iVar5 != 0) {
            iVar4 = 0;
            bVar2 = true;
          }
        }
      }
      else {
        if (((*(uint *)(param_1 + 0x380) & 0x2000000) != 0) &&
           (iVar4 = FUN_088379fc(param_1), iVar4 != 0)) {
          FUN_089a3868(&local_2b0,param_1 + 0x80);
          local_2ac = local_2ac + 1.0;
          local_1a4 = local_2b0;
          local_19c = local_2a8;
          local_1d4 = local_2b0;
          local_1cc = local_2a8;
          local_1d0 = local_2ac;
          local_1a0 = local_2ac;
          FUN_088976e4(uVar3,auStack_328,&local_1d4,0x22,1,0,0);
          FUN_089a38c4(&local_2b0,param_1 + 0x80,&local_2d0);
          local_2ac = local_2ac + 100.0;
          FUN_089a34c0(auStack_1c8,&local_2b0);
          FUN_089a34c0(auStack_1bc,&DAT_09af8b10);
          if ((local_30c != 0) && (local_310 != 0)) {
            iVar4 = FUN_088737b0(auStack_1c8,local_30c,local_310,&local_1b0);
            if (iVar4 != 0) {
              local_198 = *(undefined4 *)(param_1 + 0x80);
              local_194 = *(undefined4 *)(param_1 + 0x84);
              local_190 = *(undefined4 *)(param_1 + 0x88);
              local_18c = local_198;
              local_188 = local_194;
              local_184 = local_190;
              FUN_089a3528(&local_1b0,&local_1b0,&local_198);
              local_2d0 = local_1b0;
              local_2cc = local_1ac;
              local_2c8 = local_1a8;
              local_2c4 = 0x3f800000;
            }
          }
        }
        local_180 = local_2d0;
        local_17c = local_2cc;
        local_178 = local_2c8;
        local_1e0 = local_2d0;
        local_1dc = local_2cc;
        local_1d8 = local_2c8;
        iVar4 = FUN_0889cf04(uVar3,auStack_228,auStack_2f8,&local_1e0,auStack_2dc,0x36,1,0,0);
      }
      bVar1 = true;
      FUN_089a3528(&local_2b0,auStack_2dc,&local_2e8);
      FUN_089a38c4(&local_2b0,&local_2b0,param_1 + 0x80);
      iVar5 = FUN_088379b8(param_1);
      if (iVar5 != 0) {
        FUN_089a34c0(auStack_174,auStack_2dc);
        local_170 = local_170 + 1.0;
        fVar11 = local_2d8 - local_2bc;
        fVar9 = (float)FUN_088976e4(uVar3,0,auStack_174,0x22,1,0,0);
        if (0.4 <= fVar11 - fVar9) {
          local_168 = *(undefined4 *)(param_1 + 0x80);
          local_164 = *(undefined4 *)(param_1 + 0x104);
          local_160 = *(undefined4 *)(param_1 + 0x88);
          bVar1 = false;
          fVar10 = (float)FUN_088976e4(uVar3,auStack_328,&local_168,0x22,1,0,0);
        }
      }
      if (bVar1) {
        fVar10 = *(float *)(param_1 + 0x104);
        fVar9 = *(float *)(param_1 + 0x84);
        FUN_089a3868(param_1 + 0x80,&local_2b0);
        local_2ac = local_2ac + (fVar10 - fVar9);
        *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
        fVar10 = (float)FUN_088976e4(uVar3,auStack_328,&local_2b0,0x22,1,0,0);
      }
      if ((iVar4 == 1) || (bVar2)) {
        *(ushort *)(param_1 + 0x53c) = (ushort)local_1fc;
        local_150 = local_21c;
        local_14c = local_218;
        local_148 = local_214;
        local_144 = 0x3f800000;
        (**(code **)(*(int *)(param_1 + 0x544) + 0x1ec))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x1e8),&local_150);
        local_150 = *local_210;
        local_14c = local_210[1];
        local_148 = local_210[2];
        local_144 = 0x3f800000;
        (**(code **)(*(int *)(param_1 + 0x544) + 500))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x1f0),&local_150);
      }
      if (bVar2) {
        *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x4000;
      }
    }
    if (fVar10 == -3.4028235e+38) {
      fVar10 = *(float *)(param_1 + 0x2e4);
    }
    fVar9 = *(float *)(param_1 + 0x84) - fVar10;
    *(float *)(param_1 + 0x3c0) = fVar9;
    if (fVar9 < 0.0) {
      *(float *)(param_1 + 0x84) = fVar10;
      *(undefined4 *)(param_1 + 0x3c0) = 0;
    }
    *(ushort *)(param_1 + 0x3c4) = (ushort)local_2fc;
    *(byte *)(param_1 + 0x3c6) = (byte)((uint)_local_2fc >> 0x10) & 0x1f;
    *(char *)(param_1 + 0x3c7) = (char)local_320;
    uVar6 = *(uint *)(param_1 + 0x380);
    *(uint *)(param_1 + 900) = *(uint *)(param_1 + 900) & 0xffffffef;
    *(uint *)(param_1 + 0x380) = uVar6 & 0xffffdfff;
    *(uint *)(param_1 + 0x380) = uVar6 & 0xfdffdfff;
    if (iVar4 != 0) {
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x2000;
    }
    iVar5 = FUN_0883739c(param_1);
    if (iVar5 == 1) {
      iVar5 = FUN_088373c8(param_1);
      if (((iVar5 == 0) && (iVar5 = FUN_08837584(param_1), iVar5 == 0)) ||
         (iVar5 = FUN_0883752c(param_1), iVar5 != 0)) {
        iVar4 = FUN_0883752c(param_1);
        if (iVar4 == 0) {
          if ((*(float *)(param_1 + 0x3c0) < 0.4) || (iVar4 = FUN_08838074(param_1), iVar4 != 0)) {
            if (fVar10 + 0.5 < *(float *)(param_1 + 0x84)) {
              FUN_08834934(param_1,0x65,0x66);
              FUN_08834948(param_1);
            }
            else {
              (**(code **)(*(int *)(param_1 + 0x544) + 0x1dc))
                        (fVar10 - *(float *)(param_1 + 0x84),
                         param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x1d8));
              *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x2000000;
            }
          }
          else {
            FUN_08834934(param_1,0x65,0x66);
            FUN_08834948(param_1);
          }
        }
        else {
          iVar4 = FUN_08833898(param_1);
          if ((iVar4 != 0) && (local_320 != 5)) {
            FUN_08833818(fVar10,param_1);
          }
        }
      }
      else {
        iVar5 = FUN_08833898(param_1);
        if ((iVar5 == 0) || (local_320 == 5)) {
          if ((*(uint *)(param_1 + 900) & 0x200) == 0) {
            if ((iVar4 != 0) &&
               (fVar9 = (float)FUN_089a4500(*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x2e4)
                                           ), fVar9 < 0.001)) {
              local_104 = 0;
              local_100 = 0x3f800000;
              local_fc = 0;
              FUN_089a34c0(auStack_f8,auStack_2f8);
              FUN_089a34c0(auStack_ec,&local_104);
              iVar4 = FUN_0889beb0(local_2ec * 2.0,uVar3,0,auStack_f8,4,1,1,0,0,0,0);
              if (iVar4 != 0) {
                *(uint *)(param_1 + 900) = *(uint *)(param_1 + 900) | 0x10;
              }
            }
          }
          else if (fVar10 + 0.5 < *(float *)(param_1 + 0x84)) {
            FUN_08834934(param_1,0x65,0x66);
            FUN_08834948(param_1);
          }
          else {
            (**(code **)(*(int *)(param_1 + 0x544) + 0x1dc))
                      (fVar10 - *(float *)(param_1 + 0x84),
                       param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x1d8));
          }
        }
        else {
          FUN_08833818(fVar10,param_1);
        }
      }
    }
  }
  else {
    local_240 = *(undefined4 *)(param_1 + 0x100);
    local_23c = *(undefined4 *)(param_1 + 0x104);
    local_238 = *(undefined4 *)(param_1 + 0x108);
    local_234 = local_240;
    local_230 = local_23c;
    local_22c = local_238;
    FUN_088976e4(uVar3,auStack_328,&local_240,0x22,1,0,0);
    *(byte *)(param_1 + 0x3c6) = (byte)((uint)_local_2fc >> 0x10) & 0x1f;
  }
  return;
}

