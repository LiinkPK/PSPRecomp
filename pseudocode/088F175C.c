/* Entry 0x088F175C | file offset 0x000EE734 | FUN_088f175c | bytes 96 */

int FUN_088f175c(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  if (param_1 == 0) {
    psVar2 = (short *)(DAT_089d712c + 0x1deec);
  }
  else {
    psVar2 = (short *)(DAT_089d712c + 0x1def4);
  }
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*psVar2 != -1) {
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 2;
  } while (iVar3 < 2);
  return iVar1;
}

