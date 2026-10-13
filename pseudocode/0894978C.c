/* Entry 0x0894978C | file offset 0x00146764 | FUN_0894978c | bytes 436 */

void FUN_0894978c(float param_1,float *param_2,int param_3,float *param_4)

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
  
  fVar8 = param_1 * param_1;
  fVar9 = param_4[9];
  fVar10 = *(float *)(param_3 + 0x30);
  fVar1 = param_4[5];
  fVar2 = param_4[10];
  fVar5 = param_4[1];
  fVar4 = *(float *)(param_3 + 0x34);
  fVar6 = param_4[6];
  fVar7 = param_4[2];
  fVar3 = *(float *)(param_3 + 0x38);
  *(float *)(param_3 + 0x10) =
       *param_2 +
       ((fVar10 * 0.5 * fVar8 + *(float *)(param_3 + 0x20) * param_1 + *(float *)(param_3 + 0x10)) -
       (param_4[8] * 0.5 * fVar8 + param_4[4] * param_1 + *param_4));
  *(float *)(param_3 + 0x14) =
       param_2[1] +
       ((fVar4 * 0.5 * fVar8 + *(float *)(param_3 + 0x24) * param_1 + *(float *)(param_3 + 0x14)) -
       (fVar9 * 0.5 * fVar8 + fVar1 * param_1 + fVar5));
  *(float *)(param_3 + 0x18) =
       param_2[2] +
       ((fVar3 * 0.5 * fVar8 + *(float *)(param_3 + 0x28) * param_1 + *(float *)(param_3 + 0x18)) -
       (fVar2 * 0.5 * fVar8 + fVar6 * param_1 + fVar7));
  fVar6 = param_4[9];
  fVar1 = param_4[5];
  fVar2 = param_4[10];
  fVar5 = param_4[6];
  *(float *)(param_3 + 0x20) =
       param_2[4] +
       ((fVar10 * param_1 + *(float *)(param_3 + 0x20)) - (param_4[8] * param_1 + param_4[4]));
  *(float *)(param_3 + 0x24) =
       param_2[5] + ((fVar4 * param_1 + *(float *)(param_3 + 0x24)) - (fVar6 * param_1 + fVar1));
  *(float *)(param_3 + 0x28) =
       param_2[6] + ((fVar3 * param_1 + *(float *)(param_3 + 0x28)) - (fVar2 * param_1 + fVar5));
  *(float *)(param_3 + 0x30) = param_2[8] + (fVar10 - param_4[8]);
  *(float *)(param_3 + 0x34) = param_2[9] + (fVar4 - param_4[9]);
  *(float *)(param_3 + 0x38) = param_2[10] + (fVar3 - param_4[10]);
  return;
}

