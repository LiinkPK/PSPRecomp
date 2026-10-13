/* Entry 0x08941388 | file offset 0x0013E360 | FUN_08941388 | bytes 1280 */

undefined4 FUN_08941388(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_089748a4(0xc60);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    FUN_08941ca8(iVar1,FUN_08934af4,FUN_08934b18);
    *(undefined **)(iVar1 + 0x24) = &DAT_089dc9c8;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    FUN_08973f30(iVar1 + 0x30);
    FUN_08973f30(iVar1 + 0x640);
    *(undefined4 *)(iVar1 + 0xc50) = 0;
    *(undefined4 *)(iVar1 + 0xc54) = 0;
    *(int *)(iVar1 + 0xc58) = iVar4;
    *(int *)(iVar1 + 0xc5c) = iVar5;
    iVar4 = iVar1;
  }
  param_1[2] = iVar4;
  (**(code **)(*(int *)(iVar4 + 0x24) + 0x1c))(iVar4 + *(short *)(*(int *)(iVar4 + 0x24) + 0x18));
  iVar1 = FUN_089748a4(0x30);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_08941ca8(iVar1,FUN_08934af4,FUN_08934b18);
    *(undefined **)(iVar1 + 0x24) = &DAT_089db028;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
    iVar4 = iVar1;
  }
  *param_1 = iVar4;
  (**(code **)(*(int *)(iVar4 + 0x24) + 0x1c))(iVar4 + *(short *)(*(int *)(iVar4 + 0x24) + 0x18));
  *(int *)(*param_1 + 0x28) = param_1[2];
  iVar1 = FUN_089748a4(0x2c);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_08941ca8(iVar1,FUN_08934af4,FUN_08934b18);
    *(undefined **)(iVar1 + 0x24) = &DAT_089dc960;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    iVar4 = iVar1;
  }
  param_1[1] = iVar4;
  (**(code **)(*(int *)(iVar4 + 0x24) + 0x1c))(iVar4 + *(short *)(*(int *)(iVar4 + 0x24) + 0x18));
  *(int *)(param_1[1] + 0x28) = param_1[2];
  iVar1 = FUN_089748a4(0x28);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_08941ca8(iVar1,FUN_08934af4,FUN_08934b18);
    *(undefined **)(iVar1 + 0x24) = &DAT_089dca30;
    iVar4 = iVar1;
  }
  param_1[3] = iVar4;
  (**(code **)(*(int *)(iVar4 + 0x24) + 0x1c))(iVar4 + *(short *)(*(int *)(iVar4 + 0x24) + 0x18));
  iVar1 = FUN_089748a4(0x1c);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_089724c0(iVar1);
    iVar4 = iVar1;
  }
  param_1[4] = iVar4;
  FUN_08972570(iVar4,10);
  *(int *)(param_1[4] + 0xc) = param_1[2];
  *(int *)(param_1[4] + 0x10) = *param_1;
  *(int *)(param_1[4] + 0x14) = param_1[1];
  *(int *)(param_1[4] + 0x18) = param_1[3];
  iVar1 = FUN_089748a4(0x48);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_08973584(iVar1);
    iVar4 = iVar1;
  }
  param_1[5] = iVar4;
  iVar4 = sceGeEdramGetAddr();
  iVar5 = *param_2;
  uVar3 = iVar5 < 2;
  iVar1 = 0;
  if ((bool)uVar3) {
    if (-1 < iVar5) {
      iVar1 = iVar4 + 0x44000;
      if (iVar5 < 1) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
    }
  }
  else if (iVar5 < 3) {
    iVar1 = iVar4 + 0x44000;
    uVar3 = 3;
  }
  else {
    uVar3 = 0;
    if (iVar5 < 4) {
      iVar1 = iVar4 + 0x88000;
      uVar3 = 0;
    }
  }
  if (iVar1 != 0) {
    iVar5 = FUN_089748f4(0x22000);
    param_1[0xb] = iVar5;
    uVar2 = iVar5 + 0x1fffU & 0xffffe000;
    FUN_08973600(param_1[5],iVar4,iVar1,0x1e0,0x110,0x200,uVar3,0x100,0x80,2,uVar2,uVar2 + 0x10000,
                 param_1[2]);
  }
  iVar4 = FUN_089748a4(0x4800f);
  uVar2 = iVar4 + 0xfU & 0xfffffff0;
  param_1[10] = iVar4;
  iVar1 = FUN_089710a8(0x28);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_08970ee8(iVar1);
    iVar4 = iVar1;
  }
  param_1[8] = iVar4;
  FUN_08970f2c(iVar4,uVar2,0x40000,0x1000);
  iVar1 = FUN_089748a4(0xe8);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_0894300c(iVar1);
    iVar4 = iVar1;
  }
  param_1[7] = iVar4;
  FUN_089430f4(iVar4,param_1[8]);
  FUN_0894d74c(param_1[7],param_1[2]);
  FUN_0894d754(param_1[7],*param_1);
  FUN_0894d75c(param_1[7],param_1[1]);
  FUN_0894d764(param_1[7],param_1[3]);
  FUN_0894d76c(param_1[7],param_1[5]);
  FUN_0896fe74(param_1[8]);
  iVar1 = FUN_08974a88(0x18);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_08974994(iVar1);
    iVar4 = iVar1;
  }
  param_1[6] = iVar4;
  FUN_089749d4(iVar4,uVar2 + 0x40000,0x8000);
  FUN_0894d774(param_1[7],param_1[6]);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  DAT_089da120 = 0;
  return 1;
}

