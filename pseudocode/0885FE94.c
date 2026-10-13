/* Entry 0x0885FE94 | file offset 0x0005CE6C | FUN_0885fe94 | bytes 924 */

undefined4
FUN_0885fe94(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
            float *param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  float local_50;
  float local_4c;
  float local_48;
  
  fVar9 = *param_4;
  fVar4 = *param_5;
  fVar8 = param_4[1];
  fVar3 = param_5[1];
  fVar6 = param_4[2];
  fVar2 = param_5[2];
  if (0.0 < fVar4 * fVar3) {
    local_50 = fVar8;
    FUN_089a3868(auStack_80,param_3);
    FUN_089a3868(auStack_70,param_1);
    FUN_089a3868(auStack_60,param_2);
    fVar1 = fVar2 - fVar4;
    fVar10 = fVar9 - fVar6;
    fVar7 = fVar2 - fVar3;
    fVar5 = local_50 - fVar6;
  }
  else if (0.0 < fVar4 * fVar2) {
    local_4c = fVar9;
    local_48 = fVar6;
    FUN_089a3868(auStack_80,param_2);
    FUN_089a3868(auStack_70,param_1);
    FUN_089a3868(auStack_60,param_3);
    fVar1 = fVar3 - fVar4;
    fVar10 = local_4c - fVar8;
    fVar7 = fVar3 - fVar2;
    fVar5 = local_48 - fVar8;
    fVar2 = fVar3;
    fVar6 = fVar8;
  }
  else if ((0.0 < fVar3 * fVar2) || (fVar4 != 0.0)) {
    local_50 = fVar8;
    local_48 = fVar6;
    FUN_089a3868(auStack_80,param_1);
    FUN_089a3868(auStack_70,param_2);
    FUN_089a3868(auStack_60,param_3);
    fVar1 = fVar4 - fVar3;
    fVar10 = local_50 - fVar9;
    fVar5 = local_48 - fVar9;
    fVar7 = fVar4 - fVar2;
    fVar2 = fVar4;
    fVar6 = fVar9;
  }
  else if (fVar3 == 0.0) {
    if (fVar2 == 0.0) {
      return 1;
    }
    local_50 = fVar8;
    FUN_089a3868(auStack_80,param_3);
    FUN_089a3868(auStack_70,param_1);
    FUN_089a3868(auStack_60,param_2);
    fVar1 = fVar2 - fVar4;
    fVar10 = fVar9 - fVar6;
    fVar7 = fVar2 - fVar3;
    fVar5 = local_50 - fVar6;
  }
  else {
    local_4c = fVar9;
    local_48 = fVar6;
    FUN_089a3868(auStack_80,param_2);
    FUN_089a3868(auStack_70,param_1);
    FUN_089a3868(auStack_60,param_3);
    fVar1 = fVar3 - fVar4;
    fVar10 = local_4c - fVar8;
    fVar7 = fVar3 - fVar2;
    fVar5 = local_48 - fVar8;
    fVar2 = fVar3;
    fVar6 = fVar8;
  }
  *param_6 = fVar6 + fVar10 * (fVar2 / fVar1);
  FUN_089a38e0(auStack_90,auStack_70,auStack_80);
  FUN_089a3a44(fVar2 / fVar1,auStack_90,auStack_90);
  FUN_089a38a8(param_7,auStack_90,auStack_80);
  param_6[1] = fVar6 + fVar5 * (fVar2 / fVar7);
  FUN_089a38e0(auStack_90,auStack_60,auStack_80);
  FUN_089a3a44(fVar2 / fVar7,auStack_90,auStack_90);
  FUN_089a38a8(param_8,auStack_90,auStack_80);
  return 0;
}

