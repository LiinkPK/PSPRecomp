/* Entry 0x0885C348 | file offset 0x00059320 | FUN_0885c348 | bytes 116 */

void FUN_0885c348(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_089d4e18) {
    puVar1 = &DAT_09b17d28;
    do {
      (*(code *)*puVar1)(puVar1[1]);
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar2 < DAT_089d4e18);
  }
  DAT_089d4e18 = 0;
  return;
}

