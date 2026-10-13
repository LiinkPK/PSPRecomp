/* Entry 0x089A4A24 | file offset 0x001A19FC | FUN_089a4a24 | bytes 92 */

float * FUN_089a4a24(float param_1,float *param_2,uint param_3)

{
  param_2[3] = param_1;
  param_2[2] = (float)((param_3 & 0xffff) >> 0xb) * 0.06666667;
  *param_2 = (float)(param_3 & 0x1f) * 0.06666667;
  param_2[1] = (float)((param_3 & 0x7f) >> 1) * 0.032258064;
  return param_2;
}

