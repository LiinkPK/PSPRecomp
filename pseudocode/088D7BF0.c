/* Entry 0x088D7BF0 | file offset 0x000D4BC8 | FUN_088d7bf0 | bytes 64 */

void FUN_088d7bf0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088d7bcc(param_1);
  return;
}

