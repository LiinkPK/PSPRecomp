/* Entry 0x08869520 | file offset 0x000664F8 | FUN_08869520 | bytes 668 */

undefined4 FUN_08869520(float param_1,int param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  fVar2 = (float)FUN_089a3b10(param_3,param_4);
  if (-0.999999 <= fVar2) {
    if (0.999999 < fVar2) {
      FUN_089a3868(param_2,param_3);
    }
    else {
      fVar2 = (float)FUN_089a4520(fVar2);
      fVar3 = (float)FUN_089a47a4(fVar2);
      if (fVar3 == 0.0) {
        return 0;
      }
      local_c8 = (float)FUN_089a47a4(fVar2 * (1.0 - param_1));
      local_c8 = local_c8 / fVar3;
      local_74 = 0x3f800000;
      local_94 = 0x3f800000;
      local_d0 = *param_3 * local_c8;
      local_cc = param_3[1] * local_c8;
      local_c8 = param_3[2] * local_c8;
      local_c4 = 0x3f800000;
      local_a0 = local_d0;
      local_9c = local_cc;
      local_98 = local_c8;
      local_80 = local_d0;
      local_7c = local_cc;
      local_78 = local_c8;
      local_b8 = (float)FUN_089a47a4(param_1 * fVar2);
      local_b8 = local_b8 / fVar3;
      local_54 = 0x3f800000;
      local_84 = 0x3f800000;
      local_c0 = *param_4 * local_b8;
      local_bc = param_4[1] * local_b8;
      local_b8 = param_4[2] * local_b8;
      local_b4 = 0x3f800000;
      local_90 = local_c0;
      local_8c = local_bc;
      local_88 = local_b8;
      local_60 = local_c0;
      local_5c = local_bc;
      local_58 = local_b8;
      FUN_089a38a8(&local_40,&local_d0,&local_c0);
      local_b0 = local_40;
      local_ac = local_3c;
      local_a8 = local_38;
      local_a4 = local_34;
      local_e0 = local_40;
      local_dc = local_3c;
      local_d8 = local_38;
      local_d4 = local_34;
      FUN_089a3868(param_2,&local_e0);
    }
    uVar1 = 1;
    *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

