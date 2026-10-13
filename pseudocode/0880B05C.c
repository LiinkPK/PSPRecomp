/* Entry 0x0880B05C | file offset 0x00008034 | FUN_0880b05c | bytes 220 */

int FUN_0880b05c(int param_1)

{
  undefined4 in_t0;
  undefined4 in_t1;
  char in_t2;
  
  FUN_08807860();
  *(undefined **)(param_1 + 0x70) = &DAT_089c6ca8;
  *(undefined4 *)(param_1 + 0xbc) = in_t0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_089a3868(param_1 + 0x90,in_t1);
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  FUN_089a3868(param_1 + 0x80,in_t1);
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  FUN_089a383c(0,0,0,0,param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0x2c) = 2;
  if (in_t2 != '\0') {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  return param_1;
}

