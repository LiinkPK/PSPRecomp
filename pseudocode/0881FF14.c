/* Entry 0x0881FF14 | file offset 0x0001CEEC | FUN_0881ff14 | bytes 132 */

void FUN_0881ff14(float param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = *(float *)(param_2 + 0x2c);
  uVar2 = 0;
  if (fVar1 <= 0.0) {
    if (*(char *)(param_2 + 0x24) == '\x01') {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(param_2 + 0x38) = uVar2;
  }
  else {
    param_1 = *(float *)(param_2 + 0x28) + param_1;
    *(float *)(param_2 + 0x28) = param_1;
    if (fVar1 < param_1) {
      *(float *)(param_2 + 0x28) = fVar1;
      param_1 = fVar1;
    }
    if (*(char *)(param_2 + 0x24) == '\x01') {
      param_1 = param_1 / fVar1;
    }
    else {
      param_1 = 1.0 - param_1 / fVar1;
    }
    *(float *)(param_2 + 0x38) = param_1;
  }
  return;
}

