/* Entry 0x0885BC4C | file offset 0x00058C24 | FUN_0885bc4c | bytes 328 */

void FUN_0885bc4c(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = 1;
  fVar9 = *param_2;
  pfVar3 = param_2;
  pfVar4 = param_2;
  pfVar5 = param_2;
  pfVar6 = param_2;
  pfVar7 = param_2;
  pfVar1 = param_2;
  if (1 < param_3) {
    do {
      fVar8 = pfVar1[3];
      if (fVar8 < fVar9) {
        fVar9 = param_2[iVar2 * 3];
      }
      if (*pfVar7 < fVar8) {
        pfVar7 = param_2 + iVar2 * 3;
      }
      if (pfVar1[4] < pfVar6[1]) {
        pfVar6 = param_2 + iVar2 * 3;
      }
      if (pfVar5[1] < pfVar1[4]) {
        pfVar5 = param_2 + iVar2 * 3;
      }
      if (pfVar1[5] < pfVar4[2]) {
        pfVar4 = param_2 + iVar2 * 3;
      }
      if (pfVar3[2] < pfVar1[5]) {
        pfVar3 = param_2 + iVar2 * 3;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 3;
    } while (iVar2 < param_3);
  }
  *param_1 = fVar9;
  param_1[1] = pfVar6[1];
  param_1[2] = pfVar4[2];
  param_1[3] = *pfVar7;
  param_1[4] = pfVar5[1];
  param_1[5] = pfVar3[2];
  return;
}

