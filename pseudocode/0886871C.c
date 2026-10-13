/* Entry 0x0886871C | file offset 0x000656F4 | FUN_0886871c | bytes 1136 */

void FUN_0886871c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
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
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
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
  
  iVar1 = FUN_089a3b50(param_4);
  if (iVar1 == 1) {
    uVar4 = param_2[1];
    uVar6 = param_2[2];
    uVar5 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar6;
    param_1[3] = uVar5;
  }
  else {
    iVar1 = FUN_089a3b50(param_4,param_3);
    if (iVar1 == 1) {
      uVar4 = param_3[1];
      uVar6 = param_3[2];
      uVar5 = param_3[3];
      *param_1 = *param_3;
      param_1[1] = uVar4;
      param_1[2] = uVar6;
      param_1[3] = uVar5;
    }
    else {
      fVar2 = (float)FUN_089a3c18(param_2,param_3);
      if (fVar2 == 0.0) {
        uVar4 = param_2[1];
        uVar6 = param_2[2];
        uVar5 = param_2[3];
        *param_1 = *param_2;
        param_1[1] = uVar4;
        param_1[2] = uVar6;
        param_1[3] = uVar5;
      }
      else {
        FUN_089a38e0(&local_c0,param_4,param_2);
        local_110 = local_c0;
        local_10c = local_bc;
        local_108 = local_b8;
        local_104 = local_b4;
        local_150 = local_c0;
        local_14c = local_bc;
        local_148 = local_b8;
        local_144 = local_b4;
        FUN_089a38e0(&local_a0,param_3,param_2);
        local_100 = local_a0;
        local_fc = local_9c;
        local_f8 = local_98;
        local_f4 = local_94;
        local_140 = local_a0;
        local_13c = local_9c;
        local_138 = local_98;
        local_134 = local_94;
        fVar3 = (float)FUN_089a3b10(&local_150,&local_140);
        fVar3 = fVar3 / (fVar2 * fVar2);
        if (0.0 <= fVar3) {
          if (1.0 < fVar3) {
            uVar4 = param_3[1];
            uVar6 = param_3[2];
            uVar5 = param_3[3];
            *param_1 = *param_3;
            param_1[1] = uVar4;
            param_1[2] = uVar6;
            param_1[3] = uVar5;
          }
          else {
            FUN_089a38e0(&local_80,param_3,param_2);
            local_f0 = local_80;
            local_ec = local_7c;
            local_e8 = local_78;
            local_e4 = local_74;
            local_140 = local_80;
            local_13c = local_7c;
            local_138 = local_78;
            local_134 = local_74;
            FUN_089a3868(auStack_130,&local_140);
            FUN_089a3a44(fVar3,&local_60,auStack_130);
            local_d0 = local_60;
            local_cc = local_5c;
            local_c8 = local_58;
            local_c4 = local_54;
            local_150 = local_60;
            local_14c = local_5c;
            local_148 = local_58;
            local_144 = local_54;
            FUN_089a38a8(&local_40,param_2,&local_150);
            local_e0 = local_40;
            local_dc = local_3c;
            local_d8 = local_38;
            local_d4 = local_34;
            local_140 = local_40;
            local_13c = local_3c;
            local_138 = local_38;
            local_134 = local_34;
            FUN_089a3868(&local_120,&local_140);
            *param_1 = local_120;
            param_1[1] = local_11c;
            param_1[2] = local_118;
            param_1[3] = local_114;
          }
        }
        else {
          uVar4 = param_2[1];
          uVar6 = param_2[2];
          uVar5 = param_2[3];
          *param_1 = *param_2;
          param_1[1] = uVar4;
          param_1[2] = uVar6;
          param_1[3] = uVar5;
        }
      }
    }
  }
  return;
}

