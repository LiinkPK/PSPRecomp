/* Entry 0x0895F608 | file offset 0x0015C5E0 | FUN_0895f608 | bytes 92 */

void FUN_0895f608(float param_1,int param_2,int param_3)

{
  *(float *)(param_2 + 4) =
       *(float *)(param_3 + 0x30) * param_1 * 0.5 * param_1 + *(float *)(param_3 + 0x2c) * param_1 +
       *(float *)(param_2 + 8);
  return;
}

