/* Entry 0x0887B0D0 | file offset 0x000780A8 | FUN_0887b0d0 | bytes 80 */

void FUN_0887b0d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_09b48c18;
  do {
    if (puVar1[2] == param_1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      DAT_09b48c18 = DAT_09b48c18 + -1;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 8);
  return;
}

