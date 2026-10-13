/* Entry 0x089105D8 | file offset 0x0010D5B0 | FUN_089105d8 | bytes 68 */

short * FUN_089105d8(int *param_1,int param_2)

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
      psVar1 = psVar1 + 10;
    } while (iVar3 < iVar2);
  }
  return (short *)0x0;
}

