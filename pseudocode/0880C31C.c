/* Entry 0x0880C31C | file offset 0x000092F4 | FUN_0880c31c | bytes 276 */

void FUN_0880c31c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [64];
  int local_30;
  
  iVar5 = *(int *)(param_1 + 0x18);
  iVar4 = 0;
  iVar6 = param_2 + 0x330;
  if (0 < iVar5) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x1c) + iVar3;
      local_30 = param_2;
      uVar1 = FUN_089b0e78(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x394) + 0x84) + 8),
                           (int)*(short *)(iVar7 + 2));
      uVar1 = FUN_089b1224(uVar1);
      FUN_089a383c(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),
                   *(undefined4 *)(iVar7 + 0xc),0x3f800000,auStack_80);
      FUN_089a3fb8(auStack_70,iVar6,uVar1);
      FUN_089a3f40(*(int *)(param_1 + 0x30) + iVar2,auStack_70,auStack_80);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x14;
      iVar2 = iVar2 + 0x10;
      param_2 = local_30;
    } while (iVar4 < iVar5);
  }
  return;
}

