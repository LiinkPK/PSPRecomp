/* Entry 0x0892E1B4 | file offset 0x0012B18C | FUN_0892e1b4 | bytes 84 */

void FUN_0892e1b4(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 1);
  return;
}

