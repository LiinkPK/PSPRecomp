/* Entry 0x088B2D18 | file offset 0x000AFCF0 | FUN_088b2d18 | bytes 180 */

void FUN_088b2d18(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 999999999;
  iVar2 = *param_1 + *param_2;
  if (999999999 < *param_1 + *param_2) {
    iVar2 = iVar1;
  }
  *param_1 = iVar2;
  iVar2 = param_2[1];
  if (param_2[1] < param_1[1]) {
    iVar2 = param_1[1];
  }
  param_1[1] = iVar2;
  iVar2 = param_1[2] + param_2[2];
  if (999999999 < param_1[2] + param_2[2]) {
    iVar2 = iVar1;
  }
  param_1[2] = iVar2;
  iVar2 = param_2[3];
  if (param_2[3] < param_1[3]) {
    iVar2 = param_1[3];
  }
  param_1[3] = iVar2;
  iVar2 = param_1[4] + param_2[4];
  if (999999999 < param_1[4] + param_2[4]) {
    iVar2 = iVar1;
  }
  param_1[4] = iVar2;
  iVar2 = param_1[5] + param_2[5];
  if (999999999 < iVar2) {
    iVar2 = 999999999;
  }
  param_1[5] = iVar2;
  return;
}

