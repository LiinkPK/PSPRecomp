/* Entry 0x08927754 | file offset 0x0012472C | FUN_08927754 | bytes 580 */

undefined4 FUN_08927754(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_0885c40c(param_3,param_4,"MAKE EVEX",0x10);
  FUN_08927528(param_1,uVar1);
  uVar1 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),0x2a24,0,0,1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  FUN_08925e20();
  FUN_08925d80(param_1);
  FUN_08925c2c(param_1);
  FUN_089265b8(param_1);
  iVar4 = 0;
  if ((*param_2 != 0) && (iVar4 = *param_2 * 2, (char)param_2[1] != '\0')) {
    iVar4 = iVar4 + -1;
  }
  FUN_08927e20(param_1,*(int *)(param_1 + 8) + 0x51f0 + iVar4 * 0x160,iVar4);
  FUN_08925fd8(param_1);
  uVar1 = FUN_08926144(param_1);
  uVar1 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),uVar1,0,0,1,0);
  FUN_089261c4(param_1,uVar1);
  uVar2 = FUN_08926164(param_1);
  uVar3 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),uVar2,0,0,1,0);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 4) = uVar3;
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4);
  FUN_089261e0(param_1,uVar1,1,uVar5,uVar2);
  FUN_08926d2c(param_1,uVar5);
  uVar2 = FUN_089261b4(param_1);
  uVar3 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),uVar2,0,0,1,0);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = uVar3;
  FUN_089270c8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x20) + 8));
  FUN_0892624c(param_1,uVar1,1,&DAT_089ceaec,*(undefined4 *)(*(int *)(param_1 + 0x20) + 8),uVar2);
  FUN_08927030(param_1,uVar1,uVar5);
  FUN_08928314(param_1,uVar5);
  **(undefined4 **)(param_1 + 0x20) = uVar1;
  return **(undefined4 **)(param_1 + 0x20);
}

