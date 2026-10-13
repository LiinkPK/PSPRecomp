/* Entry 0x088B4744 | file offset 0x000B171C | FUN_088b4744 | bytes 164 */

short * FUN_088b4744(undefined4 param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 999;
  iVar4 = -1;
  psVar1 = DAT_089d7324;
  if (0 < *(int *)(DAT_089d7320 + 8)) {
    do {
      if (*psVar1 == param_3) {
        iVar2 = (int)psVar1[1];
        if ((param_2 <= iVar2) && (iVar2 < iVar5)) {
          iVar4 = iVar3;
          iVar5 = iVar2;
        }
      }
      iVar3 = iVar3 + 1;
      psVar1 = psVar1 + 6;
    } while (iVar3 < *(int *)(DAT_089d7320 + 8));
  }
  if (iVar4 == -1) {
    psVar1 = (short *)0x0;
  }
  else {
    psVar1 = DAT_089d7324 + iVar4 * 6;
  }
  return psVar1;
}

