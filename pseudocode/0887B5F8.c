/* Entry 0x0887B5F8 | file offset 0x000785D0 | FUN_0887b5f8 | bytes 80 */

void FUN_0887b5f8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_09b48c60;
  do {
    if (puVar1[2] == param_1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      DAT_09b48c60 = DAT_09b48c60 + -1;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 4);
  return;
}

