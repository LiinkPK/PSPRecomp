/* Entry 0x08976BE0 | file offset 0x00173BB8 | FUN_08976be0 | bytes 1356 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dcba4. Boundary still requires runtime validation. */

void FUN_08976be0(undefined4 param_1,uint *param_2,float *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  undefined1 (*pauVar12) [12];
  uint uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [12];
  float *pfVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((*param_2 & 1) == 0) {
    bVar7 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar7 = true;
    }
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) {
    fVar22 = param_3[3];
    uVar13 = ((int *)*param_4)[1];
    iVar8 = *(int *)*param_4;
    bVar1 = *(byte *)((int)param_3 + 0x2e);
    fVar19 = (float)param_4[1] + fVar22 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar19 < 1.0) {
      param_4[1] = (int)fVar19;
      uVar20 = 0;
    }
    else {
      uVar20 = (uint)fVar19;
      fVar21 = (float)(int)uVar20;
      if ((int)uVar20 < 0) {
        fVar21 = fVar21 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar19 - fVar21);
      param_4[1] = (int)((fVar19 - fVar21) - (float)bVar1 * fVar22);
    }
    if (uVar20 != 0) {
      fVar21 = param_3[0x10];
      fVar19 = param_3[0x11];
      fVar22 = param_3[0x12];
      uVar11 = 0;
      uVar14 = 0;
      if (uVar20 != 0) {
joined_r0x08976ce8:
        do {
          if (uVar14 < uVar13) {
            if (*(char *)(iVar8 + uVar14 * 0x40 + 0x3c) != '\0') {
              uVar14 = uVar14 + 1;
              goto joined_r0x08976ce8;
            }
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar16 = (float *)(iVar8 + uVar14 * 0x40);
            *pfVar16 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar21 * 0.5 -
                       fVar21 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar16[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar19 * 0.5 -
                         fVar19 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar17 = DAT_089da120 >> 0x10;
            pfVar16[3] = 1.0;
            pfVar16[2] = ((float)(uVar17 & 0x7fff) / 32767.0) * 2.0 * fVar22 * 0.5 - fVar22 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar16[4] = *param_3 +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[4] -
                         param_3[4]);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar16[5] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[5] -
                         param_3[5]) - param_3[1];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar17 = DAT_089da120 >> 0x10;
            fVar23 = param_3[6];
            fVar18 = param_3[2];
            pfVar16[7] = 1.0;
            pfVar16[6] = (((float)(uVar17 & 0x7fff) / 32767.0) * 2.0 * fVar23 - fVar23) - fVar18;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar16[8] = param_3[8] +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xc] -
                         param_3[0xc]);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar16[9] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xd] -
                         param_3[0xd]) - param_3[9];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar17 = DAT_089da120 >> 0x10;
            fVar23 = param_3[0xe];
            fVar18 = param_3[10];
            pfVar16[0xb] = 1.0;
            pfVar16[10] = (((float)(uVar17 & 0x7fff) / 32767.0) * 2.0 * fVar23 - fVar23) - fVar18;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(pfVar16 + 0xc) =
                 *(short *)((int)param_3 + 0x1e) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 0xb) - (float)*(ushort *)(param_3 + 0xb))
            ;
            *(ushort *)((int)pfVar16 + 0x32) = *(ushort *)((int)param_3 + 0x1e) / 2;
            pfVar16[0xd] = 1.0;
            uVar2 = *(ushort *)((int)param_3 + 0x1e);
            *(undefined1 *)(pfVar16 + 0xf) = 1;
            pfVar16[0xe] = 2.0 / (float)uVar2;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar20);
      }
    }
    uVar20 = 0;
    if (uVar13 != 0) {
      do {
        if (*(char *)(iVar8 + uVar20 * 0x40 + 0x3c) != '\0') {
          iVar9 = iVar8 + uVar20 * 0x40;
          sVar10 = *(short *)(iVar9 + 0x30) + -1;
          *(short *)(iVar9 + 0x30) = sVar10;
          if (sVar10 == 0) {
            *(undefined1 *)(iVar8 + uVar20 * 0x40 + 0x3c) = 0;
          }
          else {
            iVar9 = iVar8 + uVar20 * 0x40;
            if (*(ushort *)(iVar9 + 0x30) < *(ushort *)(iVar9 + 0x32)) {
              iVar9 = iVar8 + uVar20 * 0x40;
              fVar19 = *(float *)(iVar9 + 0x34) - *(float *)(iVar9 + 0x38);
              *(float *)(iVar9 + 0x34) = fVar19;
              if (fVar19 < 0.0) {
                *(undefined4 *)(iVar8 + uVar20 * 0x40 + 0x34) = 0;
              }
            }
            pauVar12 = (undefined1 (*) [12])(iVar8 + uVar20 * 0x40);
            uVar5 = *(undefined4 *)pauVar12[1];
            iVar9 = iVar8 + uVar20 * 0x40;
            pauVar15 = (undefined1 (*) [12])(iVar9 + 0x10);
            uVar6 = *(undefined4 *)(iVar9 + 0x1c);
            auVar3 = vadd_t(*pauVar12,*pauVar15);
            auVar4 = vadd_t(*pauVar15,*(undefined1 (*) [12])(iVar9 + 0x20));
            *(int *)*pauVar12 = auVar3._0_4_;
            *(int *)(*pauVar12 + 4) = auVar3._4_4_;
            *(int *)(*pauVar12 + 8) = auVar3._8_4_;
            *(undefined4 *)pauVar12[1] = uVar5;
            *(int *)*pauVar15 = auVar4._0_4_;
            *(int *)(iVar9 + 0x14) = auVar4._4_4_;
            *(int *)(iVar9 + 0x18) = auVar4._8_4_;
            *(undefined4 *)(iVar9 + 0x1c) = uVar6;
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar13);
    }
  }
  return;
}

