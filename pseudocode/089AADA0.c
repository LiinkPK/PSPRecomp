/* Entry 0x089AADA0 | file offset 0x001A7D78 | FUN_089aada0 | bytes 112 */

undefined4 FUN_089aada0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_089ab27c(param_1,0x400);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 1;
    }
  } while ((byte)(*(char *)(param_1 + iVar1) - 0x30U) < 10);
  if (iVar1 < 0) {
    return 1;
  }
  return 0;
}

