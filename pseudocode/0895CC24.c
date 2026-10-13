/* Entry 0x0895CC24 | file offset 0x00159BFC | FUN_0895cc24 | bytes 548 */

void FUN_0895cc24(float param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(char *)(param_3 + 0x13) == '\0') {
    if (*(char *)((int)param_3 + 0x4d) != '\0') {
      pfVar1 = (float *)(param_2 + 0x2c);
      pfVar8 = (float *)(param_2 + 0x30);
      fVar9 = param_1 * 0.5 * param_1;
      pfVar2 = param_4 + 0xb;
      *(float *)(param_2 + 0x28) =
           param_3[3] +
           ((*pfVar8 * fVar9 + *pfVar1 * param_1 + *(float *)(param_2 + 0x28)) -
           (*pfVar2 * fVar9 + param_4[7] * param_1 + param_4[3]));
      *pfVar1 = param_3[7] + ((*pfVar8 * param_1 + *pfVar1) - (*pfVar2 * param_1 + param_4[7]));
      *pfVar8 = param_3[0xb] + (*pfVar8 - *pfVar2);
    }
  }
  else {
    pfVar2 = (float *)(param_2 + 0xc);
    pfVar1 = (float *)(param_2 + 0x14);
    pfVar7 = (float *)(param_2 + 0x1c);
    pfVar4 = param_3 + 4;
    pfVar8 = param_3 + 8;
    fVar9 = param_1 * 0.5 * param_1;
    pfVar6 = param_4 + 4;
    pfVar5 = param_4 + 8;
    uVar3 = 0;
    do {
      *pfVar2 = *param_3 +
                ((*pfVar7 * fVar9 + *pfVar1 * param_1 + *pfVar2) -
                (*pfVar5 * fVar9 + *pfVar6 * param_1 + *param_4));
      fVar10 = *pfVar6;
      fVar11 = *pfVar4;
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 1;
      param_4 = param_4 + 1;
      pfVar6 = pfVar6 + 1;
      param_3 = param_3 + 1;
      pfVar4 = pfVar4 + 1;
      *pfVar1 = fVar11 + ((*pfVar7 * param_1 + *pfVar1) - (*pfVar5 * param_1 + fVar10));
      fVar11 = *pfVar5;
      fVar10 = *pfVar8;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
      pfVar8 = pfVar8 + 1;
      *pfVar7 = fVar10 + (*pfVar7 - fVar11);
      pfVar7 = pfVar7 + 1;
    } while (uVar3 < 2);
  }
  return;
}

