/* Entry 0x089A3384 | file offset 0x001A035C | FUN_089a3384 | bytes 256 */

float FUN_089a3384(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = param_1 & 0x7fffff;
  uVar3 = uVar1 - 0x800000;
  if ((int)param_1 < 1) {
    fVar4 = -INFINITY;
    if ((param_1 & 0x7fffffff) != 0) {
      fVar4 = NAN;
    }
    return fVar4;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x3504f4) {
    param_1 = param_1 - 0x800000;
    uVar2 = uVar3;
    uVar3 = uVar1;
  }
  fVar4 = (float)(int)uVar3 / (float)(int)(uVar2 + 0x1800000);
  return (float)(((int)param_1 >> 0x17) * 0xb17218 + -0x575627d0) * 5.9604645e-08 +
         fVar4 * ((fVar4 * fVar4 * 0.41397473 + 0.6664773) * fVar4 * fVar4 + 2.0000005);
}

