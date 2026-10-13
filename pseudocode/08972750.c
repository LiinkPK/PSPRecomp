/* Entry 0x08972750 | file offset 0x0016F728 | FUN_08972750 | bytes 532 */

undefined4 FUN_08972750(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = (int *)(*(int *)(param_1 + 4) + param_2 * 4);
  iVar5 = *piVar4;
  iVar6 = 0;
  iVar7 = 0;
  if (0 < *(int *)(iVar5 + 0x14)) {
    do {
      iVar2 = *piVar4;
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
      uVar1 = (**(code **)(iVar3 + 0x3c))
                        (*(int *)(param_1 + 0xc) + (int)*(short *)(iVar3 + 0x38),
                         iVar2 + *(int *)(iVar2 + *(int *)(iVar2 + 0x34) + iVar7));
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar4 + *(int *)(*piVar4 + 0x24) + iVar7) = uVar1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < *(int *)(iVar5 + 0x14));
  }
  iVar6 = 0;
  iVar7 = 0;
  if (0 < *(int *)(iVar5 + 0x18)) {
    do {
      iVar2 = *piVar4;
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
      uVar1 = (**(code **)(iVar3 + 0x3c))
                        (*(int *)(param_1 + 0x10) + (int)*(short *)(iVar3 + 0x38),
                         iVar2 + *(int *)(iVar2 + *(int *)(iVar2 + 0x38) + iVar7));
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar4 + *(int *)(*piVar4 + 0x28) + iVar7) = uVar1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < *(int *)(iVar5 + 0x18));
  }
  iVar6 = 0;
  iVar7 = 0;
  if (0 < *(int *)(iVar5 + 0x1c)) {
    do {
      iVar2 = *piVar4;
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x24);
      uVar1 = (**(code **)(iVar3 + 0x3c))
                        (*(int *)(param_1 + 0x14) + (int)*(short *)(iVar3 + 0x38),
                         iVar2 + *(int *)(iVar2 + *(int *)(iVar2 + 0x3c) + iVar7));
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar4 + *(int *)(*piVar4 + 0x2c) + iVar7) = uVar1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < *(int *)(iVar5 + 0x1c));
  }
  iVar6 = 0;
  iVar7 = 0;
  if (0 < *(int *)(iVar5 + 0x20)) {
    do {
      iVar2 = *piVar4;
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x24);
      uVar1 = (**(code **)(iVar3 + 0x3c))
                        (*(int *)(param_1 + 0x18) + (int)*(short *)(iVar3 + 0x38),
                         iVar2 + *(int *)(iVar2 + *(int *)(iVar2 + 0x40) + iVar7));
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar4 + *(int *)(*piVar4 + 0x30) + iVar7) = uVar1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < *(int *)(iVar5 + 0x20));
  }
  return 1;
}

