/* Entry 0x0895ACA4 | file offset 0x00157C7C | FUN_0895aca4 | bytes 184 */

void FUN_0895aca4(float param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = param_1 * 0.5 * param_1;
  pfVar5 = param_2 + 4;
  pfVar4 = (float *)(param_3 + 0x10);
  pfVar3 = (float *)(param_3 + 0x20);
  iVar2 = 0;
  pfVar1 = param_2;
  do {
    fVar8 = *pfVar3;
    fVar7 = *pfVar4;
    fVar9 = *pfVar5;
    iVar2 = iVar2 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
    *pfVar1 = fVar8 * fVar6 + fVar7 * param_1 + fVar9;
    pfVar1 = pfVar1 + 1;
  } while (iVar2 < 3);
  pfVar4 = param_2 + 0x10;
  param_2 = param_2 + 0x11;
  pfVar3 = (float *)(param_3 + 0x1c);
  pfVar1 = (float *)(param_3 + 0x2c);
  iVar2 = 0;
  do {
    fVar8 = *pfVar1;
    fVar7 = *pfVar3;
    fVar9 = *param_2;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar1 = pfVar1 + 1;
    *pfVar4 = fVar8 * fVar6 + fVar7 * param_1 + fVar9;
    pfVar4 = pfVar4 + 1;
  } while (iVar2 < 1);
  return;
}

