/* Entry 0x0897D71C | file offset 0x0017A6F4 | FUN_0897d71c | bytes 1256 */

void FUN_0897d71c(undefined4 param_1,uint *param_2,float *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  short sVar8;
  undefined1 (*pauVar9) [12];
  uint uVar10;
  undefined1 (*pauVar11) [12];
  int iVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  
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
    fVar18 = param_3[4];
    iVar12 = *(int *)*param_4;
    uVar13 = ((int *)*param_4)[1];
    bVar1 = *(byte *)((int)param_3 + 0x1a);
    fVar21 = (float)param_4[1] + fVar18 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar21 < 1.0) {
      param_4[1] = (int)fVar21;
      uVar19 = 0;
    }
    else {
      uVar19 = (uint)fVar21;
      fVar20 = (float)(int)uVar19;
      if ((int)uVar19 < 0) {
        fVar20 = fVar20 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar21 - fVar20);
      param_4[1] = (int)((fVar21 - fVar20) - (float)bVar1 * fVar18);
    }
    if (uVar19 != 0) {
      uVar17 = 0;
      uVar15 = 0;
      if (uVar19 != 0) {
joined_r0x0897d83c:
        do {
          if (uVar15 < uVar13) {
            if (*(char *)(iVar12 + uVar15 * 0x40 + 0x3c) != '\0') {
              uVar15 = uVar15 + 1;
              goto joined_r0x0897d83c;
            }
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar16 = iVar12 + uVar15 * 0x40;
            pfVar14 = (float *)(iVar16 + 0x10);
            *pfVar14 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(float *)(iVar16 + 0x14) =
                 ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar10 = DAT_089da120 >> 0x10;
            *(undefined4 *)(iVar16 + 0x1c) = 0;
            *(float *)(iVar16 + 0x18) = ((float)(uVar10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            FUN_089a3bc8(pfVar14,pfVar14);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(param_3[2] +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[3] -
                         param_3[3]),iVar16 + 0x20,pfVar14);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(*param_3 +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] -
                         param_3[1]),pfVar14,pfVar14);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0,iVar12 + uVar15 * 0x40,
                         pfVar14);
            *(undefined4 *)(iVar16 + 0xc) = 0x3f800000;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(iVar16 + 0x30) =
                 *(short *)((int)param_3 + 0x16) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 6) - (float)*(ushort *)(param_3 + 6));
            *(ushort *)(iVar16 + 0x32) = *(ushort *)((int)param_3 + 0x16) / 2;
            *(undefined4 *)(iVar16 + 0x34) = 0x3f800000;
            uVar2 = *(ushort *)((int)param_3 + 0x16);
            *(undefined1 *)(iVar16 + 0x3c) = 1;
            *(float *)(iVar16 + 0x38) = 2.0 / (float)uVar2;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
    }
    uVar19 = 0;
    if (uVar13 != 0) {
      do {
        if (*(char *)(iVar12 + uVar19 * 0x40 + 0x3c) != '\0') {
          iVar16 = iVar12 + uVar19 * 0x40;
          sVar8 = *(short *)(iVar16 + 0x30) + -1;
          *(short *)(iVar16 + 0x30) = sVar8;
          if (sVar8 == 0) {
            *(undefined1 *)(iVar12 + uVar19 * 0x40 + 0x3c) = 0;
          }
          else {
            iVar16 = iVar12 + uVar19 * 0x40;
            if (*(ushort *)(iVar16 + 0x30) < *(ushort *)(iVar16 + 0x32)) {
              iVar16 = iVar12 + uVar19 * 0x40;
              fVar18 = *(float *)(iVar16 + 0x34) - *(float *)(iVar16 + 0x38);
              *(float *)(iVar16 + 0x34) = fVar18;
              if (fVar18 < 0.0) {
                *(undefined4 *)(iVar12 + uVar19 * 0x40 + 0x34) = 0;
              }
            }
            pauVar9 = (undefined1 (*) [12])(iVar12 + uVar19 * 0x40);
            uVar5 = *(undefined4 *)pauVar9[1];
            iVar16 = iVar12 + uVar19 * 0x40;
            pauVar11 = (undefined1 (*) [12])(iVar16 + 0x10);
            uVar6 = *(undefined4 *)(iVar16 + 0x1c);
            auVar3 = vadd_t(*pauVar9,*pauVar11);
            auVar4 = vadd_t(*pauVar11,*(undefined1 (*) [12])(iVar16 + 0x20));
            *(int *)*pauVar9 = auVar3._0_4_;
            *(int *)(*pauVar9 + 4) = auVar3._4_4_;
            *(int *)(*pauVar9 + 8) = auVar3._8_4_;
            *(undefined4 *)pauVar9[1] = uVar5;
            *(int *)*pauVar11 = auVar4._0_4_;
            *(int *)(iVar16 + 0x14) = auVar4._4_4_;
            *(int *)(iVar16 + 0x18) = auVar4._8_4_;
            *(undefined4 *)(iVar16 + 0x1c) = uVar6;
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar13);
    }
  }
  return;
}

