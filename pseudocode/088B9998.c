/* Entry 0x088B9998 | file offset 0x000B6970 | FUN_088b9998 | bytes 520 */

int FUN_088b9998(short *param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short local_3b0 [300];
  undefined1 auStack_158 [300];
  short *local_2c;
  
  psVar5 = local_3b0;
  iVar6 = 0;
  iVar7 = param_3 + *(char *)(param_3 + 0x763) * 0xc6;
  iVar4 = 0;
  local_2c = param_1;
  do {
    iVar2 = 0;
    do {
      sVar1 = FUN_088b7a88(iVar7,iVar4,iVar2);
      iVar6 = FUN_088ba54c(local_3b0,auStack_158,iVar6,(int)sVar1,param_4,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    iVar2 = 0;
    do {
      iVar3 = 0;
      do {
        sVar1 = FUN_088b7ab8(iVar7,iVar4,iVar2,iVar3);
        iVar6 = FUN_088ba54c(local_3b0,auStack_158,iVar6,(int)sVar1,param_4,param_3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = 0;
  do {
    sVar1 = FUN_088b7ae8(iVar7,iVar4);
    iVar6 = FUN_088ba54c(local_3b0,auStack_158,iVar6,(int)sVar1,param_4,param_3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  iVar7 = 0;
  iVar4 = 0;
  psVar8 = local_2c;
  if (0 < iVar6) {
    do {
      iVar2 = FUN_088b1d9c((int)*psVar5);
      if ((iVar2 != 0) && (*(short *)(iVar2 + 0x12) <= psVar5[1])) {
        if (param_2 <= iVar4) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
        *psVar8 = *psVar5;
        psVar8 = psVar8 + 1;
      }
      iVar7 = iVar7 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar7 < iVar6);
  }
  return iVar4;
}

