/* Entry 0x089A2C70 | file offset 0x0019FC48 | FUN_089a2c70 | bytes 324 */

uint FUN_089a2c70(float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = ABS(param_1);
  if (6.2831855 < fVar3) {
    fVar3 = fVar3 - (float)(int)(fVar3 / 6.2831855) * 6.2831855;
  }
  if (3.1415927 < fVar3) {
    fVar3 = fVar3 - 3.1415927;
    param_1 = (float)-(int)param_1;
  }
  if (1.5707964 < fVar3) {
    fVar3 = 3.1415927 - fVar3;
  }
  if (0.91734505 < fVar3) {
    fVar3 = (1.5707964 - fVar3) * (1.5707964 - fVar3);
    fVar3 = ((fVar3 * -0.0013719854 + 0.04166315) * fVar3 + -0.4999998) * fVar3 + 1.0;
  }
  else {
    fVar2 = fVar3 * fVar3;
    fVar3 = ((fVar2 * -0.00019418877 + 0.008331325) * fVar2 + -0.16666639) * fVar2 * fVar3 + fVar3;
  }
  uVar1 = 0;
  if (fVar3 != 0.0) {
    uVar1 = (uint)fVar3 | (uint)param_1 & 0x80000000;
  }
  return uVar1;
}

