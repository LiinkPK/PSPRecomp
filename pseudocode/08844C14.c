/* Entry 0x08844C14 | file offset 0x00041BEC | FUN_08844c14 | bytes 460 */

int FUN_08844c14(undefined4 param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  
  FUN_088470b8();
  puVar5 = (undefined4 *)FUN_0884417c(DAT_089d4960,param_1,param_2,0x264000,param_3 != '\0');
  sVar3 = *(short *)*puVar5;
  iVar6 = FUN_088470b8();
  psVar8 = (short *)0x0;
  while (psVar8 = (short *)FUN_08846c40(DAT_089d4968,psVar8), psVar8 != (short *)0x0) {
    bVar4 = false;
    if (((char)psVar8[0x12] == 'W') && (bVar4 = false, *(char *)((int)psVar8 + 0x25) == '_')) {
      bVar4 = true;
    }
    if ((bVar4) && (iVar7 = FUN_08935b50(psVar8 + 0x13,iVar6 + 0x26,5), iVar7 == 0)) {
      bVar1 = *(byte *)(psVar8 + 4);
      bVar2 = *(byte *)(iVar6 + 8);
      if (((bVar1 & 8) != 0) == ((bVar2 & 8) != 0)) {
        if ((((bVar2 & 1) == 0) && ((bVar1 & 1) == 0)) || (((bVar2 & 1) != 0 && ((bVar1 & 1) != 0)))
           ) {
          FUN_0884417c(DAT_089d4960,(int)*psVar8,param_2,0x264000,0);
        }
      }
    }
  }
  iVar7 = 0;
  psVar8 = (short *)(iVar6 + 0x1c);
  do {
    if (-1 < *psVar8) {
      FUN_0884417c(DAT_089d4960,(int)*psVar8,param_2,0x264000,0);
    }
    iVar7 = iVar7 + 1;
    psVar8 = psVar8 + 1;
  } while (iVar7 < 4);
  return (int)sVar3;
}

