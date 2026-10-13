/* Entry 0x088C5140 | file offset 0x000C2118 | FUN_088c5140 | bytes 108 */

int FUN_088c5140(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_089d76dc != 0) {
    iVar3 = 0;
    iVar2 = 0;
    iVar1 = DAT_089d76dc;
    if (*(ushort *)(DAT_089d76d8 + 2) != 0) {
      do {
        if (*(byte *)(iVar1 + 1) == param_1) {
          return DAT_089d76dc + iVar2;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x1c;
        iVar1 = iVar1 + 0x1c;
      } while (iVar3 < (int)(uint)*(ushort *)(DAT_089d76d8 + 2));
    }
  }
  return 0;
}

