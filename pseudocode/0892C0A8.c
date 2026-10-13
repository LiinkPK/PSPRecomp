/* Entry 0x0892C0A8 | file offset 0x00129080 | FUN_0892c0a8 | bytes 120 */

void FUN_0892c0a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      FUN_0892c120(param_1);
      FUN_0892c2a0(param_1);
      FUN_0892c148(param_1);
    }
  }
  else if (iVar1 < 3) {
    FUN_0892c120(param_1);
    FUN_0892c148(param_1);
    FUN_0892c19c(param_1);
  }
  return;
}

