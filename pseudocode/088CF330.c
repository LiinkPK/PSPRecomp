/* Entry 0x088CF330 | file offset 0x000CC308 | FUN_088cf330 | bytes 544 */

void FUN_088cf330(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_2[3] != 0) && (iVar1 = FUN_088dcd60(), iVar1 != 0)) {
    iVar1 = param_2[3];
    if (*(int *)(iVar1 + 0x70) == 0) {
      *(undefined4 *)(param_1 + 0xc4f4) = *(undefined4 *)(iVar1 + 0x6c);
      uVar3 = *(undefined4 *)(iVar1 + 0x70);
      iVar4 = *(int *)(iVar1 + 0x6c);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x70) + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
      uVar3 = *(undefined4 *)(iVar1 + 0x70);
      iVar4 = *(int *)(iVar1 + 0x6c);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xc4f8) = uVar3;
    }
    else {
      *(undefined4 *)(iVar4 + 0x70) = uVar3;
    }
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(int *)(param_1 + 0xc4fc) = *(int *)(param_1 + 0xc4fc) + -1;
    if (**(int **)(param_1 + 0xebc0) != 0) {
      for (piVar5 = (int *)(*(int **)(param_1 + 0xebc0))[1]; *piVar5 != 0; piVar5 = (int *)piVar5[1]
          ) {
      }
    }
    **(int **)(param_1 + 0xebc4) = param_2[3];
    *(undefined4 *)(param_1 + 0xebc4) = *(undefined4 *)(*(int *)(param_1 + 0xebc4) + 4);
    param_2[3] = 0;
  }
  FUN_088db10c(param_2);
  iVar1 = *param_2;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x3c);
    FUN_088da060();
  }
  iVar1 = param_2[10];
  iVar4 = param_2[9];
  if ((*(byte *)(param_2 + 5) & 0x10) == 0) {
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x24) = iVar4;
      iVar1 = param_2[10];
      iVar4 = param_2[9];
    }
    else {
      *(int *)(iVar1 + 0x24) = iVar4;
      iVar1 = param_2[10];
      iVar4 = param_2[9];
    }
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x28) = iVar1;
    }
    else {
      *(int *)(iVar4 + 0x28) = iVar1;
    }
    param_2[10] = 0;
    param_2[9] = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x3370);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    piVar5 = *(int **)(param_1 + 0x336c);
  }
  else {
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x30) = iVar4;
      iVar1 = param_2[10];
      iVar4 = param_2[9];
    }
    else {
      *(int *)(iVar1 + 0x24) = iVar4;
      iVar1 = param_2[10];
      iVar4 = param_2[9];
    }
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x34) = iVar1;
    }
    else {
      *(int *)(iVar4 + 0x28) = iVar1;
    }
    param_2[10] = 0;
    param_2[9] = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x3370);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    piVar5 = *(int **)(param_1 + 0x336c);
  }
  if (*piVar5 != 0) {
    for (piVar5 = (int *)piVar5[1]; *piVar5 != 0; piVar5 = (int *)piVar5[1]) {
    }
  }
  *puVar2 = param_2;
  *(undefined4 *)(param_1 + 0x3370) = *(undefined4 *)(*(int *)(param_1 + 0x3370) + 4);
  return;
}

