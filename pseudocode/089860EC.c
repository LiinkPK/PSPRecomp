/* Entry 0x089860EC | file offset 0x001830C4 | FUN_089860ec | bytes 280 */

void FUN_089860ec(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((uint)*(ushort *)(param_3 + 0x3b) + (uint)*(ushort *)(param_3 + 0x3a)) - 1.0;
  param_1 = *param_3 - param_1;
  param_2 = param_3[1] - param_2;
  *param_3 = param_1;
  fVar1 = (float)((uint)*(ushort *)((int)param_3 + 0xee) + (uint)*(ushort *)((int)param_3 + 0xea)) -
          1.0;
  param_3[1] = param_2;
  if (fVar2 <= param_1) {
    do {
      param_1 = param_1 - fVar2;
    } while (fVar2 <= param_1);
    *param_3 = param_1;
  }
  if (param_1 < 0.0) {
    do {
      param_1 = param_1 + fVar2;
    } while (param_1 < 0.0);
    *param_3 = param_1;
  }
  if (fVar1 <= param_2) {
    do {
      param_2 = param_2 - fVar1;
    } while (fVar1 <= param_2);
    param_3[1] = param_2;
  }
  if (param_2 < 0.0) {
    do {
      param_2 = param_2 + fVar1;
    } while (param_2 < 0.0);
    param_3[1] = param_2;
  }
  param_3[2] = param_1 + ((float)*(ushort *)(param_3 + 0x3b) - 1.0);
  param_3[3] = param_2 + ((float)*(ushort *)((int)param_3 + 0xee) - 1.0);
  return;
}

