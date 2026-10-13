/* Entry 0x088B3360 | file offset 0x000B0338 | FUN_088b3360 | bytes 140 */

short * FUN_088b3360(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  if ('\0' < *(char *)(param_1 + 1)) {
    do {
      psVar1 = (short *)FUN_088b33ec(param_1,iVar2);
      if (*psVar1 == param_2) {
        return psVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(char *)(param_1 + 1));
  }
  return (short *)0x0;
}

