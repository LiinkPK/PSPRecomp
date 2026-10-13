/* Entry 0x08861C64 | file offset 0x0005EC3C | FUN_08861c64 | bytes 280 */

undefined4 FUN_08861c64(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_110 [256];
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      return 0;
    }
  }
  else {
    if (iVar1 < 3) {
      return 0;
    }
    if (3 < iVar1) {
      return 0;
    }
    *param_1 = 0;
    param_1[2] = param_1[2] + 1;
  }
  param_1[1] = -1;
  iVar1 = (**(code **)(param_1[6] + 0x14))
                    ((int)param_1 + (int)*(short *)(param_1[6] + 0x10),auStack_110,param_1[2]);
  if (iVar1 == 1) {
    iVar1 = FUN_08862cdc(auStack_110,1);
    param_1[4] = iVar1;
    if (0 < iVar1) {
      iVar1 = FUN_0885c6cc(param_1[5],iVar1,0,0,1,0);
      param_1[3] = iVar1;
      iVar1 = FUN_08862e5c(auStack_110,FUN_08861ea0,param_1,1);
      param_1[1] = iVar1;
    }
    iVar1 = 3;
    if (-1 < param_1[1]) {
      iVar1 = 1;
    }
    *param_1 = iVar1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

