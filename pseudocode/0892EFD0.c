/* Entry 0x0892EFD0 | file offset 0x0012BFA8 | FUN_0892efd0 | bytes 84 */

void FUN_0892efd0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 4) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 5);
  return;
}

