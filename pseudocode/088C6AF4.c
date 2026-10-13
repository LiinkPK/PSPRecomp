/* Entry 0x088C6AF4 | file offset 0x000C3ACC | FUN_088c6af4 | bytes 100 */

int FUN_088c6af4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_089d772c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    if (0 < param_1) {
      do {
        iVar3 = DAT_089d7728 + iVar1;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + (uint)*(byte *)(iVar3 + 4);
      } while (iVar1 < param_1);
    }
    iVar1 = DAT_089d772c + iVar2 * 4;
  }
  return iVar1;
}

