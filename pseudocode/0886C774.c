/* Entry 0x0886C774 | file offset 0x0006974C | FUN_0886c774 | bytes 336 */

void FUN_0886c774(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = param_1 + param_2 * 4;
  if (*(int *)(iVar5 + 0x94) != 0) {
    if (param_3 == 0) {
      FUN_089a296c(2);
      FUN_089a250c();
      uVar3 = 0xff808080;
    }
    else {
      FUN_089a296c(1);
      FUN_089a29c4();
      FUN_089a2724(param_3);
      FUN_089a296c(2);
      uVar3 = *(undefined4 *)(param_3 + 0x44);
    }
    FUN_089a0c20(uVar3);
    FUN_089a25c0();
    iVar1 = FUN_0886a298(param_1,param_3,0);
    if (iVar1 != 0) {
      uVar2 = FUN_089b0dd0(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
      if ((uVar2 & 0x1000) == 0) {
        FUN_0899f9b0(*(undefined4 *)(iVar5 + 0x94));
      }
      else {
        uVar3 = FUN_089a00f4(*(undefined4 *)(iVar5 + 0x9c));
        uVar4 = *(undefined4 *)(iVar5 + 0x94);
        uVar6 = *(undefined4 *)(iVar5 + 0x9c);
        sceKernelDcacheWritebackRange(uVar4,uVar6);
        sceDmacMemcpy(uVar3,uVar4,uVar6);
        sceKernelDcacheInvalidateRange(uVar3,uVar6);
        FUN_0899f9b0(uVar3);
      }
    }
    if (param_3 != 0) {
      FUN_089a296c(1);
      FUN_089a2a40();
      FUN_089a296c(2);
    }
  }
  return;
}

