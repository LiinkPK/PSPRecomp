/* Entry 0x088BB900 | file offset 0x000B88D8 | FUN_088bb900 | bytes 352 */

short * FUN_088bb900(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)(((int)param_2 - (int)param_1) + ((uint)((int)param_2 - (int)param_1 >> 4) >> 0x1c))
          >> 6;
  if (0 < iVar2) {
    sVar1 = *param_3;
    do {
      if (*param_1 == sVar1) {
        return param_1;
      }
      if (param_1[8] == sVar1) {
        return param_1 + 8;
      }
      if (param_1[0x10] == sVar1) {
        return param_1 + 0x10;
      }
      iVar2 = iVar2 + -1;
      if (param_1[0x18] == sVar1) {
        return param_1 + 0x18;
      }
      param_1 = param_1 + 0x20;
    } while (0 < iVar2);
  }
  iVar2 = (int)(((int)param_2 - (int)param_1) + ((uint)((int)param_2 - (int)param_1 >> 4) >> 0x1c))
          >> 4;
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
      if (*param_1 == *param_3) {
        return param_1;
      }
      param_1 = param_1 + 8;
    }
    if (*param_1 == *param_3) {
      return param_1;
    }
    param_1 = param_1 + 8;
    sVar1 = *param_1;
  }
  if (sVar1 == *param_3) {
    param_2 = param_1;
  }
  return param_2;
}

