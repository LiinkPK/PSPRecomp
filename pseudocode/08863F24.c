/* Entry 0x08863F24 | file offset 0x00060EFC | FUN_08863f24 | bytes 264 */

undefined4
FUN_08863f24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0xc4))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xc0),param_2,param_5);
  uVar3 = 0;
  if (-1 < iVar1) {
    if ((param_5 == '\x01') && (iVar2 = sceNpDrmEdataSetupKey(iVar1), iVar2 < 0)) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0xf4))
                (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xf0),iVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x20),iVar1,param_3,
                         param_4,param_5);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xf4))
                (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xf0),iVar1);
    }
  }
  return uVar3;
}

