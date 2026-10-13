/* Entry 0x088D7CB0 | file offset 0x000D4C88 | FUN_088d7cb0 | bytes 500 */

undefined4 FUN_088d7cb0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [3];
  byte local_1d;
  
  iVar1 = FUN_088d7ea4();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(uint *)(param_1 + 8) < 2)) {
    iVar1 = FUN_088d86c8(*(undefined4 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 4) != 0) {
        FUN_088da060();
        *(undefined4 *)(param_1 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
    else {
      uVar2 = FUN_088d82f0(*(undefined4 *)(param_1 + 0x14));
      if (6 < uVar2) {
        return 0xfffffffe;
      }
      uVar2 = uVar2 + *(int *)(param_1 + 0xc);
      if (6 < uVar2) {
        return 0xfffffffd;
      }
      iVar3 = FUN_088d873c(*(undefined4 *)(param_1 + 0x18));
      iVar5 = uVar2 * 4;
      if (iVar3 == 1) {
        FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc0d8 + *(int *)(param_1 + 8) * 0x1c + iVar5),
                     auStack_60,auStack_20);
        uVar4 = *(undefined4 *)(param_1 + 4);
        iVar1 = *(int *)(param_1 + 8);
      }
      else {
        iVar3 = FUN_088d8790(*(undefined4 *)(param_1 + 0x18));
        iVar5 = *(int *)(param_1 + 8) * 0x1c + iVar5;
        if (iVar3 == 1) {
          FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc110 + iVar5),auStack_60,auStack_20);
          uVar4 = *(undefined4 *)(param_1 + 4);
          iVar1 = *(int *)(param_1 + 8);
        }
        else {
          FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc148 + iVar5),auStack_60,auStack_20);
          uVar4 = *(undefined4 *)(param_1 + 4);
          iVar1 = *(int *)(param_1 + 8);
        }
      }
      if (iVar1 != 0) {
        local_1d = local_1d / 2;
      }
      FUN_088d9b84(uVar4,auStack_60);
      FUN_088d9af4(*(undefined4 *)(param_1 + 4),auStack_20);
    }
  }
  return 0;
}

