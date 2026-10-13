/* Entry 0x0886A908 | file offset 0x000678E0 | FUN_0886a908 | bytes 64 */

void FUN_0886a908(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_089b04d8(*(undefined4 *)(*(int *)(param_1 + 0x88) + 8));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}

