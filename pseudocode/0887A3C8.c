/* Entry 0x0887A3C8 | file offset 0x000773A0 | FUN_0887a3c8 | bytes 188 */

undefined4 FUN_0887a3c8(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0887a354();
  if ((param_2 == 0) || (param_3 < 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_0887cfe4();
    iVar2 = FUN_0887d330(uVar1,param_2,param_3);
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 == 0) {
      iVar2 = FUN_0887ad78(param_2,0,param_3,0,0,0);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 == 0) {
        return 0xfffffffe;
      }
      param_1[8] = 0;
    }
    else {
      param_1[8] = 1;
    }
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

