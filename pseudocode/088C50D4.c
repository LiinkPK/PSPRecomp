/* Entry 0x088C50D4 | file offset 0x000C20AC | FUN_088c50d4 | bytes 108 */

byte * FUN_088c50d4(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_089d76dc != (byte *)0x0) {
    iVar3 = 0;
    iVar2 = 0;
    pbVar1 = DAT_089d76dc;
    if (*(ushort *)(DAT_089d76d8 + 2) != 0) {
      do {
        if (*pbVar1 == param_1) {
          return DAT_089d76dc + iVar2;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x1c;
        pbVar1 = pbVar1 + 0x1c;
      } while (iVar3 < (int)(uint)*(ushort *)(DAT_089d76d8 + 2));
    }
  }
  return (byte *)0x0;
}

