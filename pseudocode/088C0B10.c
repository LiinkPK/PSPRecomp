/* Entry 0x088C0B10 | file offset 0x000BDAE8 | FUN_088c0b10 | bytes 256 */

undefined4 FUN_088c0b10(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar3 = 0;
  if ((DAT_089d7400 != 0) && (iVar5 = 0, *(short *)(DAT_089d7400 + 2) != 0)) {
    iVar4 = 0;
    do {
      puVar6 = (ushort *)(DAT_089d7404 + iVar4);
      if (*puVar6 == param_1) {
        uVar1 = puVar6[1];
        if (uVar1 != 0xffff) {
          uVar2 = puVar6[2];
          uVar7 = (uint)uVar2;
          if (uVar7 != 0xffff) {
            if (((*(uint *)(DAT_089d726c + (uint)(uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) != 0) &&
               ((*(uint *)(DAT_089d726c + (uint)(uVar2 >> 5) * 4) & 1 << (uVar7 & 0x1f)) == 0)) {
              puVar8 = (uint *)(DAT_089d726c + (uint)(uVar2 >> 5) * 4);
              *puVar8 = *puVar8 | 1 << (uVar7 & 0x1f);
              uVar3 = 1;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar5 < (int)(uint)*(ushort *)(DAT_089d7400 + 2));
  }
  return uVar3;
}

