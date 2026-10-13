/* Entry 0x08970D9C | file offset 0x0016DD74 | FUN_08970d9c | bytes 332 */

void FUN_08970d9c(int param_1,int param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == (float *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    fVar1 = *(float *)(param_1 + 0xa0) + *(float *)(param_2 + 0x20);
    fVar2 = *(float *)(param_1 + 0xa4) + *(float *)(param_2 + 0x24);
    fVar3 = *(float *)(param_1 + 0xa8) + *(float *)(param_2 + 0x28);
  }
  else {
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x90) + *param_3;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x94) + fVar2;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x98) + fVar3;
    fVar1 = *(float *)(param_1 + 0xa0) + *(float *)(param_2 + 0x20);
    fVar2 = *(float *)(param_1 + 0xa4) + *(float *)(param_2 + 0x24);
    fVar3 = *(float *)(param_1 + 0xa8) + *(float *)(param_2 + 0x28);
  }
  *(float *)(param_1 + 0x20) = fVar1;
  *(float *)(param_1 + 0x24) = fVar2;
  *(float *)(param_1 + 0x28) = fVar3;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  fVar2 = *(float *)(param_2 + 0x34);
  fVar3 = *(float *)(param_2 + 0x38);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0xb0) * *(float *)(param_2 + 0x30);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0xb4) * fVar2;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0xb8) * fVar3;
  FUN_08935524(param_4,param_1 + 0x110,0x40);
  return;
}

