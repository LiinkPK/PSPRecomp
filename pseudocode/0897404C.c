/* Entry 0x0897404C | file offset 0x00171024 | FUN_0897404c | bytes 56 */

void FUN_0897404c(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x60c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if (*(int *)(iVar1 + 8) != -1) {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
    }
  }
  return;
}

