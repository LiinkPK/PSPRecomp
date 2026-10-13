/* Entry 0x0887B13C | file offset 0x00078114 | FUN_0887b13c | bytes 120 */

void FUN_0887b13c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  DAT_09b48c18 = 0;
  iVar1 = FUN_088820d8(0x80);
  puVar2 = &DAT_09b48c18;
  iVar3 = 0;
  DAT_09b48c1c = iVar1;
  do {
    puVar2[2] = iVar1;
    *(undefined1 *)(puVar2 + 3) = 0;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x10;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 8);
  FUN_0887df14(DAT_089d6998,&DAT_09b49088,0x80,&DAT_089c9d40);
  return;
}

