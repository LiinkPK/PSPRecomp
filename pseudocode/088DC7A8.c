/* Entry 0x088DC7A8 | file offset 0x000D9780 | FUN_088dc7a8 | bytes 60 */

int FUN_088dc7a8(int param_1)

{
  return *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44) +
         *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50) +
         *(int *)(param_1 + 0x58) * 0x10;
}

