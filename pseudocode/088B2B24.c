/* Entry 0x088B2B24 | file offset 0x000AFAFC | FUN_088b2b24 | bytes 104 */

void FUN_088b2b24(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1 + *param_2;
  if (999999999 < *param_1 + *param_2) {
    iVar1 = 999999999;
  }
  *param_1 = iVar1;
  iVar1 = param_1[1] + param_2[1];
  if (999999999 < param_1[1] + param_2[1]) {
    iVar1 = 999999999;
  }
  param_1[1] = iVar1;
  iVar1 = param_1[2] + param_2[2];
  if (999999999 < iVar1) {
    iVar1 = 999999999;
  }
  param_1[2] = iVar1;
  return;
}

