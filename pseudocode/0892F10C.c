/* Entry 0x0892F10C | file offset 0x0012C0E4 | FUN_0892f10c | bytes 84 */

void FUN_0892f10c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);
  return;
}

