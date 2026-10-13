/* Entry 0x08972C14 | file offset 0x0016FBEC | FUN_08972c14 | bytes 592 */

void FUN_08972c14(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_2 == 0) {
    FUN_089a0fc8();
    FUN_089a0e20(0,1);
    FUN_089a0e8c(0,0);
    FUN_089a0db8(*(undefined4 *)(&DAT_089d0628 + *(int *)(*param_1 + 0x10) * 4),
                 *(int *)(*param_1 + 0x14) + -1,0,1);
    iVar2 = 0;
    if (0 < *(int *)(*param_1 + 0x14)) {
      iVar4 = 0;
      do {
        piVar1 = (int *)(*param_1 + 0x1c + iVar4);
        FUN_089a0f04(iVar2,*piVar1,piVar1[1],*piVar1 + 0xfU & 0xfffffff0,*param_1 + piVar1[2]);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar2 < *(int *)(*param_1 + 0x14));
    }
    FUN_089a0df4(*(undefined4 *)(&DAT_089d0648 + param_3 * 4),
                 *(undefined4 *)(&DAT_089d0648 + param_4 * 4));
    FUN_089a0e60(*(undefined4 *)(&DAT_089d0660 + param_5 * 4),
                 *(undefined4 *)(&DAT_089d0660 + param_6 * 4));
  }
  else {
    FUN_089a0e20(0,1);
    FUN_089a0e8c(0,0);
    uVar3 = *(undefined4 *)(&DAT_089d0628 + *(int *)(*param_1 + 0x10) * 4);
    FUN_089a0db8(uVar3,*(int *)(*param_1 + 0x14) + -1,0,1);
    if (DAT_089da320 == 0) {
      iVar2 = *param_1;
      local_2c = 0;
      FUN_08974370(param_2,&local_2c,uVar3,*(undefined4 *)(iVar2 + 0x1c),
                   *(undefined4 *)(iVar2 + 0x20),iVar2 + *(int *)(iVar2 + 0x24),
                   *(undefined4 *)(iVar2 + 4));
    }
    else {
      local_30 = FUN_089a0144(0);
      iVar2 = *param_1;
      FUN_08974370(param_2,&local_30,uVar3,*(undefined4 *)(iVar2 + 0x1c),
                   *(undefined4 *)(iVar2 + 0x20),iVar2 + *(int *)(iVar2 + 0x24),
                   *(undefined4 *)(iVar2 + 4));
      FUN_089a0180(local_30);
    }
    FUN_089a0df4(*(undefined4 *)(&DAT_089d0648 + param_3 * 4),
                 *(undefined4 *)(&DAT_089d0648 + param_4 * 4));
    FUN_089a0e60(*(undefined4 *)(&DAT_089d0660 + param_5 * 4),
                 *(undefined4 *)(&DAT_089d0660 + param_6 * 4));
  }
  return;
}

