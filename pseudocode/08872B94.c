/* Entry 0x08872B94 | file offset 0x0006FB6C | FUN_08872b94 | bytes 164 */

int FUN_08872b94(int param_1)

{
  FUN_08993560(param_1,2,0x60,FUN_0887205c);
  FUN_08993560(param_1 + 0xc0,2,0x50,FUN_088724cc);
  FUN_08993560(param_1 + 0x160,2,0x40,FUN_08872adc);
  FUN_0887205c(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x25c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0x40800000;
  return param_1;
}

