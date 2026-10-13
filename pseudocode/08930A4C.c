/* Entry 0x08930A4C | file offset 0x0012DA24 | FUN_08930a4c | bytes 84 */

void FUN_08930a4c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);
  return;
}

