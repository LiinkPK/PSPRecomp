/* Entry 0x088F20E8 | file offset 0x000EF0C0 | FUN_088f20e8 | bytes 312 */

void FUN_088f20e8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_089d712c;
  iVar3 = FUN_088c6af4(*(undefined1 *)(DAT_089d712c + 0x1ded8));
  *(undefined1 *)(iVar2 + 0x1deda) =
       *(undefined1 *)(iVar3 + (uint)*(byte *)(iVar2 + 0x1ded9) * 4 + 1);
  *(undefined1 *)(iVar2 + 0x1dedc) = 10;
  if (((*(char *)(iVar2 + 0x1dede) != '\0') && (iVar4 = FUN_088f26b4(), iVar4 != 2)) &&
     (cVar1 = *(char *)(iVar3 + (uint)*(byte *)(iVar2 + 0x1ded9) * 4), cVar1 != '\0')) {
    if (*(char *)(iVar2 + 0x1deda) == '\0') {
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      if ((DAT_09afb89c >> 0x10 & 0x7fffU) % 100 <= (uint)*(byte *)(iVar2 + 0x1dedb)) {
        *(undefined1 *)(iVar2 + 0x1deda) = 3;
        iVar3 = FUN_088f27fc(cVar1);
        *(char *)(iVar2 + 0x1dedc) = (char)(iVar3 / 10);
      }
    }
    else if (*(char *)(iVar2 + 0x1deda) == '\x01') {
      iVar3 = FUN_088f27fc(cVar1);
      *(char *)(iVar2 + 0x1dedc) = (char)(iVar3 / 10);
    }
  }
  return;
}

