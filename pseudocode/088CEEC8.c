/* Entry 0x088CEEC8 | file offset 0x000CBEA0 | FUN_088ceec8 | bytes 704 */

/* WARNING: Removing unreachable block (ram,0x088cef14) */
/* WARNING: Removing unreachable block (ram,0x088cf068) */

void FUN_088ceec8(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(param_2 + 0x14) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x28) = param_2;
      *(int *)(param_1 + 0x24) = param_2;
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      iVar4 = iVar3;
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar3 + 0x15);
        while ((bVar1 < *(byte *)(param_2 + 0x15) && (iVar4 = *(int *)(iVar4 + 0x24), iVar4 != 0)))
        {
          bVar1 = *(byte *)(iVar4 + 0x15);
        }
      }
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x28) == 0) {
          *(int *)(param_1 + 0x28) = param_2;
          *(int *)(param_1 + 0x24) = param_2;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        else {
          *(int *)(*(int *)(param_1 + 0x28) + 0x24) = param_2;
          uVar2 = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = uVar2;
          iVar3 = *(int *)(param_1 + 0x2c);
          *(int *)(param_1 + 0x28) = param_2;
        }
        *(int *)(param_1 + 0x2c) = iVar3 + 1;
      }
      else if ((iVar4 == 0) || (iVar4 == iVar3)) {
        if (iVar3 == 0) {
          *(int *)(param_1 + 0x28) = param_2;
          *(int *)(param_1 + 0x24) = param_2;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        else {
          *(int *)(iVar3 + 0x28) = param_2;
          *(undefined4 *)(param_2 + 0x28) = 0;
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
          iVar3 = *(int *)(param_1 + 0x2c);
          *(int *)(param_1 + 0x24) = param_2;
        }
        *(int *)(param_1 + 0x2c) = iVar3 + 1;
      }
      else {
        uVar2 = *(undefined4 *)(iVar4 + 0x28);
        *(int *)(param_2 + 0x24) = iVar4;
        *(undefined4 *)(param_2 + 0x28) = uVar2;
        *(int *)(*(int *)(iVar4 + 0x28) + 0x24) = param_2;
        *(int *)(iVar4 + 0x28) = param_2;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x34) = param_2;
      *(int *)(param_1 + 0x30) = param_2;
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
    else {
      iVar4 = iVar3;
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar3 + 0x15);
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
          iVar3 = *(int *)(param_1 + 0x38);
        }
        else {
          *(int *)(*(int *)(param_1 + 0x34) + 0x24) = param_2;
          uVar2 = *(undefined4 *)(param_1 + 0x34);
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = uVar2;
          iVar3 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x34) = param_2;
        }
        *(int *)(param_1 + 0x38) = iVar3 + 1;
      }
      else if ((iVar4 == 0) || (iVar4 == iVar3)) {
        if (iVar3 == 0) {
          *(int *)(param_1 + 0x34) = param_2;
          *(int *)(param_1 + 0x30) = param_2;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        else {
          *(int *)(iVar3 + 0x28) = param_2;
          *(undefined4 *)(param_2 + 0x28) = 0;
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x30);
          iVar3 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = param_2;
        }
        *(int *)(param_1 + 0x38) = iVar3 + 1;
      }
      else {
        uVar2 = *(undefined4 *)(iVar4 + 0x28);
        *(int *)(param_2 + 0x24) = iVar4;
        *(undefined4 *)(param_2 + 0x28) = uVar2;
        *(int *)(*(int *)(iVar4 + 0x28) + 0x24) = param_2;
        *(int *)(iVar4 + 0x28) = param_2;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      }
    }
  }
  return;
}

