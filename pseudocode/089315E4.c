/* Entry 0x089315E4 | file offset 0x0012E5BC | FUN_089315e4 | bytes 128 */

void FUN_089315e4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 2) {
    if (iVar1 < 1) {
      return;
    }
  }
  else {
    if (2 < iVar1) {
      if (3 < iVar1) {
        return;
      }
      FUN_08931844(param_1);
      return;
    }
    FUN_089316e0(param_1);
  }
  FUN_08931664(param_1);
  FUN_0893168c(param_1);
  return;
}

