/* Entry 0x0896F320 | file offset 0x0016C2F8 | FUN_0896f320 | bytes 120 */

void FUN_0896f320(int param_1,float *param_2,float *param_3)

{
  if (param_2 != (float *)0x0) {
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + *param_2;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - param_2[1];
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - param_2[2];
  }
  if (param_3 != (float *)0x0) {
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + *param_3;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - param_3[1];
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - param_3[2];
  }
  return;
}

