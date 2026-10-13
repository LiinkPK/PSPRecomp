/* Entry 0x08872A18 | file offset 0x0006F9F0 | FUN_08872a18 | bytes 88 */

void FUN_08872a18(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    FUN_08872540(DAT_089d6008 + iVar1 + 0xc0);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x50;
  } while (iVar2 < 2);
  return;
}

