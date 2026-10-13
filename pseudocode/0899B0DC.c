/* Entry 0x0899B0DC | file offset 0x001980B4 | FUN_0899b0dc | bytes 356 */

/* WARNING: Removing unreachable block (ram,0x0899b158) */

int FUN_0899b0dc(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  if ((uVar2 < 2) || (uVar4 = *param_2, uVar4 < 2)) {
    return 1;
  }
  if ((uVar2 == 4) && (uVar4 == 4)) {
    return param_2[1] - param_1[1];
  }
  if (uVar2 == 4) {
    uVar2 = param_1[1];
LAB_0899b180:
    iVar3 = -1;
    iVar1 = 1;
  }
  else {
    if (uVar4 == 4) {
      uVar2 = param_2[1];
    }
    else {
      if (uVar2 != 2) {
        if (uVar4 != 2) {
          uVar2 = param_1[1];
          iVar3 = -1;
          if (uVar2 == 0) {
            iVar3 = 1;
          }
          if (uVar2 != param_2[1]) {
            return iVar3;
          }
          iVar3 = -1;
          if (uVar2 == 0) {
            iVar3 = 1;
          }
          if ((int)param_2[2] < (int)param_1[2]) {
            return iVar3;
          }
          iVar3 = 1;
          if (uVar2 == 0) {
            iVar3 = -1;
          }
          if ((int)param_1[2] < (int)param_2[2]) {
            return iVar3;
          }
          uVar5 = param_1[5];
          uVar4 = param_2[5];
          if ((uVar4 < uVar5) || ((uVar5 == uVar4 && (param_2[4] < param_1[4])))) {
            iVar1 = -1;
            iVar3 = 1;
          }
          else {
            if (uVar4 <= uVar5) {
              if (uVar4 != uVar5) {
                return 0;
              }
              if (param_2[4] <= param_1[4]) {
                return 0;
              }
            }
            iVar1 = 1;
            iVar3 = -1;
          }
          if (uVar2 != 0) {
            return iVar1;
          }
          return iVar3;
        }
        uVar2 = param_1[1];
        goto LAB_0899b180;
      }
      if (uVar4 == 2) {
        return 0;
      }
      uVar2 = param_2[1];
    }
    iVar3 = 1;
    iVar1 = -1;
  }
  if (uVar2 == 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}

