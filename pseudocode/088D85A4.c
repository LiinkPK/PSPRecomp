/* Entry 0x088D85A4 | file offset 0x000D557C | FUN_088d85a4 | bytes 64 */

void FUN_088d85a4(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_088d8594(param_1);
  return;
}

