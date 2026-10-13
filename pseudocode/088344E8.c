/* Entry 0x088344E8 | file offset 0x000314C0 | FUN_088344e8 | bytes 856 */

void FUN_088344e8(float param_1,float param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_130 [16];
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
  
  if (((param_1 != 0.0) &&
      (fVar4 = (float)FUN_089a4500(*(undefined4 *)(param_4 + 0xc0)), fVar4 < 1e+08)) &&
     (fVar4 = (float)FUN_089a4500(*(undefined4 *)(param_4 + 0xc4)), fVar4 < 1e+08)) {
    FUN_089a4500(*(undefined4 *)(param_4 + 200));
  }
  fVar4 = (float)FUN_08838300(param_4);
  if (fVar4 < 2.0) {
    fVar4 = (float)FUN_08838300(param_4);
    uVar2 = DAT_09af84cc;
    uVar1 = DAT_09af84c8;
    uVar5 = DAT_09af84c4;
    if (fVar4 <= 0.0) {
      *param_3 = DAT_09af84c0;
      param_3[1] = uVar5;
      param_3[2] = uVar1;
      param_3[3] = uVar2;
      return;
    }
    fVar4 = (float)FUN_08838300(param_4);
    param_1 = 1.0 - (1.0 - param_1) / (2.0 / fVar4);
    param_2 = 1.0 - (1.0 - param_2) / (2.0 / fVar4);
  }
  iVar3 = param_4 + 0xc0;
  if (0.0 < *(float *)(param_4 + 0xbc)) {
    FUN_089a3a44(&local_b0,param_4 + 0xb0);
    local_f0 = local_b0;
    local_ec = local_ac;
    local_e8 = local_a8;
    local_e4 = local_a4;
    local_110 = local_b0;
    local_10c = local_ac;
    local_108 = local_a8;
    local_104 = local_a4;
    FUN_089a39ec(param_1,&local_90,&local_110,iVar3);
    local_100 = local_90;
    local_fc = local_8c;
    local_f8 = local_88;
    local_f4 = local_84;
    local_120 = local_90;
    local_11c = local_8c;
    local_118 = local_88;
    local_114 = local_84;
    FUN_089a3868(auStack_130,&local_120);
  }
  else {
    FUN_089a3a44(param_2,&local_70,iVar3);
    local_d0 = local_70;
    local_cc = local_6c;
    local_c8 = local_68;
    local_c4 = local_64;
    local_e0 = local_70;
    local_dc = local_6c;
    local_d8 = local_68;
    local_d4 = local_64;
    FUN_089a3868(auStack_130,&local_e0);
  }
  FUN_089a3868(iVar3,auStack_130);
  uVar5 = FUN_08838300(param_4);
  FUN_089a3a44(uVar5,&local_50,auStack_130);
  *param_3 = local_50;
  param_3[1] = local_4c;
  param_3[2] = local_48;
  param_3[3] = local_44;
  return;
}

