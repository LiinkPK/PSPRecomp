/* Entry 0x088B36FC | file offset 0x000B06D4 | FUN_088b36fc | bytes 104 */

int FUN_088b36fc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_089d72e8 != 0) {
    iVar1 = 0;
    iVar2 = DAT_089d72ec;
    if (0 < *(int *)(DAT_089d72e8 + 8)) {
      do {
        if (**(short **)(iVar2 + 0xc) == param_1) {
          return iVar2;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x24;
      } while (iVar1 < *(int *)(DAT_089d72e8 + 8));
    }
  }
  return 0;
}

