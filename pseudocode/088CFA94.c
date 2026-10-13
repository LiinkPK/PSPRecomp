/* Entry 0x088CFA94 | file offset 0x000CCA6C | FUN_088cfa94 | bytes 496 */

void FUN_088cfa94(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_3 + 0x28);
  uVar3 = *(undefined4 *)(param_3 + 0x24);
  if ((*(byte *)(param_3 + 0x14) & 0x10) == 0) {
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      iVar4 = *(int *)(param_3 + 0x24);
    }
    else {
      *(undefined4 *)(iVar4 + 0x24) = uVar3;
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      iVar4 = *(int *)(param_3 + 0x24);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x28) = uVar3;
    }
    else {
      *(undefined4 *)(iVar4 + 0x28) = uVar3;
    }
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x24) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    cVar1 = *(char *)(param_2 + 0x15);
    cVar2 = *(char *)(param_3 + 0x15);
  }
  else {
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar3;
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      iVar4 = *(int *)(param_3 + 0x24);
    }
    else {
      *(undefined4 *)(iVar4 + 0x24) = uVar3;
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      iVar4 = *(int *)(param_3 + 0x24);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x34) = uVar3;
    }
    else {
      *(undefined4 *)(iVar4 + 0x28) = uVar3;
    }
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x24) = 0;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    cVar1 = *(char *)(param_2 + 0x15);
    cVar2 = *(char *)(param_3 + 0x15);
  }
  if (cVar1 != cVar2) {
    *(char *)(param_3 + 0x15) = cVar1;
  }
  if ((*(byte *)(param_3 + 0x14) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if ((param_2 == 0) || (param_2 == iVar4)) {
      if (iVar4 == 0) {
        *(int *)(param_1 + 0x28) = param_3;
        *(int *)(param_1 + 0x24) = param_3;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      else {
        *(int *)(iVar4 + 0x28) = param_3;
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        iVar4 = *(int *)(param_1 + 0x2c);
        *(int *)(param_1 + 0x24) = param_3;
      }
      *(int *)(param_1 + 0x2c) = iVar4 + 1;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x28);
      *(int *)(param_3 + 0x24) = param_2;
      *(undefined4 *)(param_3 + 0x28) = uVar3;
      *(int *)(*(int *)(param_2 + 0x28) + 0x24) = param_3;
      *(int *)(param_2 + 0x28) = param_3;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x30);
    if ((param_2 == 0) || (param_2 == iVar4)) {
      if (iVar4 == 0) {
        *(int *)(param_1 + 0x34) = param_3;
        *(int *)(param_1 + 0x30) = param_3;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        iVar4 = *(int *)(param_1 + 0x38);
      }
      else {
        *(int *)(iVar4 + 0x28) = param_3;
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x30);
        iVar4 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = param_3;
      }
      *(int *)(param_1 + 0x38) = iVar4 + 1;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x28);
      *(int *)(param_3 + 0x24) = param_2;
      *(undefined4 *)(param_3 + 0x28) = uVar3;
      *(int *)(*(int *)(param_2 + 0x28) + 0x24) = param_3;
      *(int *)(param_2 + 0x28) = param_3;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
  }
  return;
}

