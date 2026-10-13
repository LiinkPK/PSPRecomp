/* Entry 0x0887B500 | file offset 0x000784D8 | FUN_0887b500 | bytes 168 */

undefined * FUN_0887b500(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    iVar1 = FUN_0887b1b4(param_1,param_2);
    uVar2 = FUN_0887a898(iVar1);
    iVar3 = FUN_0887a800(iVar1,param_3,uVar2);
    if (iVar3 == 0) {
      puVar5 = &DAT_09b49088;
    }
    else {
      iVar6 = 2;
      iVar4 = FUN_0887a8f0(iVar1);
      if (iVar4 != 0) {
        iVar6 = 4;
      }
      puVar5 = (undefined *)(iVar1 + iVar3 + iVar6);
    }
  }
  return puVar5;
}

