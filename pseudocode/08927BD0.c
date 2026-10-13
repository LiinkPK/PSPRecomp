/* Entry 0x08927BD0 | file offset 0x00124BA8 | FUN_08927bd0 | bytes 268 */

int FUN_08927bd0(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  psVar3 = (short *)(*(int *)(DAT_089d6c30 + 8) + param_2 * 0x2c);
  iVar2 = -1;
  if (((((psVar3 != (short *)0x0) && (bVar1 = *(byte *)(psVar3 + 6), (bVar1 & 1) == 0)) &&
       ((bVar1 & 2) == 0)) && ((bVar1 & 4) == 0)) &&
     ((iVar5 = (int)*psVar3, iVar5 < 0x3d || (0x3e < iVar5)))) {
    psVar3 = psVar3 + 2;
    iVar4 = 0;
    do {
      uVar6 = (uint)*psVar3;
      if ((uVar6 != 0xffffffff) &&
         ((*(uint *)(DAT_089d726c + (uVar6 >> 5) * 4) & 1 << (uVar6 & 0x1f)) == 0)) {
        return -1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 1;
      iVar2 = iVar5;
    } while (iVar4 < 4);
  }
  return iVar2;
}

