/* Entry 0x089C45C8 | file offset 0x001C15A0 | FUN_089c45c8 | bytes 508 */

void FUN_089c45c8(float param_1,int param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  param_3[2] = (int)(*(float *)(*param_3 + 0x30) + *(float *)param_3[1]);
  param_3[3] = (int)(*(float *)(*param_3 + 0x34) + *(float *)(param_3[1] + 4));
  param_3[2] = (int)(*(float *)(*param_3 + 0x38) + *(float *)(param_3[1] + 8));
  iVar5 = *param_3;
  pfVar2 = (float *)(param_2 + 8);
  pfVar1 = (float *)(param_2 + 0x10);
  pfVar10 = (float *)(param_2 + 0x18);
  param_3[3] = (int)(*(float *)(*param_3 + 0x3c) + *(float *)(param_3[1] + 0xc));
  param_4[2] = (int)(*(float *)(*param_4 + 0x30) + *(float *)param_4[1]);
  pfVar11 = (float *)(iVar5 + 0x40);
  param_4[3] = (int)(*(float *)(*param_4 + 0x34) + *(float *)(param_4[1] + 4));
  param_4[2] = (int)(*(float *)(*param_4 + 0x38) + *(float *)(param_4[1] + 8));
  pfVar8 = (float *)(param_4 + 2);
  pfVar4 = (float *)(param_3 + 2);
  pfVar7 = (float *)(*param_4 + 0x40);
  param_4[3] = (int)(*(float *)(*param_4 + 0x3c) + *(float *)(param_4[1] + 0xc));
  fVar12 = param_1 * 0.5 * param_1;
  uVar3 = 0;
  pfVar6 = pfVar4;
  pfVar9 = pfVar8;
  do {
    *pfVar2 = *pfVar6 + ((*pfVar10 * fVar12 + *pfVar1 * param_1 + *pfVar2) -
                        (*pfVar7 * fVar12 + *pfVar8 * param_1 + *pfVar9));
    fVar13 = *pfVar8;
    fVar14 = *pfVar4;
    uVar3 = uVar3 + 1;
    pfVar2 = pfVar2 + 1;
    pfVar9 = pfVar9 + 1;
    pfVar8 = pfVar8 + 1;
    pfVar6 = pfVar6 + 1;
    pfVar4 = pfVar4 + 1;
    *pfVar1 = fVar14 + ((*pfVar10 * param_1 + *pfVar1) - (*pfVar7 * param_1 + fVar13));
    fVar14 = *pfVar7;
    fVar13 = *pfVar11;
    pfVar1 = pfVar1 + 1;
    pfVar7 = pfVar7 + 1;
    pfVar11 = pfVar11 + 1;
    *pfVar10 = fVar13 + (*pfVar10 - fVar14);
    pfVar10 = pfVar10 + 1;
  } while (uVar3 < 2);
  return;
}

