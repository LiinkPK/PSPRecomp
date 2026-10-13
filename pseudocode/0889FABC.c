/* Entry 0x0889FABC | file offset 0x0009CA94 | FUN_0889fabc | bytes 224 */

undefined4 FUN_0889fabc(int *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = 0;
  if (*param_1 != -1) {
    fVar3 = (float)param_1[4];
    fVar2 = (float)param_1[2];
    if (0.0 < fVar3) {
      fVar2 = fVar2 + fVar3 * *(float *)(DAT_089d69e0 + 0x18);
      param_1[2] = (int)fVar2;
      if ((float)param_1[3] <= fVar2) {
        param_1[2] = param_1[3];
        param_1[4] = 0;
        uVar1 = 1;
        fVar2 = (float)param_1[2];
      }
    }
    else if (fVar3 < 0.0) {
      fVar2 = fVar2 + fVar3 * *(float *)(DAT_089d69e0 + 0x18);
      param_1[2] = (int)fVar2;
      if (fVar2 <= (float)param_1[3]) {
        param_1[2] = param_1[3];
        param_1[4] = 0;
        uVar1 = 1;
        fVar2 = (float)param_1[2];
      }
    }
    FUN_088a14d0(fVar2,DAT_089d6c88,*param_1,param_1[1],0);
  }
  return uVar1;
}

