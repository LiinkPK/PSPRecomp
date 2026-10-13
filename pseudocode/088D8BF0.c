/* Entry 0x088D8BF0 | file offset 0x000D5BC8 | FUN_088d8bf0 | bytes 552 */

undefined4 FUN_088d8bf0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_60 [64];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  iVar1 = FUN_088d8e18();
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = FUN_088d86c8(*(undefined4 *)(param_1 + 0x34));
      iVar2 = FUN_0887a4c4(param_1 + 8);
      if (iVar1 == 0) {
        FUN_088d8a98(param_1);
        if (*(int *)(param_1 + 4) != 0) {
          FUN_088da060();
          *(undefined4 *)(param_1 + 4) = 0;
        }
      }
      else {
        iVar3 = FUN_088d9140(param_1);
        if (*(short *)(*(int *)(param_1 + 4) + 0xc) != iVar3) {
          FUN_088d9f5c(*(int *)(param_1 + 4),iVar3,1);
        }
        uVar5 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c);
        if (6 < uVar5) {
          return 0xfffffffe;
        }
        iVar3 = FUN_088d873c(*(undefined4 *)(param_1 + 0x34));
        iVar6 = uVar5 * 4;
        if (iVar3 == 1) {
          FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc1e8 + iVar6),auStack_60,&local_20);
          uVar4 = *(undefined4 *)(param_1 + 4);
        }
        else {
          iVar3 = FUN_088d8790(*(undefined4 *)(param_1 + 0x34));
          if (iVar3 == 1) {
            FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc204 + iVar6),auStack_60,&local_20);
            uVar4 = *(undefined4 *)(param_1 + 4);
          }
          else {
            FUN_088da0a8(iVar1,*(undefined4 *)(&DAT_089cc220 + iVar6),auStack_60,&local_20);
            uVar4 = *(undefined4 *)(param_1 + 4);
          }
        }
        FUN_088d9b84(uVar4,auStack_60);
        FUN_088d9af4(*(undefined4 *)(param_1 + 4),&local_20);
        if (iVar2 != 0) {
          FUN_088da0a8(*(undefined4 *)(param_1 + 4),0,auStack_60,&local_20);
          iVar1 = FUN_088d8e20(param_1);
          if (iVar1 == 1) {
            local_20 = 0x40;
            local_1f = 0x40;
            local_1e = 0x40;
          }
          else if (*(short *)(*(int *)(param_1 + 4) + 0xc) == 9) {
            local_20 = 0x80;
            local_1f = 0x80;
            local_1e = 0x80;
          }
          FUN_0887b778(iVar2,auStack_60);
          FUN_0887b828(iVar2,&local_20);
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

