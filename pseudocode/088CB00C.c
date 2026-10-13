/* Entry 0x088CB00C | file offset 0x000C7FE4 | FUN_088cb00c | bytes 72 */

undefined4 FUN_088cb00c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_09b69868;
  iVar2 = 0;
  do {
    if (*piVar1 == 0) {
      *piVar1 = param_1;
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  return 0;
}

