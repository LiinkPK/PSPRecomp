/* Entry 0x0892B750 | file offset 0x00128728 | FUN_0892b750 | bytes 84 */

void FUN_0892b750(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 7);
  return;
}

