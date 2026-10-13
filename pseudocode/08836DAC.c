/* Entry 0x08836DAC | file offset 0x00033D84 | FUN_08836dac | bytes 616 */

float FUN_08836dac(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [4];
  float local_13c;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 auStack_124 [4];
  float local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_134 = 0;
  local_118 = 0;
  iVar1 = FUN_08835358(param_2);
  if (iVar1 == 0) {
    FUN_089a38e0(&local_30,param_2 + 0x80,param_1 + 0x80);
    local_a0 = local_30;
    local_9c = local_2c;
    local_98 = local_28;
    local_94 = local_24;
    local_150 = local_30;
    local_14c = local_2c;
    local_148 = local_28;
    local_144 = local_24;
    FUN_089a3868(param_3,&local_150);
    local_13c = 0.0;
  }
  else {
    FUN_08812664(auStack_140,param_2,iVar1);
    uVar2 = FUN_08835358(param_1);
    FUN_08812664(auStack_124,param_1,uVar2);
    local_90 = local_130;
    local_8c = local_12c;
    local_c0 = local_130;
    local_88 = local_128;
    local_bc = local_12c;
    local_84 = 0x3f800000;
    local_b8 = local_128;
    local_b4 = 0x3f800000;
    local_f0 = local_130;
    local_ec = local_12c;
    local_e8 = local_128;
    local_e4 = 0x3f800000;
    local_70 = local_114;
    local_b0 = local_114;
    local_6c = local_110;
    local_ac = local_110;
    local_68 = local_10c;
    local_64 = 0x3f800000;
    local_a8 = local_10c;
    local_a4 = 0x3f800000;
    local_e0 = local_114;
    local_dc = local_110;
    local_d8 = local_10c;
    local_d4 = 0x3f800000;
    FUN_089a38e0(&local_50,&local_f0,&local_e0);
    local_d0 = local_50;
    local_cc = local_4c;
    local_c8 = local_48;
    local_c4 = local_44;
    local_100 = local_50;
    local_fc = local_4c;
    local_f8 = local_48;
    local_f4 = local_44;
    FUN_089a3868(param_3,&local_100);
    local_13c = local_13c + local_120;
  }
  return local_13c;
}

