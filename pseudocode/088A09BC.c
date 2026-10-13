/* Entry 0x088A09BC | file offset 0x0009D994 | FUN_088a09bc | bytes 64 */

void FUN_088a09bc(float param_1,float param_2,int param_3)

{
  if (0.0 < param_2) {
    *(float *)(param_3 + 0x4c) = param_1;
    *(float *)(param_3 + 0x50) = (param_1 - *(float *)(param_3 + 0x48)) / param_2;
  }
  else {
    *(float *)(param_3 + 0x48) = param_1;
    *(float *)(param_3 + 0x4c) = param_1;
    *(undefined4 *)(param_3 + 0x50) = 0;
  }
  return;
}

