/* Entry 0x0890A8C4 | file offset 0x0010789C | FUN_0890a8c4 | bytes 192 */

undefined4 FUN_0890a8c4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_08902e3c(*param_1,param_2,FUN_0890b68c,param_1);
    if (iVar1 == 1) {
      iVar1 = FUN_0885c6cc(param_1[0x6e],param_4,0,0,1,0);
      param_1[0x66] = iVar1;
      FUN_08935524(iVar1,param_3,param_4);
      param_1[0x67] = param_4;
      param_1[100] = 2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

