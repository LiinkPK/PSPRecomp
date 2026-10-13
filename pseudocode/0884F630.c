/* Entry 0x0884F630 | file offset 0x0004C608 | FUN_0884f630 | bytes 76 */

int FUN_0884f630(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((*(short *)(param_1 + 0x12) != 0) && (*(char *)(param_1 + 0x1b) != '\0')) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar2 < 0x10);
  return iVar1;
}

