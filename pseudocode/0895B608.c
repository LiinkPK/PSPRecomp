/* Entry 0x0895B608 | file offset 0x001585E0 | FUN_0895b608 | bytes 260 */

void FUN_0895b608(float param_1,float param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar4 = param_3 + 3;
  pfVar1 = param_3 + 2;
  iVar3 = 0;
  pfVar6 = pfVar4;
  pfVar7 = pfVar4;
  pfVar2 = param_3;
  pfVar5 = param_4;
  do {
    param_5 = param_5 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar2 = pfVar2 + 1;
    fVar11 = *pfVar7;
    fVar9 = *pfVar1;
    fVar8 = *pfVar2;
    *pfVar1 = *pfVar5 + ((fVar11 * param_2 + fVar9) - (*pfVar6 * param_2 + *param_5));
    iVar3 = iVar3 + 1;
    fVar10 = *pfVar4 + (*pfVar7 - *pfVar6);
    pfVar6 = pfVar6 + 1;
    *pfVar7 = fVar10;
    fVar12 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar7 = pfVar7 + 1;
    pfVar4 = pfVar4 + 1;
    *pfVar2 = (fVar11 * param_2 * 0.5 * param_2 + fVar9 * param_2 + fVar8) -
              (fVar10 * param_1 * 0.5 * param_1 + fVar12 * param_1);
  } while (iVar3 < 1);
  FUN_0895b70c(param_3,param_4);
  return;
}

