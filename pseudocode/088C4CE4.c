/* Entry 0x088C4CE4 | file offset 0x000C1CBC | FUN_088c4ce4 | bytes 140 */

int FUN_088c4ce4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_089d76c4 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    if (0 < DAT_089d76cc) {
      do {
        if (*(char *)(DAT_089d76c4 + iVar1 * 0x20 + 0x1d) != '\0') {
          if (param_1 <= iVar2) break;
          iVar2 = iVar2 + 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_089d76cc);
    }
    iVar1 = (int)(short)iVar2;
  }
  return iVar1;
}

