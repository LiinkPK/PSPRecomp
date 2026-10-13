/* Entry 0x0891051C | file offset 0x0010D4F4 | FUN_0891051c | bytes 188 */

int FUN_0891051c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar3 + 4);
  if (param_3 == 0) {
    iVar2 = 0;
    iVar3 = iVar3 + 8;
    if (0 < iVar1) {
      do {
        if (*(short *)(iVar3 + 2) == param_2) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < iVar1);
    }
  }
  else {
    iVar2 = (param_3 - (iVar3 + 8)) / 0x14 + 1;
    if (iVar2 < iVar1) {
      iVar3 = iVar3 + iVar2 * 0x14 + 8;
      do {
        if (*(short *)(iVar3 + 2) == param_2) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < iVar1);
    }
  }
  return 0;
}

