/* Entry 0x088F5EFC | file offset 0x000F2ED4 | FUN_088f5efc | bytes 196 */

uint FUN_088f5efc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  iVar5 = *(int *)(DAT_089d76b0 + 0xc);
  uVar4 = 0;
  iVar6 = DAT_089d712c + 0xf58;
  if (0 < iVar5) {
    iVar2 = 0;
    do {
      iVar1 = DAT_089d76b8 + iVar2;
      if ((iVar1 != 0) &&
         (iVar1 = FUN_088c2998(iVar6,(int)*(short *)(iVar1 + 2),iVar1 + 4), iVar1 == 1)) {
        uVar4 = uVar4 | 1 << (uVar3 & 0x1f);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while ((int)uVar3 < iVar5);
  }
  return uVar4;
}

