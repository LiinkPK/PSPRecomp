/* Entry 0x088CCB68 | file offset 0x000C9B40 | FUN_088ccb68 | bytes 448 */

undefined4 FUN_088ccb68(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_50 [64];
  undefined1 auStack_10 [4];
  
  iVar2 = FUN_088ccd28();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (((iVar2 != 0) && (*(short *)(iVar2 + 0xc) == 2)) && ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0))
  {
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = iVar2;
    if (iVar3 != 0) {
      uVar5 = 0;
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xffff7fff;
        if (*(int *)(iVar3 + 0x54) == 0) {
          *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar3 + 0x4c);
          uVar5 = *(undefined4 *)(iVar3 + 0x54);
          iVar4 = *(int *)(iVar3 + 0x4c);
        }
        else {
          *(undefined4 *)(*(int *)(iVar3 + 0x54) + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
          uVar5 = *(undefined4 *)(iVar3 + 0x54);
          iVar4 = *(int *)(iVar3 + 0x4c);
        }
        if (iVar4 == 0) {
          *(undefined4 *)(iVar2 + 0x34) = uVar5;
        }
        else {
          *(undefined4 *)(iVar4 + 0x54) = uVar5;
        }
        *(undefined4 *)(iVar3 + 0x54) = 0;
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + -1;
        uVar5 = *(undefined4 *)(param_1 + 0xc);
      }
      FUN_0887b944(uVar5);
      iVar4 = *(int *)(param_1 + 8);
    }
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_088da060(iVar4);
      *(undefined4 *)(param_1 + 8) = 0;
      iVar2 = 0;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  sVar1 = *(short *)(iVar2 + 0xc);
  if (sVar1 < 1) {
    if (-1 < sVar1) {
      FUN_088da0a8(iVar2,0,auStack_50,auStack_10);
      uVar5 = *(undefined4 *)(param_1 + 0xc);
      goto LAB_088cccf8;
    }
  }
  else if (sVar1 < 2) {
    FUN_088da0a8(iVar2,0,auStack_50,auStack_10);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    goto LAB_088cccf8;
  }
  FUN_088da0a8(iVar2,0,auStack_50,auStack_10);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
LAB_088cccf8:
  FUN_0887b778(uVar5,auStack_50);
  FUN_0887b828(*(undefined4 *)(param_1 + 0xc),auStack_10);
  return 0;
}

