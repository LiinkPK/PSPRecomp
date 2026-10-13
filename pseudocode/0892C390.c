/* Entry 0x0892C390 | file offset 0x00129368 | FUN_0892c390 | bytes 84 */

void FUN_0892c390(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

