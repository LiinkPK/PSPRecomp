/* Entry 0x0890E948 | file offset 0x0010B920 | FUN_0890e948 | bytes 116 */

void FUN_0890e948(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_089d8364 != 0) {
    FUN_08906d64();
    DAT_089d8364 = 0;
    iVar2 = 0;
    puVar1 = &DAT_09b6b3e0;
    do {
      FUN_0890ea18(*puVar1);
      *puVar1 = 0xffffffff;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < 4);
  }
  return;
}

