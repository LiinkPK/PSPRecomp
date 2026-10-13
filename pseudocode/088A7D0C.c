/* Entry 0x088A7D0C | file offset 0x000A4CE4 | FUN_088a7d0c | bytes 176 */

float FUN_088a7d0c(float param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0xec);
  if (fVar2 < 0.0) {
    if ((*(uint *)(param_2 + 0xdc) & 0x100) == 0) {
      if ((((*(uint *)(param_2 + 0xdc) & 1) == 0) || (iVar1 = *(int *)(param_2 + 0xd0), iVar1 == 0))
         || (fVar2 = (float)(**(code **)(*(int *)(iVar1 + 0x2c) + 0x3c))
                                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x2c) + 0x38)),
            fVar2 < 0.0)) {
        fVar2 = param_1;
      }
    }
    else {
      fVar2 = *(float *)(DAT_089d69e0 + 0x18);
    }
  }
  return fVar2;
}

