/* Entry 0x08813574 | file offset 0x0001054C | FUN_08813574 | bytes 96 */

void FUN_08813574(void)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_089d47b0;
  FUN_08993560(&DAT_089d47b0,4,0x40,&LAB_08813004);
  iVar1 = 0;
  do {
    *(int *)(puVar2 + 0x100) = iVar1;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar1 < 4);
  DAT_089d48c0 = 4;
  return;
}

