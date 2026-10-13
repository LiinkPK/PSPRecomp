/* Entry 0x0880CD9C | file offset 0x00009D74 | FUN_0880cd9c | bytes 88 */

int FUN_0880cd9c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x34);
    do {
      if (**(short **)(iVar1 + 0x158) == param_2) {
        return *(int *)(param_1 + 0x34) + iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x170;
      iVar1 = iVar1 + 0x170;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return 0;
}

