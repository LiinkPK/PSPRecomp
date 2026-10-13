/* Entry 0x088A1B68 | file offset 0x0009EB40 | FUN_088a1b68 | bytes 132 */

void FUN_088a1b68(float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[2];
  if (0.0 < fVar1) {
    fVar1 = *param_2 + fVar1 * param_1;
    *param_2 = fVar1;
    if (param_2[1] <= fVar1) {
      *param_2 = param_2[1];
      param_2[2] = 0.0;
    }
  }
  else if (fVar1 < 0.0) {
    fVar1 = *param_2 + fVar1 * param_1;
    *param_2 = fVar1;
    if (fVar1 <= param_2[1]) {
      *param_2 = param_2[1];
      param_2[2] = 0.0;
    }
  }
  return;
}

