/* Entry 0x0896E9B0 | file offset 0x0016B988 | FUN_0896e9b0 | bytes 1004 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc8ec. Boundary still requires runtime validation. */

void FUN_0896e9b0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(ushort *)(*(int *)(param_2 + 0x8c) + 2) & 2) == 0) {
    iVar2 = *(int *)(param_2 + 0x8c) +
            (uint)*(ushort *)
                   (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                   *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
    iVar4 = 0;
    do {
      if (*(char *)(param_3 + (uint)(byte)(&DAT_089da110)[iVar4]) != '\0') {
        pfVar5 = (float *)(param_3 + (uint)(byte)(&DAT_089da116)[iVar4]);
        fVar7 = *pfVar5;
        fVar10 = pfVar5[1];
        fVar8 = pfVar5[2];
        bVar1 = *(byte *)(param_3 + (uint)(byte)(&DAT_089da113)[iVar4]);
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        uVar6 = DAT_089da120 >> 0x10;
        if (bVar1 < 2) {
          if (bVar1 == 0) {
LAB_0896eac0:
            fVar7 = ((float)(uVar6 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7;
            fVar9 = fVar7;
            fVar11 = fVar7;
            if (*(char *)(param_3 + 0xc) != '\0') {
              iVar3 = DAT_089da120 * 0x343fd + 0x269ec3;
              DAT_089da120 = iVar3 * 0x343fd + 0x269ec3;
              fVar9 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8;
              fVar11 = ((float)(iVar3 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar10 - fVar10;
            }
          }
          else {
            fVar7 = fVar7 * 0.5;
            fVar7 = (((float)(uVar6 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7) + fVar7;
            fVar9 = fVar7;
            fVar11 = fVar7;
            if (*(char *)(param_3 + 0xc) != '\0') {
              iVar3 = DAT_089da120 * 0x343fd + 0x269ec3;
              DAT_089da120 = iVar3 * 0x343fd + 0x269ec3;
              fVar10 = fVar10 * 0.5;
              fVar8 = fVar8 * 0.5;
              fVar9 = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8) +
                      fVar8;
              fVar11 = (((float)(iVar3 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar10 - fVar10) +
                       fVar10;
            }
          }
        }
        else {
          if (2 < bVar1) goto LAB_0896eac0;
          fVar7 = fVar7 * 0.5;
          fVar7 = (((float)(uVar6 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7) - fVar7;
          fVar9 = fVar7;
          fVar11 = fVar7;
          if (*(char *)(param_3 + 0xc) != '\0') {
            iVar3 = DAT_089da120 * 0x343fd + 0x269ec3;
            DAT_089da120 = iVar3 * 0x343fd + 0x269ec3;
            fVar10 = fVar10 * 0.5;
            fVar8 = fVar8 * 0.5;
            fVar9 = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8) -
                    fVar8;
            fVar11 = (((float)(iVar3 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar10 - fVar10) - fVar10;
          }
        }
        if (iVar4 < 1) {
          if (-1 < iVar4) {
            fVar7 = *(float *)(iVar2 + 0x70) + fVar7;
            fVar11 = *(float *)(iVar2 + 0x74) + fVar11;
            fVar9 = *(float *)(iVar2 + 0x78) + fVar9;
            *(float *)(iVar2 + 0x70) = fVar7;
            *(float *)(iVar2 + 0x74) = fVar11;
            *(float *)(iVar2 + 0x78) = fVar9;
            *(float *)(iVar2 + 0x60) = fVar7 * 0.01;
            *(float *)(iVar2 + 100) = fVar11 * 0.01;
            *(float *)(iVar2 + 0x68) = fVar9 * 0.01;
          }
        }
        else if (iVar4 < 2) {
          *(float *)(iVar2 + 0x80) = *(float *)(iVar2 + 0x80) + fVar7;
          *(float *)(iVar2 + 0x84) = *(float *)(iVar2 + 0x84) + fVar11;
          *(float *)(iVar2 + 0x88) = *(float *)(iVar2 + 0x88) + fVar9;
        }
        else if (iVar4 < 3) {
          *(float *)(iVar2 + 0x90) = *(float *)(iVar2 + 0x90) + fVar7;
          *(float *)(iVar2 + 0x94) = *(float *)(iVar2 + 0x94) + fVar11;
          *(float *)(iVar2 + 0x98) = *(float *)(iVar2 + 0x98) + fVar9;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  return;
}

