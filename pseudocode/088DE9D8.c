/* Entry 0x088DE9D8 | file offset 0x000DB9B0 | FUN_088de9d8 | bytes 64 */

void FUN_088de9d8(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088de9c0(param_1);
  return;
}

