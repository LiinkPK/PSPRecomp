/* Entry 0x08812414 | file offset 0x0000F3EC | FUN_08812414 | bytes 592 */

void FUN_08812414(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 auStack_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_40;
  float local_3c;
  float local_38;
  
  local_b8 = 1.0 / (*(float *)(param_1 + 4) + *(float *)(param_2 + 4));
  local_b4 = 1.0 / (*(float *)(param_1 + 8) + *(float *)(param_2 + 8));
  local_b0 = local_b8;
  FUN_089a3528(&local_70,param_2 + 0x10,param_1 + 0x10);
  local_a0 = local_70;
  local_9c = local_6c;
  local_98 = local_68;
  local_d0 = local_70;
  local_cc = local_6c;
  local_c8 = local_68;
  FUN_089a34c0(auStack_ac,&local_d0);
  FUN_089a355c(&local_58,auStack_ac,&local_b8);
  local_94 = local_58;
  local_90 = local_54;
  local_8c = local_50;
  local_d0 = local_58;
  local_cc = local_54;
  local_c8 = local_50;
  FUN_089a34c0(&local_c4,&local_d0);
  fVar1 = local_c4 * local_c4 + local_bc * local_bc;
  if (0.0 < fVar1) {
    fVar1 = (float)FUN_089a2c68((1.0 - local_c0 * local_c0) / fVar1);
    FUN_089a3680((fVar1 - 1.0) * (*(float *)(param_1 + 4) + *(float *)(param_2 + 4) + 0.05),
                 &local_40,&local_c4);
    *param_3 = local_40;
    param_3[1] = local_3c;
    param_3[3] = 1.0;
    param_3[2] = local_38;
  }
  else {
    fVar2 = *(float *)(param_1 + 4);
    fVar1 = *(float *)(param_2 + 4);
    param_3[2] = 0.0;
    *param_3 = fVar2 + fVar1 + 0.05;
  }
  param_3[1] = 0.0;
  return;
}

