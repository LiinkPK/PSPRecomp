/* Entry 0x089A2EF8 | file offset 0x0019FED0 | FUN_089a2ef8 | bytes 156 */

uint FUN_089a2ef8(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = ABS(param_2);
  fVar1 = ABS(param_1);
  if ((uint)fVar1 < (uint)fVar2) {
    fVar2 = (float)FUN_089a2f94(fVar1 / fVar2);
  }
  else {
    fVar2 = (float)FUN_089a2f94(fVar2 / fVar1);
    fVar2 = 1.5707964 - fVar2;
  }
  if ((int)param_2 < 0) {
    fVar2 = 3.1415927 - fVar2;
  }
  return (uint)fVar2 | (uint)param_1 & 0x80000000;
}

