/* Entry 0x088CA3C8 | file offset 0x000C73A0 | FUN_088ca3c8 | bytes 100 */

int FUN_088ca3c8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088ca1a4();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (iVar1 + -1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + iVar1 * 0x24 + 0xa15c;
  }
  return iVar1;
}

