/* Entry 0x08897DEC | file offset 0x00094DC4 | FUN_08897dec | bytes 92 */

int FUN_08897dec(int param_1,int param_2)

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
    iVar2 = *(int *)(param_1 + 0x6c) + param_2 * 0x3c + 0x24;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

