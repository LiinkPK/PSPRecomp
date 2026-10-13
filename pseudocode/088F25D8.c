/* Entry 0x088F25D8 | file offset 0x000EF5B0 | FUN_088f25d8 | bytes 180 */

void FUN_088f25d8(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  
  iVar4 = DAT_089d712c;
  bVar1 = *(byte *)(DAT_089d712c + 0x1ded9);
  uVar2 = *(undefined1 *)(DAT_089d712c + 0x1deda);
  iVar3 = FUN_088c6aa0(*(undefined1 *)(DAT_089d712c + 0x1ded8));
  iVar4 = FUN_088c6af4(*(undefined1 *)(iVar4 + 0x1ded8));
  iVar5 = 0;
  do {
    iVar6 = iVar5 + (uint)bVar1;
    if (iVar3 <= iVar6) {
      iVar6 = iVar6 - iVar3;
    }
    puVar7 = (undefined1 *)(iVar4 + iVar6 * 4);
    uVar8 = uVar2;
    if (iVar5 != 0) {
      uVar8 = puVar7[1];
    }
    *param_1 = uVar8;
    iVar5 = iVar5 + 1;
    param_1[1] = *puVar7;
    param_1 = param_1 + 2;
  } while (iVar5 < 0xf);
  return;
}

