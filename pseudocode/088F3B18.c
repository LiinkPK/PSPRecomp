/* Entry 0x088F3B18 | file offset 0x000F0AF0 | FUN_088f3b18 | bytes 104 */

void FUN_088f3b18(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    if (iVar2 != 0x17) {
      iVar1 = FUN_088cb164(DAT_089d712c + 0xf58,iVar2);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined2 *)(iVar1 + 6) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x21);
  return;
}

