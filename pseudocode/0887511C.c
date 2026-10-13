/* Entry 0x0887511C | file offset 0x000720F4 | FUN_0887511c | bytes 156 */

void FUN_0887511c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;
  
  FUN_089a3868(param_1 + 0x10,param_1);
  FUN_089a3868(param_1 + 0x20,param_2);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  fVar1 = 1.0;
  *(float *)(param_1 + 0x38) = (float)param_3;
  if (param_4 != 0) {
    fVar1 = 1.0 / (float)param_4;
  }
  *(float *)(param_1 + 0x40) = fVar1;
  return;
}

