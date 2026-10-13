/* Entry 0x0885F728 | file offset 0x0005C700 | FUN_0885f728 | bytes 1900 */

void FUN_0885f728(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5,float *param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  FUN_089a3528(&local_138,param_2,param_1);
  local_1d4 = local_138;
  local_1d0 = local_134;
  local_1cc = local_130;
  local_1f8 = local_138;
  local_1f4 = local_134;
  local_1f0 = local_130;
  FUN_089a3528(&local_120,param_4,param_3);
  local_1c8 = local_120;
  local_1c4 = local_11c;
  local_1c0 = local_118;
  local_1ec = local_120;
  local_1e8 = local_11c;
  local_1e4 = local_118;
  FUN_089a3528(&local_108,param_1,param_3);
  local_1bc = local_108;
  local_1b8 = local_104;
  local_1b4 = local_100;
  local_1e0 = local_108;
  local_1dc = local_104;
  local_1d8 = local_100;
  fVar1 = (float)FUN_089a3718(&local_1f8,&local_1f8);
  fVar2 = (float)FUN_089a3718(&local_1ec,&local_1ec);
  fVar3 = (float)FUN_089a3718(&local_1ec,&local_1e0);
  if ((fVar1 <= 1.1920929e-07) && (fVar2 <= 1.1920929e-07)) {
    *param_6 = 0.0;
    *param_5 = 0.0;
    FUN_089a34c0(param_7,param_1);
    FUN_089a34c0(param_8,param_3);
    FUN_089a3528(&local_f0,param_7,param_8);
    local_198 = local_f0;
    local_194 = local_ec;
    local_190 = local_e8;
    local_1b0 = local_f0;
    local_1ac = local_ec;
    local_1a8 = local_e8;
    FUN_089a3528(&local_d8,param_7,param_8);
    local_18c = local_d8;
    local_188 = local_d4;
    local_184 = local_d0;
    local_1a4 = local_d8;
    local_1a0 = local_d4;
    local_19c = local_d0;
    FUN_089a3718(&local_1b0,&local_1a4);
    return;
  }
  if (fVar1 <= 1.1920929e-07) {
    *param_5 = 0.0;
    *param_6 = fVar3 / fVar2;
    if (fVar3 / fVar2 < 0.0) {
      *param_6 = 0.0;
    }
    if (1.0 < *param_6) {
      *param_6 = 1.0;
    }
    goto LAB_0885fc24;
  }
  fVar4 = (float)FUN_089a3718(&local_1f8,&local_1e0);
  if (fVar2 <= 1.1920929e-07) {
    *param_6 = 0.0;
    *param_5 = -fVar4 / fVar1;
    if (-fVar4 / fVar1 < 0.0) {
      *param_5 = 0.0;
    }
    if (1.0 < *param_5) {
      *param_5 = 1.0;
    }
    goto LAB_0885fc24;
  }
  fVar5 = (float)FUN_089a3718(&local_1f8,&local_1ec);
  fVar6 = fVar1 * fVar2 - fVar5 * fVar5;
  if (fVar6 == 0.0) {
    *param_5 = 0.0;
LAB_0885fb3c:
    fVar6 = *param_5;
  }
  else {
    fVar6 = (fVar5 * fVar3 - fVar4 * fVar2) / fVar6;
    *param_5 = fVar6;
    if (fVar6 < 0.0) {
      *param_5 = 0.0;
    }
    if (1.0 < *param_5) {
      *param_5 = 1.0;
      goto LAB_0885fb3c;
    }
    fVar6 = *param_5;
  }
  fVar3 = fVar5 * fVar6 + fVar3;
  if (fVar3 < 0.0) {
    *param_6 = 0.0;
    *param_5 = -fVar4 / fVar1;
    if (-fVar4 / fVar1 < 0.0) {
      *param_5 = 0.0;
    }
    if (1.0 < *param_5) {
      *param_5 = 1.0;
    }
  }
  else if (fVar2 < fVar3) {
    fVar1 = (fVar5 - fVar4) / fVar1;
    *param_6 = 1.0;
    *param_5 = fVar1;
    if (fVar1 < 0.0) {
      *param_5 = 0.0;
    }
    if (1.0 < *param_5) {
      *param_5 = 1.0;
    }
  }
  else {
    *param_6 = fVar3 / fVar2;
  }
LAB_0885fc24:
  FUN_089a3680(*param_5,&local_c0,&local_1f8);
  local_174 = local_c0;
  local_170 = local_bc;
  local_16c = local_b8;
  local_204 = local_c0;
  local_200 = local_bc;
  local_1fc = local_b8;
  FUN_089a34f4(&local_a8,param_1,&local_204);
  local_180 = local_a8;
  local_17c = local_a4;
  local_178 = local_a0;
  local_210 = local_a8;
  local_20c = local_a4;
  local_208 = local_a0;
  FUN_089a34c0(param_7,&local_210);
  FUN_089a3680(*param_6,&local_90,&local_1ec);
  local_15c = local_90;
  local_158 = local_8c;
  local_154 = local_88;
  local_210 = local_90;
  local_20c = local_8c;
  local_208 = local_88;
  FUN_089a34f4(&local_78,param_3,&local_210);
  local_168 = local_78;
  local_164 = local_74;
  local_160 = local_70;
  local_204 = local_78;
  local_200 = local_74;
  local_1fc = local_70;
  FUN_089a34c0(param_8,&local_204);
  FUN_089a3528(&local_60,param_7,param_8);
  local_150 = local_60;
  local_14c = local_5c;
  local_148 = local_58;
  local_204 = local_60;
  local_200 = local_5c;
  local_1fc = local_58;
  FUN_089a3528(&local_48,param_7,param_8);
  local_144 = local_48;
  local_140 = local_44;
  local_13c = local_40;
  local_210 = local_48;
  local_20c = local_44;
  local_208 = local_40;
  FUN_089a3718(&local_204,&local_210);
  return;
}

