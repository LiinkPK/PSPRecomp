/* Entry 0x089A32B4 | file offset 0x001A028C | FUN_089a32b4 | bytes 208 */

float FUN_089a32b4(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_2 != 0.0) {
    fVar1 = ABS(param_1);
    fVar2 = 0.0;
    if (param_1 != 0.0) {
      if (fVar1 != 1.0) {
        fVar2 = (float)FUN_089a3384(fVar1);
        fVar1 = (float)FUN_089a31c4(param_2 * fVar2);
      }
      fVar2 = fVar1;
      if (((param_1 < 0.0) && (fVar2 = NAN, (int)CEIL(param_2) == (int)FLOOR(param_2))) &&
         (fVar2 = fVar1, ((int)param_2 & 1U) != 0)) {
        fVar2 = -fVar1;
      }
    }
  }
  return fVar2;
}

