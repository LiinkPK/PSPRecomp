/* Entry 0x0892E0C8 | file offset 0x0012B0A0 | FUN_0892e0c8 | bytes 84 */

void FUN_0892e0c8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

