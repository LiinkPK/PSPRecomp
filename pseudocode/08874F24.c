/* Entry 0x08874F24 | file offset 0x00071EFC | FUN_08874f24 | bytes 136 */

void FUN_08874f24(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40) * DAT_089d5eac;
  *(float *)(param_1 + 0x3c) = fVar1;
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x3c) = fVar1;
  FUN_089a39ec(fVar1,param_1,param_1 + 0x10,param_1 + 0x20);
  *(float *)(param_1 + 0x30) =
       (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34)) * *(float *)(param_1 + 0x3c) +
       *(float *)(param_1 + 0x34);
  return;
}

