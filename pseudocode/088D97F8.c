/* Entry 0x088D97F8 | file offset 0x000D67D0 | FUN_088d97f8 | bytes 292 */

undefined4 FUN_088d97f8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  iVar1 = FUN_088d991c();
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = FUN_088d86c8(*(undefined4 *)(param_1 + 0xc));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 4) != 0) {
          FUN_088da060(*(int *)(param_1 + 4));
          *(undefined4 *)(param_1 + 4) = 0;
        }
      }
      else {
        iVar2 = FUN_088d873c(*(undefined4 *)(param_1 + 0xc));
        if (iVar2 == 1) {
          FUN_088da0a8(iVar1,0xe,auStack_60,auStack_20);
          uVar3 = *(undefined4 *)(param_1 + 4);
        }
        else {
          iVar2 = FUN_088d8790(*(undefined4 *)(param_1 + 0xc));
          if (iVar2 == 1) {
            FUN_088da0a8(iVar1,0xe,auStack_60,auStack_20);
            uVar3 = *(undefined4 *)(param_1 + 4);
          }
          else {
            FUN_088da0a8(iVar1,0xe,auStack_60,auStack_20);
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

