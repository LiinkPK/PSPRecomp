/* Entry 0x08926994 | file offset 0x0012396C | FUN_08926994 | bytes 160 */

int FUN_08926994(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0xa1c)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_08935490(iVar1 + iVar2 + 0xa24,param_2,0x40);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar1 = *(int *)(param_1 + 0x20);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < *(int *)(iVar1 + 0xa1c));
  }
  return -1;
}

