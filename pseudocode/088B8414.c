/* Entry 0x088B8414 | file offset 0x000B53EC | FUN_088b8414 | bytes 132 */

short * FUN_088b8414(int param_1,int param_2,char param_3)

{
  short *psVar1;
  int iVar2;
  
  if (param_3 == '\x01') {
    param_2 = FUN_088b9e28((int)(short)param_2);
  }
  iVar2 = 0;
  psVar1 = (short *)(param_1 + 0x3de);
  while( true ) {
    if (*psVar1 == param_2) {
      return psVar1;
    }
    if (*psVar1 == -1) break;
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 3;
    if (0x95 < iVar2) {
      return (short *)0x0;
    }
  }
  return (short *)0x0;
}

