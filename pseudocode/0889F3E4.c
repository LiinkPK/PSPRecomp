/* Entry 0x0889F3E4 | file offset 0x0009C3BC | FUN_0889f3e4 | bytes 80 */

int FUN_0889f3e4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0889f5e8();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) + iVar1 * 0x2c;
  }
  return iVar1;
}

