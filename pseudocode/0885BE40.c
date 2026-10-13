/* Entry 0x0885BE40 | file offset 0x00058E18 | FUN_0885be40 | bytes 120 */

undefined4 FUN_0885be40(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if ((*param_2 < *param_1) || (param_1[3] < *param_2)) {
    uVar1 = 0;
  }
  else if ((param_2[2] < param_1[2]) || (param_1[5] < param_2[2])) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

