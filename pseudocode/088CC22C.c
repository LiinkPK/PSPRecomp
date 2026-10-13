/* Entry 0x088CC22C | file offset 0x000C9204 | FUN_088cc22c | bytes 132 */

int FUN_088cc22c(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_089d7808 == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    if (*(short *)(DAT_089d7808 + 2) != 0) {
      do {
        if (*(short *)(DAT_089d780c + iVar2 * 8 + 4) == -1) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(DAT_089d7808 + 2));
    }
  }
  return iVar1;
}

