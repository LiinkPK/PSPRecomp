/* Entry 0x0888473C | file offset 0x00081714 | FUN_0888473c | bytes 52 */

undefined4 FUN_0888473c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0xc) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return 1;
}

