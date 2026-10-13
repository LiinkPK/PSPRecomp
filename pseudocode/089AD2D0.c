/* Entry 0x089AD2D0 | file offset 0x001AA2A8 | FUN_089ad2d0 | bytes 92 */

void FUN_089ad2d0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = param_2;
    return;
  }
  FUN_089ad204();
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = param_2;
  return;
}

