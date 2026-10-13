/* Entry 0x0892C3E4 | file offset 0x001293BC | FUN_0892c3e4 | bytes 100 */

void FUN_0892c3e4(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_088d9b28(*(int *)(param_1 + 0x3c),param_2);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

