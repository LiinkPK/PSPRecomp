/* Entry 0x088CA290 | file offset 0x000C7268 | FUN_088ca290 | bytes 80 */

int FUN_088ca290(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088ca1a4();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0xa180 + iVar1 * 0x24;
  }
  return iVar1;
}

