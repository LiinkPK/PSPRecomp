/* Entry 0x0885249C | file offset 0x0004F474 | FUN_0885249c | bytes 180 */

void FUN_0885249c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    piVar3 = (int *)(param_1 + iVar2 * 0xd);
    if (*piVar3 == param_2) {
      iVar1 = piVar3[2];
      piVar3[2] = iVar1 + -1;
      if (iVar1 + -1 != 0) {
        return;
      }
      FUN_088525a8(param_1,param_2);
      FUN_0899bb1c(piVar3[1]);
      piVar3[1] = 0;
      *piVar3 = -1;
      return;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar1 * 0x40;
  } while (iVar1 < 2);
  return;
}

