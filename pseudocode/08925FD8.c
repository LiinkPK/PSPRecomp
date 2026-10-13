/* Entry 0x08925FD8 | file offset 0x00122FB0 | FUN_08925fd8 | bytes 112 */

void FUN_08925fd8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = 0;
  iVar2 = 0;
  if ('\0' < *(char *)(iVar1 + 0xb7)) {
    do {
      FUN_08925e6c(param_1,(int)*(short *)(iVar1 + iVar2 + 0xbc));
      iVar1 = *(int *)(param_1 + 0x20);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(char *)(iVar1 + 0xb7));
  }
  return;
}

