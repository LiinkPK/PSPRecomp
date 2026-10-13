/* Entry 0x088735E4 | file offset 0x000705BC | FUN_088735e4 | bytes 460 */

float FUN_088735e4(float *param_1,float *param_2)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float local_10 [4];
  
  pfVar2 = local_10;
  pfVar4 = param_1 + 3;
  fVar12 = 0.0;
  pfVar5 = param_2 + 3;
  bVar1 = true;
  iVar3 = 0;
  pfVar6 = pfVar5;
  pfVar8 = pfVar4;
  pfVar10 = param_2;
  pfVar11 = param_1;
  do {
    *pfVar2 = -1.0;
    fVar13 = *pfVar11;
    if (fVar13 < *pfVar10) {
      bVar1 = false;
      if (0.0 < *pfVar8) {
        *pfVar2 = (*pfVar10 - fVar13) / *pfVar8;
      }
    }
    else if (*pfVar6 < fVar13) {
      bVar1 = false;
      if (*pfVar8 < 0.0) {
        *pfVar2 = (*pfVar6 - fVar13) / *pfVar8;
      }
    }
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 1;
    pfVar11 = pfVar11 + 1;
    pfVar10 = pfVar10 + 1;
    pfVar8 = pfVar8 + 1;
    pfVar6 = pfVar6 + 1;
  } while (iVar3 < 3);
  if (!bVar1) {
    fVar12 = local_10[0];
    if (local_10[0] < local_10[1]) {
      fVar12 = local_10[1];
    }
    uVar9 = (uint)(local_10[0] < local_10[1]);
    if (fVar12 < local_10[2]) {
      uVar9 = 2;
      fVar12 = local_10[2];
    }
    if (fVar12 < 0.0) {
      fVar12 = 3.4028235e+38;
    }
    else {
      uVar7 = 0;
      do {
        if ((uVar7 != uVar9) &&
           ((fVar13 = *pfVar4 * fVar12 + *param_1, fVar13 < *param_2 || (*pfVar5 < fVar13)))) {
          return 3.4028235e+38;
        }
        uVar7 = uVar7 + 1;
        pfVar4 = pfVar4 + 1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        pfVar5 = pfVar5 + 1;
      } while ((int)uVar7 < 3);
    }
  }
  return fVar12;
}

