/* Entry 0x0886D5B4 | file offset 0x0006A58C | FUN_0886d5b4 | bytes 100 */

void FUN_0886d5b4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_089d5f94 + 0x1c;
  do {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_0886a8b4(iVar1);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x13c;
  } while (iVar2 < 0xc0);
  return;
}

