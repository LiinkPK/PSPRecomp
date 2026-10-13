/* Entry 0x088DAFC8 | file offset 0x000D7FA0 | FUN_088dafc8 | bytes 324 */

bool FUN_088dafc8(int param_1,undefined4 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_3 == '\0') {
    iVar2 = FUN_08862c40(param_2,1);
  }
  else {
    iVar2 = FUN_088fe7c8(param_2,0);
  }
  if (iVar2 == 0) {
    FUN_088db10c(param_1);
    bVar1 = false;
  }
  else {
    iVar4 = *(int *)(DAT_089d7830 + 8);
    if (iVar4 == 0) {
      iVar4 = *(int *)(DAT_089d7830 + 4);
    }
    uVar3 = FUN_0885c6cc(iVar4,iVar2,0x40,0,1,1);
    if (param_3 == '\0') {
      FUN_08862854(param_2,uVar3,iVar2,1);
    }
    else {
      FUN_088fe708(param_2,uVar3,iVar2,0);
      FUN_088fe944(param_2,uVar3,iVar2);
    }
    FUN_088dae0c(param_1,uVar3,iVar2,0xffffffff,0xffffffff);
    FUN_0885c538(iVar4,uVar3,0x40);
    bVar1 = *(int *)(param_1 + 0x10) != 0;
  }
  return bVar1;
}

