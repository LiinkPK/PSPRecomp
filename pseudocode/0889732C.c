/* Entry 0x0889732C | file offset 0x00094304 | FUN_0889732c | bytes 192 */

void FUN_0889732c(float param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(param_2 + 0x68) + param_3 * 0x2c;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (1.0 < param_1) {
    param_1 = 1.0;
    sVar1 = *(short *)(iVar2 + 0x2a);
  }
  else {
    sVar1 = *(short *)(iVar2 + 0x2a);
  }
  fVar3 = *(float *)(*(int *)(param_2 + 0x9c) + ((int)*(short *)(iVar2 + 0x28) + (int)sVar1) * 4 +
                    -4);
  param_1 = fVar3 * param_1;
  fVar3 = fVar3 - 0.001;
  if (param_1 < fVar3) {
    fVar3 = param_1;
  }
  FUN_0889e258(fVar3,*(int *)(param_2 + 0x9c) + *(short *)(iVar2 + 0x28) * 4,
               *(int *)(param_2 + 0x68) + param_3 * 0x2c,*(undefined4 *)(param_2 + 0x98),param_4);
  return;
}

