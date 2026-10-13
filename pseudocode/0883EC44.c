/* Entry 0x0883EC44 | file offset 0x0003BC1C | FUN_0883ec44 | bytes 88 */

void FUN_0883ec44(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_088a9b18(*(int *)(param_1 + 0x28));
    FUN_088a5604(DAT_089d6d78,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_088a522c(*(undefined4 *)(param_1 + 0x20));
  }
  return;
}

