/* Entry 0x0892B6FC | file offset 0x001286D4 | FUN_0892b6fc | bytes 84 */

void FUN_0892b6fc(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_088dab44();
      *(undefined4 *)(param_1 + 4) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 1);
  return;
}

