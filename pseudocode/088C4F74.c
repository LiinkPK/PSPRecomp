/* Entry 0x088C4F74 | file offset 0x000C1F4C | FUN_088c4f74 | bytes 104 */

int FUN_088c4f74(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_089d76c4 != (short *)0x0) {
    iVar3 = 0;
    iVar2 = 0;
    psVar1 = DAT_089d76c4;
    if (0 < DAT_089d76cc) {
      do {
        if (*psVar1 == param_1) {
          return (int)DAT_089d76c4 + iVar2;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x20;
        psVar1 = psVar1 + 0x10;
      } while (iVar3 < DAT_089d76cc);
    }
  }
  return 0;
}

