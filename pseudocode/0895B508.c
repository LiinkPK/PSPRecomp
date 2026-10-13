/* Entry 0x0895B508 | file offset 0x001584E0 | FUN_0895b508 | bytes 256 */

void FUN_0895b508(float param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar10;
  
  pfVar3 = param_2 + 3;
  pfVar1 = param_2 + 2;
  fVar8 = param_1 * 0.5 * param_1;
  iVar2 = 0;
  pfVar5 = pfVar3;
  pfVar7 = pfVar3;
  pfVar4 = param_3;
  pfVar6 = param_4;
  do {
    pfVar6 = pfVar6 + 1;
    pfVar4 = pfVar4 + 1;
    param_2 = param_2 + 1;
    *param_2 = *param_3 +
               ((*pfVar7 * fVar8 + *pfVar1 * param_1 + *param_2) -
               (*pfVar5 * fVar8 + *pfVar6 * param_1 + *param_4));
    iVar2 = iVar2 + 1;
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    *pfVar1 = *pfVar4 + ((*pfVar7 * param_1 + *pfVar1) - (*pfVar5 * param_1 + *pfVar6));
    fVar10 = *pfVar5;
    fVar9 = *pfVar3;
    pfVar1 = pfVar1 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar3 + 1;
    *pfVar7 = fVar9 + (*pfVar7 - fVar10);
    pfVar7 = pfVar7 + 1;
  } while (iVar2 < 1);
  return;
}

