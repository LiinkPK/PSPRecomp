/* Entry 0x088DEA98 | file offset 0x000DBA70 | FUN_088dea98 | bytes 372 */

undefined4 FUN_088dea98(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  iVar1 = FUN_088dec0c();
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = FUN_088df7ec(*(undefined4 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 4) != 0) {
          FUN_088da060(*(int *)(param_1 + 4));
          *(undefined4 *)(param_1 + 4) = 0;
        }
      }
      else {
        uVar2 = FUN_088df2f8(*(undefined4 *)(param_1 + 0xc));
        if (6 < uVar2) {
          return 0xfffffffe;
        }
        iVar3 = FUN_088df860(*(undefined4 *)(param_1 + 0x10));
        iVar5 = uVar2 * 4;
        if (iVar3 == 1) {
          FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc2b8 + iVar5),auStack_60,auStack_20);
          uVar4 = *(undefined4 *)(param_1 + 4);
        }
        else {
          iVar3 = FUN_088df8b4(*(undefined4 *)(param_1 + 0x10));
          if (iVar3 == 1) {
            FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc2c0 + iVar5),auStack_60,auStack_20);
            uVar4 = *(undefined4 *)(param_1 + 4);
          }
          else {
            FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc2c8 + iVar5),auStack_60,auStack_20);
            uVar4 = *(undefined4 *)(param_1 + 4);
          }
        }
        FUN_088d9b84(uVar4,auStack_60);
        FUN_088d9af4(*(undefined4 *)(param_1 + 4),auStack_20);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

