/* Entry 0x08920A7C | file offset 0x0011DA54 | FUN_08920a7c | bytes 76 */

void FUN_08920a7c(int param_1,int param_2)

{
  FUN_08921c7c();
  if (param_2 != -1) {
    *(int *)(param_1 + 8) = param_2;
  }
  FUN_08921248(param_1,*(undefined4 *)(param_1 + 8));
  return;
}

