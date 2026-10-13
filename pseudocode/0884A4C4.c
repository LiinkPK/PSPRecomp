/* Entry 0x0884A4C4 | file offset 0x0004749C | FUN_0884a4c4 | bytes 120 */

float FUN_0884a4c4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x1a8);
  fVar3 = *(float *)(param_1 + 0x2a0);
  if (*(float *)(param_1 + 0x2a4) <= fVar1) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 1.0;
    if (fVar3 < fVar1) {
      fVar2 = 1.0 - (fVar1 - fVar3) / (*(float *)(param_1 + 0x2a4) - fVar3);
    }
  }
  return (fVar2 * 3.0 + 2.0) / 16.0;
}

