/* Entry 0x0893156C | file offset 0x0012E544 | FUN_0893156c | bytes 104 */

void FUN_0893156c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 + 0x38;
  if (0 < *(int *)(param_1 + 0x260)) {
    do {
      FUN_08930700(iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x5c;
    } while (iVar2 < *(int *)(param_1 + 0x260));
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

