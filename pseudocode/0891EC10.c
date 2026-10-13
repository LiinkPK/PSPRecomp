/* Entry 0x0891EC10 | file offset 0x0011BBE8 | FUN_0891ec10 | bytes 240 */

char * FUN_0891ec10(char *param_1,char *param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_2 - (int)param_1 >> 2;
  if (0 < iVar2) {
    iVar3 = (int)*param_3;
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
  iVar2 = (int)param_2 - (int)param_1;
  if (iVar2 < 2) {
    if (iVar2 < 1) {
      return param_2;
    }
    cVar1 = *param_1;
  }
  else {
    if (2 < iVar2) {
      if (3 < iVar2) {
        return param_2;
      }
      if ((int)*param_1 == (int)*param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    if ((int)*param_1 == (int)*param_3) {
      return param_1;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if ((int)cVar1 == (int)*param_3) {
    param_2 = param_1;
  }
  return param_2;
}

