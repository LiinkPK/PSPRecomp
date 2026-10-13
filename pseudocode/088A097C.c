/* Entry 0x088A097C | file offset 0x0009D954 | FUN_088a097c | bytes 64 */

void FUN_088a097c(float param_1,float param_2,int param_3)

{
  if (0.0 < param_2) {
    *(float *)(param_3 + 0x40) = param_1;
    *(float *)(param_3 + 0x44) = (param_1 - *(float *)(param_3 + 0x3c)) / param_2;
  }
  else {
    *(float *)(param_3 + 0x3c) = param_1;
    *(float *)(param_3 + 0x40) = param_1;
    *(undefined4 *)(param_3 + 0x44) = 0;
  }
  return;
}

