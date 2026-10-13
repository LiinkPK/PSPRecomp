/* Entry 0x089120A4 | file offset 0x0010F07C | FUN_089120a4 | bytes 192 */

int FUN_089120a4(int param_1,int param_2,int param_3)

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
        iVar3 = iVar3 + 0x2c;
      } while (iVar2 < iVar1);
    }
  }
  else {
    iVar2 = (param_3 - (iVar3 + 8)) / 0x2c + 1;
    if (iVar2 < iVar1) {
      iVar3 = iVar3 + iVar2 * 0x2c + 8;
      do {
        if (*(short *)(iVar3 + 4) == param_2) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x2c;
      } while (iVar2 < iVar1);
    }
  }
  return 0;
}

