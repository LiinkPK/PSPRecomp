/* Entry 0x088729C0 | file offset 0x0006F998 | FUN_088729c0 | bytes 88 */

void FUN_088729c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    FUN_08872510(DAT_089d6008 + iVar1 + 0xc0);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x50;
  } while (iVar2 < 2);
  return;
}

