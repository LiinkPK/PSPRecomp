/* Entry 0x08930018 | file offset 0x0012CFF0 | FUN_08930018 | bytes 128 */

void FUN_08930018(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      FUN_08930098(param_1);
    }
  }
  else if (iVar1 < 3) {
    FUN_08930098(param_1);
    FUN_089300ec(param_1);
  }
  else if (iVar1 < 4) {
    FUN_08930128(param_1);
  }
  return;
}

