/* Entry 0x088CA42C | file offset 0x000C7404 | FUN_088ca42c | bytes 156 */

int FUN_088ca42c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xbda0);
  iVar2 = param_1 + 0xa180;
  if ((0 < iVar3) && (iVar1 = 0, 0 < iVar3)) {
    do {
      if ((iVar1 == 0) || (*(int *)(iVar2 + 0x18) <= *(int *)(param_1 + 0xbde4))) {
        if (iVar1 == iVar3 + -1) {
          return iVar1;
        }
        if (*(int *)(param_1 + 0xbde4) < *(int *)(iVar2 + 0x3c)) {
          return iVar1;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < iVar3);
  }
  return -1;
}

