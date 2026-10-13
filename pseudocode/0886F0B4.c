/* Entry 0x0886F0B4 | file offset 0x0006C08C | FUN_0886f0b4 | bytes 48 */

void FUN_0886f0b4(float param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  *param_3 = param_4;
  if (param_1 == 0.0) {
    param_3[1] = 0;
  }
  param_3[3] = param_2;
  param_3[2] = param_1;
  param_3[4] = param_3[4] | 1;
  return;
}

