/* Entry 0x08820D50 | file offset 0x0001DD28 | FUN_08820d50 | bytes 128 */

void FUN_08820d50(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x24);
  if (0.0 < fVar1) {
    param_1 = *(float *)(param_2 + 0x20) + param_1;
    *(float *)(param_2 + 0x20) = param_1;
    if (fVar1 < param_1) {
      *(float *)(param_2 + 0x20) = fVar1;
      param_1 = fVar1;
    }
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      param_1 = param_1 / fVar1;
    }
    else {
      param_1 = 1.0 - param_1 / fVar1;
    }
    *(float *)(param_2 + 0x2c) = param_1;
  }
  return;
}

