/* Entry 0x088E03B4 | file offset 0x000DD38C | FUN_088e03b4 | bytes 272 */

undefined4 FUN_088e03b4(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(DAT_089d4960 + 0x60) == '\0') {
    bVar2 = false;
    if ((*(int *)(DAT_089d6ac8 + 0x724) != 0) && (*(int *)(DAT_089d6ac8 + 0x724) != 10)) {
      bVar2 = true;
    }
    if (bVar2) {
      return 1;
    }
    iVar1 = FUN_08899300();
    bVar2 = false;
    if (*(int *)(iVar1 + 0x100) != 0) {
      iVar1 = FUN_08899300();
      bVar2 = false;
      if (*(int *)(iVar1 + 0x100) != 5) {
        bVar2 = true;
      }
    }
    if (bVar2) {
      return 1;
    }
    bVar2 = false;
    if ((*(int *)(param_1 + 0x1288) != 0) && (bVar2 = false, *(int *)(param_1 + 0x1288) != 5)) {
      bVar2 = true;
    }
    if (bVar2) {
      return 1;
    }
    if (*(int *)(param_1 + 0x12f8) != 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x12c4) == 0) {
      return 0;
    }
  }
  return 1;
}

