/* Entry 0x08846C40 | file offset 0x00043C18 | FUN_08846c40 | bytes 88 */

int FUN_08846c40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *param_1;
  if (param_2 != 0) {
    iVar2 = (param_2 - (iVar1 + 8)) / 0x44 + 1;
  }
  if (iVar2 < *(int *)(iVar1 + 4)) {
    iVar1 = iVar1 + iVar2 * 0x44 + 8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

