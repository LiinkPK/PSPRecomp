/* Entry 0x088B2690 | file offset 0x000AF668 | FUN_088b2690 | bytes 96 */

float FUN_088b2690(float param_1,int param_2,int param_3)

{
  float fVar1;
  
  if (param_3 < param_2) {
    param_1 = param_1 + (float)(param_2 - param_3) * *(float *)(DAT_089d72ac + 0xc);
  }
  else {
    param_1 = (param_1 / (float)param_3) * (float)param_2;
  }
  fVar1 = *(float *)(DAT_089d72ac + 8);
  if (param_1 < *(float *)(DAT_089d72ac + 8)) {
    fVar1 = param_1;
  }
  return fVar1;
}

