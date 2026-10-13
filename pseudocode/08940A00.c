/* Entry 0x08940A00 | file offset 0x0013D9D8 | FUN_08940a00 | bytes 112 */

void FUN_08940a00(int param_1)

{
  int iVar1;
  
  FUN_08940ccc();
  if (*(char *)(param_1 + 0x39) == '\0') {
    iVar1 = FUN_0897034c(5);
    if (iVar1 != 0) {
      FUN_089708f0(5);
    }
  }
  else {
    iVar1 = FUN_0897034c(5);
    if (iVar1 != 0) {
      FUN_08970794(5);
    }
  }
  FUN_08941128(param_1);
  return;
}

