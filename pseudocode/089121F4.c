/* Entry 0x089121F4 | file offset 0x0010F1CC | FUN_089121f4 | bytes 272 */

void FUN_089121f4(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 0;
  while (iVar5 = FUN_089121a8(param_1,iVar5), iVar5 != 0) {
    if (*(short *)(iVar5 + 6) == 1) {
      iVar2 = FUN_088bbd8c(*(undefined4 *)(iVar5 + 0x1c));
      psVar3 = (short *)FUN_08847108(*(undefined1 *)(iVar2 + 2),0);
      iVar2 = FUN_088444d4(DAT_089d4960,(int)*psVar3);
      if (iVar2 == 0) {
        sVar1 = *psVar3;
        uVar4 = FUN_089110b4();
        FUN_0884417c(DAT_089d4960,(int)sVar1,uVar4,0x264000,0);
      }
    }
    else if (*(short *)(iVar5 + 6) == 5) {
      sVar1 = *(short *)(iVar5 + 0x1e);
      uVar4 = FUN_089110b4();
      FUN_0884417c(DAT_089d4960,(int)sVar1,uVar4,0x264000,0);
    }
  }
  return;
}

