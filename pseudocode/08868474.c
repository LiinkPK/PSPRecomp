/* Entry 0x08868474 | file offset 0x0006544C | FUN_08868474 | bytes 136 */

void FUN_08868474(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_089a46dc();
  fVar2 = (float)FUN_089a47a4(param_1);
  fVar3 = (float)param_3[1];
  *param_2 = *param_3;
  param_2[1] = fVar1 * fVar3 + -((float)param_3[2] * fVar2);
  param_2[2] = fVar2 * fVar3 + (float)param_3[2] * fVar1;
  return;
}

