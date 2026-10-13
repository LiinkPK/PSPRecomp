/* Entry 0x088FAD0C | file offset 0x000F7CE4 | FUN_088fad0c | bytes 356 */

void FUN_088fad0c(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  
  iVar4 = param_1 + 0x10 + *(char *)(param_1 + 0x773) * 0xc6;
  psVar6 = &DAT_09b69b10 + param_2 * 0x10;
  iVar5 = 0;
  psVar7 = &DAT_09b69b18 + param_2 * 0x10;
  do {
    if (*psVar6 != -1) {
      FUN_088b765c(iVar4,iVar5,(int)*psVar6);
    }
    iVar5 = iVar5 + 1;
    psVar6 = psVar6 + 1;
  } while (iVar5 < 4);
  iVar5 = 0;
  do {
    if (-1 < *psVar7) {
      FUN_088b766c(iVar4,iVar5,(int)*psVar7);
    }
    iVar5 = iVar5 + 1;
    psVar7 = psVar7 + 1;
  } while (iVar5 < 10);
  if (-1 < (short)(&DAT_09b69b2c)[param_2 * 0x10]) {
    FUN_088b767c(iVar4,(int)(short)(&DAT_09b69b2c)[param_2 * 0x10]);
  }
  if (param_3 == '\x01') {
    iVar5 = 0;
    do {
      uVar1 = FUN_088b7b18(iVar4,iVar5);
      iVar2 = FUN_088c7f78(uVar1);
      if (iVar2 == 1) {
        uVar3 = FUN_088c7f58(uVar1 & 0x1f);
        FUN_088b765c(iVar4,iVar5,uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  return;
}

