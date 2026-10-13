/* Entry 0x08922D3C | file offset 0x0011FD14 | FUN_08922d3c | bytes 116 */

void FUN_08922d3c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0xbc);
  if ((iVar1 != 0) && (iVar1 = func_0x08b348a4(iVar1,1), iVar1 != 0)) {
    FUN_0882fa10(0x41000000,0,*(int *)(*(int *)(param_1 + 0x20) + 0xbc) + 0x130,1,0);
  }
  return;
}

