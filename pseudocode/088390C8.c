/* Entry 0x088390C8 | file offset 0x000360A0 | FUN_088390c8 | bytes 88 */

undefined4 FUN_088390c8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = FUN_0880844c(iVar1);
    if (iVar1 == 0) {
      return 0;
    }
  } while (*(int *)(iVar1 + 0x1c) != param_1);
  return 1;
}

