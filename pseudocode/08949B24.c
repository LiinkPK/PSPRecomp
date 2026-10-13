/* Entry 0x08949B24 | file offset 0x00146AFC | FUN_08949b24 | bytes 368 */

void FUN_08949b24(float param_1,float param_2,int param_3,int param_4,int param_5)

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
  
  fVar9 = *(float *)(param_4 + 0x30);
  fVar8 = *(float *)(param_4 + 0x20);
  fVar11 = *(float *)(param_4 + 0x34);
  fVar14 = *(float *)(param_4 + 0x24);
  fVar2 = *(float *)(param_4 + 0x38);
  fVar1 = *(float *)(param_5 + 0x24);
  fVar3 = *(float *)(param_4 + 0x28);
  fVar5 = *(float *)(param_5 + 0x14);
  fVar4 = *(float *)(param_5 + 0x28);
  fVar7 = *(float *)(param_5 + 0x18);
  fVar10 = *(float *)(param_3 + 0x10) +
           ((fVar9 * param_2 + fVar8) -
           (*(float *)(param_5 + 0x20) * param_2 + *(float *)(param_5 + 0x10)));
  *(float *)(param_4 + 0x20) = fVar10;
  fVar6 = param_2 * param_2;
  fVar1 = *(float *)(param_3 + 0x14) + ((fVar11 * param_2 + fVar14) - (fVar1 * param_2 + fVar5));
  *(float *)(param_4 + 0x24) = fVar1;
  fVar13 = *(float *)(param_3 + 0x18) + ((fVar2 * param_2 + fVar3) - (fVar4 * param_2 + fVar7));
  *(float *)(param_4 + 0x28) = fVar13;
  fVar5 = *(float *)(param_5 + 0x24);
  fVar4 = *(float *)(param_5 + 0x28);
  fVar7 = *(float *)(param_3 + 0x20) + (fVar9 - *(float *)(param_5 + 0x20));
  *(float *)(param_4 + 0x30) = fVar7;
  fVar12 = *(float *)(param_3 + 0x24) + (fVar11 - fVar5);
  fVar5 = param_1 * param_1;
  *(float *)(param_4 + 0x34) = fVar12;
  fVar4 = *(float *)(param_3 + 0x28) + (fVar2 - fVar4);
  *(float *)(param_4 + 0x38) = fVar4;
  *(float *)(param_4 + 0x10) =
       (fVar9 * 0.5 * fVar6 + fVar8 * param_2 + *(float *)(param_4 + 0x10)) -
       (fVar7 * 0.5 * fVar5 + fVar10 * param_1);
  *(float *)(param_4 + 0x14) =
       (fVar11 * 0.5 * fVar6 + fVar14 * param_2 + *(float *)(param_4 + 0x14)) -
       (fVar12 * 0.5 * fVar5 + fVar1 * param_1);
  *(float *)(param_4 + 0x18) =
       (fVar2 * 0.5 * fVar6 + fVar3 * param_2 + *(float *)(param_4 + 0x18)) -
       (fVar4 * 0.5 * fVar5 + fVar13 * param_1);
  return;
}

