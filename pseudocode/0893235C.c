/* Entry 0x0893235C | file offset 0x0012F334 | FUN_0893235c | bytes 84 */

void FUN_0893235c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 3);
  return;
}

