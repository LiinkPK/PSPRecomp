/* Entry 0x088509AC | file offset 0x0004D984 | FUN_088509ac | bytes 148 */

int FUN_088509ac(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar3 = 0;
  iVar1 = *(int *)(iVar2 + 4);
  if (param_2 != 0) {
    iVar5 = 0;
    iVar4 = iVar2 + 8;
    if (0 < iVar1) {
      do {
        if (param_2 == iVar4) {
          iVar3 = iVar5 + 1;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x3c;
      } while (iVar5 < iVar1);
    }
  }
  if (iVar3 < iVar1) {
    iVar2 = iVar2 + iVar3 * 0x3c;
    do {
      if (param_3 == *(char *)(iVar2 + 0xc)) {
        return iVar2 + 8;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x3c;
    } while (iVar3 < iVar1);
  }
  return 0;
}

