/* Entry 0x08996958 | file offset 0x00193930 | FUN_08996958 | bytes 592 */

float FUN_08996958(float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = (uint)param_1 & 0x80000000;
  fVar7 = ABS(param_2);
  fVar9 = (float)((uint)param_1 ^ uVar3);
  if (((fVar7 == 0.0) || (0x7f7fffff < (int)fVar9)) || (0x7f800000 < (uint)fVar7)) {
    return (param_1 * param_2) / (param_1 * param_2);
  }
  if ((int)fVar7 <= (int)fVar9) {
    iVar2 = (int)param_1 >> 0x1f;
    if (fVar9 == fVar7) {
      return *(float *)(&DAT_089d107c + iVar2 * -4);
    }
    iVar4 = (int)param_1 << 8;
    if ((int)fVar9 < 0x800000) {
      iVar6 = -0x7e;
      for (; 0 < iVar4; iVar4 = iVar4 << 1) {
        iVar6 = iVar6 + -1;
      }
    }
    else {
      iVar6 = ((int)fVar9 >> 0x17) + -0x7f;
    }
    if ((uint)fVar7 < 0x800000) {
      iVar4 = -0x7e;
      for (iVar5 = (int)param_2 << 8; -1 < iVar5; iVar5 = iVar5 << 1) {
        iVar4 = iVar4 + -1;
      }
    }
    else {
      iVar4 = ((int)fVar7 >> 0x17) + -0x7f;
    }
    bVar1 = iVar4 < -0x7e;
    if (iVar6 < -0x7e) {
      uVar10 = (int)fVar9 << (-iVar6 - 0x7eU & 0x1f);
    }
    else {
      uVar10 = (uint)fVar9 & 0x7fffff | 0x800000;
    }
    if (bVar1) {
      uVar11 = (int)fVar7 << (-iVar4 - 0x7eU & 0x1f);
    }
    else {
      uVar11 = (uint)param_2 & 0x7fffff | 0x800000;
    }
    uVar8 = uVar10 - uVar11;
    iVar6 = iVar6 - iVar4;
    while (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      uVar10 = uVar10 * 2;
      if ((int)uVar8 < 0) {
        uVar8 = uVar10 - uVar11;
      }
      else {
        uVar10 = uVar8 * 2;
        if (uVar8 == 0) {
          return *(float *)(&DAT_089d107c + iVar2 * -4);
        }
        uVar8 = uVar10 - uVar11;
      }
    }
    if (-1 < (int)uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 == 0) {
      return *(float *)(&DAT_089d107c + iVar2 * -4);
    }
    if ((int)uVar10 < 0x800000) {
      do {
        uVar10 = uVar10 * 2;
        iVar4 = iVar4 + -1;
      } while ((int)uVar10 < 0x800000);
      bVar1 = iVar4 < -0x7e;
    }
    if (!bVar1) {
      return (float)(uVar10 - 0x800000 | (iVar4 + 0x7f) * 0x800000 | uVar3);
    }
    param_1 = (float)((int)uVar10 >> (-iVar4 - 0x7eU & 0x1f) | uVar3);
  }
  return param_1;
}

