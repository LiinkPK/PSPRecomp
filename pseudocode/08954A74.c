/* Entry 0x08954A74 | file offset 0x00151A4C | FUN_08954a74 | bytes 860 */

void FUN_08954a74(undefined4 param_1,int param_2,float *param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (param_4 == '\0') {
    FUN_089549c8(param_1,param_2,param_3);
  }
  else if (*(char *)(param_3 + 5) == '\0') {
    FUN_089549c8(param_1,param_2,param_3);
  }
  else {
    uVar1 = FUN_0895470c(param_1,param_2 + 0x10);
    fVar6 = *(float *)(param_2 + 0xc);
    if (0.0 < fVar6) {
      local_74 = 0;
      local_64 = 0;
      local_40 = 0;
      do {
        FUN_0895477c(param_1,&local_b0,param_2,param_3);
        local_90 = local_b0 - *param_3;
        local_6c = local_ac - param_3[1];
        local_68 = local_a8 - param_3[2];
        fVar3 = local_90 * local_90 + local_6c * local_6c + local_68 * local_68;
        if (fVar3 == 0.0) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = SQRT(fVar3);
        }
        local_4c = local_90 * local_90 + local_6c * local_6c + local_68 * local_68;
        if (local_4c == 0.0) {
          fVar5 = 0.0;
          fVar4 = 0.0;
          local_4c = 0.0;
        }
        else {
          local_4c = SQRT(local_4c);
          fVar5 = local_90 / local_4c;
          fVar4 = local_6c / local_4c;
          local_4c = local_68 / local_4c;
        }
        local_3c = local_40;
        local_80 = local_90;
        local_7c = local_6c;
        local_78 = local_68;
        local_50 = local_90;
        local_48 = local_68;
        local_44 = local_6c;
        if (fVar6 < fVar3) {
          local_98 = *(float *)(param_2 + 0xc);
          local_a0 = fVar5 * local_98;
          local_84 = local_40;
          local_9c = fVar4 * local_98;
          local_60 = *param_3 + local_a0;
          local_98 = local_4c * local_98;
          local_5c = param_3[1] + local_9c;
          local_94 = 0x3f800000;
          local_58 = param_3[2] + local_98;
          local_54 = 0x3f800000;
          *param_3 = local_60;
          param_3[1] = local_5c;
          param_3[2] = local_58;
          param_3[3] = 1.0;
          local_8c = local_6c;
          local_88 = local_68;
          local_70 = local_90;
          goto LAB_08954d8c;
        }
        *param_3 = local_b0;
        param_3[1] = local_ac;
        fVar6 = fVar6 - fVar3;
        param_3[2] = local_a8;
        param_3[3] = local_a4;
        iVar2 = FUN_08954918(param_2,param_3,uVar1);
        local_a0 = fVar5;
        local_9c = fVar4;
        if (iVar2 == 0) {
          local_8c = local_44;
          local_88 = local_48;
          local_84 = local_3c;
          local_70 = local_50;
          local_98 = local_4c;
          local_94 = 0x3f800000;
          goto LAB_08954d8c;
        }
      } while (0.0 < fVar6);
      local_8c = local_44;
      local_88 = local_48;
      local_84 = local_3c;
      local_70 = local_50;
      local_98 = local_4c;
      local_94 = 0x3f800000;
    }
LAB_08954d8c:
    FUN_089549c8(param_1,param_2,param_3);
  }
  return;
}

