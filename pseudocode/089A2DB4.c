/* Entry 0x089A2DB4 | file offset 0x0019FD8C | FUN_089a2db4 | bytes 324 */

uint FUN_089a2db4(float param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  param_1 = ABS(param_1);
  uVar1 = 1;
  if (6.2831855 < param_1) {
    param_1 = param_1 - (float)(int)(param_1 / 6.2831855) * 6.2831855;
  }
  if (3.1415927 < param_1) {
    param_1 = param_1 - 3.1415927;
    uVar1 = 0xffffffff;
  }
  if (1.5707964 < param_1) {
    param_1 = 3.1415927 - param_1;
    uVar1 = -uVar1;
  }
  if (0.65345126 < param_1) {
    param_1 = 1.5707964 - param_1;
    fVar3 = param_1 * param_1;
    param_1 = ((fVar3 * -0.00019418877 + 0.008331325) * fVar3 + -0.16666639) * fVar3 * param_1 +
              param_1;
  }
  else {
    param_1 = param_1 * param_1;
    param_1 = ((param_1 * -0.0013719854 + 0.04166315) * param_1 + -0.4999998) * param_1 + 1.0;
  }
  uVar2 = 0;
  if (param_1 != 0.0) {
    uVar2 = (uint)param_1 | uVar1 & 0x80000000;
  }
  return uVar2;
}

