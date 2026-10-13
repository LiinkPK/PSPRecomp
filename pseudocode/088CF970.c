/* Entry 0x088CF970 | file offset 0x000CC948 | FUN_088cf970 | bytes 292 */

void FUN_088cf970(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  if ((*(byte *)(param_2 + 0x14) & 0x10) == 0) {
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      uVar2 = *(undefined4 *)(param_2 + 0x28);
      iVar3 = *(int *)(param_2 + 0x24);
    }
    else {
      *(undefined4 *)(iVar3 + 0x24) = uVar2;
      uVar2 = *(undefined4 *)(param_2 + 0x28);
      iVar3 = *(int *)(param_2 + 0x24);
    }
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x28) = uVar2;
    }
    else {
      *(undefined4 *)(iVar3 + 0x28) = uVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    bVar1 = *(byte *)(param_2 + 0x14);
  }
  else {
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      uVar2 = *(undefined4 *)(param_2 + 0x28);
      iVar3 = *(int *)(param_2 + 0x24);
    }
    else {
      *(undefined4 *)(iVar3 + 0x24) = uVar2;
      uVar2 = *(undefined4 *)(param_2 + 0x28);
      iVar3 = *(int *)(param_2 + 0x24);
    }
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x34) = uVar2;
    }
    else {
      *(undefined4 *)(iVar3 + 0x28) = uVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    bVar1 = *(byte *)(param_2 + 0x14);
  }
  if ((bVar1 & 0x10) == 0) {
    FUN_088cf7cc(param_1,param_1 + 0x24,param_2);
  }
  else {
    FUN_088cf7cc(param_1,param_1 + 0x30,param_2);
  }
  return;
}

