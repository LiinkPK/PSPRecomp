/* Entry 0x08812054 | file offset 0x0000F02C | FUN_08812054 | bytes 348 */

bool FUN_08812054(int param_1,int param_2)

{
  float fVar1;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_64 = 1.0 / (*(float *)(param_1 + 4) + *(float *)(param_2 + 4));
  local_60 = 1.0 / (*(float *)(param_1 + 8) + *(float *)(param_2 + 8));
  local_5c = local_64;
  FUN_089a3528(&local_40,param_2 + 0x10,param_1 + 0x10);
  local_4c = local_40;
  local_48 = local_3c;
  local_44 = local_38;
  local_a4 = local_40;
  local_a0 = local_3c;
  local_9c = local_38;
  FUN_089a355c(&local_28,&local_a4,&local_64);
  local_58 = local_28;
  local_54 = local_24;
  local_50 = local_20;
  local_b0 = local_28;
  local_ac = local_24;
  local_a8 = local_20;
  FUN_089a34c0(&local_70,&local_b0);
  local_90 = local_70;
  local_8c = local_6c;
  local_88 = local_68;
  local_84 = 0x3f800000;
  local_80 = local_70;
  local_7c = local_6c;
  local_78 = local_68;
  local_74 = 0x3f800000;
  fVar1 = (float)FUN_089a3b10(&local_90,&local_80);
  return fVar1 < 1.0;
}

