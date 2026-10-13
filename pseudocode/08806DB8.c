/* Entry 0x08806DB8 | file offset 0x00003D90 | FUN_08806db8 | bytes 112 */

void FUN_08806db8(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  
  if (0.0 < *(float *)(param_1 + 0x20)) {
    fVar1 = (float)FUN_08838300(param_2);
    fVar2 = *(float *)(param_1 + 0x20);
    fVar1 = *(float *)(param_1 + 0x24) + fVar1;
    *(float *)(param_1 + 0x24) = fVar1;
    if (fVar1 < fVar2) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0x24) = fVar2;
  }
  return;
}

