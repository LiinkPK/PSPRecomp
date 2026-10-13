/* Entry 0x08926640 | file offset 0x00123618 | FUN_08926640 | bytes 176 */

int FUN_08926640(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x488);
  iVar3 = 0;
  iVar2 = param_2 + 0x48c;
  if (0 < iVar1) {
    do {
      iVar1 = FUN_08935490(iVar2,param_3,0x40);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar1 = *(int *)(param_2 + 0x488);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < iVar1);
  }
  FUN_08935524(param_2 + iVar1 * 0x40 + 0x48c,param_3,0x40);
  iVar1 = *(int *)(param_2 + 0x488);
  *(int *)(param_2 + 0x488) = iVar1 + 1;
  return iVar1;
}

