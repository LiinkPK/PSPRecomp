/* Entry 0x08912E7C | file offset 0x0010FE54 | FUN_08912e7c | bytes 188 */

int FUN_08912e7c(int param_1,int param_2,int param_3)

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
        if (*(short *)(iVar3 + 4) == param_2) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < iVar1);
    }
  }
  else {
    iVar2 = (param_3 - (iVar3 + 8)) / 0x18 + 1;
    if (iVar2 < iVar1) {
      iVar3 = iVar3 + iVar2 * 0x18 + 8;
      do {
        if (*(short *)(iVar3 + 4) == param_2) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < iVar1);
    }
  }
  return 0;
}

