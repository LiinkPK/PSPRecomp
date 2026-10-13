/* Entry 0x0895AD5C | file offset 0x00157D34 | FUN_0895ad5c | bytes 488 */

void FUN_0895ad5c(float param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar11 = param_1 * 0.5 * param_1;
  pfVar10 = (float *)(param_2 + 0x10);
  pfVar9 = (float *)(param_2 + 0x20);
  pfVar8 = (float *)(param_2 + 0x30);
  pfVar7 = param_4 + 8;
  pfVar1 = param_4 + 4;
  pfVar6 = param_3 + 4;
  pfVar5 = param_3 + 8;
  iVar4 = 0;
  pfVar2 = param_4;
  pfVar3 = param_3;
  do {
    *pfVar10 = *pfVar3 + ((*pfVar8 * fVar11 + *pfVar9 * param_1 + *pfVar10) -
                         (*pfVar7 * fVar11 + *pfVar1 * param_1 + *pfVar2));
    fVar12 = *pfVar1;
    fVar13 = *pfVar6;
    iVar4 = iVar4 + 1;
    pfVar10 = pfVar10 + 1;
    pfVar2 = pfVar2 + 1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
    *pfVar9 = fVar13 + ((*pfVar8 * param_1 + *pfVar9) - (*pfVar7 * param_1 + fVar12));
    fVar13 = *pfVar7;
    fVar12 = *pfVar5;
    pfVar9 = pfVar9 + 1;
    pfVar7 = pfVar7 + 1;
    pfVar5 = pfVar5 + 1;
    *pfVar8 = fVar12 + (*pfVar8 - fVar13);
    pfVar8 = pfVar8 + 1;
  } while (iVar4 < 3);
  pfVar6 = param_4 + 0xb;
  pfVar7 = param_4 + 3;
  param_4 = param_4 + 7;
  pfVar3 = (float *)(param_2 + 0x44);
  pfVar2 = (float *)(param_2 + 0x48);
  pfVar8 = (float *)(param_2 + 0x4c);
  pfVar5 = param_3 + 3;
  pfVar1 = param_3 + 7;
  param_3 = param_3 + 0xb;
  iVar4 = 0;
  do {
    *pfVar3 = *pfVar5 + ((*pfVar8 * fVar11 + *pfVar2 * param_1 + *pfVar3) -
                        (*pfVar6 * fVar11 + *param_4 * param_1 + *pfVar7));
    fVar12 = *param_4;
    fVar13 = *pfVar1;
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar7 = pfVar7 + 1;
    param_4 = param_4 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar1 = pfVar1 + 1;
    *pfVar2 = fVar13 + ((*pfVar8 * param_1 + *pfVar2) - (*pfVar6 * param_1 + fVar12));
    fVar13 = *pfVar6;
    fVar12 = *param_3;
    pfVar2 = pfVar2 + 1;
    pfVar6 = pfVar6 + 1;
    param_3 = param_3 + 1;
    *pfVar8 = fVar12 + (*pfVar8 - fVar13);
    pfVar8 = pfVar8 + 1;
  } while (iVar4 < 1);
  return;
}

