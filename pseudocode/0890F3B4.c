/* Entry 0x0890F3B4 | file offset 0x0010C38C | FUN_0890f3b4 | bytes 68 */

short * FUN_0890f3b4(undefined4 *param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)*param_1;
  iVar3 = 0;
  piVar1 = (int *)(psVar2 + 2);
  if (0 < *piVar1) {
    do {
      psVar2 = psVar2 + 4;
      iVar3 = iVar3 + 1;
      if (*psVar2 == param_2) {
        return psVar2;
      }
    } while (iVar3 < *piVar1);
  }
  return (short *)0x0;
}

