/* Entry 0x088F3B80 | file offset 0x000F0B58 | FUN_088f3b80 | bytes 408 */

void FUN_088f3b80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *local_38 [2];
  
  iVar5 = DAT_089d712c + 0xf6e0;
  iVar1 = FUN_088cb164(DAT_089d712c + 0xf58);
  iVar1 = iVar1 + 0x10;
  iVar6 = 0;
  do {
    iVar7 = 0;
    do {
      iVar2 = FUN_088b7b18(iVar1,iVar7);
      if ((iVar2 != -1) && (iVar3 = FUN_088c7f78(iVar2), iVar3 == 0)) {
        FUN_088b97e8(local_38,iVar2);
        if ((local_38[0] != (short *)0x0) &&
           ((iVar2 = FUN_088b8fd0(iVar5,(int)*local_38[0]), iVar2 != 0 &&
            (*(char *)(iVar2 + 2) == '\0')))) {
          FUN_088b765c(iVar1,iVar7,0xffffffff);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    iVar7 = 0;
    psVar8 = (short *)(iVar1 + 0xa2);
    do {
      if ((((*psVar8 != -1) && (psVar4 = (short *)FUN_088b29d8(), psVar4 != (short *)0x0)) &&
          (iVar2 = FUN_088b9004(iVar5,(int)*psVar4), iVar2 != 0)) && (*(char *)(iVar2 + 2) == '\0'))
      {
        FUN_088b766c(iVar1,iVar7,0xffffffff);
      }
      iVar7 = iVar7 + 1;
      psVar8 = psVar8 + 1;
    } while (iVar7 < 10);
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + 0xc6;
  } while (iVar6 < 5);
  return;
}

