/* Entry 0x0893B9E0 | file offset 0x001389B8 | FUN_0893b9e0 | bytes 484 */

short * FUN_0893b9e0(short *param_1,short *param_2,short *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  short sVar6;
  short *psVar7;
  short sStack_22;
  int local_20;
  short *local_1c;
  
  iVar1 = ((int)param_3 - (int)param_2) / 2;
  iVar2 = iVar1 + 10;
  psVar3 = (short *)((int)&sStack_22 + (iVar2 * 2 - (iVar2 * 2 + 0xfU & 0xfffffff0)));
  iVar5 = 0;
  if (((param_1 == (short *)0x0) || (param_2 == (short *)0x0)) || (param_3 == (short *)0x0)) {
    return (short *)0x0;
  }
  local_20 = 0;
  psVar4 = param_2;
  psVar7 = param_3;
  while ((psVar4 <= param_3 && (local_20 != 2))) {
    sVar6 = *psVar4;
    if (sVar6 == 0x65) {
      local_20 = 2;
    }
    else if (sVar6 == 0x45) {
      local_20 = 2;
    }
    else if ((sVar6 == 0x2e) && (psVar7 = psVar4, local_20 == 0)) {
      local_20 = 1;
    }
    psVar4 = psVar4 + 1;
  }
  if (local_20 == 2) {
    return param_2;
  }
  sVar6 = *param_3;
  local_1c = psVar7;
  if (param_2 < param_3) {
    do {
      *psVar3 = sVar6;
      psVar4 = psVar3 + -1;
      if (param_3 <= psVar7) {
        if (iVar5 % 3 == 0) {
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          else {
            *psVar4 = 0x2c;
            psVar4 = psVar3 + -2;
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 1;
          }
        }
        else {
          iVar5 = iVar5 + 1;
        }
      }
      param_3 = param_3 + -1;
      sVar6 = *param_3;
      psVar3 = psVar4;
    } while (param_2 < param_3);
    iVar1 = iVar2 + -10;
  }
  *psVar3 = sVar6;
  FUN_0893f7e4(param_1,psVar3,iVar1);
  *param_4 = iVar1;
  return param_1;
}

