/* Entry 0x088F203C | file offset 0x000EF014 | FUN_088f203c | bytes 172 */

void FUN_088f203c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  iVar2 = DAT_089d712c;
  psVar5 = (short *)(DAT_089d712c + 0x1de98);
  iVar3 = FUN_088c6af4(*(undefined1 *)(DAT_089d712c + 0x1ded8));
  sVar1 = *(short *)(iVar3 + (uint)*(byte *)(iVar2 + 0x1ded9) * 4 + 2);
  iVar3 = 0;
  psVar4 = psVar5;
  do {
    if (*psVar4 == -1) {
      if (sVar1 == -1) {
        return;
      }
      *psVar4 = sVar1;
      return;
    }
    iVar3 = iVar3 + 1;
    psVar4 = psVar4 + 1;
  } while (iVar3 < 0x20);
  if (sVar1 != -1) {
    FUN_08935524(psVar5,iVar2 + 0x1de9a,0x3e);
    *(short *)(iVar2 + 0x1ded6) = sVar1;
  }
  return;
}

