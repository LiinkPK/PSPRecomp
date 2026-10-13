/* Entry 0x089A7AB0 | file offset 0x001A4A88 | FUN_089a7ab0 | bytes 780 */

undefined4 FUN_089a7ab0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_v1;
  int extraout_v1_00;
  int extraout_v1_01;
  int iVar4;
  
  if (*(uint *)(param_1 + 0x2c) < 2) {
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  else {
    FUN_089a9278(param_1,param_2,*(undefined4 *)(param_1 + 0x174),0,0);
    iVar1 = FUN_089a9540(param_1,param_1 + 0x84,0xe);
    if (iVar1 == 0) {
      return 0x80660001;
    }
    uVar3 = *(uint *)(param_1 + 0x28);
    if ((uVar3 & 1) != 0) {
      FUN_089a9278(param_1);
      iVar1 = FUN_089a8f0c(param_1,param_1 + 0xbc,"LLLLLLLLLLLLssss");
      if (iVar1 != 0) {
        return 0x80660001;
      }
      uVar3 = *(uint *)(param_1 + 0x28);
    }
    if ((uVar3 & 2) != 0) {
      FUN_089a9278(param_1);
      iVar1 = FUN_089a8f0c(param_1,param_1 + 0x11c,"LLLLLLLLLLLLssss");
      if (iVar1 != 0) {
        return 0x80660001;
      }
      uVar3 = *(uint *)(param_1 + 0x28);
    }
  }
  if ((uVar3 & 0x10) == 0) {
    return 0;
  }
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x2c);
    FUN_089a9278(param_1);
    if (extraout_v1_01 < 0) {
      return 0x80660001;
    }
    iVar1 = FUN_089a8f0c(param_1,param_1 + 0x198,"SSLLLLL");
    if (iVar1 != 0) {
      return 0x80660001;
    }
    uVar2 = FUN_089a92c4(param_1);
    *(undefined4 *)(param_1 + 0x18c) = uVar2;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      do {
        iVar1 = FUN_089a93a0(param_1,param_2);
        uVar3 = uVar3 + 1;
        if (iVar1 != 0) {
          return 0x80660001;
        }
        iVar1 = FUN_089a92d0(param_1,param_2 + 8);
        iVar4 = param_2 + 0xc;
        param_2 = param_2 + 0x10;
        if (iVar1 != 0) {
          return 0x80660001;
        }
        iVar1 = FUN_089a92d0(param_1,iVar4);
        if (iVar1 != 0) {
          return 0x80660001;
        }
      } while (uVar3 < *(uint *)(param_1 + 0x2c));
    }
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar3 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x2c);
    FUN_089a9278(param_1);
    if (extraout_v1 < 0) {
      return 0x80660001;
    }
    iVar1 = FUN_089a8f0c(param_1,param_1 + 0x1b0,"SSLLLLL");
    if (iVar1 != 0) {
      return 0x80660001;
    }
    uVar2 = FUN_089a92c4(param_1);
    *(undefined4 *)(param_1 + 400) = uVar2;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      do {
        iVar1 = FUN_089a93a0(param_1,param_3);
        uVar3 = uVar3 + 1;
        if (iVar1 != 0) {
          return 0x80660001;
        }
        iVar1 = FUN_089a92d0(param_1,param_3 + 8);
        iVar4 = param_3 + 0xc;
        param_3 = param_3 + 0x10;
        if (iVar1 != 0) {
          return 0x80660001;
        }
        iVar1 = FUN_089a92d0(param_1,iVar4);
        if (iVar1 != 0) {
          return 0x80660001;
        }
      } while (uVar3 < *(uint *)(param_1 + 0x2c));
    }
  }
  FUN_089a9278(param_1);
  uVar2 = 0x80660001;
  if (-1 < extraout_v1_00) {
    iVar1 = FUN_089a92d0(param_1,param_1 + 0x194);
    uVar2 = 0x80660001;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

