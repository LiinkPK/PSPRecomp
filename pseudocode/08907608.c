/* Entry 0x08907608 | file offset 0x001045E0 | FUN_08907608 | bytes 272 */

void FUN_08907608(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_30 [4];
  
  puVar2 = local_30;
  piVar1 = *(int **)(param_1 + 0x1660);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
  }
  local_30[0] = 0x5000;
  local_30[1] = 0x400;
  local_30[2] = 4;
  iVar6 = 0;
  iVar5 = param_1 + 0x808;
  iVar4 = param_1 + 0x10a8;
  iVar3 = param_1;
  do {
    if (*(int *)(param_1 + 0x1644) == 0) {
      FUN_089065d4(iVar5);
    }
    else {
      FUN_0890661c(iVar5,param_1 + 4);
    }
    *(int *)(iVar5 + 0x2d4) = iVar4;
    *(int *)(iVar4 + 4) = param_1;
    *(int *)(iVar4 + 8) = iVar6;
    FUN_08906684(iVar5,*(undefined4 *)(iVar3 + 0x1648),*puVar2);
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x2e0;
    iVar4 = iVar4 + 0xc;
    iVar3 = iVar3 + 4;
    puVar2 = puVar2 + 1;
  } while (iVar6 < 3);
  FUN_0890c404(param_1 + 0x10d8,*(undefined4 *)(param_1 + 0x1654));
  return;
}

