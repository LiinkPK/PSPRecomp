/* Entry 0x088DA060 | file offset 0x000D7038 | FUN_088da060 | bytes 64 */

void FUN_088da060(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_088daaa0(*(int *)(param_1 + 0x24),param_1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

