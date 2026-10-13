/* Entry 0x0892CA54 | file offset 0x00129A2C | FUN_0892ca54 | bytes 100 */

void FUN_0892ca54(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((iVar1 != 0) && (*(int *)(param_1 + 4) != 0)) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 4) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

