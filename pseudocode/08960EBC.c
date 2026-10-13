/* Entry 0x08960EBC | file offset 0x0015DE94 | FUN_08960ebc | bytes 800 */

void FUN_08960ebc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar2 = param_1[2];
  iVar4 = param_1[1];
  pfVar9 = (float *)*param_1;
  iVar8 = iVar4 + -1;
  iVar3 = *(int *)(param_2 + 0xac);
  iVar6 = 0;
  iVar1 = *(int *)(iVar3 + 0x14);
  fVar21 = 0.0;
  fVar16 = (float)*(int *)(iVar3 + 0x18) / (float)(iVar2 + -1);
  if (0 < iVar2) {
    do {
      iVar11 = 0;
      fVar20 = 0.0;
      if (0 < iVar4) {
        do {
          *pfVar9 = fVar20;
          pfVar9[1] = fVar21;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9[4] = 0.0;
          pfVar9[5] = 0.0;
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          iVar11 = iVar11 + 1;
          pfVar9[6] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * 360.0 - 360.0;
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          fVar20 = (float)iVar1 / (float)iVar8 + fVar20;
          pfVar9[7] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * 360.0 - 360.0;
          iVar4 = param_1[1];
          pfVar9 = pfVar9 + 8;
        } while (iVar11 < iVar4);
        iVar2 = param_1[2];
      }
      iVar6 = iVar6 + 1;
      fVar21 = fVar16 + fVar21;
    } while (iVar6 < iVar2);
    iVar1 = *(int *)(iVar3 + 0x14);
    pfVar9 = (float *)*param_1;
  }
  iVar6 = 0;
  pfVar7 = pfVar9 + iVar4 * 8 + -8;
  if (0 < iVar2) {
    do {
      *pfVar7 = (float)iVar1;
      iVar4 = param_1[1];
      iVar2 = param_1[2];
      pfVar7 = pfVar7 + iVar4 * 8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
    pfVar9 = (float *)*param_1;
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  iVar1 = iVar2 + -1;
  iVar6 = 0;
  pfVar9 = pfVar9 + iVar4 * iVar1 * 8;
  if (0 < iVar4) {
    do {
      pfVar9[1] = (float)iVar3;
      iVar6 = iVar6 + 1;
      pfVar9 = pfVar9 + 8;
    } while (iVar6 < param_1[1]);
    iVar2 = param_1[2];
    iVar1 = iVar2 + -1;
  }
  iVar6 = *(int *)(param_2 + 0xac);
  iVar4 = 0;
  iVar3 = param_1[3];
  piVar5 = param_1;
  do {
    iVar11 = *(int *)(iVar6 + 0x24);
    iVar8 = *(int *)(iVar6 + 0x28);
    pfVar9 = (float *)piVar5[4];
    iVar12 = *(int *)(iVar6 + 0x14);
    iVar13 = iVar3 + -1;
    iVar10 = 0;
    fVar18 = (float)iVar1;
    fVar21 = 0.0;
    fVar20 = 0.0;
    if (0 < iVar1) {
      do {
        fVar14 = 0.0;
        iVar1 = 0;
        fVar15 = 0.0;
        fVar17 = ((float)iVar8 / (float)iVar8) / fVar18 + fVar20;
        fVar19 = fVar16 + fVar21;
        if (0 < iVar3) {
          do {
            *pfVar9 = fVar15;
            pfVar9[1] = fVar20;
            pfVar9[2] = fVar14;
            pfVar9[3] = fVar21;
            pfVar9[4] = 0.0;
            pfVar9[5] = fVar15;
            pfVar9[6] = fVar17;
            pfVar9[7] = fVar14;
            fVar15 = ((float)iVar11 / (float)iVar11) / (float)iVar13 + fVar15;
            fVar14 = (float)iVar12 / (float)iVar13 + fVar14;
            pfVar9[8] = fVar19;
            pfVar9[9] = 0.0;
            iVar3 = param_1[3];
            iVar1 = iVar1 + 1;
            pfVar9 = pfVar9 + 10;
          } while (iVar1 < iVar3);
          iVar2 = param_1[2];
        }
        iVar10 = iVar10 + 1;
        iVar1 = iVar2 + -1;
        fVar21 = fVar19;
        fVar20 = fVar17;
      } while (iVar10 < iVar1);
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 2);
  return;
}

