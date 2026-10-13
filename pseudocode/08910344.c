/* Entry 0x08910344 | file offset 0x0010D31C | FUN_08910344 | bytes 120 */

int FUN_08910344(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = 0;
  if (param_2 == 0) {
    if (0 < *(int *)(iVar3 + 4)) {
      iVar1 = iVar3 + 8;
    }
  }
  else {
    iVar2 = (param_2 - (iVar3 + 8)) / 0x78 + 1;
    if (iVar2 < *(int *)(iVar3 + 4)) {
      iVar1 = iVar3 + iVar2 * 0x78 + 8;
    }
  }
  return iVar1;
}

