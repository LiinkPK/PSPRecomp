/* Entry 0x088DB4E4 | file offset 0x000D84BC | FUN_088db4e4 | bytes 308 */

void FUN_088db4e4(int param_1,undefined1 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = DAT_089d7830;
  *(undefined1 *)(param_1 + 0x15) = param_2;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if ((*(byte *)(param_1 + 0x14) & 0x10) == 0) {
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + 0x24) = uVar3;
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x24);
    }
    else {
      *(undefined4 *)(iVar4 + 0x24) = uVar3;
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x24);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + 0x28) = uVar3;
    }
    else {
      *(undefined4 *)(iVar4 + 0x28) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + -1;
    bVar1 = *(byte *)(param_1 + 0x14);
  }
  else {
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + 0x30) = uVar3;
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x24);
    }
    else {
      *(undefined4 *)(iVar4 + 0x24) = uVar3;
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x24);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + 0x34) = uVar3;
    }
    else {
      *(undefined4 *)(iVar4 + 0x28) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + -1;
    bVar1 = *(byte *)(param_1 + 0x14);
  }
  if ((bVar1 & 0x10) == 0) {
    FUN_088db340(iVar2,iVar2 + 0x24,param_1);
  }
  else {
    FUN_088db340(iVar2,iVar2 + 0x30,param_1);
  }
  return;
}

