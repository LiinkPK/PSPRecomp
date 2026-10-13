/* Entry 0x0887AC70 | file offset 0x00077C48 | FUN_0887ac70 | bytes 172 */

undefined4
FUN_0887ac70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[1] == 0) {
    param_1[3] = param_4;
    iVar1 = FUN_0885c6cc(param_4,param_3,0,0,1,0);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_08935524(iVar1,param_2,param_3);
      uVar2 = FUN_0887a898(param_1[1]);
      *param_1 = uVar2;
      FUN_0887a6a0(param_1[1]);
      param_1[2] = param_3;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

