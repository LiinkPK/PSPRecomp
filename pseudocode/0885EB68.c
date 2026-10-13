/* Entry 0x0885EB68 | file offset 0x0005BB40 | FUN_0885eb68 | bytes 188 */

void FUN_0885eb68(float param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 1) {
    param_1 = (float)param_2[5] + param_1;
    param_2[5] = (int)param_1;
    while (60.0 <= param_1) {
      iVar1 = param_2[3];
      iVar2 = iVar1 + 1;
      param_2[3] = iVar2;
      if (0x3b < iVar2) {
        iVar2 = param_2[2];
        param_2[3] = iVar1 + -0x3b;
        iVar1 = iVar2 + 1;
        param_2[2] = iVar1;
        if (0x3b < iVar1) {
          param_2[2] = iVar2 + -0x3b;
          param_2[1] = param_2[1] + 1;
        }
      }
      param_1 = param_1 - 60.0;
      param_2[5] = (int)param_1;
    }
    param_2[4] = (int)((param_1 * 1000.0) / 60.0);
  }
  return;
}

