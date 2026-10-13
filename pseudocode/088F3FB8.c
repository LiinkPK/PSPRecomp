/* Entry 0x088F3FB8 | file offset 0x000F0F90 | FUN_088f3fb8 | bytes 244 */

void FUN_088f3fb8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  FUN_088f3e98();
  iVar1 = FUN_088cb164(DAT_089d712c + 0xf58,param_2);
  iVar1 = iVar1 + 0x10;
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      iVar2 = FUN_088b7b18(iVar1,iVar3);
      if (iVar2 != -1) {
        FUN_088f3ee8(param_1,iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar3 = 0;
    psVar5 = (short *)(iVar1 + 0xa2);
    do {
      if (*psVar5 != -1) {
        FUN_088f3f50(param_1,(int)*psVar5);
      }
      iVar3 = iVar3 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar3 < 10);
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + 0xc6;
  } while (iVar4 < 5);
  return;
}

