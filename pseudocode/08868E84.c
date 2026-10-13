/* Entry 0x08868E84 | file offset 0x00065E5C | FUN_08868e84 | bytes 356 */

void FUN_08868e84(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = *param_3;
  fVar1 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar3 = param_2[3] * fVar2 + param_2[7] * fVar1 + param_2[0xb] * fVar4 + param_2[0xf] * fVar5;
  if (fVar3 == 0.0) {
    FUN_089a383c(0,0,&local_20);
  }
  else {
    local_14 = 1.0 / fVar3;
    local_20 = local_14 *
               (*param_2 * fVar2 + param_2[4] * fVar1 + param_2[8] * fVar4 + param_2[0xc] * fVar5);
    local_1c = local_14 *
               (param_2[1] * fVar2 + param_2[5] * fVar1 + param_2[9] * fVar4 + param_2[0xd] * fVar5)
    ;
    local_18 = local_14 *
               (param_2[2] * fVar2 + param_2[6] * fVar1 + param_2[10] * fVar4 + param_2[0xe] * fVar5
               );
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}

