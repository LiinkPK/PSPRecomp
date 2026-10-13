/* Entry 0x088B37C0 | file offset 0x000B0798 | FUN_088b37c0 | bytes 100 */

short * FUN_088b37c0(int param_1)

{
  int iVar1;
  short *psVar2;
  
  if (DAT_089d72f0 != 0) {
    iVar1 = 0;
    psVar2 = DAT_089d72f4;
    if (0 < *(int *)(DAT_089d72f0 + 8)) {
      do {
        if (*psVar2 == param_1) {
          return psVar2;
        }
        iVar1 = iVar1 + 1;
        psVar2 = psVar2 + 0xe;
      } while (iVar1 < *(int *)(DAT_089d72f0 + 8));
    }
  }
  return (short *)0x0;
}

