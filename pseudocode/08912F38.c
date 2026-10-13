/* Entry 0x08912F38 | file offset 0x0010FF10 | FUN_08912f38 | bytes 68 */

short * FUN_08912f38(int *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(*param_1 + 4);
  psVar1 = (short *)(*param_1 + 8);
  if (0 < iVar2) {
    do {
      iVar3 = iVar3 + 1;
      if (*psVar1 == param_2) {
        return psVar1;
      }
      psVar1 = psVar1 + 0xc;
    } while (iVar3 < iVar2);
  }
  return (short *)0x0;
}

