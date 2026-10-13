/* Entry 0x088F26E4 | file offset 0x000EF6BC | FUN_088f26e4 | bytes 256 */

int FUN_088f26e4(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_089d712c;
  bVar1 = *(byte *)(DAT_089d712c + 0x1ded9);
  iVar3 = FUN_088c6aa0(*(undefined1 *)(DAT_089d712c + 0x1ded8));
  iVar4 = FUN_088c6af4(*(undefined1 *)(iVar6 + 0x1ded8));
  iVar5 = 0;
  bVar2 = false;
  iVar6 = iVar4;
  if (0 < iVar3) {
    do {
      if (*(char *)(iVar6 + 1) == '\x02') {
        bVar2 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < iVar3);
  }
  if (bVar2) {
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar6 + (uint)bVar1;
        if (iVar3 <= iVar5) break;
        if (*(char *)(iVar4 + iVar5 * 4 + 1) == '\x02') {
          return iVar6 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    iVar6 = 1;
  }
  else {
    iVar6 = -1;
  }
  return iVar6;
}

