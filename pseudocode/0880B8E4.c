/* Entry 0x0880B8E4 | file offset 0x000088BC | FUN_0880b8e4 | bytes 124 */

int FUN_0880b8e4(int param_1)

{
  undefined4 in_t0;
  undefined4 in_t1;
  
  FUN_08807860();
  *(undefined **)(param_1 + 0x70) = &DAT_089c6d18;
  *(undefined4 *)(param_1 + 0x80) = in_t1;
  *(undefined4 *)(param_1 + 0x208) = in_t0;
  *(undefined2 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  return param_1;
}

