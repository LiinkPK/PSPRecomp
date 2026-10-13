/* Entry 0x08844DE0 | file offset 0x00041DB8 | FUN_08844de0 | bytes 368 */

void FUN_08844de0(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  iVar4 = FUN_088470b8();
  FUN_08844520(DAT_089d4960,param_1);
  psVar6 = (short *)0x0;
  while (psVar6 = (short *)FUN_08846c40(DAT_089d4968,psVar6), psVar6 != (short *)0x0) {
    bVar3 = false;
    if (((char)psVar6[0x12] == 'W') && (bVar3 = false, *(char *)((int)psVar6 + 0x25) == '_')) {
      bVar3 = true;
    }
    if ((bVar3) && (iVar5 = FUN_08935b50(psVar6 + 0x13,iVar4 + 0x26,5), iVar5 == 0)) {
      bVar1 = *(byte *)(psVar6 + 4);
      bVar2 = *(byte *)(iVar4 + 8);
      if (((bVar1 & 8) != 0) == ((bVar2 & 8) != 0)) {
        if ((((bVar2 & 1) == 0) && ((bVar1 & 1) == 0)) || (((bVar2 & 1) != 0 && ((bVar1 & 1) != 0)))
           ) {
          FUN_08844520(DAT_089d4960,(int)*psVar6);
        }
      }
    }
  }
  iVar5 = 0;
  psVar6 = (short *)(iVar4 + 0x1c);
  do {
    if (-1 < *psVar6) {
      FUN_08844520(DAT_089d4960,(int)*psVar6);
    }
    iVar5 = iVar5 + 1;
    psVar6 = psVar6 + 1;
  } while (iVar5 < 4);
  return;
}

