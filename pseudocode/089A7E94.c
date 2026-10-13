/* Entry 0x089A7E94 | file offset 0x001A4E6C | FUN_089a7e94 | bytes 1636 */

undefined4 FUN_089a7e94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_v1;
  int extraout_v1_00;
  int extraout_v1_01;
  int extraout_v1_02;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  undefined4 local_30 [4];
  
  iVar5 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    local_40 = 0x46464952;
    local_3c = FUN_089a9628();
    iVar1 = FUN_089a9470(param_1,&local_40);
    if (iVar1 != 0) {
      return 0x80660001;
    }
    local_30[0] = 0x20495641;
    FUN_089a9638(param_1,0x20495641);
    iVar1 = FUN_089a92d0(param_1,local_30);
    if (iVar1 != 0) {
      return 0x80660001;
    }
    uVar3 = *(uint *)(param_1 + 0x28);
    local_40 = 0x5453494c;
    local_3c = 0x44;
    if ((uVar3 & 1) != 0) {
      iVar4 = 0x70;
      if ((uVar3 & 0x10) != 0) {
        iVar4 = *(int *)(param_1 + 0x34) * 0x10 + 0x90;
      }
      local_3c = iVar4 + 0x50;
    }
    if ((uVar3 & 2) != 0) {
      iVar5 = 0x58;
      if ((uVar3 & 0x10) != 0) {
        iVar5 = *(int *)(param_1 + 0x34) * 0x10 + 0x78;
      }
      local_3c = local_3c + 0xc + iVar5;
    }
    if ((uVar3 & 0x10) != 0) {
      local_3c = local_3c + 0x18;
    }
    iVar1 = FUN_089a9470(param_1,&local_40);
    if (iVar1 != 0) {
      return 0x80660001;
    }
    FUN_089a92c4(param_1);
    *(int *)(param_1 + 100) = local_3c;
    local_30[0] = 0x6c726468;
    iVar1 = FUN_089a92d0(param_1,local_30);
    if (iVar1 != 0) {
      return 0x80660001;
    }
    local_40 = 0x68697661;
    local_3c = 0x38;
    iVar1 = FUN_089a9470(param_1,&local_40);
    if (iVar1 != 0) {
      return 0x80660001;
    }
    uVar2 = FUN_089a92c4(param_1);
    *(undefined4 *)(param_1 + 0x174) = uVar2;
    iVar1 = FUN_089a9540(param_1,param_1 + 0x84,0xe);
    if (iVar1 == 0) {
      return 0x80660001;
    }
    uVar3 = *(uint *)(param_1 + 0x28);
    if ((uVar3 & 1) != 0) {
      local_3c = iVar4 + 4;
      local_40 = 0x5453494c;
      iVar4 = FUN_089a9470(param_1,&local_40);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      local_30[0] = 0x6c727473;
      iVar4 = FUN_089a92d0(param_1,local_30);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      local_3c = 0x38;
      local_40 = 0x68727473;
      iVar4 = FUN_089a9470(param_1,&local_40);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      uVar2 = FUN_089a92c4(param_1);
      *(undefined4 *)(param_1 + 0x178) = uVar2;
      iVar4 = FUN_089a8f0c(param_1,param_1 + 0xbc,"LLLLLLLLLLLLssss");
      if (iVar4 != 0) {
        return 0x80660001;
      }
      local_40 = 0x66727473;
      local_3c = 0x28;
      iVar4 = FUN_089a9470(param_1,&local_40);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      iVar4 = FUN_089a8f0c(param_1,param_1 + 0xf4,"LLLSSLLLLLL");
      if (iVar4 != 0) {
        return 0x80660001;
      }
      uVar3 = *(uint *)(param_1 + 0x28);
      if ((uVar3 & 0x10) != 0) {
        local_3c = *(int *)(param_1 + 0x34) * 0x10 + 0x18;
        local_40 = 0x78646e69;
        iVar4 = FUN_089a9470(param_1,&local_40);
        if (iVar4 != 0) {
          return 0x80660001;
        }
        uVar2 = FUN_089a92c4(param_1);
        *(undefined4 *)(param_1 + 0x184) = uVar2;
        FUN_089a9278(param_1);
        if (extraout_v1_02 < 0) {
          return 0x80660001;
        }
        uVar3 = *(uint *)(param_1 + 0x28);
      }
    }
    if ((uVar3 & 2) != 0) {
      local_3c = iVar5 + 4;
      local_40 = 0x5453494c;
      iVar4 = FUN_089a9470(param_1,&local_40);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      local_30[0] = 0x6c727473;
      iVar4 = FUN_089a92d0(param_1,local_30);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      local_40 = 0x68727473;
      local_3c = 0x38;
      iVar4 = FUN_089a9470(param_1,&local_40);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      uVar2 = FUN_089a92c4(param_1);
      *(undefined4 *)(param_1 + 0x17c) = uVar2;
      iVar4 = FUN_089a8f0c(param_1,param_1 + 0x11c,"LLLLLLLLLLLLssss");
      if (iVar4 != 0) {
        return 0x80660001;
      }
      local_40 = 0x66727473;
      local_3c = 0x10;
      iVar4 = FUN_089a9470(param_1,&local_40);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      iVar4 = FUN_089a8f0c(param_1,param_1 + 0x154,"SSLLSS");
      if (iVar4 != 0) {
        return 0x80660001;
      }
      uVar3 = *(uint *)(param_1 + 0x28);
      if ((uVar3 & 0x10) != 0) {
        local_3c = *(int *)(param_1 + 0x34) * 0x10 + 0x18;
        local_40 = 0x78646e69;
        iVar4 = FUN_089a9470(param_1,&local_40);
        if (iVar4 != 0) {
          return 0x80660001;
        }
        uVar2 = FUN_089a92c4(param_1);
        *(undefined4 *)(param_1 + 0x188) = uVar2;
        FUN_089a9278(param_1);
        if (extraout_v1_01 < 0) {
          return 0x80660001;
        }
        uVar3 = *(uint *)(param_1 + 0x28);
      }
    }
    if ((uVar3 & 0x10) != 0) {
      local_40 = 0x5453494c;
      local_3c = 0x10;
      iVar4 = FUN_089a9470(param_1,&local_40);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      local_30[0] = 0x6c6d646f;
      iVar4 = FUN_089a92d0(param_1,local_30);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      local_40 = 0x686c6d64;
      local_3c = 4;
      iVar4 = FUN_089a9470(param_1,&local_40);
      if (iVar4 != 0) {
        return 0x80660001;
      }
      uVar2 = FUN_089a92c4(param_1);
      *(undefined4 *)(param_1 + 0x180) = uVar2;
      FUN_089a9278(param_1);
      if (extraout_v1_00 < 0) {
        return 0x80660001;
      }
    }
    local_3c = FUN_089a92c4(param_1);
    local_3c = *(int *)(param_1 + 0x38) - local_3c;
  }
  else {
    local_40 = 0x46464952;
    local_3c = FUN_089a9628();
    iVar4 = FUN_089a9470(param_1,&local_40);
    if (iVar4 != 0) {
      return 0x80660001;
    }
    local_30[0] = 0x58495641;
    FUN_089a9638(param_1,0x58495641);
    iVar4 = FUN_089a92d0(param_1,local_30);
    if (iVar4 != 0) {
      return 0x80660001;
    }
    iVar4 = FUN_089a92c4(param_1);
    local_3c = *(int *)(param_1 + 0x38) - (iVar4 - *(int *)(param_1 + 0x168));
  }
  if (0 < local_3c) {
    if (local_3c < 8) {
      return 0x80660001;
    }
    local_3c = local_3c + -8;
    local_40 = 0x4b4e554a;
    iVar4 = FUN_089a9470(param_1,&local_40);
    if (iVar4 != 0) {
      return 0x80660001;
    }
    FUN_089a9278(param_1);
    if (extraout_v1 < 0) {
      return 0x80660001;
    }
  }
  return 0;
}

