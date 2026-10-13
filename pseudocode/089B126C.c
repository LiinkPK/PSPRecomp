/* Entry 0x089B126C | file offset 0x001AE244 | FUN_089b126c | bytes 56 */

void FUN_089b126c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = *(int *)(param_1 + 4);
    while (iVar1 = iVar2, iVar1 != 0) {
      param_1 = iVar1;
      iVar2 = *(int *)(iVar1 + 4);
    }
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}

