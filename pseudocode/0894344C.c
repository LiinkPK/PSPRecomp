/* Entry 0x0894344C | file offset 0x00140424 | FUN_0894344c | bytes 80 */

void FUN_0894344c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x20);
    FUN_089432b4(param_1);
  }
  return;
}

