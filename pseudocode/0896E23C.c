/* Entry 0x0896E23C | file offset 0x0016B214 | FUN_0896e23c | bytes 900 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc7fc. Boundary still requires runtime validation. */

void FUN_0896e23c(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar4;
  
  if ((*(ushort *)(*(int *)(param_2 + 0x8c) + 2) & 2) == 0) {
    iVar2 = *(int *)(param_2 + 0x8c) +
            (uint)*(ushort *)
                   (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                   *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
    iVar5 = 0;
    do {
      if (*(char *)(param_3 + (uint)(byte)(&DAT_089da0f8)[iVar5]) != '\0') {
        pfVar6 = (float *)(param_3 + (uint)(byte)(&DAT_089da0fe)[iVar5]);
        fVar8 = *pfVar6;
        fVar9 = pfVar6[1];
        fVar7 = pfVar6[2];
        bVar1 = *(byte *)(param_3 + (uint)(byte)(&DAT_089da0fb)[iVar5]);
        iVar3 = DAT_089da120 * 0x343fd + 0x269ec3;
        uVar4 = iVar3 >> 0x10;
        if (bVar1 < 2) {
          if (bVar1 == 0) {
LAB_0896e3d8:
            iVar3 = iVar3 * 0x343fd + 0x269ec3;
            DAT_089da120 = iVar3 * 0x343fd + 0x269ec3;
            fVar8 = ((float)(uVar4 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8;
            fVar9 = ((float)(iVar3 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar9 - fVar9;
            fVar7 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7;
          }
          else {
            iVar3 = iVar3 * 0x343fd + 0x269ec3;
            DAT_089da120 = iVar3 * 0x343fd + 0x269ec3;
            fVar8 = fVar8 * 0.5;
            fVar9 = fVar9 * 0.5;
            fVar7 = fVar7 * 0.5;
            fVar8 = (((float)(uVar4 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8) + fVar8;
            fVar9 = (((float)(iVar3 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar9 - fVar9) + fVar9;
            fVar7 = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7) +
                    fVar7;
          }
        }
        else {
          if (2 < bVar1) goto LAB_0896e3d8;
          iVar3 = iVar3 * 0x343fd + 0x269ec3;
          DAT_089da120 = iVar3 * 0x343fd + 0x269ec3;
          fVar8 = fVar8 * 0.5;
          fVar9 = fVar9 * 0.5;
          fVar7 = fVar7 * 0.5;
          fVar8 = (((float)(uVar4 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8) - fVar8;
          fVar9 = (((float)(iVar3 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar9 - fVar9) - fVar9;
          fVar7 = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7) - fVar7
          ;
        }
        if (iVar5 < 1) {
          if (-1 < iVar5) {
            fVar8 = *(float *)(iVar2 + 0x70) + fVar8;
            fVar9 = *(float *)(iVar2 + 0x74) + fVar9;
            fVar7 = *(float *)(iVar2 + 0x78) + fVar7;
            *(float *)(iVar2 + 0x70) = fVar8;
            *(float *)(iVar2 + 0x60) = fVar8;
            *(float *)(iVar2 + 0x74) = fVar9;
            *(float *)(iVar2 + 100) = fVar9;
            *(float *)(iVar2 + 0x78) = fVar7;
            *(float *)(iVar2 + 0x68) = fVar7;
          }
        }
        else if (iVar5 < 2) {
          *(float *)(iVar2 + 0x80) = *(float *)(iVar2 + 0x80) + fVar8;
          *(float *)(iVar2 + 0x84) = *(float *)(iVar2 + 0x84) + fVar9;
          *(float *)(iVar2 + 0x88) = *(float *)(iVar2 + 0x88) + fVar7;
        }
        else if (iVar5 < 3) {
          *(float *)(iVar2 + 0x90) = *(float *)(iVar2 + 0x90) + fVar8;
          *(float *)(iVar2 + 0x94) = *(float *)(iVar2 + 0x94) + fVar9;
          *(float *)(iVar2 + 0x98) = *(float *)(iVar2 + 0x98) + fVar7;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  return;
}

