/* Entry 0x088684FC | file offset 0x000654D4 | FUN_088684fc | bytes 132 */

void FUN_088684fc(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_089a46dc();
  fVar2 = (float)FUN_089a47a4(param_1);
  fVar3 = *param_3;
  *param_2 = fVar1 * fVar3 + param_3[2] * fVar2;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2] * fVar1 - fVar2 * fVar3;
  return;
}

