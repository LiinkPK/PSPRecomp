/* Entry 0x0895AF44 | file offset 0x00157F1C | FUN_0895af44 | bytes 448 */

void FUN_0895af44(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar10 = param_2 * 0.5 * param_2;
  fVar11 = param_1 * 0.5 * param_1;
  pfVar8 = (float *)(param_3 + 0x10);
  pfVar2 = (float *)(param_3 + 0x20);
  pfVar1 = (float *)(param_3 + 0x30);
  pfVar6 = (float *)(param_5 + 0x20);
  pfVar7 = (float *)(param_5 + 0x10);
  pfVar5 = (float *)(param_4 + 0x10);
  pfVar4 = (float *)(param_4 + 0x20);
  iVar3 = 0;
  do {
    fVar14 = *pfVar1;
    fVar12 = *pfVar2;
    fVar9 = *pfVar8;
    *pfVar2 = *pfVar5 + ((fVar14 * param_2 + fVar12) - (*pfVar6 * param_2 + *pfVar7));
    iVar3 = iVar3 + 1;
    fVar13 = *pfVar4 + (*pfVar1 - *pfVar6);
    pfVar7 = pfVar7 + 1;
    pfVar6 = pfVar6 + 1;
    *pfVar1 = fVar13;
    fVar15 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar1 = pfVar1 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
    *pfVar8 = (fVar14 * fVar10 + fVar12 * param_2 + fVar9) - (fVar13 * fVar11 + fVar15 * param_1);
    pfVar8 = pfVar8 + 1;
  } while (iVar3 < 3);
  pfVar6 = (float *)(param_5 + 0x2c);
  pfVar7 = (float *)(param_5 + 0x1c);
  pfVar2 = (float *)(param_3 + 0x44);
  pfVar1 = (float *)(param_3 + 0x48);
  pfVar8 = (float *)(param_3 + 0x4c);
  pfVar5 = (float *)(param_4 + 0x1c);
  pfVar4 = (float *)(param_4 + 0x2c);
  iVar3 = 0;
  do {
    fVar14 = *pfVar8;
    fVar12 = *pfVar1;
    fVar9 = *pfVar2;
    *pfVar1 = *pfVar5 + ((fVar14 * param_2 + fVar12) - (*pfVar6 * param_2 + *pfVar7));
    iVar3 = iVar3 + 1;
    fVar13 = *pfVar4 + (*pfVar8 - *pfVar6);
    pfVar7 = pfVar7 + 1;
    pfVar6 = pfVar6 + 1;
    *pfVar8 = fVar13;
    fVar15 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar8 = pfVar8 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
    *pfVar2 = (fVar14 * fVar10 + fVar12 * param_2 + fVar9) - (fVar13 * fVar11 + fVar15 * param_1);
    pfVar2 = pfVar2 + 1;
  } while (iVar3 < 1);
  FUN_0895aca4(param_3,param_4);
  return;
}

