/* Entry 0x0892EA3C | file offset 0x0012BA14 | FUN_0892ea3c | bytes 84 */

void FUN_0892ea3c(int param_1)

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
  } while (iVar1 < 1);
  return;
}

