/* Entry 0x0882CEC0 | file offset 0x00029E98 | FUN_0882cec0 | bytes 6308 */

void FUN_0882cec0(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  bool bVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_1a0 [16];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 auStack_180 [16];
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
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
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
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_80;
  
  iVar9 = *(int *)(param_2 + 0x30);
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    if (*(int *)(iVar9 + 0x314) != 0) {
      switch(*(undefined4 *)(*(int *)(iVar9 + 0x314) + 0xf4)) {
      case 0:
        FUN_08834c10(iVar9,1,0);
        break;
      case 1:
        FUN_08834c10(iVar9,6,0);
        break;
      case 2:
        FUN_08834c10(iVar9,4,0);
        break;
      case 3:
        FUN_08834c10(iVar9,0xc,0);
        break;
      case 4:
        FUN_08834c10(iVar9,0xd,0);
        break;
      case 5:
        FUN_08834c10(iVar9,0xe,0);
        break;
      case 6:
        FUN_08834c10(iVar9,0xf,0);
      }
    }
    break;
  case 1:
    break;
  case 2:
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 4;
    break;
  case 3:
    if ((*(uint *)(iVar9 + 0x380) & 0x10000000) == 0) {
      FUN_0883834c(iVar9,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) == 0,
                   *(int *)(param_1 + 0x10) != 0);
    }
    break;
  case 4:
    if ((*(uint *)(iVar9 + 0x38c) & 0x4000) == 0) {
      (**(code **)(*(int *)(iVar9 + 0x544) + 0x11c))
                (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x118),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc));
    }
    break;
  case 6:
    fVar11 = 1.0;
    uVar8 = 0x1e;
    fVar10 = 1.0;
    if (0 < *(int *)(param_1 + 8)) {
      uVar8 = *(undefined4 *)(param_1 + 8);
    }
    if (0 < *(int *)(param_1 + 0xc)) {
      fVar11 = (float)*(int *)(param_1 + 0xc) * 0.01;
    }
    if (0 < *(int *)(param_1 + 0x10)) {
      fVar10 = (float)*(int *)(param_1 + 0x10) * 0.01;
    }
    FUN_088749a0(fVar11,fVar10,uVar8,0);
    break;
  case 8:
    iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x124))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x120));
    if (iVar6 == 0) {
      iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
                        (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    }
    if (iVar6 != 0) {
      FUN_08836dac(iVar9,iVar6,auStack_180);
      FUN_08808468(iVar9,*(undefined4 *)(param_1 + 8),iVar6,auStack_180,1);
    }
    break;
  case 9:
    FUN_08834d60((float)*(int *)(param_1 + 8),iVar9);
    break;
  case 10:
    FUN_08834d30((float)*(int *)(param_1 + 8),(float)*(int *)(param_1 + 0xc) / 100.0,iVar9);
    break;
  case 0xb:
    FUN_088372b0(iVar9,*(undefined4 *)(param_1 + 8));
    break;
  case 0xc:
    FUN_088372d0(iVar9,*(undefined4 *)(param_1 + 8));
    break;
  case 0xd:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      FUN_0884e658(iVar9,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                   *(undefined4 *)(param_1 + 0x10));
    }
    break;
  case 0xf:
    if (*(char *)(iVar9 + 0x542) != '\a') {
      uVar8 = FUN_0883da88(iVar9,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) != 0,
                           *(int *)(param_1 + 0x10) != 0,*(int *)(param_1 + 0x1c) != 0);
      iVar6 = FUN_0883739c(iVar9);
      if (iVar6 == 0) {
        if (*(char *)(iVar9 + 0x542) != '\x02') {
          return;
        }
        iVar6 = iVar9 + 0xb1c;
      }
      else {
        iVar6 = iVar9 + 0xd08;
      }
      switch(*(undefined4 *)(param_1 + 8)) {
      case 0:
      case 6:
        if (*(int *)(param_1 + 0x14) != 0) {
          FUN_08853e24(0x3dcccccd,0x3f800000,iVar6,uVar8,
                       *(undefined4 *)(*(int *)(iVar9 + 0x394) + 0xf8),
                       *(undefined4 *)(param_1 + 0x10),1);
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_08853e24(0x3dcccccd,0x3f800000,iVar6,uVar8,
                       *(undefined4 *)(*(int *)(iVar9 + 0x394) + 0xf4),
                       *(undefined4 *)(param_1 + 0x10),1);
        }
        break;
      case 1:
      case 2:
      case 3:
        uVar12 = *(undefined4 *)(*(int *)(iVar9 + 0x394) + 0xf0);
        uVar13 = *(undefined4 *)(param_1 + 0x10);
        fVar10 = (float)FUN_08837014(iVar9);
        FUN_08853e24(fVar10 * 0.7,0x3f800000,iVar6,uVar8,uVar12,uVar13,1);
      }
    }
    break;
  case 0x10:
    iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x124))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x120));
    if (iVar6 != 0) {
      fVar10 = *(float *)(param_1 + 0x24);
      if (fVar10 <= 0.0) {
        fVar10 = *(float *)(param_1 + 8);
      }
      func_0x08a60bc8(*(undefined4 *)(param_1 + 8),fVar10,*(undefined4 *)(param_1 + 0xc),
                      *(undefined4 *)(param_1 + 0x10),*(float *)(param_1 + 0x14) * 0.017453292,
                      *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                      *(undefined4 *)(param_1 + 0x20),iVar9,0,0,*(int *)(param_1 + 0x38) != 0);
      iVar6 = FUN_088374b0(iVar9);
      if (iVar6 != 0) {
        FUN_08834c10(iVar9,0xf,0);
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        func_0x08a60e4c(iVar9);
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        func_0x08a60e64(iVar9);
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        func_0x08a60e7c(iVar9);
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        func_0x08a60e94(iVar9);
      }
    }
    break;
  case 0x11:
    FUN_088384a0(iVar9,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 *(int *)(param_1 + 0x10) != 0);
    break;
  case 0x12:
    FUN_088385b0(iVar9,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 *(int *)(param_1 + 0x10) != 0);
    break;
  case 0x14:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      func_0x08b33f84(iVar9,*(undefined4 *)(param_1 + 8));
    }
    break;
  case 0x15:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      func_0x08b33f8c(iVar9,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) != 0,
                      *(int *)(param_1 + 0x10) != 0);
    }
    break;
  case 0x16:
    break;
  case 0x17:
    FUN_088525f8(DAT_089d4dc8 + 0x6b00,iVar9,*(undefined4 *)(param_1 + 8),
                 (int)*(short *)(*(int *)(iVar9 + 0x2f8) + 2));
    break;
  case 0x19:
    iVar9 = FUN_088a9de8(*(undefined4 *)(*(int *)(iVar9 + 0x390) + 0x5c),
                         *(undefined4 *)(param_1 + 8),iVar9 + 0x4c8,0,0);
    if (iVar9 != 0) {
      *(float *)(iVar9 + 0xe4) = (float)*(int *)(param_1 + 0xc);
    }
    break;
  case 0x1b:
    uVar8 = FUN_08873ce0(0,1,0);
    fVar10 = (float)*(int *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0x10);
    fVar11 = (float)*(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x14) == 0) {
      FUN_089a383c(0x437f0000,0x437f0000,0x437f0000,0x437f0000,auStack_1a0);
    }
    if (*(int *)(param_1 + 0x14) == 1) {
      FUN_089a383c(0,0,0,0x437f0000,auStack_1a0);
    }
    if (*(int *)(param_1 + 0x14) == 2) {
      FUN_089a383c(0x437f0000,0,0,0x437f0000,auStack_1a0);
    }
    if (0.0 < fVar10) {
      local_190 = 0;
      local_18c = 0;
      local_188 = 0;
      local_184 = 0;
      FUN_08873b64(uVar8,&local_190,0,0);
      FUN_08873b64(fVar10,uVar8,auStack_1a0,0,0);
    }
    if (0.0 < fVar11) {
      if (fVar10 <= 0.0) {
        FUN_08873b64(0,uVar8,auStack_1a0,0,0);
      }
      FUN_08873b64(fVar11 + fVar10,uVar8,auStack_1a0,0,0);
    }
    if (0.0 < (float)iVar9) {
      if ((fVar10 <= 0.0) && (fVar11 <= 0.0)) {
        FUN_08873b64(0,uVar8,auStack_1a0,0,0);
      }
      FUN_08873b64(fVar11 + fVar10 + (float)iVar9,uVar8,&DAT_09af84c0,0,0);
    }
    break;
  case 0x1c:
    FUN_08834df4((float)*(int *)(param_1 + 8) / 100.0,iVar9);
    break;
  case 0x1d:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      FUN_08856d48(DAT_089d4dc8 + 0x69c0,iVar9,*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0xc));
    }
    break;
  case 0x1e:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      func_0x08b33ddc(iVar9,*(undefined4 *)(param_1 + 8));
    }
    break;
  case 0x1f:
    (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
              (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    uVar8 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    FUN_08834d60((float)*(int *)(param_1 + 8),uVar8);
    break;
  case 0x20:
    (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
              (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    uVar8 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    FUN_08834d30((float)*(int *)(param_1 + 8),(float)*(int *)(param_1 + 0xc) / 100.0,uVar8);
    break;
  case 0x21:
    (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
              (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    uVar8 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    FUN_08834df4((float)*(int *)(param_1 + 8) / 100.0,uVar8);
    break;
  case 0x22:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      FUN_08853e80(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0x3f000000,
                   iVar9 + 0xd08,(int)*(char *)(iVar9 + 0x3c6),*(undefined4 *)(param_1 + 8),0,
                   *(undefined4 *)(param_1 + 0x14));
    }
    break;
  case 0x23:
    if (((*(int *)(param_1 + 8) == 0) ||
        (iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x124))
                           (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x120)), iVar6 == 0)) &&
       (**(int **)(iVar9 + 0x3a4) != 0x12)) {
      FUN_08834c10(iVar9,0x12,0);
    }
    break;
  case 0x24:
    FUN_08835cac(iVar9);
    break;
  case 0x25:
    iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x124))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x120));
    if (iVar6 != 0) {
      func_0x08a60bc8(*(undefined4 *)(param_1 + 8),0,*(undefined4 *)(param_1 + 0xc),0,
                      *(float *)(param_1 + 0x10) * 0.017453292,*(undefined4 *)(param_1 + 0x14),
                      *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),iVar9,1,0,
                      *(int *)(param_1 + 0x28) != 0);
      FUN_08834c10(iVar9,0xf,0);
      if (*(int *)(param_1 + 0x20) != 0) {
        func_0x08a60e7c(iVar9);
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        func_0x08a60e94(iVar9);
      }
    }
    break;
  case 0x26:
    iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x124))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x120));
    if (iVar6 != 0) {
      iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x124))
                        (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x120));
      local_130 = *(undefined4 *)(iVar6 + 0x90);
      local_128 = *(undefined4 *)(iVar6 + 0x98);
      local_124 = 0;
      local_12c = 0.0;
      FUN_089a3ebc(&local_120);
      local_e0 = local_120;
      local_dc = local_11c;
      local_d8 = local_118;
      local_d4 = local_114;
      local_d0 = local_110;
      local_cc = local_10c;
      local_c8 = local_108;
      local_c4 = local_104;
      local_c0 = local_100;
      local_bc = local_fc;
      local_b8 = local_f8;
      local_b4 = local_f4;
      local_b0 = local_f0;
      local_ac = local_ec;
      local_a8 = local_e8;
      local_a4 = local_e4;
      FUN_089a4124(*(float *)(param_1 + 8) * 0.017453292,&local_120,&local_120);
      FUN_089a3f40(&local_130,&local_120,&local_130);
      FUN_089a3a44(*(undefined4 *)(param_1 + 0xc),&local_130,&local_130);
      if (*(float *)(param_1 + 0x10) <= -100.0) {
        iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x124))
                          (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x120));
        local_12c = -*(float *)(iVar6 + 0x3c0);
      }
      else {
        local_12c = *(float *)(param_1 + 0x10);
      }
      iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x124))
                        (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x120));
      local_140 = *(undefined4 *)(iVar6 + 0x80);
      local_13c = *(float *)(iVar6 + 0x84);
      local_138 = *(undefined4 *)(iVar6 + 0x88);
      local_134 = *(undefined4 *)(iVar6 + 0x8c);
      FUN_08835aa4(iVar9,&local_140);
      local_140 = local_130;
      local_13c = local_12c;
      local_138 = local_128;
      local_134 = local_124;
      FUN_08833ad8(iVar9,&local_140);
    }
    break;
  case 0x27:
    fVar10 = *(float *)(param_1 + 0x24);
    if (fVar10 <= 0.0) {
      fVar10 = *(float *)(param_1 + 8);
    }
    func_0x08a60bc8(*(undefined4 *)(param_1 + 8),fVar10,*(undefined4 *)(param_1 + 0xc),
                    *(undefined4 *)(param_1 + 0x10),*(float *)(param_1 + 0x14) * 0.017453292,
                    *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                    *(undefined4 *)(param_1 + 0x20),iVar9,0,1,*(int *)(param_1 + 0x38) != 0);
    iVar6 = FUN_088374b0(iVar9);
    if (iVar6 != 0) {
      FUN_08834c10(iVar9,0xf,0);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      func_0x08a60e4c(iVar9);
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      func_0x08a60e64(iVar9);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      func_0x08a60e7c(iVar9);
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      func_0x08a60e94(iVar9);
    }
    break;
  case 0x28:
    func_0x08a60bc8(*(undefined4 *)(param_1 + 8),0,*(undefined4 *)(param_1 + 0xc),0,
                    *(float *)(param_1 + 0x10) * 0.017453292,*(undefined4 *)(param_1 + 0x14),
                    *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),iVar9,1,1,
                    *(int *)(param_1 + 0x30) != 0);
    FUN_08834c10(iVar9,0xf,0);
    if (*(int *)(param_1 + 0x20) != 0) {
      func_0x08a60e4c(iVar9);
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      func_0x08a60e64(iVar9);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      func_0x08a60e7c(iVar9);
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      func_0x08a60e94(iVar9);
    }
    break;
  case 0x29:
    if ((((*(uint *)(iVar9 + 0x38c) & 0x4000) == 0) &&
        (iVar6 = (int)*(short *)(*(int *)(iVar9 + 0x52c) + 0x14), *(int *)(param_1 + 0x10) <= iVar6)
        ) && (iVar6 < *(int *)(param_1 + 0x14))) {
      (**(code **)(*(int *)(iVar9 + 0x544) + 0x11c))
                (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x118),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc));
    }
    break;
  case 0x2b:
    (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
              (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    FUN_089a38e0(&local_a0,iVar9 + 0x80,iVar6 + 0x80);
    local_150 = local_a0;
    local_14c = local_9c;
    local_148 = local_98;
    local_144 = local_94;
    auVar4._4_4_ = local_9c;
    auVar4._0_4_ = local_a0;
    auVar4._8_4_ = local_98;
    auVar3._4_4_ = local_9c;
    auVar3._0_4_ = local_a0;
    auVar3._8_4_ = local_98;
    auVar1._4_4_ = local_9c;
    auVar1._0_4_ = local_a0;
    auVar1._8_4_ = local_98;
    uVar8 = vdot_t(auVar1,auVar3);
    uVar12 = vzero_s();
    uVar13 = vcmp_s(8,uVar8,local_a0);
    local_80 = vsqrt_s(uVar8);
    vrcp_s(local_80);
    uVar8 = vcmovt_s(uVar12,(byte)uVar13 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar4,uVar8);
    local_170 = auVar1._0_4_;
    local_16c = auVar1._4_4_;
    local_168 = auVar1._8_4_;
    local_154 = local_94;
    local_164 = local_94;
    local_160 = local_170;
    local_15c = local_16c;
    local_158 = local_168;
    FUN_08835ba4(iVar9,&local_170);
    break;
  case 0x2c:
    if (*(float *)(param_1 + 8) < *(float *)(iVar9 + 0x1b0)) {
      (**(code **)(*(int *)(iVar9 + 0x544) + 0xc4))
                (0x41000000,iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0xc0));
    }
    break;
  case 0x2d:
    if ((*(uint *)(iVar9 + 0x38c) & 0x4000) == 0) {
      if ((*(uint *)(param_2 + 0x54) & 0x40) == 0) {
        (**(code **)(*(int *)(iVar9 + 0x544) + 0x11c))
                  (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x118),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0xc));
      }
      else {
        (**(code **)(*(int *)(iVar9 + 0x544) + 0x11c))
                  (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x118),
                   *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      }
    }
    break;
  case 0x2e:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      bVar2 = false;
      if (*(int *)(param_1 + 0x10) < 1) {
        bVar2 = true;
      }
      else {
        DAT_09af8b00 = DAT_09af8b00 * 0x343fd + 0x269ec3;
        if ((int)(DAT_09af8b00 >> 0x10 & 0x7fffU) % *(int *)(param_1 + 0x10) == 0) {
          bVar2 = true;
        }
      }
      if (((bVar2) && (*(int *)(param_1 + 8) <= (int)(uint)**(byte **)(iVar9 + 0x52c))) &&
         ((*(uint *)(*(short *)(iVar9 + 0x10cc) * 0x1060 + 0x9afc5d4 +
                    (*(uint *)(param_1 + 0xc) >> 5) * 4) & 1 << (*(uint *)(param_1 + 0xc) & 0x1f))
          != 0)) {
        *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 0x40;
      }
    }
    break;
  case 0x2f:
    if ((*(uint *)(param_2 + 0x54) & 0x40) == 0) {
      iVar9 = FUN_088a9de8(*(undefined4 *)(*(int *)(iVar9 + 0x390) + 0x5c),
                           *(undefined4 *)(param_1 + 8),iVar9 + 0x4c8,0,0);
      if (iVar9 != 0) {
        *(float *)(iVar9 + 0xe4) = (float)*(int *)(param_1 + 0xc);
      }
    }
    else {
      iVar9 = FUN_088a9de8(*(undefined4 *)(*(int *)(iVar9 + 0x390) + 0x5c),
                           *(undefined4 *)(param_1 + 0x10),iVar9 + 0x4c8,0,0);
      if (iVar9 != 0) {
        *(float *)(iVar9 + 0xe4) = (float)*(int *)(param_1 + 0x14);
      }
    }
    break;
  case 0x30:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      iVar7 = *(int *)(param_1 + 0x10);
      iVar6 = FUN_0884f630(iVar9 + 0xd64);
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          iVar5 = FUN_0884f67c(iVar9 + 0xd64,iVar6);
          if (iVar5 == iVar7) {
            iVar5 = FUN_0884f6b8(iVar9 + 0xd64,iVar6);
            iVar5 = FUN_088a9de8(*(undefined4 *)(*(int *)(iVar5 + 0x390) + 0x5c),
                                 *(undefined4 *)(param_1 + 8),iVar5 + 0x4c8,0,0);
            if (iVar5 != 0) {
              *(float *)(iVar5 + 0xe4) = (float)*(int *)(param_1 + 0xc);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x10);
      }
    }
    break;
  case 0x31:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar9 + 0x6dc) = *(undefined4 *)(param_1 + 8);
    }
    break;
  case 0x32:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      func_0x08a62dd8(iVar9 + 0x1120);
    }
    break;
  case 0x33:
    if (((*(uint *)(iVar9 + 0x38c) & 0x4000) == 0) && (iVar6 = FUN_0883739c(iVar9), iVar6 != 0)) {
      bVar2 = false;
      if ((*(int *)(param_1 + 0x14) != 0) &&
         ((int)(uint)*(byte *)(iVar9 + 0x107f) <= *(int *)(param_1 + 0x10))) {
        bVar2 = true;
      }
      if ((*(int *)(param_1 + 0x18) != 0) &&
         (*(uint *)(param_1 + 0x10) == (uint)*(byte *)(iVar9 + 0x107f))) {
        bVar2 = true;
      }
      if ((*(int *)(param_1 + 0x1c) != 0) &&
         (*(int *)(param_1 + 0x10) <= (int)(uint)*(byte *)(iVar9 + 0x107f))) {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*(int *)(iVar9 + 0x544) + 0x11c))
                  (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x118),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0xc));
      }
    }
    break;
  case 0x35:
    if ((*(char *)(iVar9 + 0x542) == '\x03') &&
       (iVar6 = *(int *)(*(int *)(*(int *)(iVar9 + 0x5d4) + 0x390) + 0x5c), iVar6 != 0)) {
      iVar7 = *(int *)(param_1 + 0xc);
      uVar8 = *(undefined4 *)(param_1 + 0x10);
      iVar6 = FUN_088a9de8(iVar6,*(undefined4 *)(param_1 + 8),iVar9 + 0x4c8,0,0);
      if (iVar6 != 0) {
        *(float *)(iVar6 + 0xe4) = (float)iVar7;
        FUN_088a6a38(0xbf800000,iVar6,0,iVar9 + 0x4c8,uVar8,0xffffffff);
      }
    }
    break;
  case 0x36:
    iVar6 = FUN_0883739c(iVar9);
    if (iVar6 != 0) {
      func_0x08b34f40(*(undefined4 *)(param_1 + 8),iVar9,*(undefined4 *)(param_1 + 0xc),
                      *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                      *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                      *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                      *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                      *(undefined4 *)(param_1 + 0x30));
    }
    break;
  case 0x37:
    iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
    if ((iVar6 != 0) &&
       (iVar6 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
                          (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130)),
       (*(uint *)(iVar6 + 0x188) & 0x10) != 0)) {
      iVar9 = (**(code **)(*(int *)(iVar9 + 0x544) + 0x134))
                        (iVar9 + *(short *)(*(int *)(iVar9 + 0x544) + 0x130));
      *(uint *)(iVar9 + 0x188) = *(uint *)(iVar9 + 0x188) & 0xffffffef;
    }
  }
  return;
}

