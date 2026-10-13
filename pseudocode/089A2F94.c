/* Entry 0x089A2F94 | file offset 0x0019FF6C | FUN_089a2f94 | bytes 344 */

float FUN_089a2f94(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 < 0.1989) {
    fVar1 = param_1 * param_1;
    return ((fVar1 * -0.14 + 0.2) * fVar1 + -0.3333333) * fVar1 * param_1 + param_1;
  }
  if (0.668106 <= param_1) {
    fVar1 = (param_1 - 1.0) / (param_1 + 1.0);
    fVar2 = fVar1 * fVar1;
    return fVar1 * (((fVar2 * -0.14 + 0.2) * fVar2 + -0.3333333) * fVar2 + 1.0) + 0.7853982;
  }
  fVar1 = (param_1 - 0.41421357) / (param_1 * 0.41421357 + 1.0);
  fVar2 = fVar1 * fVar1;
  return fVar1 * (((fVar2 * -0.14 + 0.2) * fVar2 + -0.3333333) * fVar2 + 1.0) + 0.3926991;
}

