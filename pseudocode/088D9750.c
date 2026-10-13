/* Entry 0x088D9750 | file offset 0x000D6728 | FUN_088d9750 | bytes 64 */

void FUN_088d9750(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088d973c(param_1);
  return;
}

