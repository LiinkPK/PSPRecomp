/* Entry 0x0886B2A8 | file offset 0x00068280 | FUN_0886b2a8 | bytes 156 */

int FUN_0886b2a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = **(int **)(param_1 + 0x84);
  if (((iVar2 != 0) && (-1 < param_2)) && (param_2 <= (*(int **)(param_1 + 0x84))[1])) {
    iVar2 = iVar2 + param_2 * 0x60;
    iVar3 = (int)*(short *)(iVar2 + 0x48);
    iVar1 = 0;
    if (0 < iVar3) {
      piVar4 = *(int **)(iVar2 + 0x54);
      do {
        if (*piVar4 == param_3) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar1 < iVar3);
    }
  }
  return -1;
}

