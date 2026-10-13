/* Entry 0x088DB21C | file offset 0x000D81F4 | FUN_088db21c | bytes 56 */

void FUN_088db21c(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    *(undefined2 *)(param_1 + 0xc) = param_4;
    *(undefined2 *)(param_1 + 0xe) = param_3;
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 4;
  }
  return;
}

