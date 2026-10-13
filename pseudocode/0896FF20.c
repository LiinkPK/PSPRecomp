/* Entry 0x0896FF20 | file offset 0x0016CEF8 | FUN_0896ff20 | bytes 100 */

void FUN_0896ff20(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_09b6f480;
  iVar2 = 0;
  do {
    if (*piVar1 != 0) {
      FUN_08971010(param_1,*piVar1);
      *piVar1 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  return;
}

