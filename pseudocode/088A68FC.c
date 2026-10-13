/* Entry 0x088A68FC | file offset 0x000A38D4 | FUN_088a68fc | bytes 316 */

void FUN_088a68fc(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0xc0) = param_3;
  *(undefined4 *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xd0) = param_4;
  *(undefined4 *)(param_1 + 0x100) = param_5;
  *(undefined4 *)(param_1 + 0x104) = param_6;
  *(float *)(param_1 + 0xe4) = (float)*(int *)(param_3 + 0x30);
  if ((*(int *)(param_3 + 0x70) == 4) || (iVar1 = FUN_089359e8(param_3 + 0x88), iVar1 != 0)) {
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 1;
    *(float *)(param_1 + 0xe0) = (float)*(int *)(param_3 + 0x74);
    iVar1 = *(int *)(param_3 + 0x70);
    *(int *)(param_1 + 0xf0) = iVar1;
    if (iVar1 == 4) {
      *(undefined **)(param_1 + 0xd0) = &DAT_09b4d440;
    }
    iVar1 = *(int *)(param_1 + 0xd0);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*(int *)(iVar1 + 0x2c) + 0x2c))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x2c) + 0x28),param_3 + 0xa8);
      *(undefined4 *)(param_1 + 0xf4) = uVar2;
      iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + 0x2c);
      uVar2 = (**(code **)(iVar1 + 0x34))
                        (*(int *)(param_1 + 0xd0) + (int)*(short *)(iVar1 + 0x30),param_3 + 200);
      *(undefined4 *)(param_1 + 0xf8) = uVar2;
    }
  }
  iVar1 = FUN_088a4d7c(*(undefined4 *)(param_1 + 200),
                       *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x28),&LAB_088a8030,param_1);
  *(int *)(param_1 + 0xcc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 2;
  }
  else {
    FUN_088a47e4(iVar1,0);
  }
  return;
}

