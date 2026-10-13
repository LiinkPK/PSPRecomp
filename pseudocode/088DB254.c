/* Entry 0x088DB254 | file offset 0x000D822C | FUN_088db254 | bytes 56 */

void FUN_088db254(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  if (*(int *)(param_1 + 0x10) == param_2) {
    *(undefined2 *)(param_1 + 0x12) = param_3;
    *(undefined2 *)(param_1 + 0x10) = param_4;
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 8;
  }
  return;
}

