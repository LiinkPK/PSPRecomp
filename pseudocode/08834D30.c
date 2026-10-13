/* Entry 0x08834D30 | file offset 0x00031D08 | FUN_08834d30 | bytes 48 */

void FUN_08834d30(float param_1,undefined4 param_2,int param_3)

{
  if (param_1 == 0.0) {
    param_1 = -1.0;
  }
  else {
    param_1 = -1.0 / param_1;
  }
  *(float *)(param_3 + 0x3b4) = param_1;
  *(undefined4 *)(param_3 + 0x3b8) = param_2;
  return;
}

