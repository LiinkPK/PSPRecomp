/* Entry 0x088AB270 | file offset 0x000A8248 | FUN_088ab270 | bytes 192 */

void FUN_088ab270(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (param_4 == 0) {
      iVar1 = FUN_088a51c0(param_3,"system_effect.mpk");
      *(int *)(param_1 + 0x10) = iVar1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = FUN_088a5208(iVar1);
      }
    }
    else {
      iVar2 = 0;
      if (param_3 <= param_5) {
        *(int *)(param_1 + 0x14) = param_4;
        iVar2 = param_4;
      }
    }
    if (iVar2 != 0) {
      FUN_08935524(iVar2,param_2,param_3);
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_088a522c(*(int *)(param_1 + 0x10));
      }
    }
  }
  return;
}

