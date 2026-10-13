/* Entry 0x08901C38 | file offset 0x000FEC10 | FUN_08901c38 | bytes 268 */

short * FUN_08901c38(short *param_1,short *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ((int)param_2 - (int)param_1) - ((int)param_2 - (int)param_1 >> 0x1f) >> 3;
  if (0 < iVar2) {
    iVar3 = *param_3;
    do {
      if (*param_1 == iVar3) {
        return param_1;
      }
      if (param_1[1] == iVar3) {
        return param_1 + 1;
      }
      if (param_1[2] == iVar3) {
        return param_1 + 2;
      }
      iVar2 = iVar2 + -1;
      if (param_1[3] == iVar3) {
        return param_1 + 3;
      }
      param_1 = param_1 + 4;
    } while (0 < iVar2);
  }
  iVar2 = ((int)param_2 - (int)param_1) / 2;
  if (iVar2 < 2) {
    if (iVar2 < 1) {
      return param_2;
    }
    sVar1 = *param_1;
  }
  else {
    if (2 < iVar2) {
      if (3 < iVar2) {
        return param_2;
      }
      if ((int)*param_1 == *param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    if ((int)*param_1 == *param_3) {
      return param_1;
    }
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  if ((int)sVar1 == *param_3) {
    param_2 = param_1;
  }
  return param_2;
}

