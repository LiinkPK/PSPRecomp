/* Entry 0x088E3564 | file offset 0x000E053C | FUN_088e3564 | bytes 152 */

void FUN_088e3564(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 + 0x6a8;
  while ((*(char *)(iVar2 + 0x42) == '\0' || (*(char *)(iVar2 + 0x43) == '\0'))) {
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x44;
    if (3 < iVar1) {
      return;
    }
  }
  *(undefined1 *)(iVar2 + 0x43) = 0;
  iVar1 = iVar1 + 1;
  if (iVar1 < 4) {
    iVar2 = param_1 + iVar1 * 0x44 + 0x6a8;
    do {
      if (*(char *)(iVar2 + 0x42) != '\0') {
        *(undefined1 *)(iVar2 + 0x43) = 1;
        return;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar1 < 4);
  }
  *(undefined1 *)(param_1 + 0x6eb) = 1;
  return;
}

