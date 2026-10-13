/* Entry 0x088D8A54 | file offset 0x000D5A2C | FUN_088d8a54 | bytes 68 */

void FUN_088d8a54(int param_1)

{
  FUN_088d8a98();
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088d8a1c(param_1);
  return;
}

