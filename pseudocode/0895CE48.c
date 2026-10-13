/* Entry 0x0895CE48 | file offset 0x00159E20 | FUN_0895ce48 | bytes 628 */

void FUN_0895ce48(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (*(char *)(param_4 + 0x4c) == '\0') {
    if (*(char *)(param_4 + 0x4d) != '\0') {
      pfVar4 = (float *)(param_3 + 0x2c);
      pfVar6 = (float *)(param_3 + 0x30);
      fVar12 = param_1 * 0.5 * param_1;
      fVar14 = *pfVar6;
      fVar11 = *pfVar4;
      *pfVar4 = *(float *)(param_4 + 0x1c) +
                ((fVar14 * param_2 + fVar11) -
                (*(float *)(param_5 + 0x2c) * param_2 + *(float *)(param_5 + 0x1c)));
      fVar13 = *(float *)(param_4 + 0x2c) + (*pfVar6 - *(float *)(param_5 + 0x2c));
      *pfVar6 = fVar13;
      *(float *)(param_3 + 0x28) =
           (fVar14 * param_2 * 0.5 * param_2 + fVar11 * param_2 + *(float *)(param_3 + 0x28)) -
           (fVar13 * fVar12 + *pfVar4 * param_1);
      *(float *)(param_3 + 0x24) =
           *(float *)(param_4 + 0x2c) * fVar12 + *(float *)(param_4 + 0x1c) * param_1 +
           *(float *)(param_3 + 0x28);
    }
  }
  else {
    pfVar7 = (float *)(param_4 + 0x10);
    pfVar8 = (float *)(param_4 + 0x20);
    pfVar9 = (float *)(param_5 + 0x10);
    pfVar2 = (float *)(param_3 + 0xc);
    pfVar3 = (float *)(param_3 + 0x14);
    pfVar5 = (float *)(param_3 + 0x1c);
    pfVar1 = (float *)(param_5 + 0x20);
    fVar12 = param_1 * 0.5 * param_1;
    uVar10 = 0;
    pfVar4 = pfVar7;
    pfVar6 = pfVar8;
    do {
      fVar15 = *pfVar5;
      fVar13 = *pfVar3;
      fVar11 = *pfVar2;
      *pfVar3 = *pfVar4 + ((fVar15 * param_2 + fVar13) - (*pfVar1 * param_2 + *pfVar9));
      uVar10 = uVar10 + 1;
      fVar14 = *pfVar6 + (*pfVar5 - *pfVar1);
      pfVar9 = pfVar9 + 1;
      pfVar1 = pfVar1 + 1;
      *pfVar5 = fVar14;
      fVar16 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
      *pfVar2 = (fVar15 * param_2 * 0.5 * param_2 + fVar13 * param_2 + fVar11) -
                (fVar14 * fVar12 + fVar16 * param_1);
      pfVar2 = pfVar2 + 1;
    } while (uVar10 < 2);
    uVar10 = 0;
    do {
      fVar11 = *pfVar8;
      fVar13 = *pfVar7;
      uVar10 = uVar10 + 1;
      pfVar8 = pfVar8 + 1;
      pfVar7 = pfVar7 + 1;
      *(float *)(param_3 + 4) = fVar11 * fVar12 + fVar13 * param_1 + *(float *)(param_3 + 0xc);
      param_3 = param_3 + 4;
    } while (uVar10 < 2);
  }
  FUN_0895cb28();
  return;
}

