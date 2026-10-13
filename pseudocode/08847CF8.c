/* Entry 0x08847CF8 | file offset 0x00044CD0 | FUN_08847cf8 | bytes 268 */

int * FUN_08847cf8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(((int)param_2 - (int)param_1) + ((uint)((int)param_2 - (int)param_1 >> 2) >> 0x1e))
          >> 4;
  if (0 < iVar1) {
    iVar2 = *param_3;
    do {
      if (*param_1 == iVar2) {
        return param_1;
      }
      if (param_1[1] == iVar2) {
        return param_1 + 1;
      }
      if (param_1[2] == iVar2) {
        return param_1 + 2;
      }
      iVar1 = iVar1 + -1;
      if (param_1[3] == iVar2) {
        return param_1 + 3;
      }
      param_1 = param_1 + 4;
    } while (0 < iVar1);
  }
  iVar1 = (int)(((int)param_2 - (int)param_1) + ((uint)((int)param_2 - (int)param_1 >> 2) >> 0x1e))
          >> 2;
  if (iVar1 < 2) {
    if (iVar1 < 1) {
      return param_2;
    }
    iVar1 = *param_1;
  }
  else {
    if (2 < iVar1) {
      if (3 < iVar1) {
        return param_2;
      }
      if (*param_1 == *param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    if (*param_1 == *param_3) {
      return param_1;
    }
    param_1 = param_1 + 1;
    iVar1 = *param_1;
  }
  if (iVar1 == *param_3) {
    param_2 = param_1;
  }
  return param_2;
}

