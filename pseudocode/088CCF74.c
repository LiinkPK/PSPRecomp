/* Entry 0x088CCF74 | file offset 0x000C9F4C | FUN_088ccf74 | bytes 772 */

undefined4 FUN_088ccf74(int param_1,char param_2,int param_3,char param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_250 [512];
  undefined1 auStack_50 [32];
  undefined1 *local_30;
  
  iVar1 = FUN_088ccd28();
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else if (param_3 < 0) {
    uVar4 = 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    if (((iVar1 != 0) && (iVar5 != 0)) && (iVar5 != 0)) {
      *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) & 0xffff7fff;
      if (*(int *)(iVar5 + 0x54) == 0) {
        *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar5 + 0x4c);
        uVar4 = *(undefined4 *)(iVar5 + 0x54);
        iVar2 = *(int *)(iVar5 + 0x4c);
      }
      else {
        *(undefined4 *)(*(int *)(iVar5 + 0x54) + 0x4c) = *(undefined4 *)(iVar5 + 0x4c);
        uVar4 = *(undefined4 *)(iVar5 + 0x54);
        iVar2 = *(int *)(iVar5 + 0x4c);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x34) = uVar4;
      }
      else {
        *(undefined4 *)(iVar2 + 0x54) = uVar4;
      }
      *(undefined4 *)(iVar5 + 0x54) = 0;
      *(undefined4 *)(iVar5 + 0x4c) = 0;
      *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + -1;
      iVar5 = *(int *)(param_1 + 0xc);
    }
    if (iVar5 != 0) {
      FUN_0887ba5c(iVar5);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if (param_2 == '\x01') {
      iVar1 = param_1 + 0x14;
      uVar4 = 8;
    }
    else {
      iVar1 = param_1 + 0x24;
      uVar4 = 0;
    }
    iVar5 = FUN_0887afbc(iVar1,uVar4,0);
    iVar1 = FUN_0887afbc(iVar1,param_3,0);
    if ((iVar5 == 0) || (iVar1 == 0)) {
      uVar4 = 0xfffffffd;
    }
    else {
      iVar2 = FUN_08935e90(iVar5);
      iVar3 = FUN_08935e90(iVar1);
      if ((uint)(iVar2 + iVar3) < 0xff) {
        FUN_08935e30(auStack_250,iVar5);
        FUN_08935db8(auStack_250,iVar1);
        if (param_4 == '\x01') {
          FUN_089347e8(auStack_50,&DAT_089cbd04,param_5);
          local_30 = auStack_50;
          iVar1 = FUN_0887d868(DAT_089d6998,0,auStack_250,0,1,&local_30,1,0);
          *(int *)(param_1 + 0xc) = iVar1;
          if (iVar1 == 0) {
            return 0xfffffffb;
          }
        }
        else {
          iVar1 = FUN_0887d868(DAT_089d6998,0,auStack_250,0,1,0,0,0);
          *(int *)(param_1 + 0xc) = iVar1;
          if (iVar1 == 0) {
            return 0xfffffffa;
          }
        }
        FUN_0887b98c(iVar1);
        FUN_0887b9c4(*(undefined4 *)(param_1 + 0xc));
        iVar1 = *(int *)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          FUN_0887b944(iVar5);
        }
        else if (iVar5 != 0) {
          *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x8000;
          if (*(int *)(iVar1 + 0x34) == 0) {
            *(int *)(iVar1 + 0x34) = iVar5;
            *(int *)(iVar1 + 0x30) = iVar5;
            *(undefined4 *)(iVar5 + 0x4c) = 0;
            *(undefined4 *)(iVar5 + 0x54) = 0;
            iVar2 = *(int *)(iVar1 + 0x38);
          }
          else {
            *(int *)(*(int *)(iVar1 + 0x34) + 0x4c) = iVar5;
            uVar4 = *(undefined4 *)(iVar1 + 0x34);
            *(undefined4 *)(iVar5 + 0x4c) = 0;
            *(undefined4 *)(iVar5 + 0x54) = uVar4;
            iVar2 = *(int *)(iVar1 + 0x38);
            *(int *)(iVar1 + 0x34) = iVar5;
          }
          *(int *)(iVar1 + 0x38) = iVar2 + 1;
        }
        uVar4 = 0;
      }
      else {
        uVar4 = 0xfffffffc;
      }
    }
  }
  return uVar4;
}

