/* Entry 0x089A31C4 | file offset 0x001A019C | FUN_089a31c4 | bytes 240 */

/* WARNING: Removing unreachable block (ram,0x089a31f0) */

float FUN_089a31c4(float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (0x42b00f33 < (int)ABS(param_1)) {
    fVar2 = 0.0;
    if (0.0 <= param_1) {
      fVar2 = INFINITY;
    }
    return fVar2;
  }
  fVar2 = ABS(param_1) * 1.442695;
  fVar3 = (float)(int)ROUND(fVar2);
  iVar1 = (int)fVar3;
  fVar2 = fVar2 - fVar3;
  if (param_1 < 0.0) {
    fVar2 = -fVar2;
    iVar1 = -iVar1;
  }
  fVar2 = (fVar2 * 0.6931472 + 6.0 + fVar2 * 0.030016301 * fVar2) / (6.0 - fVar2 * 0.3465736);
  fVar2 = fVar2 * fVar2;
  return fVar2 * fVar2 * (float)((iVar1 + 0x7f) * 0x800000);
}

