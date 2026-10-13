/* Entry 0x0884F564 | file offset 0x0004C53C | FUN_0884f564 | bytes 116 */

void FUN_0884f564(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(short *)(param_1 + 0x12) != 0) && (*(char *)(param_1 + 0x1b) != '\0')) {
      FUN_0884eef4(param_1,0);
      FUN_0884f12c(param_1);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar1 < 0x10);
  return;
}

