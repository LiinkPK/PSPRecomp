/* Entry 0x089912C8 | file offset 0x0018E2A0 | FUN_089912c8 | bytes 164 */

void FUN_089912c8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_2;
  fVar3 = (*param_1 * 0.125 + 0.125) * 6.2832;
  fVar1 = (float)FUN_08867ed0(fVar3);
  fVar4 = fVar2 * 2.0 + 1.0;
  fVar2 = (float)FUN_08867eec(fVar3);
  *param_1 = fVar1 / fVar4;
  *param_2 = fVar2 / fVar4;
  return;
}

