/* Entry 0x088DEE00 | file offset 0x000DBDD8 | FUN_088dee00 | bytes 372 */

undefined4 FUN_088dee00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  iVar1 = FUN_088def74();
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = FUN_088df7ec(*(undefined4 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 4) != 0) {
          FUN_088da060();
          *(undefined4 *)(param_1 + 4) = 0;
        }
      }
      else {
        iVar2 = FUN_088deff0(param_1);
        if (*(short *)(*(int *)(param_1 + 4) + 0xc) != iVar2) {
          FUN_088d9f5c(*(int *)(param_1 + 4),iVar2,1);
        }
        iVar2 = FUN_088df860(*(undefined4 *)(param_1 + 0x10));
        if (iVar2 == 1) {
          FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc2e0 + *(int *)(param_1 + 0x14) * 4),
                       auStack_60,auStack_20);
          uVar3 = *(undefined4 *)(param_1 + 4);
        }
        else {
          iVar2 = FUN_088df8b4(*(undefined4 *)(param_1 + 0x10));
          iVar4 = *(int *)(param_1 + 0x14) * 4;
          if (iVar2 == 1) {
            FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc2e8 + iVar4),auStack_60,auStack_20);
            uVar3 = *(undefined4 *)(param_1 + 4);
          }
          else {
            FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc2f0 + iVar4),auStack_60,auStack_20);
            uVar3 = *(undefined4 *)(param_1 + 4);
          }
        }
        FUN_088d9b84(uVar3,auStack_60);
        FUN_088d9af4(*(undefined4 *)(param_1 + 4),auStack_20);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

