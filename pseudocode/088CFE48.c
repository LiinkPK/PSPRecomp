/* Entry 0x088CFE48 | file offset 0x000CCE20 | FUN_088cfe48 | bytes 232 */

void FUN_088cfe48(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 0x28);
  uVar1 = *(undefined4 *)(param_3 + 0x24);
  if ((*(byte *)(param_3 + 0x14) & 0x10) == 0) {
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      uVar1 = *(undefined4 *)(param_3 + 0x28);
      iVar2 = *(int *)(param_3 + 0x24);
    }
    else {
      *(undefined4 *)(iVar2 + 0x24) = uVar1;
      uVar1 = *(undefined4 *)(param_3 + 0x28);
      iVar2 = *(int *)(param_3 + 0x24);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x28) = uVar1;
    }
    else {
      *(undefined4 *)(iVar2 + 0x28) = uVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x24) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  else {
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      uVar1 = *(undefined4 *)(param_3 + 0x28);
      iVar2 = *(int *)(param_3 + 0x24);
    }
    else {
      *(undefined4 *)(iVar2 + 0x24) = uVar1;
      uVar1 = *(undefined4 *)(param_3 + 0x28);
      iVar2 = *(int *)(param_3 + 0x24);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x34) = uVar1;
    }
    else {
      *(undefined4 *)(iVar2 + 0x28) = uVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x24) = 0;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  FUN_088cfc84(param_1,param_2,param_3);
  return;
}

