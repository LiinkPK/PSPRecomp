/* Entry 0x08834D60 | file offset 0x00031D38 | FUN_08834d60 | bytes 44 */

void FUN_08834d60(float param_1,int param_2)

{
  if (param_1 == 0.0) {
    param_1 = 1.0;
  }
  else {
    param_1 = 1.0 / param_1;
  }
  *(float *)(param_2 + 0x3b4) = param_1;
  return;
}

