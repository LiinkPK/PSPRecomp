/* Entry 0x088C4FDC | file offset 0x000C1FB4 | FUN_088c4fdc | bytes 104 */

int FUN_088c4fdc(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_089d76c8 != (short *)0x0) {
    iVar3 = 0;
    iVar2 = 0;
    psVar1 = DAT_089d76c8;
    if (0 < DAT_089d76d0) {
      do {
        if (*psVar1 == param_1) {
          return (int)DAT_089d76c8 + iVar2;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x14;
        psVar1 = psVar1 + 10;
      } while (iVar3 < DAT_089d76d0);
    }
  }
  return 0;
}

