/* Entry 0x0886D550 | file offset 0x0006A528 | FUN_0886d550 | bytes 100 */

void FUN_0886d550(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_089d5f94 + 0x1c;
  do {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_0886a6a4(iVar1);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x13c;
  } while (iVar2 < 0xc0);
  return;
}

