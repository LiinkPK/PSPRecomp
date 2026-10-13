/* Entry 0x0889F8D4 | file offset 0x0009C8AC | FUN_0889f8d4 | bytes 60 */

void FUN_0889f8d4(float param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    *(float *)(param_2 + 8) = param_1;
    *(float *)(param_2 + 0xc) = param_1;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  else {
    *(float *)(param_2 + 0xc) = param_1;
    *(float *)(param_2 + 0x10) = (param_1 - *(float *)(param_2 + 8)) / (float)param_3;
  }
  return;
}

