/* Entry 0x08873F10 | file offset 0x00070EE8 | FUN_08873f10 | bytes 68 */

undefined4 FUN_08873f10(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_09b47b50;
  iVar2 = 0;
  do {
    if (*(int *)(puVar1 + 0x234) != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x240;
  } while (iVar2 < 3);
  return 0;
}

