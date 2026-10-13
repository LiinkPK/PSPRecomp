/* Entry 0x08933034 | file offset 0x0013000C | FUN_08933034 | bytes 84 */

void FUN_08933034(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 1);
  return;
}

