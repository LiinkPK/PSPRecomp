/* Entry 0x08897E48 | file offset 0x00094E20 | FUN_08897e48 | bytes 92 */

int FUN_08897e48(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    bVar1 = false;
  }
  else if (param_2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (param_2 < **(int **)(param_1 + 0x58)) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x6c) + param_2 * 0x3c + 0x30;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

