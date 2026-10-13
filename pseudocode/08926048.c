/* Entry 0x08926048 | file offset 0x00123020 | FUN_08926048 | bytes 76 */

undefined4 FUN_08926048(int param_1,short param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = 0;
  pcVar1 = (char *)(iVar2 + 0xb8);
  if (0 < *pcVar1) {
    do {
      if (*(short *)(iVar2 + 0x47c) == param_2) {
        return *(undefined4 *)(iVar2 + 0x480);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *pcVar1);
  }
  return 0;
}

