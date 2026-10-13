/* Entry 0x089925FC | file offset 0x0018F5D4 | FUN_089925fc | bytes 212 */

undefined4 FUN_089925fc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 4) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x28);
    if (100 < param_2) {
      param_2 = 100;
    }
    if (param_3 < 1) {
      param_3 = 1;
    }
    fVar4 = (float)param_2 / 100.0;
    if (fVar4 == fVar3) {
      uVar1 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x2c) & 0xfffffff3;
      if (fVar4 < fVar3) {
        *(uint *)(param_1 + 0x2c) = uVar2 | 8;
        uVar2 = uVar2 | 0x48;
        *(float *)(param_1 + 0x24) = (fVar3 - fVar4) / (float)param_3;
      }
      else {
        *(uint *)(param_1 + 0x2c) = uVar2 | 4;
        uVar2 = uVar2 | 0x44;
        *(float *)(param_1 + 0x24) = (fVar4 - fVar3) / (float)param_3;
      }
      *(uint *)(param_1 + 0x2c) = uVar2;
      *(float *)(param_1 + 0x20) = fVar3;
      *(float *)(param_1 + 0x28) = fVar4;
      uVar1 = 0;
    }
  }
  return uVar1;
}

