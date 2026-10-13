/* Entry 0x088A1F2C | file offset 0x0009EF04 | FUN_088a1f2c | bytes 64 */

void FUN_088a1f2c(float param_1,float param_2,int param_3)

{
  if (0.0 < param_2) {
    *(float *)(param_3 + 0x24) = param_1;
    *(float *)(param_3 + 0x28) = (param_1 - *(float *)(param_3 + 0x20)) / param_2;
  }
  else {
    *(float *)(param_3 + 0x20) = param_1;
    *(float *)(param_3 + 0x24) = param_1;
    *(undefined4 *)(param_3 + 0x28) = 0;
  }
  return;
}

