/* Entry 0x08823234 | file offset 0x0002020C | FUN_08823234 | bytes 48 */

float FUN_08823234(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x24) + 0x568) + 0x2c);
  if (fVar1 == 0.0) {
    fVar1 = 1.0;
  }
  return fVar1;
}

