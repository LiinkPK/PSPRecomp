/* Entry 0x08829930 | file offset 0x00026908 | FUN_08829930 | bytes 13708 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08829930(ushort *param_1,int param_2)

{
  bool bVar1;
  float fVar3;
  undefined1 auVar2 [12];
  bool bVar4;
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
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  float *pfVar25;
  undefined2 uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined8 uVar37;
  undefined4 local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined1 auStack_324 [12];
  undefined1 auStack_318 [24];
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc [3];
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined4 local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
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
  float local_240;
  float local_23c;
  float local_238;
  undefined4 local_234;
  float local_230;
  float local_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  float local_218;
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
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
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
  float local_150;
  undefined4 local_14c;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f0;
  undefined4 local_a0;
  undefined4 local_9c;
  
  iVar30 = *(int *)(param_2 + 0x30);
  bVar1 = (float)*param_1 == *(float *)(iVar30 + 0x1a8);
  switch((char)param_1[2]) {
  case '\0':
    if ((*(uint *)(iVar30 + 0x38c) & 0x4000) == 0) {
      FUN_08833b80(iVar30,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8));
      FUN_0882fd08(param_2,*param_1,param_1[1]);
    }
    break;
  case '\x01':
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 4;
    if (*(int *)(param_1 + 6) != 0) {
      *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 8;
    }
    break;
  case '\x02':
    iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                       (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
    if (iVar21 != 0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
        iVar21 = FUN_08838074(uVar19);
        if (iVar21 != 0) {
          return;
        }
      }
      uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
      iVar21 = FUN_08837458(uVar19);
      if ((iVar21 != 0) && (*(int *)(param_1 + 10) == 0)) {
        bVar1 = true;
        iVar21 = FUN_088377c0(iVar30);
        if (((iVar21 != 0) &&
            ((iVar21 = FUN_0883739c(iVar30), iVar21 != 0 &&
             (iVar21 = func_0x08b30898(iVar30), iVar21 != 0)))) &&
           ((*(uint *)(iVar21 + 0x18) & 0x10) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          return;
        }
      }
      iVar21 = *(int *)(param_1 + 6);
      if (*(int *)(param_1 + 8) == 0) {
        uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
        FUN_08835f60((float)iVar21 * 0.017453292,iVar30,uVar19);
      }
      else {
        uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
        FUN_088360bc((float)iVar21 * 0.017453292,iVar30,uVar19);
      }
    }
    break;
  case '\x05':
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 1;
    break;
  case '\x06':
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 0x20;
    break;
  case '\n':
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 2;
    break;
  case '\v':
    iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                       (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
    if (iVar21 != 0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
        iVar21 = FUN_08838074(uVar19);
        if (iVar21 != 0) {
          return;
        }
      }
      uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
      iVar21 = FUN_08837458(uVar19);
      if ((iVar21 != 0) && (*(int *)(param_1 + 10) == 0)) {
        bVar1 = true;
        iVar21 = FUN_088377c0(iVar30);
        if ((iVar21 != 0) &&
           (((iVar21 = FUN_0883739c(iVar30), iVar21 != 0 &&
             (iVar21 = func_0x08b30898(iVar30), iVar21 != 0)) &&
            ((*(uint *)(iVar21 + 0x18) & 0x10) != 0)))) {
          bVar1 = false;
        }
        if (bVar1) {
          return;
        }
      }
      iVar21 = *(int *)(param_1 + 6);
      uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
      FUN_08835f60((float)iVar21 * 0.017453292,iVar30,uVar19);
    }
    break;
  case '\f':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 == 0) {
      if (*(char *)(iVar30 + 0x542) == '\x02') {
        if (*(int *)(param_1 + 6) == 0) {
          FUN_08806b1c(iVar30,bVar1);
        }
        else {
          FUN_08806b58(iVar30,bVar1);
        }
      }
    }
    else {
      iVar30 = *(int *)(iVar30 + 0x5ac) + 0x168;
      func_0x08b3e840(iVar30,*(undefined4 *)(param_1 + 6));
      func_0x08b3e864(iVar30,*(undefined4 *)(param_1 + 8));
    }
    *(byte *)(param_2 + 0x61) = *(byte *)(param_2 + 0x61) | 1;
    break;
  case '\r':
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 0x80;
    break;
  case '\x0e':
    iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                       (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
    if (iVar21 != 0) {
      uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
      FUN_08837938(uVar19);
    }
    break;
  case '\x10':
    iVar21 = *(int *)(param_1 + 6);
    if (iVar21 < 0) {
      iVar21 = 0;
    }
    else if (0xb4 < iVar21) {
      iVar21 = 0xb4;
    }
    FUN_08836468((float)iVar21 * 0.017453292,iVar30,*(int *)(param_1 + 8) != 0);
    break;
  case '\x11':
    if (*(int *)(param_1 + 10) == 0) {
      iVar21 = *(int *)(param_1 + 6);
      if (iVar21 < 0) {
        iVar21 = 0;
      }
      else if (0xb4 < iVar21) {
        iVar21 = 0xb4;
      }
      FUN_08836488((float)iVar21 * 0.017453292,iVar30,*(int *)(param_1 + 8) != 0);
    }
    else {
      func_0x08a62c58(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xe),
                      (float)*(int *)(param_1 + 6),*(undefined4 *)(param_1 + 0x10),
                      *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                      iVar30 + 0x1120);
    }
    break;
  case '\x12':
    uVar29 = *(uint *)(iVar30 + 0x44c);
    uVar28 = *(uint *)(iVar30 + 0x448);
    uVar37 = FUN_089985b0(1,0,*(undefined4 *)(param_1 + 6));
    *(uint *)(iVar30 + 0x44c) = uVar29 | (uint)((ulonglong)uVar37 >> 0x20);
    *(uint *)(iVar30 + 0x448) = uVar28 | (uint)uVar37;
    break;
  case '\x13':
    *(byte *)(param_2 + 0x62) = *(byte *)(param_2 + 0x62) | 2;
    break;
  case '\x14':
    FUN_08831cec(iVar30,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8));
    break;
  case '\x15':
    *(byte *)(param_2 + 0x62) = *(byte *)(param_2 + 0x62) | 4;
    break;
  case '\x16':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 == 0) {
      if (*(char *)(iVar30 + 0x542) == '\x02') {
        iVar21 = *(int *)(iVar30 + 0x398);
      }
      else {
        if (*(char *)(iVar30 + 0x542) != '\x04') {
          return;
        }
        iVar21 = *(int *)(iVar30 + 0x398);
      }
    }
    else {
      iVar21 = *(int *)(iVar30 + 0x398);
    }
    iVar22 = *(int *)(iVar21 + 0x20);
    iVar20 = 0;
    if (0 < iVar22) {
      iVar24 = 0;
      do {
        iVar24 = *(int *)(iVar21 + 0x34) + iVar24 * 3 + iVar20 * -0x10;
        if ((int)*(short *)(*(int *)(iVar24 + 0x158) + 6) == *(int *)(param_1 + 6)) {
          if (((uint)*(ushort *)(iVar24 + 0x166) == (int)*(short *)(iVar30 + 0x180)) &&
             (*(short *)(iVar24 + 0x164) != 0)) {
            uVar26 = *(undefined2 *)(iVar30 + 0x180);
          }
          else {
            *(undefined2 *)(iVar24 + 0x164) = 1;
            uVar26 = *(undefined2 *)(iVar30 + 0x180);
          }
          *(undefined2 *)(iVar24 + 0x166) = uVar26;
          iVar27 = *(int *)(param_1 + 8);
          *(undefined1 *)(iVar24 + 0x150) = 0;
          *(float *)(iVar24 + 0x168) = (float)iVar27 * 0.017453292;
        }
        iVar20 = iVar20 + 1;
        iVar24 = iVar20 * 0x80;
      } while (iVar20 < iVar22);
    }
    break;
  case '\x17':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 == 0) {
      if (*(char *)(iVar30 + 0x542) == '\x02') {
        iVar30 = *(int *)(iVar30 + 0x398);
      }
      else {
        if (*(char *)(iVar30 + 0x542) != '\x04') {
          return;
        }
        iVar30 = *(int *)(iVar30 + 0x398);
      }
    }
    else {
      iVar30 = *(int *)(iVar30 + 0x398);
    }
    iVar20 = *(int *)(iVar30 + 0x20);
    iVar21 = 0;
    if (0 < iVar20) {
      iVar22 = 0;
      do {
        iVar22 = *(int *)(iVar30 + 0x34) + iVar22 * 3 + iVar21 * -0x10;
        if ((int)*(short *)(*(int *)(iVar22 + 0x158) + 6) == *(int *)(param_1 + 6)) {
          *(undefined1 *)(iVar22 + 0x151) = 1;
        }
        iVar21 = iVar21 + 1;
        iVar22 = iVar21 * 0x80;
      } while (iVar21 < iVar20);
    }
    break;
  case '\x18':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      if (((*(byte *)(iVar30 + 0x5b3) & 1) != 0) ||
         (bVar1 = false, (*(byte *)(iVar30 + 0x5b3) & 2) != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        return;
      }
    }
    *(byte *)(param_2 + 0x62) = *(byte *)(param_2 + 0x62) | 8;
    *(undefined4 *)(iVar30 + 0x3d0) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)(iVar30 + 0x3d4) = *(undefined4 *)(param_1 + 8);
    if (*(int *)(param_1 + 10) != 0) {
      *(byte *)(param_2 + 0x62) = *(byte *)(param_2 + 0x62) | 0x40;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *(byte *)(param_2 + 0x62) = *(byte *)(param_2 + 0x62) | 0x10;
    }
    if (*(int *)(param_1 + 0xe) != 0) {
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 1;
    }
    if ((*(uint *)(iVar30 + 0x380) & 0x2000000) == 0) {
      if (**(int **)(iVar30 + 0x3a4) != 0x12) {
        FUN_08834c10(iVar30,0x12,0);
      }
      *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 2;
    }
    break;
  case '\x19':
    iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                       (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
    if (iVar21 != 0) {
      local_360 = *(undefined4 *)(iVar30 + 0x80);
      local_35c = *(float *)(iVar30 + 0x84);
      local_358 = *(undefined4 *)(iVar30 + 0x88);
      local_354 = *(undefined4 *)(iVar30 + 0x8c);
      iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
      local_35c = *(float *)(iVar21 + 0x84) + *(float *)(param_1 + 8);
      FUN_08834e08(*(undefined4 *)(param_1 + 6),iVar30,&local_360);
    }
    break;
  case '\x1a':
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 1;
    *(byte *)(param_2 + 0x62) = *(byte *)(param_2 + 0x62) | 0x80;
    break;
  case '\x1b':
    FUN_088476ac(iVar30 + 0x3e4,iVar30,*(undefined4 *)(param_1 + 6));
    break;
  case '\x1c':
    FUN_08847758(iVar30 + 0x3e4,iVar30,*(undefined4 *)(param_1 + 6));
    break;
  case '\x1d':
    if (**(int **)(iVar30 + 0x3a4) != 10) {
      func_0x08a58098((float)param_1[1] - *(float *)(param_2 + 0x78),iVar30);
    }
    break;
  case '\x1e':
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 1;
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 1;
    if (*(int *)(param_1 + 6) != 0) {
      *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 2;
      *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
    }
    if (*(int *)(param_1 + 8) != 0) {
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 4;
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 2;
      *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 0x40;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 2;
      *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 0x80;
    }
    break;
  case ' ':
    iVar21 = FUN_0883739c(iVar30);
    if (((iVar21 != 0) &&
        (iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                            (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130)), iVar21 != 0))
       && (iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                              (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130)),
          *(int *)(iVar21 + 0x534) != 0)) {
      iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
      piVar23 = *(int **)(*(int *)(iVar21 + 0x534) + 0x1a0);
      if ((((*(uint *)(iVar30 + 0x380) & 0x800) != 0) && (piVar23 != (int *)0x0)) &&
         (*piVar23 == *(int *)(param_1 + 6))) {
        uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
        iVar30 = FUN_08837584(uVar19);
        if (iVar30 != 0) {
          *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 0x10;
        }
      }
    }
    break;
  case '!':
    break;
  case '\"':
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 4;
    break;
  case '#':
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 0x10;
    break;
  case '$':
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 0x20;
    FUN_08836d38(iVar30,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 6),
                 *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 10),
                 *(int *)(param_1 + 0xe) != 0);
    break;
  case '%':
    *(byte *)(param_2 + 0x62) = *(byte *)(param_2 + 0x62) | 0x20;
    *(undefined4 *)(iVar30 + 0x3d0) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)(iVar30 + 0x3d4) = *(undefined4 *)(param_1 + 8);
    break;
  case '&':
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 6);
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 0x40;
    break;
  case '\'':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 == 0) {
      if (*(char *)(iVar30 + 0x542) == '\x02') {
        uVar19 = *(undefined4 *)(iVar30 + 0x398);
      }
      else {
        if (*(char *)(iVar30 + 0x542) != '\x04') {
          return;
        }
        uVar19 = *(undefined4 *)(iVar30 + 0x398);
      }
    }
    else {
      uVar19 = *(undefined4 *)(iVar30 + 0x398);
    }
    iVar30 = FUN_0880cd9c(uVar19,*(undefined4 *)(param_1 + 6));
    if (iVar30 != 0) {
      if (*(short *)(iVar30 + 0x164) == 0) {
        *(undefined2 *)(iVar30 + 0x164) = 1;
      }
      iVar21 = *(int *)(param_1 + 8);
      *(undefined1 *)(iVar30 + 0x150) = 0;
      *(float *)(iVar30 + 0x168) = (float)iVar21 * 0.017453292;
    }
    break;
  case '(':
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 4;
    break;
  case ')':
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 8;
    break;
  case '*':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      uVar19 = 0x3f800000;
      if ((3 < *(byte *)((int)param_1 + 5)) && (*(float *)(param_1 + 0xc) != 0.0)) {
        uVar19 = *(undefined4 *)(param_1 + 0xc);
      }
      func_0x08b33cd8(uVar19,iVar30,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8),
                      *(undefined4 *)(param_1 + 10));
    }
    break;
  case '+':
    func_0x08a3eab4(_DAT_08a405e0);
    break;
  case ',':
    iVar21 = FUN_0883739c(iVar30);
    if (((iVar21 != 0) && ((*(byte *)(iVar30 + 0x5b3) & 0x80) == 0)) &&
       ((*(int *)(param_1 + 0x12) == 0 ||
        (((*(byte *)(iVar30 + 0x5b2) & 4) != 0 && (iVar21 = func_0x08b3406c(iVar30), iVar21 == 0))))
       )) {
      iVar21 = 0;
      do {
        if (*(int *)(param_1 + iVar21 * 2 + 10) == -1) break;
        iVar21 = iVar21 + 1;
      } while (iVar21 < 4);
      if (iVar21 != 0) {
        for (iVar20 = 0; fVar31 = (float)FUN_08838300(iVar30),
            (float)iVar20 < fVar31 * 0.5 * (float)*(int *)(param_1 + 6); iVar20 = iVar20 + 1) {
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          if ((int)((DAT_09afb89c >> 0x10 & 0x7fffU) % 0x65) < *(int *)(param_1 + 8)) {
            DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
            FUN_08854b14(DAT_089d4dc8 + 0x4e0,iVar30,
                         *(undefined4 *)
                          (param_1 + ((int)(DAT_09afb89c >> 0x10 & 0x7fffU) % iVar21) * 2 + 10));
          }
        }
      }
    }
    break;
  case '-':
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 8;
    break;
  case '.':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      FUN_0884bb00(*(undefined4 *)(param_1 + 8),iVar30 + 0x76c,iVar30,*(undefined4 *)(param_1 + 6));
    }
    break;
  case '/':
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 0x10;
    break;
  case '0':
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 0x20;
    break;
  case '1':
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 1;
    break;
  case '2':
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 0x40;
    break;
  case '3':
    if (*DAT_089d85e8 == '\x01') {
      func_0x08ab40dc(*(undefined4 *)(param_1 + 6),_DAT_08ab4250);
    }
    break;
  case '4':
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 6);
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 0x80;
    break;
  case '6':
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 0x80;
    break;
  case '7':
    *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 1;
    break;
  case '8':
    FUN_08837a5c(iVar30);
    break;
  case '9':
    iVar21 = 0;
    do {
      if (iVar21 == 0) {
        iVar20 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
        if (iVar20 != 0) {
LAB_0882b8c0:
          bVar1 = true;
          if ((*(int *)(param_1 + 0xc) != 0) && (iVar22 = FUN_0883809c(iVar20), iVar22 == 0)) {
            bVar1 = false;
          }
          if ((*(int *)(param_1 + 0xe) != 0) && (iVar22 = FUN_0883809c(iVar20), iVar22 != 0)) {
            bVar1 = false;
          }
          iVar22 = FUN_08838178(iVar20);
          if (iVar22 != 0) {
            bVar1 = false;
          }
          iVar22 = FUN_0883739c(iVar20);
          if (iVar22 != 0) {
            if (((*(byte *)(iVar20 + 0x5b3) & 1) != 0) ||
               (bVar4 = false, (*(byte *)(iVar20 + 0x5b3) & 2) != 0)) {
              bVar4 = true;
            }
            if (bVar4) {
              bVar1 = false;
            }
          }
          if (((bVar1) &&
              (fVar31 = (float)FUN_08837aa4(iVar30,iVar20), fVar31 < *(float *)(param_1 + 8))) &&
             (*(float *)(param_1 + 10) < fVar31)) {
            fVar34 = 1.0;
            if (fVar31 - *(float *)(param_1 + 10) < 3.0) {
              fVar34 = (float)FUN_08867eec(((fVar31 - *(float *)(param_1 + 10)) / 3.0) * 3.1415927 *
                                           0.5);
            }
            FUN_089a38e0(&local_2f0,iVar30 + 0x100,iVar20 + 0x100);
            auVar7._4_4_ = uStack_2ec;
            auVar7._0_4_ = local_2f0;
            auVar7._8_4_ = uStack_2e8;
            auVar6._4_4_ = uStack_2ec;
            auVar6._0_4_ = local_2f0;
            auVar6._8_4_ = uStack_2e8;
            auVar5._4_4_ = uStack_2ec;
            auVar5._0_4_ = local_2f0;
            auVar5._8_4_ = uStack_2e8;
            uVar19 = vdot_t(auVar5,auVar6);
            uVar35 = vzero_s();
            uVar36 = vcmp_s(8,uVar19,local_2f0);
            local_150 = (float)vsqrt_s(uVar19);
            vrcp_s(local_150);
            uVar19 = vcmovt_s(uVar35,(byte)uVar36 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(auVar7,uVar19);
            local_2f0 = auVar2._0_4_;
            uStack_2ec = auVar2._4_4_;
            uStack_2e8 = auVar2._8_4_;
            local_2e4 = local_150;
            if (*(float *)(param_1 + 6) < local_150) {
              local_2e4 = *(float *)(param_1 + 6);
            }
            local_2e4 = local_2e4 * fVar34;
            FUN_08836580(iVar20,&local_2f0);
            (**(code **)(*(int *)(iVar20 + 0x544) + 0x1c4))
                      (iVar20 + *(short *)(*(int *)(iVar20 + 0x544) + 0x1c0));
          }
        }
      }
      else {
        iVar20 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
        if (((iVar20 != 0) && (iVar22 = FUN_0883739c(iVar20), iVar22 != 0)) &&
           ((iVar20 = *(int *)(iVar20 + 0x1108), iVar20 != 0 &&
            (iVar22 = FUN_08837990(iVar20), iVar22 != 1)))) goto LAB_0882b8c0;
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < 2);
    break;
  case ':':
    *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 1;
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 0x80;
    *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 2;
    break;
  case ';':
    *(undefined4 *)(iVar30 + 0x3dc) = *(undefined4 *)(param_1 + 6);
    break;
  case '<':
    uVar19 = FUN_08835778(iVar30);
    iVar21 = FUN_088bf4cc(uVar19,0x53);
    if (iVar21 == 0) {
      fVar31 = 0.0;
      iVar20 = *(int *)(param_1 + 6);
      iVar21 = FUN_088bf4cc(uVar19,0x82);
      if ((iVar21 != 0) && (*(short *)(iVar21 + 4) < 0)) {
        fVar31 = (float)iVar20 * (float)(*(int *)(param_1 + 8) * -(int)*(short *)(iVar21 + 4)) *
                 0.01;
      }
      fVar34 = (float)FUN_08838300(iVar30);
      local_2dc[0] = (float)iVar20 - fVar31;
      local_2e0 = 0.0;
      if (0.0 < local_2dc[0]) {
        pfVar25 = local_2dc;
      }
      else {
        pfVar25 = &local_2e0;
      }
      fVar31 = *(float *)(*(int *)(iVar30 + 0x52c) + 0x18) + *pfVar25 * fVar34;
      if (fVar31 < 0.0) {
        fVar31 = 0.0;
      }
      else if (10000.0 < fVar31) {
        fVar31 = 10000.0;
      }
      *(float *)(*(int *)(iVar30 + 0x52c) + 0x18) = fVar31;
    }
    *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 2;
    break;
  case '=':
    *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 4;
    break;
  case '>':
    *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 2;
    break;
  case '@':
    if ((*(byte *)(param_2 + 0x65) & 8) == 0) {
      iVar21 = *(int *)(param_1 + 8);
      if (iVar21 == 0) {
        iVar21 = 2;
      }
      *(float *)(param_2 + 0x178) = (float)iVar21;
      *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 8;
      FUN_08834d30((float)*(int *)(param_1 + 6),(float)*(int *)(param_1 + 10) / 100.0,iVar30);
    }
    break;
  case 'A':
    iVar21 = 0;
    *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 0x10;
    while (iVar21 = FUN_08841f84(iVar21), iVar21 != 0) {
      iVar20 = func_0x08b2f9d0(iVar21);
      if (((iVar20 != 0) && (*(char *)(iVar21 + 0x542) == '\0')) &&
         (iVar20 = (**(code **)(*(int *)(iVar21 + 0x544) + 0x124))
                             (iVar21 + *(short *)(*(int *)(iVar21 + 0x544) + 0x120)),
         iVar20 == iVar30)) {
        func_0x08b2f22c(iVar21);
        func_0x08b3b3ec(*(undefined4 *)(iVar21 + 0x5ac),0,0);
      }
    }
    break;
  case 'B':
    break;
  case 'C':
    if ((*(uint *)(iVar30 + 0x38c) & 0x4000) == 0) {
      iVar30 = FUN_08833b80(iVar30,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8));
      uVar19 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar30 + 0x20c) = *(undefined4 *)(param_1 + 10);
      *(undefined4 *)(iVar30 + 0x210) = uVar19;
      if (*(int *)(param_1 + 0xe) == 1) {
        uVar19 = *(undefined4 *)(param_1 + 0x12);
        *(undefined4 *)(iVar30 + 0x214) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(iVar30 + 0x218) = uVar19;
      }
      FUN_0882fd08(param_2,*param_1,param_1[1]);
    }
    break;
  case 'D':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      func_0x08b307bc(iVar30,*(uint *)(param_1 + 6) & 0xff,*(uint *)(param_1 + 8) & 0xff,
                      *(uint *)(param_1 + 10) & 0xff);
    }
    break;
  case 'E':
    *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 0x20;
    if (*(int *)(param_1 + 6) != 0) {
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 8;
    }
    break;
  case 'F':
    *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 0x40;
    break;
  case 'G':
    uVar19 = FUN_08835778(iVar30);
    iVar30 = FUN_088bf4cc(uVar19,0x136);
    if (iVar30 != 0) {
      *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 0x20;
    }
    break;
  case 'H':
    if (**(int **)(iVar30 + 0x3a4) == 0xf) {
      if (*(int *)(param_1 + 0xe) == 0) {
        if ((*(int *)(param_1 + 0xc) != 0) &&
           (iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                               (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120)), iVar21 != 0)
           ) {
          return;
        }
      }
      else if ((*(uint *)(*(int *)(iVar30 + 0x314) + 0x7c) & 2) == 0) {
        return;
      }
    }
    else {
      if ((*(int *)(param_1 + 0xc) != 0) &&
         (iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                             (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120)), iVar21 != 0))
      {
        return;
      }
      if (**(int **)(iVar30 + 0x3a4) != 0x12) {
        FUN_08834c10(iVar30,0x12,0);
        *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 2;
      }
    }
    FUN_089a3b30(&local_2d0,iVar30 + 0x90,iVar30 + 0xa0);
    auVar10._4_4_ = local_2cc;
    auVar10._0_4_ = local_2d0;
    auVar10._8_4_ = local_2c8;
    auVar9._4_4_ = local_2cc;
    auVar9._0_4_ = local_2d0;
    auVar9._8_4_ = local_2c8;
    auVar8._4_4_ = local_2cc;
    auVar8._0_4_ = local_2d0;
    auVar8._8_4_ = local_2c8;
    uVar19 = vdot_t(auVar8,auVar9);
    uVar35 = vzero_s();
    uVar36 = vcmp_s(8,uVar19,local_2d0);
    local_14c = vsqrt_s(uVar19);
    vrcp_s(local_14c);
    uVar19 = vcmovt_s(uVar35,(byte)uVar36 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar10,uVar19);
    local_2d0 = auVar2._0_4_;
    local_2cc = auVar2._4_4_;
    local_2c8 = auVar2._8_4_;
    FUN_089a3ebc(&local_2c0);
    local_280 = local_2c0;
    local_27c = local_2bc;
    local_278 = local_2b8;
    local_274 = local_2b4;
    local_270 = local_2b0;
    local_26c = local_2ac;
    local_268 = local_2a8;
    local_264 = local_2a4;
    local_260 = local_2a0;
    local_25c = local_29c;
    local_258 = local_298;
    local_254 = local_294;
    local_250 = local_290;
    local_24c = local_28c;
    local_248 = local_288;
    local_244 = local_284;
    fVar33 = *(float *)(param_1 + 6);
    auVar18._4_4_ = local_2cc;
    auVar18._0_4_ = local_2d0;
    auVar18._8_4_ = local_2c8;
    auVar17._4_4_ = local_2cc;
    auVar17._0_4_ = local_2d0;
    auVar17._8_4_ = local_2c8;
    auVar16._4_4_ = local_2cc;
    auVar16._0_4_ = local_2d0;
    auVar16._8_4_ = local_2c8;
    uVar19 = vdot_t(auVar16,auVar17);
    uVar35 = vzero_s();
    uVar36 = vcmp_s(8,uVar19,local_2d0);
    local_f0 = vsqrt_s(uVar19);
    vrcp_s(local_f0);
    uVar19 = vcmovt_s(uVar35,(byte)uVar36 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar18,uVar19);
    fVar31 = auVar2._0_4_;
    fVar34 = auVar2._4_4_;
    fVar3 = auVar2._8_4_;
    local_100 = fVar31;
    local_fc = fVar34;
    local_f8 = fVar3;
    fVar32 = (float)FUN_089a47a4(fVar33 * 0.017453292);
    local_298 = (float)FUN_089a46dc(fVar33 * 0.017453292);
    fVar33 = 1.0 - local_298;
    local_2c0 = fVar31 * fVar31 * fVar33 + local_298;
    local_2b0 = fVar31 * fVar34 * fVar33;
    local_2bc = local_2b0 + fVar32 * fVar3;
    local_2a0 = fVar31 * fVar3 * fVar33;
    local_2b8 = local_2a0 - fVar32 * fVar34;
    local_2b4 = 0;
    local_2b0 = local_2b0 - fVar32 * fVar3;
    local_2ac = fVar34 * fVar34 * fVar33 + local_298;
    local_29c = fVar34 * fVar3 * fVar33;
    local_2a8 = local_29c + fVar32 * fVar31;
    local_2a4 = 0;
    local_2a0 = local_2a0 + fVar32 * fVar34;
    local_29c = local_29c - fVar32 * fVar31;
    local_298 = fVar3 * fVar3 * fVar33 + local_298;
    local_294 = 0;
    local_290 = 0;
    local_28c = 0;
    local_288 = 0;
    local_284 = 0x3f800000;
    FUN_089a3f40(&local_2d0,&local_2c0,iVar30 + 0x90);
    FUN_089a3ebc(&local_2c0);
    local_240 = local_2c0;
    local_23c = local_2bc;
    local_238 = local_2b8;
    local_234 = local_2b4;
    local_230 = local_2b0;
    local_22c = local_2ac;
    local_228 = local_2a8;
    local_224 = local_2a4;
    local_220 = local_2a0;
    local_21c = local_29c;
    local_218 = local_298;
    local_214 = local_294;
    local_210 = local_290;
    local_20c = local_28c;
    local_208 = local_288;
    local_204 = local_284;
    FUN_089a4124(*(float *)(param_1 + 8) * 0.017453292,&local_2c0,&local_2c0);
    FUN_089a3f40(&local_2d0,&local_2c0,&local_2d0);
    auVar13._4_4_ = local_2cc;
    auVar13._0_4_ = local_2d0;
    auVar13._8_4_ = local_2c8;
    auVar12._4_4_ = local_2cc;
    auVar12._0_4_ = local_2d0;
    auVar12._8_4_ = local_2c8;
    auVar11._4_4_ = local_2cc;
    auVar11._0_4_ = local_2d0;
    auVar11._8_4_ = local_2c8;
    uVar19 = vdot_t(auVar11,auVar12);
    uVar35 = vzero_s();
    uVar36 = vcmp_s(8,uVar19,local_2d0);
    local_a0 = vsqrt_s(uVar19);
    vrcp_s(local_a0);
    uVar19 = vcmovt_s(uVar35,(byte)uVar36 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar13,uVar19);
    local_2d0 = auVar2._0_4_;
    local_2cc = auVar2._4_4_;
    local_2c8 = auVar2._8_4_;
    fVar31 = (float)FUN_08838300(iVar30);
    FUN_08835034(*(float *)(param_1 + 10) * fVar31,iVar30,&local_2d0);
    break;
  case 'I':
    *(byte *)(param_2 + 0x65) = *(byte *)(param_2 + 0x65) | 0x80;
    break;
  case 'J':
    *(byte *)(param_2 + 0x66) = *(byte *)(param_2 + 0x66) | 2;
    break;
  case 'K':
    *(byte *)(param_2 + 0x66) = *(byte *)(param_2 + 0x66) | 1;
    break;
  case 'L':
    *(byte *)(param_2 + 0x66) = *(byte *)(param_2 + 0x66) | 4;
    break;
  case 'M':
    *(byte *)(param_2 + 0x66) = *(byte *)(param_2 + 0x66) | 8;
    *(byte *)(param_2 + 0x66) = *(byte *)(param_2 + 0x66) | 0x10;
    *(byte *)(param_2 + 0x66) = *(byte *)(param_2 + 0x66) | 0x20;
    *(byte *)(param_2 + 0x66) = *(byte *)(param_2 + 0x66) | 0x40;
    break;
  case 'N':
    uVar29 = *(uint *)(iVar30 + 0x454);
    uVar28 = *(uint *)(iVar30 + 0x450);
    uVar37 = FUN_089985b0(1,0,*(undefined4 *)(param_1 + 6));
    *(uint *)(iVar30 + 0x454) = uVar29 | (uint)((ulonglong)uVar37 >> 0x20);
    *(uint *)(iVar30 + 0x450) = uVar28 | (uint)uVar37;
    break;
  case 'O':
    iVar21 = FUN_088374b0(iVar30);
    if (iVar21 != 0) {
      return;
    }
    if (**(int **)(iVar30 + 0x3a4) == 0xf) {
      if (*(int *)(param_1 + 0xc) == 0) {
        if (*(int *)(param_1 + 10) != 0) {
          iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                             (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
          goto joined_r0x0882c370;
        }
      }
      else if ((*(uint *)(*(int *)(iVar30 + 0x314) + 0x7c) & 2) == 0) {
        return;
      }
    }
    else if (*(int *)(param_1 + 10) != 0) {
      iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
joined_r0x0882c370:
      if (iVar21 != 0) {
        return;
      }
    }
    FUN_08868334(*(float *)(param_1 + 6) * 0.017453292,&local_1e0,iVar30 + 0x90);
    local_200 = local_1e0;
    local_1fc = local_1dc;
    local_1f8 = local_1d8;
    local_1f4 = local_1d4;
    FUN_089a3868(&local_1f0,&local_200);
    auVar15._4_4_ = uStack_1ec;
    auVar15._0_4_ = local_1f0;
    auVar15._8_4_ = uStack_1e8;
    auVar14._4_4_ = uStack_1ec;
    auVar14._0_4_ = local_1f0;
    auVar14._8_4_ = uStack_1e8;
    auVar2._4_4_ = uStack_1ec;
    auVar2._0_4_ = local_1f0;
    auVar2._8_4_ = uStack_1e8;
    uVar19 = vdot_t(auVar2,auVar14);
    uVar35 = vzero_s();
    uVar36 = vcmp_s(8,uVar19,local_1f0);
    local_9c = vsqrt_s(uVar19);
    vrcp_s(local_9c);
    uVar19 = vcmovt_s(uVar35,(byte)uVar36 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar15,uVar19);
    local_1f0 = auVar2._0_4_;
    uStack_1ec = auVar2._4_4_;
    uStack_1e8 = auVar2._8_4_;
    fVar31 = (float)FUN_08838300(iVar30);
    FUN_08835034(*(float *)(param_1 + 8) * fVar31,iVar30,&local_1f0);
    break;
  case 'P':
    if (*(int *)(param_1 + 10) == 0) {
      iVar21 = *(int *)(param_1 + 6);
      if (iVar21 < 0) {
        iVar21 = 0;
      }
      else if (0xb4 < iVar21) {
        iVar21 = 0xb4;
      }
      FUN_088364f4((float)iVar21 * 0.017453292,iVar30,*(int *)(param_1 + 8) != 0);
    }
    else {
      func_0x08a62b04(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xe),
                      (float)*(int *)(param_1 + 6),*(undefined4 *)(param_1 + 0x10),
                      *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                      iVar30 + 0x1120);
    }
    break;
  case 'Q':
    *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 1;
    break;
  case 'R':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      *(byte *)(param_2 + 0x66) = *(byte *)(param_2 + 0x66) | 0x80;
      func_0x08b347cc(*(float *)(param_1 + 6) * 0.017453292,*(float *)(param_1 + 8) * 0.017453292,
                      *(float *)(param_1 + 10) * 0.017453292,*(float *)(param_1 + 0xc) * 0.017453292
                      ,*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10),iVar30);
    }
    break;
  case 'S':
    *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 2;
    if (*(int *)(iVar30 + 0x530) == 0) {
      fVar34 = 1.0;
      uVar19 = 0x1e;
      fVar31 = 1.0;
      if (0 < *(int *)(param_1 + 6)) {
        uVar19 = *(undefined4 *)(param_1 + 6);
      }
      if (0 < *(int *)(param_1 + 8)) {
        fVar34 = (float)*(int *)(param_1 + 8) * 0.01;
      }
      if (0 < *(int *)(param_1 + 10)) {
        fVar31 = (float)*(int *)(param_1 + 10) * 0.01;
      }
      uVar19 = FUN_088749a0(fVar34,fVar31,uVar19,0);
      *(undefined4 *)(iVar30 + 0x530) = uVar19;
    }
    break;
  case 'T':
    (**(code **)(*(int *)(iVar30 + 0x544) + 0x1dc))
              (*(float *)(iVar30 + 0x3c0) - *(float *)(iVar30 + 0x84),
               iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x1d8));
    break;
  case 'U':
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 0x40;
    break;
  case 'X':
    if ((*(uint *)(iVar30 + 900) & 0x40000) != 0) {
      *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 1;
      *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 1;
      if (*(int *)(param_1 + 6) != 0) {
        *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 2;
        *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
      }
    }
    break;
  case 'Y':
    iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                       (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
    if (iVar21 != 0) {
      uVar19 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
      iVar30 = FUN_08838074(uVar19);
      if (iVar30 == 0) {
        *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 4;
      }
    }
    break;
  case 'Z':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      uVar19 = *(undefined4 *)(param_1 + 8);
      iVar21 = FUN_0884f6f4(iVar30 + 0xd64,*(undefined4 *)(param_1 + 6));
      if (iVar21 == 0) {
        if (2.0 <= (float)param_1[1] - *(float *)(iVar30 + 0x1a8)) {
          if (*(int *)(param_1 + 10) != 0) {
            uVar19 = FUN_0884f90c(iVar30 + 0xd64);
          }
          FUN_08850574(iVar30 + 0xd64,uVar19,*(undefined4 *)(param_1 + 6),
                       *(int *)(param_1 + 0xc) != 0,*(undefined4 *)(param_1 + 0xe),
                       *(undefined4 *)(param_1 + 0x10),0,5,*(undefined4 *)(param_1 + 0x12));
        }
      }
      else {
        if (*(int *)(param_1 + 10) != 0) {
          uVar19 = 0xffffffff;
        }
        FUN_0884f1c8(iVar30 + 0xd64,uVar19,*(undefined4 *)(param_1 + 6),
                     *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10));
      }
    }
    break;
  case '[':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      FUN_0884f324(iVar30 + 0xd64,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 10),
                   *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
    }
    break;
  case '\\':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 == 1) {
      *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 4;
      func_0x08a62660(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                      *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10),
                      *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                      *(undefined4 *)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x18),
                      iVar30 + 0x1120,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 10),
                      *(int *)(param_1 + 0x1e) != 0);
    }
    break;
  case '^':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      FUN_0884f3e8(iVar30 + 0xd64,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8));
    }
    break;
  case '_':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      uVar19 = 0x3f800000;
      if ((3 < *(byte *)((int)param_1 + 5)) && (*(float *)(param_1 + 0xc) != 0.0)) {
        uVar19 = *(undefined4 *)(param_1 + 0xc);
      }
      func_0x08b33cf4(uVar19,iVar30,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8),
                      *(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xe));
    }
    break;
  case '`':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      FUN_0884f7c4(iVar30 + 0xd64,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 10));
    }
    break;
  case 'b':
    *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 8;
    break;
  case 'c':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 == 1) {
      *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 4;
      func_0x08a627ec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                      *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10),
                      *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                      *(undefined4 *)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x18),
                      iVar30 + 0x1120,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 10),
                      *(int *)(param_1 + 0x1e) != 0);
    }
    break;
  case 'd':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 == 1) {
      *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 4;
      func_0x08a62978(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                      *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10),
                      *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                      *(undefined4 *)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x18),
                      iVar30 + 0x1120,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 10),
                      *(int *)(param_1 + 0x1e) != 0);
    }
    break;
  case 'e':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      uVar19 = *(undefined4 *)(param_1 + 8);
      iVar20 = 0;
      iVar21 = FUN_0884f6f4(iVar30 + 0xd64,*(undefined4 *)(param_1 + 6));
      if (iVar21 == 0) {
        if (2.0 <= (float)param_1[1] - *(float *)(iVar30 + 0x1a8)) {
          if (*(int *)(param_1 + 10) != 0) {
            uVar19 = FUN_0884f90c(iVar30 + 0xd64);
          }
          iVar20 = FUN_08850574(iVar30 + 0xd64,uVar19,*(undefined4 *)(param_1 + 6),
                                *(int *)(param_1 + 0xc) != 0,*(undefined4 *)(param_1 + 0xe),
                                *(undefined4 *)(param_1 + 0x10),0,5,0);
        }
      }
      else {
        if (*(int *)(param_1 + 10) != 0) {
          uVar19 = 0xffffffff;
        }
        iVar20 = FUN_0884f1c8(iVar30 + 0xd64,uVar19,*(undefined4 *)(param_1 + 6),
                              *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10));
      }
      if (iVar20 != 0) {
        FUN_089a3ebc(&local_1d0);
        local_190 = local_1d0;
        local_18c = local_1cc;
        local_188 = local_1c8;
        local_184 = local_1c4;
        local_180 = local_1c0;
        local_17c = local_1bc;
        local_178 = local_1b8;
        local_174 = local_1b4;
        local_170 = local_1b0;
        local_16c = local_1ac;
        local_168 = local_1a8;
        local_164 = local_1a4;
        local_160 = local_1a0;
        local_15c = local_19c;
        local_158 = local_198;
        local_154 = local_194;
        FUN_089a383c(*(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                     *(undefined4 *)(param_1 + 0x16),0x3f800000,&local_1a0);
        FUN_089a3efc(*(int *)(iVar20 + 8) + 0x550,&local_1d0);
        if (*(int *)(param_1 + 0x18) == 0) {
          if (*(int *)(param_1 + 0x1a) != 0) {
            FUN_088513bc(*(undefined4 *)(iVar20 + 8),*(undefined4 *)(param_1 + 0x1c));
          }
        }
        else {
          *(undefined1 *)(*(int *)(iVar20 + 8) + 0x612) = 1;
        }
      }
    }
    break;
  case 'f':
    if (((((int)*(float *)(iVar30 + 0x1ac) < *(int *)(param_1 + 10)) &&
         (*(int *)(param_1 + 10) <= (int)*(float *)(iVar30 + 0x1b0))) &&
        (iVar21 = FUN_088a9de8(*(undefined4 *)(*(int *)(iVar30 + 0x390) + 0x5c),
                               *(undefined4 *)(param_1 + 6),iVar30 + 0x4c8,0,0), iVar21 != 0)) &&
       (*(float *)(iVar21 + 0xe4) = (float)*(int *)(param_1 + 8), -1 < *(int *)(param_1 + 0xc))) {
      FUN_088a6a38(0xbf800000,iVar21,0,iVar30 + 0x4c8,*(undefined4 *)(param_1 + 0xc),0xffffffff);
    }
    break;
  case 'g':
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 4;
    if (*(int *)(param_1 + 6) != 0) {
      *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 8;
    }
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      func_0x08b34dd4(iVar30);
      uVar19 = FUN_0884808c(DAT_089d4974,*(undefined4 *)(param_1 + 8));
      func_0x08b308d8(iVar30,uVar19,*(int *)(param_1 + 10) != 0,*(int *)(param_1 + 0xc) != 0);
    }
    break;
  case 'h':
    if ((float)param_1[1] == *(float *)(iVar30 + 0x1a8)) {
      FUN_088735a0(DAT_089d5ec0 + 0x7e0);
    }
    else {
      FUN_08873594(*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8),DAT_089d5ec0 + 0x7e0);
    }
    break;
  case 'i':
    *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 0x10;
    break;
  case 'j':
    *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 0x20;
    break;
  case 'k':
    if ((float)(int)((uint)param_1[1] - (uint)*param_1) == 0.0) {
      fVar31 = 1.0;
    }
    else {
      fVar31 = (*(float *)(param_2 + 0x78) - (float)*param_1) /
               (float)(int)((uint)param_1[1] - (uint)*param_1);
    }
    fVar31 = (*(float *)(param_1 + 8) - *(float *)(param_1 + 6)) * fVar31 + *(float *)(param_1 + 6);
    FUN_08896508(fVar31,DAT_089d6ae8);
    FUN_088a18b0(DAT_089d6c88,(int)(fVar31 * 100.0),0);
    break;
  case 'l':
    if ((*(int *)(param_1 + 6) != 1) || ((*(uint *)(iVar30 + 0x380) & 0x100) != 0)) {
      *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 0x40;
    }
    break;
  case 'm':
    iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                       (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
    if (iVar21 == 0) {
      iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
    }
    if ((iVar21 != 0) &&
       ((*(int *)(param_1 + 0xc) == 0 || (iVar20 = FUN_08838074(iVar21), iVar20 == 0)))) {
      iVar20 = FUN_08837458(iVar21);
      if ((iVar20 != 0) && (*(int *)(param_1 + 10) == 0)) {
        bVar1 = true;
        iVar20 = FUN_088377c0(iVar30);
        if (((iVar20 != 0) && (iVar20 = FUN_0883739c(iVar30), iVar20 != 0)) &&
           ((iVar20 = func_0x08b30898(iVar30), iVar20 != 0 &&
            ((*(uint *)(iVar20 + 0x18) & 0x10) != 0)))) {
          bVar1 = false;
        }
        if (bVar1) {
          return;
        }
      }
      if (*(int *)(param_1 + 8) == 0) {
        FUN_08835f60((float)*(int *)(param_1 + 6) * 0.017453292,iVar30,iVar21);
      }
      else {
        FUN_088360bc(iVar30,iVar21);
      }
    }
    break;
  case 'n':
    if (*(int *)(param_1 + 10) == 0) {
      iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
      if (iVar21 == 0) {
        iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
        if (iVar21 != 0) {
          iVar21 = *(int *)(param_1 + 6);
          if (iVar21 < 0) {
            iVar21 = 0;
          }
          else if (0xb4 < iVar21) {
            iVar21 = 0xb4;
          }
          FUN_088364f4((float)iVar21 * 0.017453292,iVar30,*(int *)(param_1 + 8) != 0);
        }
      }
      else {
        iVar21 = *(int *)(param_1 + 6);
        if (iVar21 < 0) {
          iVar21 = 0;
        }
        else if (0xb4 < iVar21) {
          iVar21 = 0xb4;
        }
        FUN_08836488((float)iVar21 * 0.017453292,iVar30,*(int *)(param_1 + 8) != 0);
      }
    }
    else {
      iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
      if (iVar21 == 0) {
        iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
        if (iVar21 != 0) {
          func_0x08a62b04(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xe),
                          (float)*(int *)(param_1 + 6),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                          iVar30 + 0x1120);
        }
      }
      else {
        func_0x08a62c58(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xe),
                        (float)*(int *)(param_1 + 6),*(undefined4 *)(param_1 + 0x10),
                        *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                        iVar30 + 0x1120);
      }
    }
    break;
  case 'o':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 == 1) {
      iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x124))
                         (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x120));
      if (iVar21 == 0) {
        iVar21 = (**(code **)(*(int *)(iVar30 + 0x544) + 0x134))
                           (iVar30 + *(short *)(*(int *)(iVar30 + 0x544) + 0x130));
        if (iVar21 != 0) {
          *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 4;
          func_0x08a627ec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                          *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                          *(undefined4 *)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x18),
                          iVar30 + 0x1120,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 10)
                          ,*(int *)(param_1 + 0x1e) != 0);
        }
      }
      else {
        *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 4;
        func_0x08a62978(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                        *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x10),
                        *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                        *(undefined4 *)(param_1 + 0x16),*(undefined4 *)(param_1 + 0x18),
                        iVar30 + 0x1120,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 10),
                        *(int *)(param_1 + 0x1e) != 0);
      }
    }
    break;
  case 'p':
    iVar21 = FUN_0883739c(iVar30);
    if (((iVar21 != 0) && ((*(uint *)(iVar30 + 0x380) & 0x2000) != 0)) &&
       (fVar31 = (float)FUN_089a4500(*(float *)(iVar30 + 0x84) - *(float *)(iVar30 + 0x2e4)),
       fVar31 < 0.001)) {
      uVar19 = FUN_08899300();
      FUN_08837030(&local_300,iVar30);
      local_350 = local_300;
      local_34c = local_2fc;
      local_348 = local_2f8;
      local_344 = local_2f4;
      local_330 = 0;
      local_328 = 0;
      local_32c = 0x3f800000;
      local_340 = 0;
      local_33c = 0x3f800000;
      local_338 = 0;
      local_334 = 0x3f800000;
      FUN_089a34c0(auStack_324,&local_350);
      FUN_089a34c0(auStack_318,&local_340);
      fVar31 = (float)FUN_08837014(iVar30);
      iVar21 = FUN_0889beb0(fVar31 * 2.0,uVar19,0,auStack_324,0x36,1,1,0,0,0,0);
      if (iVar21 != 0) {
        func_0x08b2f054(iVar30);
      }
    }
    break;
  case 'q':
    if (*(char *)(iVar30 + 0x542) == '\x01') {
      *(byte *)(*(int *)(iVar30 + 0x1108) + 0x197) =
           *(byte *)(*(int *)(iVar30 + 0x1108) + 0x197) | 0x80;
      *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 0x80;
    }
    else {
      *(byte *)(param_2 + 0x67) = *(byte *)(param_2 + 0x67) | 0x80;
    }
    break;
  case 'r':
    *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 2;
    break;
  case 's':
    if ((*(char *)(iVar30 + 0x542) == '\x01') && (*(int *)(iVar30 + 0x1108) != 0)) {
      FUN_08835f60((float)*(int *)(param_1 + 6) * 0.017453292,iVar30,
                   *(undefined4 *)(iVar30 + 0x1108));
    }
    break;
  case 't':
    uVar19 = FUN_08835778(iVar30);
    iVar30 = FUN_088bf4cc(uVar19,0x41);
    if (iVar30 != 0) {
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 0x10;
    }
    break;
  case 'u':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      func_0x08b34fe4(iVar30,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8),
                      *(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xc));
    }
    break;
  case 'v':
    if (*(char *)(iVar30 + 0x542) == '\x03') {
      func_0x08b34fe4(*(undefined4 *)(iVar30 + 0x5d4),*(undefined4 *)(param_1 + 6),
                      *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 10),
                      *(undefined4 *)(param_1 + 0xc));
    }
    else if (*(char *)(iVar30 + 0x542) == '\x01') {
      func_0x08b34fe4(*(undefined4 *)(iVar30 + 0x1108),*(undefined4 *)(param_1 + 6),
                      *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 10),
                      *(undefined4 *)(param_1 + 0xc));
    }
    break;
  case 'w':
    *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 0x20;
    break;
  case 'x':
    iVar21 = FUN_0883739c(iVar30);
    if ((iVar21 == 0) || (**(char **)(iVar30 + 0x5a4) != '\x03')) {
      iVar30 = FUN_08839120(iVar30,*(undefined4 *)(param_1 + 8));
      if ((iVar30 != 0) &&
         (*(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 4, *(int *)(param_1 + 6) != 0)) {
        *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 8;
      }
    }
    else {
      *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 4;
      if (*(int *)(param_1 + 6) != 0) {
        *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 8;
      }
    }
    break;
  case 'y':
    iVar21 = FUN_08839120(iVar30,*(undefined4 *)(param_1 + 0xe));
    if (iVar21 != 0) {
      *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 4;
      if (*(int *)(param_1 + 6) != 0) {
        *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 8;
      }
      iVar21 = FUN_0883739c(iVar30);
      if (iVar21 != 0) {
        func_0x08b34dd4(iVar30);
        uVar19 = FUN_0884808c(DAT_089d4974,*(undefined4 *)(param_1 + 8));
        func_0x08b308d8(iVar30,uVar19,*(int *)(param_1 + 10) != 0,*(int *)(param_1 + 0xc) != 0);
      }
    }
    break;
  case 'z':
    if (*(int *)(param_1 + 10) == 0) {
      if ((*(uint *)(iVar30 + 0x380) & 0x100) == 0) {
        return;
      }
    }
    else if ((*(uint *)(iVar30 + 0x380) & 0x100) != 0) {
      return;
    }
    if (*(int *)(param_1 + 8) != 0) {
      *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 2;
      *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 0x40;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 2;
      *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
      *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 0x80;
    }
    *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 1;
    *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) | 1;
    if (*(int *)(param_1 + 6) != 0) {
      *(byte *)(param_2 + 99) = *(byte *)(param_2 + 99) | 2;
      *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 4;
    }
    break;
  case '{':
    if (((*(uint *)(iVar30 + 0x38c) & 0x4000) == 0) && ((*(uint *)(iVar30 + 900) & 0x40000) != 0)) {
      FUN_08833b80(iVar30,*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_1 + 8));
      FUN_0882fd08(param_2,*param_1,param_1[1]);
    }
    break;
  case '|':
    iVar21 = FUN_0883739c(iVar30);
    if (iVar21 != 0) {
      *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) | 1;
      *(undefined4 *)(iVar30 + 0x1270) = *(undefined4 *)(param_1 + 6);
    }
  }
  return;
}

