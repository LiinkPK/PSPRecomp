/* Entry 0x08940990 | file offset 0x0013D968 | FUN_08940990 | bytes 112 */

void FUN_08940990(int param_1)

{
  int iVar1;
  
  FUN_08940ccc();
  if (*(char *)(param_1 + 0x39) == '\0') {
    iVar1 = FUN_0897034c(6);
    if (iVar1 != 0) {
      FUN_089708f0(6);
    }
  }
  else {
    iVar1 = FUN_0897034c(6);
    if (iVar1 != 0) {
      FUN_08970794(6);
    }
  }
  FUN_08941128(param_1);
  return;
}

