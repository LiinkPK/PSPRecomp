/* Entry 0x0898E564 | file offset 0x0018B53C | FUN_0898e564 | bytes 552 */

void FUN_0898e564(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_0898e328();
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = (uint)*(ushort *)(param_2 + 0x8a);
  }
  *(uint *)(param_1 + 0x54) = uVar1;
  iVar2 = DAT_089da120 * 0x343fd + 0x269ec3;
  iVar3 = iVar2 * 0x343fd + 0x269ec3;
  iVar4 = iVar3 * 0x343fd + 0x269ec3;
  fVar9 = ((float)(iVar2 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
  fVar7 = ((float)(iVar3 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
  fVar8 = ((float)(iVar4 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
  fVar5 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  if (fVar5 == 0.0) {
    fVar9 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar5 = SQRT(fVar5);
    fVar9 = fVar9 / fVar5;
    fVar7 = fVar7 / fVar5;
    fVar8 = fVar8 / fVar5;
  }
  DAT_089da120 = iVar4 * 0x343fd + 0x269ec3;
  fVar6 = (*(float *)(param_2 + 0x60) + *(float *)(param_2 + 100)) *
          ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0);
  *(float *)(param_1 + 0x20) = fVar9 * fVar6;
  *(float *)(param_1 + 0x24) = fVar7 * fVar6;
  *(float *)(param_1 + 0x28) = fVar8 * fVar6;
  fVar11 = *(float *)(DAT_089da27c + 0x30);
  fVar5 = *(float *)(DAT_089da27c + 0x34);
  fVar10 = *(float *)(DAT_089da27c + 0x38);
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(float *)(param_1 + 0x20) = fVar9 * fVar6 + -fVar11;
  *(float *)(param_1 + 0x24) = fVar7 * fVar6 + -fVar5;
  *(float *)(param_1 + 0x28) = fVar8 * fVar6 + -fVar10;
  return;
}

