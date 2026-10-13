/* Entry 0x088B1764 | file offset 0x000AE73C | FUN_088b1764 | bytes 40 */

void FUN_088b1764(int param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  return;
}

