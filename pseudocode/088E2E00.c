/* Entry 0x088E2E00 | file offset 0x000DFDD8 | FUN_088e2e00 | bytes 472 */

void FUN_088e2e00(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = 0;
  puVar3 = (undefined2 *)(param_1 + 0x160);
  iVar2 = param_1;
  do {
    if ((*(int *)(puVar3 + 2) != 0) && (*(int *)(iVar2 + 0x164) != 0)) {
      FUN_088da060();
      *(undefined4 *)(iVar2 + 0x164) = 0;
    }
    *puVar3 = 0xffff;
    puVar3[1] = 0xffff;
    *(undefined4 *)(puVar3 + 2) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 8;
    puVar3 = puVar3 + 4;
  } while (iVar1 < 0x40);
  if ((*(int *)(param_1 + 0x364) != 0) && (*(int *)(param_1 + 0x364) != 0)) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 0x364) = 0;
  }
  *(undefined2 *)(param_1 + 0x360) = 0xffff;
  *(undefined2 *)(param_1 + 0x362) = 0xffff;
  *(undefined4 *)(param_1 + 0x364) = 0;
  if ((*(int *)(param_1 + 0x36c) != 0) && (*(int *)(param_1 + 0x36c) != 0)) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 0x36c) = 0;
  }
  *(undefined2 *)(param_1 + 0x368) = 0xffff;
  *(undefined2 *)(param_1 + 0x36a) = 0xffff;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  if ((*(int *)(param_1 + 0x374) != 0) && (*(int *)(param_1 + 0x374) != 0)) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 0x374) = 0;
  }
  *(undefined2 *)(param_1 + 0x370) = 0xffff;
  *(undefined2 *)(param_1 + 0x372) = 0xffff;
  *(undefined4 *)(param_1 + 0x374) = 0;
  if (param_3 == '\0') {
    iVar1 = 0;
    iVar2 = param_1;
    do {
      if ((*(int *)(iVar2 + 0x60) != 0) && (*(int *)(iVar2 + 0x60) != 0)) {
        FUN_088dab44();
        *(undefined4 *)(iVar2 + 0x60) = 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0x40);
    iVar2 = *(int *)(param_1 + 0x390);
    if ((iVar2 != 0) && (iVar2 != 0)) {
      FUN_0887a644(iVar2,3);
      *(undefined4 *)(param_1 + 0x390) = 0;
    }
    FUN_088e2b8c(param_1,param_2);
    if (*(int *)(param_1 + 0x66c) != 0) {
      FUN_0885c538(param_2,*(int *)(param_1 + 0x66c),0);
      *(undefined4 *)(param_1 + 0x66c) = 0;
    }
  }
  return;
}

