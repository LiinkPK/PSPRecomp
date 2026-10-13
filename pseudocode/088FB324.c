/* Entry 0x088FB324 | file offset 0x000F82FC | FUN_088fb324 | bytes 92 */

short * FUN_088fb324(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)(&DAT_09afc110 + param_1 * 0x1060);
  iVar2 = 0;
  do {
    if (*psVar1 == param_2) {
      return psVar1;
    }
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 0x40;
  } while (iVar2 < 4);
  return (short *)0x0;
}

