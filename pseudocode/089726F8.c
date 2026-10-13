/* Entry 0x089726F8 | file offset 0x0016F6D0 | FUN_089726f8 | bytes 88 */

void FUN_089726f8(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 4) + param_2 * 4) != 0) {
    FUN_08972964(param_1,param_2);
    *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = 0;
  }
  return;
}

