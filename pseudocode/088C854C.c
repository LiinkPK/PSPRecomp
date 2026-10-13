/* Entry 0x088C854C | file offset 0x000C5524 | FUN_088c854c | bytes 904 */

undefined4 FUN_088c854c(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar7 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0xbda8)) {
    do {
      iVar3 = FUN_088c9044(param_1,uVar6);
      if (iVar3 == 0) {
        return 0;
      }
      uVar7 = uVar6;
    } while ((*(char *)(iVar3 + 0x20) != '\0') &&
            (uVar6 = uVar6 + 1, uVar7 = 0xffffffff, (int)uVar6 < *(int *)(param_1 + 0xbda8)));
  }
  if (uVar7 < *(uint *)(param_1 + 0xbda8)) {
    iVar3 = FUN_088c9044(param_1,uVar7);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(iVar3 + 0x18) == param_2) {
      return 0;
    }
    iVar5 = *(int *)(iVar3 + 0x18);
    if (param_2 <= iVar5) {
      iVar5 = param_2;
    }
    if (param_2 < *(int *)(iVar3 + 0x18)) {
      param_2 = *(int *)(iVar3 + 0x18);
    }
    FUN_088c8cc0(param_1,uVar7);
    iVar3 = 0;
    bVar1 = false;
    if (0 < *(int *)(param_1 + 0xbda8)) {
      do {
        iVar4 = FUN_088c9044(param_1,iVar3);
        if (iVar4 == 0) {
          return 0;
        }
        if (iVar5 <= *(int *)(iVar4 + 0x18)) break;
        iVar3 = iVar3 + 1;
        bVar1 = *(char *)(iVar4 + 0x20) == '\x01';
      } while (iVar3 < *(int *)(param_1 + 0xbda8));
    }
    iVar3 = 0;
    bVar2 = false;
    if (0 < *(int *)(param_1 + 0xbda8)) {
      do {
        iVar4 = FUN_088c9044(param_1,iVar3);
        if (iVar4 == 0) {
          return 0;
        }
        if (param_2 < *(int *)(iVar4 + 0x18)) {
          bVar2 = *(char *)(iVar4 + 0x20) == '\x02';
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xbda8));
    }
    uVar7 = 0;
    if (*(int *)(param_1 + 0xbda8) != 0) {
      do {
        iVar3 = FUN_088c9044(param_1,uVar7);
        if (iVar3 == 0) {
          return 0;
        }
        if ((*(int *)(iVar3 + 0x18) < iVar5) || (param_2 < *(int *)(iVar3 + 0x18))) {
          uVar7 = uVar7 + 1;
        }
        else {
          FUN_088c8cc0(param_1,uVar7);
        }
      } while (uVar7 < *(uint *)(param_1 + 0xbda8));
    }
    iVar3 = FUN_088c83fc(param_1);
    if (iVar3 < (int)((uint)!bVar1 + (uint)!bVar2)) {
      return 0;
    }
    if ((!bVar1) && (iVar3 = FUN_088c8b90(param_1,iVar5,1), iVar3 == 0)) {
      return 0;
    }
    if ((!bVar2) && (iVar3 = FUN_088c8b90(param_1,param_2,2), iVar3 == 0)) {
      return 0;
    }
  }
  else {
    iVar3 = FUN_088c8b90(param_1,param_2,0);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

