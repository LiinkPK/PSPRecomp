/* Entry 0x0887AACC | file offset 0x00077AA4 | FUN_0887aacc | bytes 344 */

undefined4 FUN_0887aacc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[1] == 0) {
    param_1[3] = param_3;
    if (DAT_089d68a8 == '\0') {
      iVar1 = FUN_08862c40(param_2,1);
    }
    else {
      iVar1 = FUN_088fe7c8(param_2,0);
    }
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_0885c6cc(param_3,iVar1,0,0,1,0);
      param_1[1] = iVar1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        if (DAT_089d68a8 == '\0') {
          iVar1 = FUN_08862854(param_2,iVar1,param_1[2],1);
          uVar2 = param_1[1];
        }
        else {
          iVar1 = FUN_088fe708(param_2,iVar1,param_1[2],0);
          uVar2 = param_1[1];
          if (iVar1 != 0) {
            FUN_088fe944(param_2,uVar2,param_1[2]);
            uVar2 = param_1[1];
          }
        }
        if (iVar1 == 0) {
          FUN_0885c538(param_3,uVar2,0);
          param_1[1] = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0887a898(uVar2);
          *param_1 = uVar2;
          FUN_0887a6a0(param_1[1]);
          uVar2 = 1;
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

