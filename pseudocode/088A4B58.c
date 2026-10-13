/* Entry 0x088A4B58 | file offset 0x000A1B30 | FUN_088a4b58 | bytes 68 */

void FUN_088a4b58(float param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x28) - *(float *)(param_2 + 0x2c) * param_1;
  *(float *)(param_2 + 0x28) = fVar1;
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  FUN_088a46fc(param_2,param_2);
  return;
}

