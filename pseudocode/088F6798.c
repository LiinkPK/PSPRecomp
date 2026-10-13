/* Entry 0x088F6798 | file offset 0x000F3770 | FUN_088f6798 | bytes 200 */

void FUN_088f6798(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (DAT_089d8364 == 0) {
    iVar1 = FUN_0890e888();
    *(undefined4 **)(iVar1 + 0x1660) = &DAT_09b69afc;
  }
  if (DAT_089d7f38 == 0) {
    DAT_089d7f38 = FUN_08862758(0xdbdc);
  }
  if (DAT_089d7f40 == (undefined1 *)0x0) {
    DAT_089d7f40 = (undefined1 *)FUN_08862758(10);
  }
  iVar1 = 0;
  puVar2 = DAT_089d7f40;
  do {
    *puVar2 = (char)iVar1;
    iVar3 = 1;
    puVar4 = puVar2 + 1;
    do {
      iVar3 = iVar3 + 1;
      *puVar4 = 0xff;
      puVar4 = puVar2 + iVar3;
    } while (iVar3 < 5);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 5;
  } while (iVar1 < 2);
  DAT_089d7f3c = &DAT_09b69b00;
  return;
}

