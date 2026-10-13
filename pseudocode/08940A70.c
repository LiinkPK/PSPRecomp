/* Entry 0x08940A70 | file offset 0x0013DA48 | FUN_08940a70 | bytes 236 */

void FUN_08940a70(int param_1)

{
  int iVar1;
  
  FUN_08940ccc();
  if (*(char *)(param_1 + 0x39) == '\0') {
    FUN_089708f0(0);
    FUN_089708f0(1);
    FUN_089708f0(2);
    iVar1 = FUN_0897034c(3);
    if (iVar1 != 0) {
      FUN_089708f0(3);
    }
  }
  else {
    FUN_08970794(0);
    FUN_08970794(1);
    FUN_08970794(2);
    iVar1 = FUN_0897034c(3);
    if (iVar1 != 0) {
      FUN_08970794(3);
    }
  }
  FUN_089a03dc(1);
  if (*(char *)(param_1 + 0x39) == '\0') {
    iVar1 = FUN_0897034c(4);
    if (iVar1 != 0) {
      FUN_089708f0(4);
    }
  }
  else {
    iVar1 = FUN_0897034c(4);
    if (iVar1 != 0) {
      FUN_08970794(4);
    }
  }
  FUN_08941128(param_1);
  return;
}

