/* Entry 0x08842774 | file offset 0x0003F74C | FUN_08842774 | bytes 128 */

void FUN_08842774(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != 0) {
    iVar1 = FUN_088a0cb0(param_4,0);
    *param_2 = iVar1;
    param_2[1] = param_4;
    if (iVar1 != 0) {
      uVar2 = FUN_088a0cf8();
      FUN_08935524(uVar2,param_3,param_4);
      FUN_088a0d1c(*param_2);
    }
  }
  return;
}

