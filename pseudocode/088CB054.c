/* Entry 0x088CB054 | file offset 0x000C802C | FUN_088cb054 | bytes 72 */

undefined4 FUN_088cb054(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_09b69868;
  iVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      *piVar1 = 0;
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  return 0;
}

