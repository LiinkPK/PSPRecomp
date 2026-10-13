/* Entry 0x0891F688 | file offset 0x0011C660 | FUN_0891f688 | bytes 184 */

void FUN_0891f688(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1[2] == 0) && (param_1[3] == 0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    if (param_2 < 1) {
      if (-1 < param_2) {
        iVar1 = FUN_0885c6cc(param_1[1],0x6d64,0,0,1,0);
        param_1[2] = iVar1;
        param_1[3] = 0;
      }
    }
    else if (param_2 < 2) {
      iVar1 = FUN_0885c6cc(param_1[1],0x1030,0,0,1,0);
      param_1[3] = iVar1;
      param_1[2] = 0;
    }
    FUN_0891f7e0();
  }
  return;
}

