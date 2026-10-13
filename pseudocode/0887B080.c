/* Entry 0x0887B080 | file offset 0x00078058 | FUN_0887b080 | bytes 80 */

undefined4 FUN_0887b080(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_09b48c18;
  do {
    if (*(char *)(puVar1 + 3) == '\0') {
      *(undefined1 *)(puVar1 + 3) = 1;
      DAT_09b48c18 = DAT_09b48c18 + 1;
      return puVar1[2];
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 8);
  return 0;
}

