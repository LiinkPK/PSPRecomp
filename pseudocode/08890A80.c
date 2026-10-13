/* Entry 0x08890A80 | file offset 0x0008DA58 | FUN_08890a80 | bytes 76 */

undefined4 FUN_08890a80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    piVar1 = &DAT_09b49208;
    do {
      if (0 < *piVar1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < param_1);
  }
  return 1;
}

