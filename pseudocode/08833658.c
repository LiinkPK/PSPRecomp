/* Entry 0x08833658 | file offset 0x00030630 | FUN_08833658 | bytes 428 */

void FUN_08833658(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_08837a38();
  FUN_089a3890(param_1 + 0xe0);
  uVar1 = *(uint *)(param_1 + 0x388);
  *(undefined4 *)(param_1 + 0x3d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3dc) = 0x3f800000;
  if ((uVar1 & 4) == 0) {
    uVar2 = *(uint *)(param_1 + 0x38c) & 0xffffffbf;
    *(uint *)(param_1 + 0x38c) = uVar2;
    *(uint *)(param_1 + 0x388) = uVar1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x38c) | 0x40;
    *(uint *)(param_1 + 0x38c) = uVar2;
    *(uint *)(param_1 + 0x388) = uVar1;
  }
  *(uint *)(param_1 + 0x38c) = uVar2;
  *(uint *)(param_1 + 0x388) = uVar1 & 0xfffffffb;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 & 0xffffffeb;
    *(uint *)(param_1 + 0x38c) = uVar2;
    *(uint *)(param_1 + 0x388) = uVar1;
  }
  else {
    uVar1 = uVar1 & 0xfffffffb | 0x10;
    *(uint *)(param_1 + 0x38c) = uVar2;
    *(uint *)(param_1 + 0x388) = uVar1;
  }
  *(uint *)(param_1 + 0x38c) = uVar2;
  *(uint *)(param_1 + 0x388) = uVar1 & 0xfffffff7;
  *(uint *)(param_1 + 0x38c) = uVar2 & 0xfffffbff;
  *(uint *)(param_1 + 0x388) = uVar1 & 0xfffffff7;
  *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xf7ffffff;
  (**(code **)(*(int *)(param_1 + 0x544) + 0x9c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x98));
  return;
}

