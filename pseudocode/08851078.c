/* Entry 0x08851078 | file offset 0x0004E050 | FUN_08851078 | bytes 836 */

void FUN_08851078(int param_1)

{
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
  undefined4 local_12c;
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
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(short *)(param_1 + 0x60a) < 0) || (*(char *)(param_1 + 0x611) != '\0')) {
    if (*(char *)(param_1 + 0x611) != '\0') {
      *(undefined1 *)(param_1 + 0x611) = 0;
      FUN_08851480(&local_50,param_1);
      local_e0 = local_50;
      local_dc = local_4c;
      local_d8 = local_48;
      local_d4 = local_44;
      local_d0 = local_40;
      local_cc = local_3c;
      local_c8 = local_38;
      local_c4 = local_34;
      local_c0 = local_30;
      local_bc = local_2c;
      local_b8 = local_28;
      local_b4 = local_24;
      local_b0 = local_20;
      local_ac = local_1c;
      local_a8 = local_18;
      local_a4 = local_14;
      FUN_089a3efc(auStack_90,&local_e0);
      *(undefined2 *)(param_1 + 0x60a) = 0xffff;
      local_a0 = local_60;
      local_9c = local_5c;
      local_98 = local_58;
      local_94 = local_54;
      FUN_088359a8(param_1,&local_a0,1);
      local_a0 = local_70;
      local_9c = local_6c;
      local_98 = local_68;
      local_94 = local_64;
      FUN_08835ba4(param_1,&local_a0);
      local_a0 = local_80;
      local_9c = local_7c;
      local_98 = local_78;
      local_94 = local_74;
      FUN_08835bdc(param_1,&local_a0);
    }
    FUN_0883d074(param_1);
  }
  else {
    FUN_08851480(&local_120,param_1);
    local_170 = local_120;
    local_16c = local_11c;
    local_168 = local_118;
    local_164 = local_114;
    local_160 = local_110;
    local_15c = local_10c;
    local_158 = local_108;
    local_154 = local_104;
    local_150 = local_100;
    local_14c = local_fc;
    local_148 = local_f8;
    local_144 = local_f4;
    local_140 = local_f0;
    local_13c = local_ec;
    local_138 = local_e8;
    local_134 = local_e4;
    FUN_089a3efc(param_1,&local_170);
    local_130 = *(undefined4 *)(param_1 + 0x30);
    local_12c = *(undefined4 *)(param_1 + 0x34);
    local_128 = *(undefined4 *)(param_1 + 0x38);
    local_124 = *(undefined4 *)(param_1 + 0x3c);
    FUN_088359a8(param_1,&local_130,1);
    local_130 = *(undefined4 *)(param_1 + 0x20);
    local_12c = *(undefined4 *)(param_1 + 0x24);
    local_128 = *(undefined4 *)(param_1 + 0x28);
    local_124 = *(undefined4 *)(param_1 + 0x2c);
    FUN_08835ba4(param_1,&local_130);
    local_130 = *(undefined4 *)(param_1 + 0x10);
    local_12c = *(undefined4 *)(param_1 + 0x14);
    local_128 = *(undefined4 *)(param_1 + 0x18);
    local_124 = *(undefined4 *)(param_1 + 0x1c);
    FUN_08835bdc(param_1,&local_130);
    (**(code **)(*(int *)(param_1 + 0x544) + 0xf4))
              (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0xf0));
    if (*(char *)(param_1 + 0x610) != '\0') {
      FUN_0885106c(param_1);
    }
  }
  return;
}

