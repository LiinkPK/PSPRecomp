/* Entry 0x088EED5C | file offset 0x000EBD34 | FUN_088eed5c | bytes 1156 */

undefined4
FUN_088eed5c(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,int param_6
            ,int param_7,undefined4 param_8,undefined4 uStackX_0,char cStackX_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  
  if (DAT_089d7f00 == 0) {
    uVar2 = 0;
  }
  else if (*(char *)(DAT_089d7f00 + 1) == '\0') {
    uVar2 = 0;
  }
  else if (*(int *)(DAT_089d7f00 + 0x140) == 1) {
    local_3c = param_7;
    local_38 = param_6;
    local_34 = param_4;
    if (cStackX_4 == '\0') {
      local_c0 = 0x63736964;
      local_bc = 0x502f3a30;
      local_b8 = 0x475f5053;
      local_b4 = 0x2f454d41;
      local_b0 = 0x44525355;
      local_ac = 0x2f5249;
      FUN_08935914(&local_c0,param_1);
    }
    else {
      FUN_089359a4(&local_c0,param_1);
    }
    FUN_08935d58(&local_c0);
    if (*(int *)(DAT_089d7f00 + 0x148) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(undefined4 *)(DAT_089d7f00 + 0x148));
      *(undefined4 *)(DAT_089d7f00 + 0x148) = 0;
    }
    iVar1 = FUN_089359e8(&local_c0);
    uVar2 = (*(code *)PTR_FUN_089d7ef8)(iVar1 + 1);
    *(undefined4 *)(DAT_089d7f00 + 0x148) = uVar2;
    if (*(int *)(DAT_089d7f00 + 0x148) == 0) {
      uVar2 = 0;
    }
    else {
      FUN_089359a4(*(undefined4 *)(DAT_089d7f00 + 0x148),&local_c0);
      uVar3 = param_3 & 6;
      if ((param_2 & 0x80) == 0) {
        local_30 = uVar3;
        uVar2 = FUN_089359e8("host0:");
        iVar1 = FUN_08935b50(param_1,"host0:",uVar2);
        if (iVar1 == 0) {
          param_2 = 0;
          uVar3 = local_30;
        }
        else {
          uVar2 = FUN_089359e8(&DAT_089ccc04);
          iVar1 = FUN_08935b50(param_1,&DAT_089ccc04,uVar2);
          if (iVar1 == 0) {
            param_2 = 2;
            uVar3 = local_30;
          }
          else {
            uVar2 = FUN_089359e8("disc0:");
            iVar1 = FUN_08935b50(param_1,"disc0:",uVar2);
            uVar3 = local_30;
            if (iVar1 == 0) {
              param_2 = 1;
            }
          }
        }
      }
      *(undefined4 *)(DAT_089d7f00 + 4) = uStackX_0;
      *(uint *)(DAT_089d7f00 + 8) = param_3;
      uVar2 = 0x20;
      *(undefined4 *)(DAT_089d7f00 + 0xc) = param_8;
      if (uVar3 != 0) {
        uVar2 = 0;
      }
      *(undefined4 *)(DAT_089d7f00 + 0x14) = uVar2;
      *(undefined4 *)(DAT_089d7f00 + 0x10) = *(undefined4 *)(DAT_089d7f00 + 0x14);
      *(uint *)(DAT_089d7f00 + 0x144) = param_2;
      *(undefined4 *)(DAT_089d7f00 + 0x140) = 2;
      *(undefined4 *)(DAT_089d7f00 + 0x174) = 0;
      *(int *)(DAT_089d7f00 + 0x178) = *(int *)(DAT_089d7f00 + 0x170) + -1;
      *(undefined4 *)(DAT_089d7f00 + 0x184) = local_34;
      *(undefined4 *)(DAT_089d7f00 + 0x188) = 0;
      *(undefined4 *)(DAT_089d7f00 + 0x18c) = 1;
      *(undefined4 *)(DAT_089d7f00 + 0x1b8) = 0;
      *(undefined4 *)(DAT_089d7f00 + 0x19c) = 0;
      *(undefined4 *)(DAT_089d7f00 + 0x1b0) = 0;
      *(undefined4 *)(DAT_089d7f00 + 0x1b4) = 0;
      *(undefined4 *)(DAT_089d7f00 + 0x1d8) = 0;
      *(undefined4 *)(DAT_089d7f00 + 0x1dc) = 0;
      iVar1 = local_3c * (local_38 + 0x3fU & 0xffffffc0);
      if (param_5 == 0) {
        iVar1 = iVar1 * 4;
      }
      else {
        iVar1 = iVar1 * 2;
      }
      *(int *)(DAT_089d7f00 + 0x17c) = iVar1;
      *(int *)(DAT_089d7f00 + 0x180) = param_5;
      sceKernelCancelSema(*(undefined4 *)(DAT_089d7f00 + 0x1bc),0xffffffff,auStack_40);
      sceKernelCancelSema(*(undefined4 *)(DAT_089d7f00 + 0x1c0),0xffffffff,auStack_40);
      uVar2 = sceKernelCreateThread("SQEXTEC Movie Streaming",FUN_088ef908,0x6f,0x1000,0,0);
      *(undefined4 *)(DAT_089d7f00 + 0x15c) = uVar2;
      if (*(int *)(DAT_089d7f00 + 0x15c) < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = sceKernelCreateThread("SQEXTEC Movie Decode",FUN_088edc38,0x6f,0x800,0,0);
        *(undefined4 *)(DAT_089d7f00 + 0x160) = uVar2;
        if (*(int *)(DAT_089d7f00 + 0x160) < 1) {
          uVar2 = 0;
        }
        else {
          if (uVar3 != 0) {
            uVar2 = sceKernelCreateThread("SQEXTEC Movie AudioOutput",FUN_088edd44,0x10,0x400,0,0);
            *(undefined4 *)(DAT_089d7f00 + 0x164) = uVar2;
            if (*(int *)(DAT_089d7f00 + 0x164) < 1) {
              return 0;
            }
          }
          iVar1 = sceKernelStartThread(*(undefined4 *)(DAT_089d7f00 + 0x15c),0,0);
          if (iVar1 < 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

