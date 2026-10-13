/* Entry 0x088CFC84 | file offset 0x000CCC5C | FUN_088cfc84 | bytes 452 */

void FUN_088cfc84(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0x15) != *(char *)(param_3 + 0x15)) {
    *(char *)(param_3 + 0x15) = *(char *)(param_2 + 0x15);
  }
  if ((*(byte *)(param_3 + 0x14) & 0x10) == 0) {
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x24) == 0) {
        *(int *)(param_1 + 0x28) = param_3;
        *(int *)(param_1 + 0x24) = param_3;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        iVar2 = *(int *)(param_1 + 0x2c);
      }
      else {
        *(int *)(*(int *)(param_1 + 0x24) + 0x28) = param_3;
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        iVar2 = *(int *)(param_1 + 0x2c);
        *(int *)(param_1 + 0x24) = param_3;
      }
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28);
      if (param_2 == iVar2) {
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x28) = param_3;
          *(int *)(param_1 + 0x24) = param_3;
          *(undefined4 *)(param_3 + 0x24) = 0;
          *(undefined4 *)(param_3 + 0x28) = 0;
          iVar2 = *(int *)(param_1 + 0x2c);
        }
        else {
          *(int *)(iVar2 + 0x24) = param_3;
          uVar1 = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_3 + 0x24) = 0;
          *(undefined4 *)(param_3 + 0x28) = uVar1;
          iVar2 = *(int *)(param_1 + 0x2c);
          *(int *)(param_1 + 0x28) = param_3;
        }
        *(int *)(param_1 + 0x2c) = iVar2 + 1;
      }
      else {
        *(int *)(param_3 + 0x28) = param_2;
        iVar2 = *(int *)(param_2 + 0x24);
        *(int *)(param_3 + 0x24) = iVar2;
        *(int *)(iVar2 + 0x28) = param_3;
        *(int *)(param_2 + 0x24) = param_3;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      *(int *)(param_1 + 0x34) = param_3;
      *(int *)(param_1 + 0x30) = param_3;
      *(undefined4 *)(param_3 + 0x24) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
      iVar2 = *(int *)(param_1 + 0x38);
    }
    else {
      *(int *)(*(int *)(param_1 + 0x30) + 0x28) = param_3;
      *(undefined4 *)(param_3 + 0x28) = 0;
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x30) = param_3;
    }
    *(int *)(param_1 + 0x38) = iVar2 + 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (param_2 == iVar2) {
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x34) = param_3;
        *(int *)(param_1 + 0x30) = param_3;
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = 0;
        iVar2 = *(int *)(param_1 + 0x38);
      }
      else {
        *(int *)(iVar2 + 0x24) = param_3;
        uVar1 = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_3 + 0x24) = 0;
        *(undefined4 *)(param_3 + 0x28) = uVar1;
        iVar2 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x34) = param_3;
      }
      *(int *)(param_1 + 0x38) = iVar2 + 1;
    }
    else {
      *(int *)(param_3 + 0x28) = param_2;
      iVar2 = *(int *)(param_2 + 0x24);
      *(int *)(param_3 + 0x24) = iVar2;
      *(int *)(iVar2 + 0x28) = param_3;
      *(int *)(param_2 + 0x24) = param_3;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
  }
  return;
}

