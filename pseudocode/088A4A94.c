/* Entry 0x088A4A94 | file offset 0x000A1A6C | FUN_088a4a94 | bytes 128 */

void FUN_088a4a94(float param_1,int param_2)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_2 + 0x1c)) &&
     (fVar1 = *(float *)(param_2 + 0x1c) - param_1, *(float *)(param_2 + 0x1c) = fVar1, fVar1 <= 0.0
     )) {
    FUN_088a44f8(param_2,0);
  }
  if ((*(uint *)(param_2 + 0x18) & 8) != 0) {
    FUN_088a4b58(param_1,param_2);
  }
  return;
}

