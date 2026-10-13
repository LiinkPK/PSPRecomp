/* Entry 0x088D688C | file offset 0x000D3864 | FUN_088d688c | bytes 1040 */

int FUN_088d688c(uint *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = param_1[1];
  uVar4 = *param_1;
  iVar11 = 0;
  uVar2 = 0x10;
  uVar10 = 0x20;
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 2) == 0) {
      if ((uVar4 & 0x10) != 0) {
        uVar2 = 0x20000;
        uVar10 = 0x10000;
      }
    }
    else {
      uVar2 = 0x10000;
      uVar10 = 0x20000;
    }
  }
  else {
    uVar2 = 0x40;
    uVar10 = 0x80;
  }
  iVar1 = FUN_088729a0(0);
  iVar5 = (int)*(short *)(*(int *)(iVar1 + 0x34) + 0x20);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x34) + 0x24))(iVar1 + iVar5,iVar5,uVar2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_088729a0(0);
    pcVar7 = *(code **)(*(int *)(iVar1 + 0x34) + 0x24);
    iVar1 = (*pcVar7)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x20),pcVar7,uVar10,0);
    if (iVar1 != 0) {
      uVar6 = param_1[1];
      uVar4 = param_1[9];
      if (uVar6 == uVar4) {
        if ((*param_1 & 8) != 0) {
          iVar1 = FUN_088729a0(0);
          iVar5 = (int)*(short *)(*(int *)(iVar1 + 0x34) + 0x10);
          iVar1 = (**(code **)(*(int *)(iVar1 + 0x34) + 0x14))(iVar1 + iVar5,iVar5,uVar10,0);
          uVar6 = param_1[1];
          uVar4 = param_1[9];
          if (iVar1 != 0) {
            uVar6 = uVar6 + 1;
            param_1[1] = uVar6;
          }
        }
      }
      else {
        uVar6 = uVar6 + 1;
        param_1[1] = uVar6;
      }
      if ((int)uVar4 < (int)uVar6) {
        uVar6 = param_1[8];
        param_1[1] = uVar6;
      }
      if (uVar12 != uVar6) {
        if (param_2 == '\0') {
          FUN_088d4bf4(0);
        }
        iVar11 = 1;
      }
    }
  }
  else {
    uVar6 = param_1[1];
    uVar4 = param_1[8];
    if (uVar6 == uVar4) {
      if ((*param_1 & 8) != 0) {
        iVar1 = FUN_088729a0(0);
        iVar5 = (int)*(short *)(*(int *)(iVar1 + 0x34) + 0x10);
        iVar1 = (**(code **)(*(int *)(iVar1 + 0x34) + 0x14))(iVar1 + iVar5,iVar5,uVar2,0);
        uVar6 = param_1[1];
        uVar4 = param_1[8];
        if (iVar1 != 0) {
          uVar6 = uVar6 - 1;
          param_1[1] = uVar6;
        }
      }
    }
    else {
      uVar6 = uVar6 - 1;
      param_1[1] = uVar6;
    }
    if ((int)uVar6 < (int)uVar4) {
      uVar6 = param_1[9];
      param_1[1] = uVar6;
    }
    if (uVar12 != uVar6) {
      if (param_2 == '\0') {
        FUN_088d4bf4(0);
      }
      iVar11 = -1;
    }
  }
  if ((iVar11 == 0) && ((*param_1 & 4) != 0)) {
    iVar1 = FUN_088729a0(0);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x34) + 0x24))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x20));
    if (iVar1 == 0) {
      iVar1 = FUN_088729a0(0);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x34) + 0x24))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x20));
      if (iVar1 != 0) {
        uVar4 = param_1[1];
        uVar6 = param_1[9];
        if (uVar4 != uVar6) {
          uVar3 = param_1[6];
          uVar8 = param_1[4];
          uVar4 = uVar4 + uVar3;
          param_1[1] = uVar4;
          uVar9 = (uVar6 - uVar3) + 1;
          if ((int)uVar6 < (int)uVar4) {
            param_1[1] = uVar6;
            uVar4 = uVar6;
          }
          param_1[4] = uVar8 + uVar3;
          if ((int)uVar9 < (int)(uVar8 + uVar3)) {
            param_1[4] = uVar9;
            if ((int)uVar9 < (int)param_1[8]) {
              param_1[4] = param_1[8];
            }
          }
        }
        if (uVar12 != uVar4) {
          if (param_2 == '\0') {
            FUN_088d4bf4(0);
          }
          iVar11 = 1;
        }
      }
    }
    else {
      uVar4 = param_1[1];
      uVar6 = param_1[8];
      if (uVar4 != uVar6) {
        uVar4 = uVar4 - param_1[6];
        param_1[1] = uVar4;
        if ((int)uVar4 < (int)uVar6) {
          param_1[1] = uVar6;
          uVar4 = uVar6;
        }
        uVar3 = param_1[4] - param_1[6];
        param_1[4] = uVar3;
        if ((int)uVar3 < (int)uVar6) {
          param_1[4] = uVar6;
        }
      }
      if (uVar12 != uVar4) {
        if (param_2 == '\0') {
          FUN_088d4bf4(0);
        }
        iVar11 = -1;
      }
    }
  }
  if ((iVar11 != 0) && (uVar4 = FUN_088d35e0(param_1,param_1[1],iVar11), uVar4 != param_1[1])) {
    param_1[1] = uVar4;
  }
  FUN_088d47f4(param_1);
  return iVar11;
}

