/* Entry 0x0885EC48 | file offset 0x0005BC20 | FUN_0885ec48 | bytes 112 */

float FUN_0885ec48(int param_1)

{
  return *(float *)(param_1 + 0x14) + (float)(*(int *)(param_1 + 4) * 0xe10) * 60.0 +
         (float)(*(int *)(param_1 + 8) * 0x3c) * 60.0 + (float)*(int *)(param_1 + 0xc) * 60.0;
}

