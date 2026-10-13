/* Entry 0x088A07E4 | file offset 0x0009D7BC | FUN_088a07e4 | bytes 232 */

void FUN_088a07e4(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x44);
  fVar1 = *(float *)(param_2 + 0x50);
  if (0.0 < fVar2) {
    fVar2 = *(float *)(param_2 + 0x3c) + fVar2 * param_1;
    if (*(float *)(param_2 + 0x40) < fVar2) {
      fVar2 = *(float *)(param_2 + 0x40);
    }
    *(float *)(param_2 + 0x3c) = fVar2;
  }
  else if (fVar2 < 0.0) {
    fVar2 = *(float *)(param_2 + 0x3c) + fVar2 * param_1;
    if (fVar2 < *(float *)(param_2 + 0x40)) {
      fVar2 = *(float *)(param_2 + 0x40);
    }
    *(float *)(param_2 + 0x3c) = fVar2;
  }
  if (0.0 < fVar1) {
    fVar1 = *(float *)(param_2 + 0x48) + fVar1 * param_1;
    if (*(float *)(param_2 + 0x4c) < fVar1) {
      fVar1 = *(float *)(param_2 + 0x4c);
    }
    *(float *)(param_2 + 0x48) = fVar1;
  }
  else if (fVar1 < 0.0) {
    fVar1 = *(float *)(param_2 + 0x48) + fVar1 * param_1;
    if (fVar1 < *(float *)(param_2 + 0x4c)) {
      fVar1 = *(float *)(param_2 + 0x4c);
    }
    *(float *)(param_2 + 0x48) = fVar1;
  }
  return;
}

