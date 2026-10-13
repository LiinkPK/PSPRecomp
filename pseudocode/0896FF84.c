/* Entry 0x0896FF84 | file offset 0x0016CF5C | FUN_0896ff84 | bytes 420 */

void FUN_0896ff84(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_1 * *(float *)(DAT_09b6f470 + 0x17c) +
          param_1[1] * *(float *)(DAT_09b6f470 + 0x18c) +
          param_1[2] * *(float *)(DAT_09b6f470 + 0x19c) + *(float *)(DAT_09b6f470 + 0x1ac);
  if (fVar2 == 0.0) {
    fVar1 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar1 = ((*param_1 * *(float *)(DAT_09b6f470 + 0x170) +
              param_1[1] * *(float *)(DAT_09b6f470 + 0x180) +
              param_1[2] * *(float *)(DAT_09b6f470 + 400) + *(float *)(DAT_09b6f470 + 0x1a0)) /
            fVar2) * 480.0;
    fVar2 = ((*param_1 * *(float *)(DAT_09b6f470 + 0x174) +
              param_1[1] * *(float *)(DAT_09b6f470 + 0x184) +
              param_1[2] * *(float *)(DAT_09b6f470 + 0x194) + *(float *)(DAT_09b6f470 + 0x1a4)) /
            fVar2) * 272.0;
  }
  *param_2 = fVar1 * 0.5;
  param_2[1] = fVar2 * 0.5;
  return;
}

