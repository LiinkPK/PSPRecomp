/* Entry 0x0887B3EC | file offset 0x000783C4 | FUN_0887b3ec | bytes 276 */

undefined4
FUN_0887b3ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0887b1b4();
    uVar2 = FUN_0887a898(iVar1);
    iVar3 = FUN_0887a800(iVar1,param_4,uVar2);
    if (iVar3 == 0) {
      uVar2 = FUN_0887d868(DAT_089d6998,0,&DAT_09b49088,0xffffffff,0,0,0,0);
    }
    else {
      iVar5 = 2;
      iVar4 = FUN_0887a8f0(iVar1);
      if (iVar4 != 0) {
        iVar5 = 4;
      }
      uVar2 = FUN_0887d868(DAT_089d6998,param_3,iVar1 + iVar3 + iVar5,0,0,param_5,param_6,0);
    }
  }
  return uVar2;
}

