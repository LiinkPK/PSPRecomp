/* Entry 0x088A1BEC | file offset 0x0009EBC4 | FUN_088a1bec | bytes 76 */

void FUN_088a1bec(float param_1,float param_2,float *param_3)

{
  param_3[1] = param_1;
  if (param_2 <= 1.0) {
    param_2 = 1.0;
  }
  param_3[2] = (param_1 - *param_3) / param_2;
  return;
}

