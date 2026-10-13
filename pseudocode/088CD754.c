/* Entry 0x088CD754 | file offset 0x000CA72C | FUN_088cd754 | bytes 564 */

undefined4 FUN_088cd754(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  iVar2 = FUN_088cd9d4();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar2 = param_1 + 0xc;
  if (((-1 < *(int *)(param_1 + 0x1c)) && (*(char *)(param_1 + 0x3c) == '\0')) &&
     (iVar4 = FUN_0887a484(iVar2), iVar4 == 0)) {
    iVar4 = FUN_0887a3c8(iVar2,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x1c));
    if (iVar4 != 0) {
      return 0xfffffffe;
    }
    iVar4 = FUN_0887a4c4(iVar2);
    if (iVar4 == 0) {
      return 0xfffffffd;
    }
    FUN_0887b98c(iVar4);
    FUN_0887b9c4(iVar4);
    FUN_0887ba80(iVar4,FUN_088cdea4,0);
    iVar5 = *(int *)(param_1 + 8);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x8000;
      if (*(int *)(iVar5 + 0x34) == 0) {
        *(int *)(iVar5 + 0x34) = iVar4;
        *(int *)(iVar5 + 0x30) = iVar4;
        *(undefined4 *)(iVar4 + 0x4c) = 0;
        *(undefined4 *)(iVar4 + 0x54) = 0;
        iVar6 = *(int *)(iVar5 + 0x38);
      }
      else {
        *(int *)(*(int *)(iVar5 + 0x34) + 0x4c) = iVar4;
        uVar3 = *(undefined4 *)(iVar5 + 0x34);
        *(undefined4 *)(iVar4 + 0x4c) = 0;
        *(undefined4 *)(iVar4 + 0x54) = uVar3;
        iVar6 = *(int *)(iVar5 + 0x38);
        *(int *)(iVar5 + 0x34) = iVar4;
      }
      *(int *)(iVar5 + 0x38) = iVar6 + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  if (((iVar4 != 0) && (*(short *)(iVar4 + 0xc) == 0x11)) &&
     ((*(ushort *)(iVar4 + 0x20) & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    FUN_088cd538(param_1);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  iVar2 = FUN_0887a4c4(iVar2);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  sVar1 = *(short *)(iVar4 + 0xc);
  if (sVar1 < 0x10) {
    if (0xe < sVar1) {
      FUN_088da0a8(iVar4,0,auStack_60,auStack_20);
      goto LAB_088cd954;
    }
  }
  else if (sVar1 < 0x11) {
    FUN_088da0a8(iVar4,0,auStack_60,auStack_20);
    goto LAB_088cd954;
  }
  FUN_088da0a8(iVar4,0,auStack_60,auStack_20);
LAB_088cd954:
  FUN_0887b778(iVar2,auStack_60);
  FUN_0887b828(iVar2,auStack_20);
  return 0;
}

