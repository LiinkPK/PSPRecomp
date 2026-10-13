/* Entry 0x088F2444 | file offset 0x000EF41C | FUN_088f2444 | bytes 328 */

void FUN_088f2444(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = DAT_089d712c;
  bVar2 = false;
  if (*(char *)(DAT_089d712c + 0x1deda) == '\x02') {
    FUN_088f203c();
  }
  *(undefined1 *)(iVar3 + 0x1dede) = 1;
  *(char *)(iVar3 + 0x1ded9) = *(char *)(iVar3 + 0x1ded9) + '\x01';
  iVar4 = FUN_088c6aa0(*(undefined1 *)(iVar3 + 0x1ded8));
  if (iVar4 <= (int)(uint)*(byte *)(iVar3 + 0x1ded9)) {
    bVar1 = *(byte *)(iVar3 + 0x1ded8);
    if (bVar1 == 0) {
      *DAT_089d726c = *DAT_089d726c | 0x400;
    }
    else if (bVar1 < 2) {
      *DAT_089d726c = *DAT_089d726c | 0x800;
    }
    else if (bVar1 < 3) {
      *DAT_089d726c = *DAT_089d726c | 0x1000;
    }
    *(undefined1 *)(iVar3 + 0x1ded9) = 0;
    bVar2 = true;
  }
  uVar5 = *(byte *)(iVar3 + 0x1dedb) + 1;
  *(undefined1 *)(iVar3 + 0x1dedd) = 0;
  if (99 < uVar5) {
    uVar5 = 100;
  }
  *(char *)(iVar3 + 0x1dedb) = (char)uVar5;
  FUN_088f20e8();
  if (bVar2) {
    FUN_088f229c(*(undefined1 *)(iVar3 + 0x1ded8),0);
  }
  if (*(char *)(iVar3 + 0x1dedf) != '\0') {
    FUN_088f229c(*(undefined1 *)(iVar3 + 0x1ded8),1);
    *(undefined1 *)(iVar3 + 0x1dedf) = 0;
  }
  return;
}

