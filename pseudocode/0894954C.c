/* Entry 0x0894954C | file offset 0x00146524 | FUN_0894954c | bytes 576 */

void FUN_0894954c(float param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar11 = param_1 * param_1;
  fVar12 = param_4[9];
  fVar13 = param_4[5];
  fVar2 = *(float *)(param_3 + 0x30);
  fVar4 = param_4[10];
  fVar1 = param_4[1];
  fVar5 = param_4[6];
  fVar8 = *(float *)(param_3 + 0x34);
  fVar14 = param_4[0xb];
  fVar7 = param_4[2];
  fVar9 = param_4[7];
  fVar3 = param_4[3];
  fVar6 = *(float *)(param_3 + 0x38);
  fVar10 = *(float *)(param_3 + 0x3c);
  *(float *)(param_3 + 0x10) =
       *param_2 +
       ((fVar2 * 0.5 * fVar11 + *(float *)(param_3 + 0x20) * param_1 + *(float *)(param_3 + 0x10)) -
       (param_4[8] * 0.5 * fVar11 + param_4[4] * param_1 + *param_4));
  *(float *)(param_3 + 0x14) =
       param_2[1] +
       ((fVar8 * 0.5 * fVar11 + *(float *)(param_3 + 0x24) * param_1 + *(float *)(param_3 + 0x14)) -
       (fVar12 * 0.5 * fVar11 + fVar13 * param_1 + fVar1));
  *(float *)(param_3 + 0x18) =
       param_2[2] +
       ((fVar6 * 0.5 * fVar11 + *(float *)(param_3 + 0x28) * param_1 + *(float *)(param_3 + 0x18)) -
       (fVar4 * 0.5 * fVar11 + fVar5 * param_1 + fVar7));
  *(float *)(param_3 + 0x1c) =
       param_2[3] +
       ((fVar10 * 0.5 * fVar11 + *(float *)(param_3 + 0x2c) * param_1 + *(float *)(param_3 + 0x1c))
       - (fVar14 * 0.5 * fVar11 + fVar9 * param_1 + fVar3));
  fVar5 = param_4[9];
  fVar9 = param_4[5];
  fVar7 = param_4[10];
  fVar3 = param_4[6];
  fVar1 = param_4[0xb];
  fVar4 = param_4[7];
  *(float *)(param_3 + 0x20) =
       param_2[4] +
       ((fVar2 * param_1 + *(float *)(param_3 + 0x20)) - (param_4[8] * param_1 + param_4[4]));
  *(float *)(param_3 + 0x24) =
       param_2[5] + ((fVar8 * param_1 + *(float *)(param_3 + 0x24)) - (fVar5 * param_1 + fVar9));
  *(float *)(param_3 + 0x28) =
       param_2[6] + ((fVar6 * param_1 + *(float *)(param_3 + 0x28)) - (fVar7 * param_1 + fVar3));
  *(float *)(param_3 + 0x2c) =
       param_2[7] + ((fVar10 * param_1 + *(float *)(param_3 + 0x2c)) - (fVar1 * param_1 + fVar4));
  *(float *)(param_3 + 0x30) = param_2[8] + (fVar2 - param_4[8]);
  *(float *)(param_3 + 0x34) = param_2[9] + (fVar8 - param_4[9]);
  *(float *)(param_3 + 0x38) = param_2[10] + (fVar6 - param_4[10]);
  *(float *)(param_3 + 0x3c) = param_2[0xb] + (fVar10 - param_4[0xb]);
  return;
}

