/* Entry 0x08983720 | file offset 0x001806F8 | FUN_08983720 | bytes 288 */

undefined4 FUN_08983720(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  param_4[1] = 0;
  *param_4 = 0;
  iVar1 = FUN_0898d440(0x90);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_089887f0(iVar1,param_2,param_3);
    iVar2 = iVar1;
  }
  param_4[1] = iVar2;
  if ((iVar2 == 0) || (iVar2 = FUN_08988f1c(iVar2,param_2,param_3), iVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    iVar2 = param_4[1];
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      iVar1 = 0;
      iVar3 = FUN_0898d440(0xa0);
      if (iVar3 != 0) {
        FUN_08989fc8(iVar3,param_2,param_3,iVar2);
        iVar1 = iVar3;
      }
      *param_4 = iVar1;
      if ((iVar1 == 0) || (iVar2 = FUN_0898ba6c(iVar1,param_2,param_3,iVar2), iVar2 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

