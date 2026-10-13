/* Entry 0x0896EF78 | file offset 0x0016BF50 | FUN_0896ef78 | bytes 172 */

void FUN_0896ef78(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_089a47ec(*(float *)(param_1 + 0x270) * 0.017453292 * 0.5);
  fVar2 = *(float *)(param_1 + 0x25c);
  fVar3 = *(float *)(param_1 + 600);
  *(float *)(param_1 + 0xb0) = 1.0 / (fVar1 * *(float *)(param_1 + 0x264));
  *(float *)(param_1 + 0xc4) = 1.0 / fVar1;
  *(float *)(param_1 + 0xd8) = -(fVar2 + fVar3) / (fVar2 - fVar3);
  *(undefined4 *)(param_1 + 0xdc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(float *)(param_1 + 0xe8) = (fVar2 * fVar3 * -2.0) / (fVar2 - fVar3);
  return;
}

