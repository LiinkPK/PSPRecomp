/* Entry 0x0882FD08 | file offset 0x0002CCE0 | FUN_0882fd08 | bytes 188 */

void FUN_0882fd08(int param_1,ushort param_2,ushort param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x170);
  fVar1 = (float)param_2;
  fVar2 = (float)param_3;
  if ((0.0 <= fVar3) && (fVar1 < fVar3)) {
    fVar1 = fVar3;
  }
  *(float *)(param_1 + 0x170) = fVar1;
  if (fVar2 == 65535.0) {
    fVar2 = (float)FUN_0882fc20(param_1,0xffffffff);
  }
  fVar1 = *(float *)(param_1 + 0x174);
  if ((0.0 <= fVar1) && (fVar2 < fVar1)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x174) = fVar2;
  return;
}

