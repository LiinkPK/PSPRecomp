/* Entry 0x08836A30 | file offset 0x00033A08 | FUN_08836a30 | bytes 632 */

bool FUN_08836a30(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
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
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = FUN_0886b6bc(param_1[0xe5]);
  if (iVar1 != 0) {
    local_f0 = *param_1;
    local_ec = param_1[1];
    local_e8 = param_1[2];
    local_e4 = param_1[3];
    local_e0 = param_1[4];
    local_dc = param_1[5];
    local_d8 = param_1[6];
    local_d4 = param_1[7];
    local_d0 = param_1[8];
    local_cc = param_1[9];
    local_c8 = param_1[10];
    local_c4 = param_1[0xb];
    local_c0 = param_1[0xc];
    local_bc = param_1[0xd];
    local_b8 = param_1[0xe];
    local_b4 = param_1[0xf];
    *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
    FUN_089a3f40(&local_80,&local_f0,param_2);
    local_b0 = local_80;
    local_ac = local_7c;
    local_a8 = local_78;
    local_a4 = local_74;
    local_100 = local_80;
    local_fc = local_7c;
    local_f8 = local_78;
    local_f4 = local_74;
    FUN_089a3868(param_2,&local_100);
    *(undefined4 *)(param_3 + 0xc) = 0;
    FUN_089a3f40(&local_60,&local_f0,param_3);
    local_a0 = local_60;
    local_9c = local_5c;
    local_98 = local_58;
    local_94 = local_54;
    local_100 = local_60;
    local_fc = local_5c;
    local_f8 = local_58;
    local_f4 = local_54;
    FUN_089a3868(param_3,&local_100);
    *(undefined4 *)(param_4 + 0xc) = 0;
    FUN_089a3f40(&local_40,&local_f0,param_4);
    local_90 = local_40;
    local_8c = local_3c;
    local_88 = local_38;
    local_84 = local_34;
    local_100 = local_40;
    local_fc = local_3c;
    local_f8 = local_38;
    local_f4 = local_34;
    FUN_089a3868(param_4,&local_100);
  }
  return iVar1 != 0;
}

