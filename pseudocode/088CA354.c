/* Entry 0x088CA354 | file offset 0x000C732C | FUN_088ca354 | bytes 116 */

int FUN_088ca354(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088ca1a4();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (iVar1 + 2 < *(int *)(param_1 + 0xbda0)) {
    iVar1 = param_1 + iVar1 * 0x24 + 0xa1c8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

