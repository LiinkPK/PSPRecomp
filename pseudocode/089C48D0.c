/* Entry 0x089C48D0 | file offset 0x001C18A8 | FUN_089c48d0 | bytes 620 */

void FUN_089c48d0(float param_1,float param_2,float *param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar3 = (float *)(param_4 + 2);
  fVar12 = param_1 * 0.5 * param_1;
  param_4[2] = (int)(*(float *)(*param_4 + 0x30) + *(float *)param_4[1]);
  param_4[3] = (int)(*(float *)(*param_4 + 0x34) + *(float *)(param_4[1] + 4));
  param_4[2] = (int)(*(float *)(*param_4 + 0x38) + *(float *)(param_4[1] + 8));
  iVar6 = *param_4;
  param_4[3] = (int)(*(float *)(*param_4 + 0x3c) + *(float *)(param_4[1] + 0xc));
  param_5[2] = (int)(*(float *)(*param_5 + 0x30) + *(float *)param_5[1]);
  param_5[3] = (int)(*(float *)(*param_5 + 0x34) + *(float *)(param_5[1] + 4));
  param_5[2] = (int)(*(float *)(*param_5 + 0x38) + *(float *)(param_5[1] + 8));
  pfVar10 = param_3 + 2;
  pfVar2 = param_3 + 4;
  pfVar1 = param_3 + 6;
  pfVar7 = (float *)(iVar6 + 0x40);
  pfVar9 = (float *)(param_5 + 2);
  pfVar8 = (float *)(*param_5 + 0x40);
  uVar4 = 0;
  param_5[3] = (int)(*(float *)(*param_5 + 0x3c) + *(float *)(param_5[1] + 0xc));
  pfVar5 = pfVar3;
  do {
    fVar15 = *pfVar1;
    fVar13 = *pfVar2;
    fVar11 = *pfVar10;
    *pfVar2 = *pfVar5 + ((fVar15 * param_2 + fVar13) - (*pfVar8 * param_2 + *pfVar9));
    uVar4 = uVar4 + 1;
    fVar14 = *pfVar7 + (*pfVar1 - *pfVar8);
    pfVar9 = pfVar9 + 1;
    pfVar8 = pfVar8 + 1;
    *pfVar1 = fVar14;
    fVar16 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar1 = pfVar1 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar7 = pfVar7 + 1;
    *pfVar10 = (fVar15 * param_2 * 0.5 * param_2 + fVar13 * param_2 + fVar11) -
               (fVar14 * fVar12 + fVar16 * param_1);
    pfVar10 = pfVar10 + 1;
  } while (uVar4 < 2);
  param_4[2] = (int)(*(float *)(*param_4 + 0x38) + *(float *)(param_4[1] + 8));
  pfVar5 = (float *)(*param_4 + 0x40);
  uVar4 = 0;
  param_4[3] = (int)(*(float *)(*param_4 + 0x3c) + *(float *)(param_4[1] + 0xc));
  do {
    fVar11 = *pfVar5;
    fVar13 = *pfVar3;
    uVar4 = uVar4 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar3 + 1;
    *param_3 = fVar11 * fVar12 + fVar13 * param_1 + param_3[2];
    param_3 = param_3 + 1;
  } while (uVar4 < 2);
  return;
}

