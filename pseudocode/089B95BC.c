/* Entry 0x089B95BC | file offset 0x001B6594 | FUN_089b95bc | bytes 136 */

int FUN_089b95bc(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((param_3 < iVar2) &&
     ((*(uint *)(param_3 * 4 + param_1 + 0xc) & 0xffffff) == (param_2 & 0xffffff))) {
    return param_3;
  }
  if (0 < iVar2) {
    if ((param_2 & 0xffffff) == (*(uint *)(param_1 + 0xc) & 0xffffff)) {
      return 0;
    }
    for (iVar1 = 1; iVar2 != iVar1; iVar1 = iVar1 + 1) {
      if ((*(uint *)(iVar1 * 4 + param_1 + 0xc) & 0xffffff) == (param_2 & 0xffffff)) {
        return iVar1;
      }
    }
  }
  return -1;
}

