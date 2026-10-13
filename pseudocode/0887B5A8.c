/* Entry 0x0887B5A8 | file offset 0x00078580 | FUN_0887b5a8 | bytes 80 */

undefined4 FUN_0887b5a8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_09b48c60;
  do {
    if (*(char *)(puVar1 + 3) == '\0') {
      *(undefined1 *)(puVar1 + 3) = 1;
      DAT_09b48c60 = DAT_09b48c60 + 1;
      return puVar1[2];
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 4);
  return 0;
}

