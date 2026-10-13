/* Entry 0x08895A54 | file offset 0x00092A2C | FUN_08895a54 | bytes 144 */

void FUN_08895a54(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    iVar1 = FUN_088a51c0(param_4,"MAP_EFFECT:%s",param_2);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      uVar2 = FUN_088a5208(iVar1);
      FUN_08935524(uVar2,param_3,param_4);
      FUN_088a522c(*param_1);
      param_1[1] = param_4;
    }
  }
  return;
}

