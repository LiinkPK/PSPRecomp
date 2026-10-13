/* Entry 0x0887B648 | file offset 0x00078620 | FUN_0887b648 | bytes 88 */

void FUN_0887b648(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  DAT_09b48c60 = 0;
  iVar1 = FUN_088820d8(0x20);
  puVar2 = &DAT_09b48c60;
  iVar3 = 0;
  DAT_09b48c64 = iVar1;
  do {
    puVar2[2] = iVar1;
    *(undefined1 *)(puVar2 + 3) = 0;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 8;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 4);
  return;
}

