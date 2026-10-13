/* Entry 0x089398DC | file offset 0x001368B4 | FUN_089398dc | bytes 108 */

short * FUN_089398dc(short *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = 0;
  sVar1 = *param_1;
  psVar2 = param_1;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    iVar5 = iVar5 + 1;
    sVar1 = *psVar2;
  }
  iVar3 = 0;
  iVar5 = iVar5 + -1;
  if (0 < iVar5) {
    psVar4 = param_1 + iVar5;
    psVar2 = param_1;
    do {
      sVar1 = *psVar2;
      *psVar2 = *psVar4;
      *psVar4 = sVar1;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
      psVar2 = psVar2 + 1;
      psVar4 = psVar4 + -1;
    } while (iVar3 < iVar5);
  }
  return param_1;
}

