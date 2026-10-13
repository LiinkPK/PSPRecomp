/* Entry 0x0883F4AC | file offset 0x0003C484 | FUN_0883f4ac | bytes 492 */

short * FUN_0883f4ac(short *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = (int)(((int)param_2 - (int)param_1) + ((uint)((int)param_2 - (int)param_1 >> 2) >> 0x1e))
          >> 4;
  if (0 < iVar2) {
    sVar3 = *param_3;
    do {
      bVar1 = false;
      if ((*param_1 == sVar3) && (bVar1 = false, param_1[1] == param_3[1])) {
        bVar1 = true;
      }
      if (bVar1) {
        return param_1;
      }
      bVar1 = false;
      if ((param_1[2] == sVar3) && (bVar1 = false, param_1[3] == param_3[1])) {
        bVar1 = true;
      }
      if (bVar1) {
        return param_1 + 2;
      }
      bVar1 = false;
      if ((param_1[4] == sVar3) && (bVar1 = false, param_1[5] == param_3[1])) {
        bVar1 = true;
      }
      if (bVar1) {
        return param_1 + 4;
      }
      bVar1 = false;
      if ((param_1[6] == sVar3) && (bVar1 = false, param_1[7] == param_3[1])) {
        bVar1 = true;
      }
      iVar2 = iVar2 + -1;
      if (bVar1) {
        return param_1 + 6;
      }
      param_1 = param_1 + 8;
    } while (0 < iVar2);
  }
  iVar2 = (int)(((int)param_2 - (int)param_1) + ((uint)((int)param_2 - (int)param_1 >> 2) >> 0x1e))
          >> 2;
  if (iVar2 < 2) {
    if (iVar2 < 1) {
      return param_2;
    }
    sVar3 = *param_1;
  }
  else {
    if (2 < iVar2) {
      if (3 < iVar2) {
        return param_2;
      }
      bVar1 = false;
      if ((*param_1 == *param_3) && (bVar1 = false, param_1[1] == param_3[1])) {
        bVar1 = true;
      }
      if (bVar1) {
        return param_1;
      }
      param_1 = param_1 + 2;
    }
    bVar1 = false;
    if ((*param_1 == *param_3) && (bVar1 = false, param_1[1] == param_3[1])) {
      bVar1 = true;
    }
    if (bVar1) {
      return param_1;
    }
    param_1 = param_1 + 2;
    sVar3 = *param_1;
  }
  bVar1 = false;
  if ((sVar3 == *param_3) && (bVar1 = false, param_1[1] == param_3[1])) {
    bVar1 = true;
  }
  if (bVar1) {
    param_2 = param_1;
  }
  return param_2;
}

