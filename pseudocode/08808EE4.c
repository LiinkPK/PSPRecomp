/* Entry 0x08808EE4 | file offset 0x00005EBC | FUN_08808ee4 | bytes 528 */

void FUN_08808ee4(int *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (((*(uint *)(*(int *)(*param_1 + 0x34) + 8) & 0x20) == 0) &&
     (iVar2 = FUN_088377d0(param_2), iVar2 != 0)) {
    bVar1 = true;
    iVar2 = FUN_0883739c(param_2);
    if ((iVar2 == 1) && (iVar2 = func_0x08b34e4c(param_2), iVar2 == 1)) {
      iVar2 = *(int *)(*param_1 + 0x18);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x542) == '\x03')) {
        iVar2 = *(int *)(iVar2 + 0x5d4);
      }
      if ((iVar2 != 0) && (iVar3 = FUN_0883739c(iVar2), iVar3 == 1)) {
        iVar3 = *(int *)(param_2 + 0x304);
        if ((iVar3 != 0) && (*(char *)(iVar3 + 0x542) == '\x03')) {
          iVar3 = *(int *)(iVar3 + 0x5d4);
        }
        if (((iVar3 != 0) && (*(int *)(iVar2 + 0x1108) != 0)) && (iVar3 == *(int *)(iVar2 + 0x1108))
           ) {
          bVar1 = false;
        }
      }
    }
    if (bVar1) {
      return;
    }
  }
  iVar2 = (**(code **)(*(int *)(param_2 + 0x544) + 0x13c))
                    (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x138));
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*(int *)(param_2 + 0x544) + 0x14c))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x148)), iVar2 == 0)) {
    *(int *)(*param_1 + 0x1c) = param_2;
    iVar2 = *(int *)(*param_1 + 0x70);
    iVar2 = (**(code **)(iVar2 + 0x34))(*param_1 + (int)*(short *)(iVar2 + 0x30),param_2,param_4);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(param_2 + 0x544) + 0x74))
                (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x70),iVar2);
      FUN_08808c98(param_1,param_2,iVar2,param_3);
      FUN_08813180(iVar2);
    }
  }
  return;
}

