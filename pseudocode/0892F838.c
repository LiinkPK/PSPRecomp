/* Entry 0x0892F838 | file offset 0x0012C810 | FUN_0892f838 | bytes 144 */

void FUN_0892f838(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      FUN_0892f93c(param_1);
      FUN_0892f8c8(param_1);
    }
  }
  else if (iVar1 < 3) {
    FUN_0892f9a0(param_1);
    FUN_0892f8c8(param_1);
  }
  else if (iVar1 < 4) {
    FUN_0892f8c8(param_1);
    FUN_0892fb14(param_1);
  }
  return;
}

