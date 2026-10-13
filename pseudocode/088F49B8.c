/* Entry 0x088F49B8 | file offset 0x000F1990 | FUN_088f49b8 | bytes 272 */

uint FUN_088f49b8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_089d712c;
  iVar1 = FUN_088f44dc(0x19,1);
  if (iVar1 == 0) {
    iVar2 = FUN_088c5140(0x19);
    uVar5 = (int)(*(byte *)(iVar2 + 2) & 0xf0) >> 4;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    for (iVar1 = 0; -1 < (int)(&DAT_089cccf8)[iVar1]; iVar1 = iVar1 + 1) {
      iVar3 = FUN_088678a8((&DAT_089cccf8)[iVar1]);
      if (iVar3 != 0) {
        if (*(byte *)(iVar2 + 0x1de1d) == uVar4) {
          return (&DAT_089cccf8)[iVar1] & 0xff;
        }
        uVar4 = uVar4 + 1;
      }
    }
  }
  return uVar5;
}

