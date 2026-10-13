/* Entry 0x08932734 | file offset 0x0012F70C | FUN_08932734 | bytes 84 */

void FUN_08932734(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);
  return;
}

