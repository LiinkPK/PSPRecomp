/* Entry 0x0880BF5C | file offset 0x00008F34 | FUN_0880bf5c | bytes 500 */

float FUN_0880bf5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
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
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = FUN_089a3b50(param_3,param_1);
  if (iVar1 == 1) {
    fVar3 = 0.0;
  }
  else {
    iVar1 = FUN_089a3b50(param_3,param_2);
    if (iVar1 == 1) {
      fVar3 = 1.0;
    }
    else {
      fVar2 = (float)FUN_089a3c18(param_1,param_2);
      if (fVar2 == 0.0) {
        fVar3 = 0.0;
      }
      else {
        FUN_089a38e0(&local_60,param_3,param_1);
        local_80 = local_60;
        local_7c = local_5c;
        local_78 = local_58;
        local_74 = local_54;
        local_a0 = local_60;
        local_9c = local_5c;
        local_98 = local_58;
        local_94 = local_54;
        FUN_089a38e0(&local_40,param_2,param_1);
        local_70 = local_40;
        local_6c = local_3c;
        local_68 = local_38;
        local_64 = local_34;
        local_90 = local_40;
        local_8c = local_3c;
        local_88 = local_38;
        local_84 = local_34;
        fVar3 = (float)FUN_089a3b10(&local_a0,&local_90);
        fVar3 = fVar3 / (fVar2 * fVar2);
        if (0.0 <= fVar3) {
          if (1.0 < fVar3) {
            fVar3 = 1.0;
          }
        }
        else {
          fVar3 = 0.0;
        }
      }
    }
  }
  return fVar3;
}

