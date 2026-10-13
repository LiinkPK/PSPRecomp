/* Entry 0x08972964 | file offset 0x0016F93C | FUN_08972964 | bytes 584 */

void FUN_08972964(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)(*(int *)(param_1 + 4) + param_2 * 4);
  iVar4 = *piVar3;
  iVar5 = 0;
  if (0 < *(int *)(iVar4 + 0x20)) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*piVar3 + *(int *)(*piVar3 + 0x30) + iVar6);
      if (iVar1 != -1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x24);
        (**(code **)(iVar2 + 0x54))(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x50),iVar1);
        *(undefined4 *)(*piVar3 + *(int *)(*piVar3 + 0x30) + iVar6) = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(iVar4 + 0x20));
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar4 + 0x1c)) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*piVar3 + *(int *)(*piVar3 + 0x2c) + iVar6);
      if (iVar1 != -1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x24);
        (**(code **)(iVar2 + 0x54))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar2 + 0x50),iVar1);
        *(undefined4 *)(*piVar3 + *(int *)(*piVar3 + 0x2c) + iVar6) = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(iVar4 + 0x1c));
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar4 + 0x18)) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*piVar3 + *(int *)(*piVar3 + 0x28) + iVar6);
      if (iVar1 != -1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
        (**(code **)(iVar2 + 0x54))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar2 + 0x50),iVar1);
        *(undefined4 *)(*piVar3 + *(int *)(*piVar3 + 0x28) + iVar6) = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(iVar4 + 0x18));
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar4 + 0x14)) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*piVar3 + *(int *)(*piVar3 + 0x24) + iVar6);
      if (iVar1 != -1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
        (**(code **)(iVar2 + 0x54))(*(int *)(param_1 + 0xc) + (int)*(short *)(iVar2 + 0x50),iVar1);
        *(undefined4 *)(*piVar3 + *(int *)(*piVar3 + 0x24) + iVar6) = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(iVar4 + 0x14));
  }
  return;
}

