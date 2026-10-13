/* Entry 0x088BE33C | file offset 0x000BB314 | FUN_088be33c | bytes 164 */

int * FUN_088be33c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  while( true ) {
    param_2 = param_2 + -1;
    while (iVar1 < param_3) {
      param_1 = param_1 + 1;
      iVar1 = *param_1;
    }
    iVar1 = *param_2;
    while (param_3 < iVar1) {
      param_2 = param_2 + -1;
      iVar1 = *param_2;
    }
    if (param_2 <= param_1) break;
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    param_1 = param_1 + 1;
    iVar1 = *param_1;
  }
  return param_1;
}

