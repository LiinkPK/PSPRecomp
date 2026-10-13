/* Entry 0x08812014 | file offset 0x0000EFEC | FUN_08812014 | bytes 64 */

int FUN_08812014(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar2 = param_1 + 0x10;
    do {
      if (*(byte *)(iVar2 + 4) == param_2) {
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return iVar1;
}

