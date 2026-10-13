/* Entry 0x0889E2FC | file offset 0x0009B2D4 | FUN_0889e2fc | bytes 324 */

float FUN_0889e2fc(float param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float in_f1;
  float extraout_f1;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = (float *)(param_2 + param_3 * 4);
  fVar3 = *pfVar2;
  fVar1 = 0.0;
  if (param_4 != 0) {
    fVar4 = (pfVar2 + param_4)[1];
    fVar6 = pfVar2[param_4] - fVar3;
    fVar5 = fVar4 - pfVar2[1];
    fVar1 = 0.0;
    if (in_f1 < fVar6) {
      fVar1 = (float)FUN_0889e2fc(param_2,param_3,param_4 + -1);
      fVar1 = ((param_1 - fVar3) * fVar1) / fVar6 + 0.0;
      in_f1 = extraout_f1;
    }
    if (in_f1 < fVar5) {
      fVar3 = (float)FUN_0889e2fc();
      fVar1 = fVar1 + ((fVar4 - param_1) * fVar3) / fVar5;
    }
    return fVar1;
  }
  if ((fVar3 <= param_1) && (param_1 < pfVar2[1])) {
    fVar1 = 1.0;
  }
  return fVar1;
}

