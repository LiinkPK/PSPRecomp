/* Entry 0x0880CD28 | file offset 0x00009D00 | FUN_0880cd28 | bytes 104 */

void FUN_0880cd28(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_08842138();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_08842138();
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_08842138();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

