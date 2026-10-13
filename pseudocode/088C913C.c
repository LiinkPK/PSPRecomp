/* Entry 0x088C913C | file offset 0x000C6114 | FUN_088c913c | bytes 176 */

int FUN_088c913c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xbda8)) {
    do {
      iVar1 = FUN_088c90c0(param_1,iVar2);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x20) == '\x01')) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xbda8));
  }
  return iVar3;
}

