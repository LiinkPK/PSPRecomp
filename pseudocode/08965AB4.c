/* Entry 0x08965AB4 | file offset 0x00162A8C | FUN_08965ab4 | bytes 184 */

undefined4 FUN_08965ab4(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_08968c04(0x28);
  iVar3 = 0;
  if (iVar1 != 0) {
    FUN_08968564(iVar1);
    iVar3 = iVar1;
  }
  *param_4 = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_08968644(iVar3,param_2,param_3,*(short *)(param_3 + 0x24) + 1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_0896891c(iVar3,param_2,param_3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

