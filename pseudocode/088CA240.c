/* Entry 0x088CA240 | file offset 0x000C7218 | FUN_088ca240 | bytes 80 */

int FUN_088ca240(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088ca1a4();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + iVar1 * 0x24 + 0xa180;
  }
  return iVar1;
}

