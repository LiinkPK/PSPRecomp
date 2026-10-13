/* Entry 0x089321E4 | file offset 0x0012F1BC | FUN_089321e4 | bytes 84 */

void FUN_089321e4(int param_1)

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
  } while (iVar1 < 2);
  return;
}

