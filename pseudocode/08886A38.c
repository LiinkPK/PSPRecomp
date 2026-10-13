/* Entry 0x08886A38 | file offset 0x00083A10 | FUN_08886a38 | bytes 32 */

bool FUN_08886a38(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xb4) == **(int **)(param_1 + param_2 * 4);
}

