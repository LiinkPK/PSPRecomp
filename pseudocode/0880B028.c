/* Entry 0x0880B028 | file offset 0x00008000 | FUN_0880b028 | bytes 52 */

void FUN_0880b028(void)

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
  DAT_089d4774 = 0;
  DAT_089d4770 = 0;
  return;
}

