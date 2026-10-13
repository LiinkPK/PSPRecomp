/* Entry 0x088CC2B0 | file offset 0x000C9288 | FUN_088cc2b0 | bytes 180 */

int FUN_088cc2b0(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_089d7808 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (*(short *)(DAT_089d7808 + 2) != 0) {
      do {
        uVar1 = *(ushort *)(DAT_089d780c + iVar3 * 8 + 4);
        if ((uVar1 != 0xffff) &&
           ((*(uint *)(DAT_089d726c + (uint)(uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) != 0)) {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(ushort *)(DAT_089d7808 + 2));
    }
  }
  return iVar2;
}

