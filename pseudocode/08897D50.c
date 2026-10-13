/* Entry 0x08897D50 | file offset 0x00094D28 | FUN_08897d50 | bytes 156 */

int FUN_08897d50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    iVar2 = 0;
    iVar3 = 0;
    if (0 < **(int **)(param_1 + 0x58)) {
      do {
        iVar1 = FUN_08935970(*(int *)(param_1 + 0x6c) + iVar3,param_2);
        if (iVar1 == 0) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x3c;
      } while (iVar2 < **(int **)(param_1 + 0x58));
    }
  }
  return -1;
}

