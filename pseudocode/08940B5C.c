/* Entry 0x08940B5C | file offset 0x0013DB34 | FUN_08940b5c | bytes 120 */

void FUN_08940b5c(int param_1)

{
  int iVar1;
  
  FUN_08940ccc();
  FUN_089a03dc(1);
  if (*(char *)(param_1 + 0x39) == '\0') {
    iVar1 = FUN_0897034c(7);
    if (iVar1 != 0) {
      FUN_089708f0(7);
    }
  }
  else {
    iVar1 = FUN_0897034c(7);
    if (iVar1 != 0) {
      FUN_08970794(7);
    }
  }
  FUN_08941128(param_1);
  return;
}

