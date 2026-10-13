/* Entry 0x088FC070 | file offset 0x000F9048 | FUN_088fc070 | bytes 76 */

void FUN_088fc070(int param_1)

{
  FUN_088fc87c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf30));
  if (*(int *)(*(int *)(param_1 + 0x30) + 0xf30) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xf30) = 0;
  }
  return;
}

