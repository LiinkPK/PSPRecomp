/* Entry 0x08868DE4 | file offset 0x00065DBC | FUN_08868de4 | bytes 160 */

void FUN_08868de4(float param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar6 = 1.0 - param_1;
  fVar8 = param_3[1];
  fVar9 = fVar6 * fVar6;
  fVar2 = param_4[1];
  fVar4 = param_5[1];
  fVar7 = param_1 * param_1;
  fVar1 = param_3[2];
  fVar3 = param_4[2];
  fVar6 = param_1 * 2.0 * fVar6;
  fVar5 = param_5[2];
  *param_2 = fVar9 * *param_3 + fVar6 * *param_4 + fVar7 * *param_5;
  param_2[1] = fVar9 * fVar8 + fVar6 * fVar2 + fVar7 * fVar4;
  param_2[2] = fVar9 * fVar1 + fVar6 * fVar3 + fVar7 * fVar5;
  return;
}

