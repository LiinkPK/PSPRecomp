/* Entry 0x088CFF30 | file offset 0x000CCF08 | FUN_088cff30 | bytes 460 */

/* WARNING: Removing unreachable block (ram,0x088cffdc) */

void FUN_088cff30(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(byte *)(param_2 + 0x14) & 0x10) == 0) {
    if (*(int *)(param_2 + 0x28) == 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
      uVar3 = *(undefined4 *)(param_2 + 0x28);
      iVar2 = *(int *)(param_2 + 0x24);
    }
    else {
      *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x24) = *(undefined4 *)(param_2 + 0x24);
      uVar3 = *(undefined4 *)(param_2 + 0x28);
      iVar2 = *(int *)(param_2 + 0x24);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x28) = uVar3;
    }
    else {
      *(undefined4 *)(iVar2 + 0x28) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | 0x10;
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x34) = param_2;
      *(int *)(param_1 + 0x30) = param_2;
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
    else {
      iVar4 = iVar2;
      if (iVar2 != 0) {
        bVar1 = *(byte *)(iVar2 + 0x15);
        while ((bVar1 < *(byte *)(param_2 + 0x15) && (iVar4 = *(int *)(iVar4 + 0x24), iVar4 != 0)))
        {
          bVar1 = *(byte *)(iVar4 + 0x15);
        }
      }
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x34) == 0) {
          *(int *)(param_1 + 0x34) = param_2;
          *(int *)(param_1 + 0x30) = param_2;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          iVar2 = *(int *)(param_1 + 0x38);
        }
        else {
          *(int *)(*(int *)(param_1 + 0x34) + 0x24) = param_2;
          uVar3 = *(undefined4 *)(param_1 + 0x34);
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = uVar3;
          iVar2 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x34) = param_2;
        }
        *(int *)(param_1 + 0x38) = iVar2 + 1;
      }
      else if ((iVar4 == 0) || (iVar4 == iVar2)) {
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x34) = param_2;
          *(int *)(param_1 + 0x30) = param_2;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          iVar2 = *(int *)(param_1 + 0x38);
        }
        else {
          *(int *)(iVar2 + 0x28) = param_2;
          *(undefined4 *)(param_2 + 0x28) = 0;
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x30);
          iVar2 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = param_2;
        }
        *(int *)(param_1 + 0x38) = iVar2 + 1;
      }
      else {
        uVar3 = *(undefined4 *)(iVar4 + 0x28);
        *(int *)(param_2 + 0x24) = iVar4;
        *(undefined4 *)(param_2 + 0x28) = uVar3;
        *(int *)(*(int *)(iVar4 + 0x28) + 0x24) = param_2;
        *(int *)(iVar4 + 0x28) = param_2;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      }
    }
  }
  return;
}

