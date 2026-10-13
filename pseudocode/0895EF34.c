/* Entry 0x0895EF34 | file offset 0x0015BF0C | FUN_0895ef34 | bytes 360 */

void FUN_0895ef34(float param_1,float param_2,int *param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar14 = param_1 * 0.5 * param_1;
  pfVar5 = (float *)(param_4 + 0x10);
  pfVar3 = (float *)(param_4 + 0x20);
  pfVar1 = (float *)(param_5 + 0x10);
  pfVar12 = (float *)(param_3 + 3);
  pfVar11 = (float *)(param_3 + 5);
  pfVar2 = (float *)(param_3 + 7);
  pfVar10 = (float *)(param_5 + 0x20);
  uVar7 = 0;
  pfVar8 = pfVar3;
  pfVar9 = pfVar5;
  do {
    fVar17 = *pfVar2;
    fVar15 = *pfVar11;
    fVar13 = *pfVar12;
    *pfVar11 = *pfVar9 + ((fVar17 * param_2 + fVar15) - (*pfVar10 * param_2 + *pfVar1));
    uVar7 = uVar7 + 1;
    fVar16 = *pfVar8 + (*pfVar2 - *pfVar10);
    pfVar1 = pfVar1 + 1;
    pfVar10 = pfVar10 + 1;
    *pfVar2 = fVar16;
    fVar18 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar2 = pfVar2 + 1;
    pfVar9 = pfVar9 + 1;
    pfVar8 = pfVar8 + 1;
    *pfVar12 = (fVar17 * param_2 * 0.5 * param_2 + fVar15 * param_2 + fVar13) -
               (fVar16 * fVar14 + fVar18 * param_1);
    pfVar12 = pfVar12 + 1;
  } while (uVar7 < 2);
  uVar7 = 0;
  iVar6 = *param_3;
  piVar4 = param_3;
  do {
    fVar13 = *pfVar3;
    fVar15 = *pfVar5;
    uVar7 = uVar7 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
    piVar4[1] = (int)(fVar13 * fVar14 + fVar15 * param_1 + (float)piVar4[3]);
    piVar4 = piVar4 + 1;
  } while (uVar7 < 2);
  (**(code **)(iVar6 + 0x14))((int)param_3 + (int)*(short *)(iVar6 + 0x10),param_4);
  return;
}

