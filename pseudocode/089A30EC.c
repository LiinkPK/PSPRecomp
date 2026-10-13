/* Entry 0x089A30EC | file offset 0x001A00C4 | FUN_089a30ec | bytes 124 */

uint FUN_089a30ec(float param_1)

{
  float fVar1;
  
  fVar1 = ABS(param_1);
  if (1.0 <= fVar1) {
    fVar1 = (float)FUN_089a2f94(1.0 / fVar1);
    fVar1 = 1.5707964 - fVar1;
  }
  else {
    fVar1 = (float)FUN_089a2f94(fVar1);
  }
  return (uint)fVar1 | (uint)param_1 & 0x80000000;
}

