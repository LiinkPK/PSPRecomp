/* Entry 0x088A82D8 | file offset 0x000A52B0 | FUN_088a82d8 | bytes 1336 */

void FUN_088a82d8(float *param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
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
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  if (((uint)param_2[0x37] & 1) == 0) {
    pfVar3 = (float *)param_2[0x30];
    local_140 = *pfVar3 + *param_2;
    local_13c = pfVar3[1] + param_2[1];
    local_138 = pfVar3[2] + param_2[2];
    local_134 = 0x3f800000;
    local_130 = pfVar3[3] * 0.017453292 + param_2[3];
    local_12c = pfVar3[4] * 0.017453292 + param_2[4];
    local_128 = pfVar3[5] * 0.017453292 + param_2[5];
    local_124 = 0;
    local_120 = pfVar3[6] * param_2[6];
    local_11c = pfVar3[7] * param_2[7];
    local_114 = 0x3f800000;
    local_118 = pfVar3[8] * param_2[8];
    FUN_089a3ebc(&local_110);
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
    local_a0 = local_e0;
    local_9c = local_dc;
    local_98 = local_d8;
    local_94 = local_d4;
    FUN_089a3a44(local_120,&local_110,&local_110);
    FUN_089a3a44(local_11c,&local_100,&local_100);
    FUN_089a3a44(local_118,&local_f0,&local_f0);
    FUN_089a40c8(local_128,&local_110,&local_110);
    FUN_089a4124(local_12c,&local_110,&local_110);
    FUN_089a4180(local_130,&local_110,&local_110);
    FUN_089a3fb8(&local_110,param_2 + 0xc,&local_110);
    FUN_089a4094(&local_110,&local_110,&local_140);
    *param_1 = local_110;
    param_1[1] = local_10c;
    param_1[2] = local_108;
    param_1[3] = local_104;
    param_1[4] = local_100;
    param_1[5] = local_fc;
    param_1[6] = local_f8;
    param_1[7] = local_f4;
    param_1[8] = local_f0;
    param_1[9] = local_ec;
    param_1[10] = local_e8;
    param_1[0xb] = local_e4;
    param_1[0xc] = local_e0;
    param_1[0xd] = local_dc;
    param_1[0xe] = local_d8;
    param_1[0xf] = local_d4;
  }
  else if (param_2[0x35] == 0.0) {
    if ((param_2[0x34] != 0.0) &&
       (iVar4 = *(int *)((int)param_2[0x34] + 0x2c),
       iVar4 = (**(code **)(iVar4 + 0x14))
                         ((int)param_2[0x34] + (int)*(short *)(iVar4 + 0x10),param_2[0x3c]),
       iVar4 != 0)) {
      fVar1 = 0.0;
      if (param_2[0x3c] == 0.0) {
        fVar1 = param_2[0x3d];
      }
      if (fVar1 != -NAN) {
        uVar2 = *(uint *)((int)param_2[0x30] + 0x7c);
        FUN_088a9024(param_2,&local_1c0,iVar4,fVar1,(uVar2 & 2) != 0,(uVar2 & 4) != 0,
                     (uVar2 & 8) != 0);
        *param_1 = local_1c0;
        param_1[1] = local_1bc;
        param_1[2] = local_1b8;
        param_1[3] = local_1b4;
        param_1[4] = local_1b0;
        param_1[5] = local_1ac;
        param_1[6] = local_1a8;
        param_1[7] = local_1a4;
        param_1[8] = local_1a0;
        param_1[9] = local_19c;
        param_1[10] = local_198;
        param_1[0xb] = local_194;
        param_1[0xc] = local_190;
        param_1[0xd] = local_18c;
        param_1[0xe] = local_188;
        param_1[0xf] = local_184;
        return;
      }
    }
    FUN_089a3ebc(&local_200);
    *param_1 = local_200;
    param_1[1] = local_1fc;
    param_1[2] = local_1f8;
    param_1[3] = local_1f4;
    param_1[4] = local_1f0;
    param_1[5] = local_1ec;
    param_1[6] = local_1e8;
    param_1[7] = local_1e4;
    param_1[8] = local_1e0;
    param_1[9] = local_1dc;
    param_1[10] = local_1d8;
    param_1[0xb] = local_1d4;
    param_1[0xc] = local_1d0;
    param_1[0xd] = local_1cc;
    param_1[0xe] = local_1c8;
    param_1[0xf] = local_1c4;
  }
  else {
    fVar5 = param_2[0x1d];
    fVar6 = param_2[0x1e];
    *param_1 = param_2[0x1c];
    fVar1 = param_2[0x1f];
    param_1[1] = fVar5;
    fVar5 = param_2[0x20];
    param_1[2] = fVar6;
    fVar6 = param_2[0x21];
    param_1[3] = fVar1;
    fVar1 = param_2[0x22];
    param_1[4] = fVar5;
    fVar5 = param_2[0x23];
    param_1[5] = fVar6;
    fVar6 = param_2[0x24];
    param_1[6] = fVar1;
    fVar1 = param_2[0x25];
    param_1[7] = fVar5;
    fVar5 = param_2[0x26];
    param_1[8] = fVar6;
    fVar6 = param_2[0x27];
    param_1[9] = fVar1;
    fVar1 = param_2[0x28];
    param_1[10] = fVar5;
    fVar5 = param_2[0x29];
    param_1[0xb] = fVar6;
    fVar6 = param_2[0x2a];
    param_1[0xc] = fVar1;
    fVar1 = param_2[0x2b];
    param_1[0xd] = fVar5;
    param_1[0xe] = fVar6;
    param_1[0xf] = fVar1;
  }
  return;
}

