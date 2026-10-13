/* Entry 0x08949940 | file offset 0x00146918 | FUN_08949940 | bytes 484 */

void FUN_08949940(float param_1,float param_2,int param_3,int param_4,int param_5)

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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar14 = *(float *)(param_4 + 0x30);
  fVar12 = *(float *)(param_5 + 0x24);
  fVar17 = *(float *)(param_5 + 0x14);
  fVar16 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_5 + 0x28);
  fVar4 = *(float *)(param_4 + 0x34);
  fVar1 = *(float *)(param_5 + 0x18);
  fVar3 = *(float *)(param_5 + 0x2c);
  fVar6 = *(float *)(param_5 + 0x1c);
  fVar5 = *(float *)(param_4 + 0x24);
  fVar8 = *(float *)(param_4 + 0x38);
  fVar7 = *(float *)(param_4 + 0x28);
  fVar9 = *(float *)(param_4 + 0x3c);
  fVar10 = *(float *)(param_4 + 0x2c);
  fVar11 = *(float *)(param_3 + 0x10) +
           ((fVar14 * param_2 + fVar16) -
           (*(float *)(param_5 + 0x20) * param_2 + *(float *)(param_5 + 0x10)));
  *(float *)(param_4 + 0x20) = fVar11;
  fVar13 = *(float *)(param_3 + 0x14) + ((fVar4 * param_2 + fVar5) - (fVar12 * param_2 + fVar17));
  fVar12 = param_2 * param_2;
  *(float *)(param_4 + 0x24) = fVar13;
  fVar18 = *(float *)(param_3 + 0x18) + ((fVar8 * param_2 + fVar7) - (fVar2 * param_2 + fVar1));
  *(float *)(param_4 + 0x28) = fVar18;
  fVar17 = *(float *)(param_3 + 0x1c) + ((fVar9 * param_2 + fVar10) - (fVar3 * param_2 + fVar6));
  *(float *)(param_4 + 0x2c) = fVar17;
  fVar2 = *(float *)(param_5 + 0x24);
  fVar15 = *(float *)(param_3 + 0x20) + (fVar14 - *(float *)(param_5 + 0x20));
  fVar1 = *(float *)(param_5 + 0x28);
  fVar3 = *(float *)(param_5 + 0x2c);
  *(float *)(param_4 + 0x30) = fVar15;
  fVar2 = *(float *)(param_3 + 0x24) + (fVar4 - fVar2);
  fVar6 = param_1 * param_1;
  *(float *)(param_4 + 0x34) = fVar2;
  fVar1 = *(float *)(param_3 + 0x28) + (fVar8 - fVar1);
  *(float *)(param_4 + 0x38) = fVar1;
  fVar3 = *(float *)(param_3 + 0x2c) + (fVar9 - fVar3);
  *(float *)(param_4 + 0x3c) = fVar3;
  *(float *)(param_4 + 0x10) =
       (fVar14 * 0.5 * fVar12 + fVar16 * param_2 + *(float *)(param_4 + 0x10)) -
       (fVar15 * 0.5 * fVar6 + fVar11 * param_1);
  *(float *)(param_4 + 0x14) =
       (fVar4 * 0.5 * fVar12 + fVar5 * param_2 + *(float *)(param_4 + 0x14)) -
       (fVar2 * 0.5 * fVar6 + fVar13 * param_1);
  *(float *)(param_4 + 0x18) =
       (fVar8 * 0.5 * fVar12 + fVar7 * param_2 + *(float *)(param_4 + 0x18)) -
       (fVar1 * 0.5 * fVar6 + fVar18 * param_1);
  *(float *)(param_4 + 0x1c) =
       (fVar9 * 0.5 * fVar12 + fVar10 * param_2 + *(float *)(param_4 + 0x1c)) -
       (fVar3 * 0.5 * fVar6 + fVar17 * param_1);
  return;
}

