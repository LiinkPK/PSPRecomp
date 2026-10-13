/* Entry 0x088445D8 | file offset 0x000415B0 | FUN_088445d8 | bytes 696 */

void FUN_088445d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  
  uVar1 = FUN_0885c40c(param_2,param_3,"OBJDATA_GC",0x10);
  local_2c = 0;
  local_30 = 0;
  iVar6 = *(int *)(param_1 + 8);
  while (iVar5 = local_30, iVar6 != 0) {
    if (iVar6 == 0) {
      iVar5 = *(int *)(param_1 + 8);
    }
    else {
      iVar5 = *(int *)(iVar6 + 0xe8);
    }
    FUN_08843cf4(iVar6,uVar1,*(undefined4 *)(param_1 + 4));
    iVar2 = FUN_0885c6cc(uVar1,0xec,0,0,1,0);
    FUN_08935524(iVar2,iVar6,0xec);
    if (local_2c == 0) {
      *(undefined4 *)(iVar2 + 0xe8) = 0;
      iVar7 = *(int *)(param_1 + 8);
      local_30 = iVar2;
    }
    else {
      *(int *)(local_2c + 0xe8) = iVar2;
      *(undefined4 *)(iVar2 + 0xe8) = 0;
      iVar7 = *(int *)(param_1 + 8);
    }
    if ((iVar7 != 0) && (iVar4 = *(int *)(param_1 + 0xc), iVar4 != 0)) {
      uVar3 = *(undefined4 *)(iVar6 + 0xe8);
      if (iVar6 == iVar7) {
        *(undefined4 *)(param_1 + 8) = uVar3;
        iVar7 = 0;
      }
      else {
        iVar4 = *(int *)(iVar7 + 0xe8);
        if (*(int *)(iVar7 + 0xe8) == iVar6) {
          *(undefined4 *)(iVar7 + 0xe8) = uVar3;
        }
        else {
          do {
            iVar7 = iVar4;
            iVar4 = *(int *)(iVar7 + 0xe8);
          } while (*(int *)(iVar7 + 0xe8) != iVar6);
          *(undefined4 *)(iVar7 + 0xe8) = uVar3;
        }
        iVar4 = *(int *)(param_1 + 0xc);
      }
      if (iVar6 == iVar4) {
        *(int *)(param_1 + 0xc) = iVar7;
      }
      *(undefined4 *)(iVar6 + 0xe8) = 0;
    }
    FUN_0885c538(*(undefined4 *)(param_1 + 4),iVar6,0);
    iVar6 = iVar5;
    local_2c = iVar2;
  }
  while (iVar5 != 0) {
    iVar6 = local_30;
    if (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + 0xe8);
    }
    FUN_08843cf4(iVar5,*(undefined4 *)(param_1 + 4));
    iVar2 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),0xec,0,0,1,0);
    FUN_08935524(iVar2,iVar5,0xec);
    if (*(int *)(param_1 + 0xc) == 0) {
      *(int *)(param_1 + 0xc) = iVar2;
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 *)(iVar2 + 0xe8) = 0;
    }
    else {
      *(int *)(*(int *)(param_1 + 0xc) + 0xe8) = iVar2;
      *(undefined4 *)(iVar2 + 0xe8) = 0;
      *(int *)(param_1 + 0xc) = iVar2;
    }
    if ((local_30 != 0) && (local_2c != 0)) {
      iVar2 = *(int *)(iVar5 + 0xe8);
      if (iVar5 == local_30) {
        iVar4 = 0;
        local_30 = iVar2;
      }
      else {
        iVar7 = *(int *)(local_30 + 0xe8);
        if (*(int *)(local_30 + 0xe8) == iVar5) {
          *(int *)(local_30 + 0xe8) = iVar2;
          iVar4 = local_30;
        }
        else {
          do {
            iVar4 = iVar7;
            iVar7 = *(int *)(iVar4 + 0xe8);
          } while (*(int *)(iVar4 + 0xe8) != iVar5);
          *(int *)(iVar4 + 0xe8) = iVar2;
        }
      }
      if (iVar5 == local_2c) {
        local_2c = iVar4;
      }
      *(undefined4 *)(iVar5 + 0xe8) = 0;
    }
    FUN_0885c538(uVar1,iVar5,0);
    iVar5 = iVar6;
  }
  FUN_0885c488(uVar1);
  return;
}

