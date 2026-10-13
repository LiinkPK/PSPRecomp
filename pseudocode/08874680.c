/* Entry 0x08874680 | file offset 0x00071658 | FUN_08874680 | bytes 436 */

void FUN_08874680(float *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = (float)FUN_089a47a4((param_1[4] * 3.1415927) / param_1[5]);
  fVar4 = param_1[4];
  uVar5 = (uint)fVar4;
  if ((int)uVar5 < 0) {
    fVar6 = (float)(&DAT_09b48258)[-(-uVar5 & 0x3f)];
  }
  else {
    fVar6 = (float)(&DAT_09b48258)[uVar5 & 0x3f];
  }
  uVar1 = uVar5 + 1;
  if ((int)uVar1 < 0) {
    fVar7 = (float)(&DAT_09b48258)[-(-uVar1 & 0x3f)];
  }
  else {
    fVar7 = (float)(&DAT_09b48258)[uVar1 & 0x3f];
  }
  uVar1 = uVar5 + 0x10;
  if ((int)uVar1 < 0) {
    fVar3 = (float)(&DAT_09b48258)[-(-uVar1 & 0x3f)];
  }
  else {
    fVar3 = (float)(&DAT_09b48258)[uVar1 & 0x3f];
  }
  uVar1 = uVar5 + 0x11;
  if ((int)uVar1 < 0) {
    fVar8 = (float)(&DAT_09b48258)[-(-uVar1 & 0x3f)];
  }
  else {
    fVar8 = (float)(&DAT_09b48258)[uVar1 & 0x3f];
  }
  *param_1 = ((fVar7 - fVar6) * (fVar4 - (float)(int)uVar5) + fVar6) * param_1[2] * fVar2;
  param_1[1] = ((fVar8 - fVar3) * (fVar4 - (float)(int)uVar5) + fVar3) * param_1[3] * fVar2;
  fVar2 = DAT_089d5eac;
  if (*(char *)((int)param_1 + 0x1d) != '\x01') {
    fVar2 = *(float *)(DAT_089d69e0 + 0x18);
  }
  param_1[4] = fVar4 + fVar2;
  if (param_1[5] <= fVar4 + fVar2) {
    param_1[6] = 2.8026e-45;
  }
  return;
}

