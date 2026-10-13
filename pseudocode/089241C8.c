/* Entry 0x089241C8 | file offset 0x001211A0 | FUN_089241c8 | bytes 556 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_089241c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb4) = param_2;
  if ((*(int *)(*(int *)(param_1 + 0x20) + 0xb4) != 0) &&
     (*(short *)(*(int *)(param_1 + 0x20) + 0x16) != -1)) {
    switch(*(undefined2 *)(*(int *)(param_1 + 0x20) + 0x12)) {
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 0xd:
      iVar2 = FUN_08831320(0x570);
      iVar1 = 0;
      if (iVar2 != 0) {
        func_0x08b34478(iVar2,(int)*(short *)(*(int *)(param_1 + 0x20) + 0x16));
        iVar1 = iVar2;
      }
      *(int *)(*(int *)(param_1 + 0x20) + 0xbc) = iVar1;
      FUN_08922d3c(param_1);
      break;
    case 7:
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c) = 0x40000000;
      if (*(short *)(*(int *)(param_1 + 0x20) + 0x16) == 0x14) {
        *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x54) = 0x3d4ccccd;
      }
      break;
    case 8:
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x48) = 0x3f99999a;
    case 0xb:
    case 0xc:
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x50) = 0;
      *(float *)(*(int *)(param_1 + 0x20) + 0x54) = _DAT_08b4bfe4;
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x58) = 0;
      *(float *)(*(int *)(param_1 + 0x20) + 0x4c) = _DAT_08b4bfe4 + 1.0;
    }
    FUN_08922f9c(&local_24,param_1);
    local_30 = local_24;
    local_2c = local_20;
    local_28 = local_1c;
    iVar1 = FUN_08923e98(param_1);
    if (iVar1 != 0) {
      iVar2 = func_0x08b43e28(0x34);
      iVar1 = 0;
      if (iVar2 != 0) {
        uVar3 = func_0x08b45808(_DAT_08b45878,1);
        func_0x08b43e8c(iVar2,uVar3);
        iVar1 = iVar2;
      }
      *(int *)(*(int *)(param_1 + 0x20) + 0xb8) = iVar1;
      func_0x08b43f00(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb8),&local_30);
    }
    FUN_08924ce4(param_1,(int)*(short *)(param_1 + 4),0);
  }
  return;
}

