/* Entry 0x088F7834 | file offset 0x000F480C | FUN_088f7834 | bytes 124 */

int FUN_088f7834(int param_1,undefined4 param_2)

{
  FUN_089096b0();
  *(undefined **)(param_1 + 0x14c68) = &DAT_089ccdc8;
  *(int *)(param_1 + 0x14c6c) = param_1;
  *(undefined4 *)(param_1 + 0x14c70) = param_2;
  *(undefined4 *)(param_1 + 0x31968) = 0;
  *(undefined4 *)(param_1 + 0x3196c) = 0xffffffff;
  return param_1;
}

