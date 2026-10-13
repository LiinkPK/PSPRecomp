/* Entry 0x088C4E9C | file offset 0x000C1E74 | FUN_088c4e9c | bytes 216 */

int FUN_088c4e9c(uint param_1,int param_2,int param_3,int *param_4,char param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  if (DAT_089d76c8 == 0) {
    iVar2 = -1;
  }
  else {
    iVar5 = 0;
    iVar2 = 9999;
    sVar1 = -1;
    if (0 < DAT_089d76d0) {
      iVar3 = 0;
      do {
        psVar4 = (short *)(DAT_089d76c8 + iVar3 + iVar5 * 4);
        if (((*(byte *)(psVar4 + 8) == param_1) && (param_2 <= psVar4[7])) && (psVar4[7] <= param_3)
           ) {
          if (param_5 == '\0') {
            iVar3 = psVar4[7] - param_2;
          }
          else {
            iVar3 = param_3 - psVar4[7];
          }
          if (iVar3 < iVar2) {
            sVar1 = *psVar4;
            iVar2 = iVar3;
            if (param_4 != (int *)0x0) {
              *param_4 = (int)psVar4[7];
            }
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar5 * 0x10;
      } while (iVar5 < DAT_089d76d0);
    }
    iVar2 = (int)sVar1;
  }
  return iVar2;
}

