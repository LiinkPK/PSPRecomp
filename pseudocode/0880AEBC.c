/* Entry 0x0880AEBC | file offset 0x00007E94 | FUN_0880aebc | bytes 60 */

void FUN_0880aebc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_089d4750;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  DAT_08b63284 = 0;
  DAT_089d4774 = 0;
  DAT_089d4770 = 0;
  return;
}

