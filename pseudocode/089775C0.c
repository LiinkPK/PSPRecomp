/* Entry 0x089775C0 | file offset 0x00174598 | FUN_089775c0 | bytes 1780 */

void FUN_089775c0(undefined4 param_1,uint *param_2,float *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  undefined1 (*pauVar10) [12];
  short sVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  if ((*param_2 & 1) == 0) {
    bVar8 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar8 = true;
    }
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    fVar20 = param_3[0xb];
    iVar15 = *(int *)*param_4;
    uVar16 = ((int *)*param_4)[1];
    bVar1 = *(byte *)((int)param_3 + 0x4f);
    fVar23 = (float)param_4[1] + fVar20 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar23 < 1.0) {
      param_4[1] = (int)fVar23;
      uVar21 = 0;
    }
    else {
      uVar21 = (uint)fVar23;
      fVar22 = (float)(int)uVar21;
      if ((int)uVar21 < 0) {
        fVar22 = fVar22 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar23 - fVar22);
      param_4[1] = (int)((fVar23 - fVar22) - (float)bVar1 * fVar20);
    }
    if (uVar21 != 0) {
      fVar23 = param_3[0x10];
      fVar22 = param_3[0x11];
      fVar20 = param_3[0x12];
      uVar18 = 0;
      uVar17 = 0;
      if (uVar21 != 0) {
joined_r0x08977700:
        do {
          if (uVar17 < uVar16) {
            if (*(char *)(iVar15 + uVar17 * 0x70 + 0x5c) != '\0') {
              uVar17 = uVar17 + 1;
              goto joined_r0x08977700;
            }
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar19 = (float *)(iVar15 + uVar17 * 0x70);
            *pfVar19 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar23 * 0.5 -
                       fVar23 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar19[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar22 * 0.5 -
                         fVar22 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar14 = DAT_089da120 >> 0x10;
            pfVar19[3] = 1.0;
            pfVar19[2] = ((float)(uVar14 & 0x7fff) / 32767.0) * 2.0 * fVar20 * 0.5 - fVar20 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar19[4] = *param_3 +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[4] -
                         param_3[4]);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar19[5] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[5] -
                         param_3[5]) - param_3[1];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar19[6] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[6] -
                         param_3[6]) - param_3[2];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar19[8] = param_3[8] +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xc] -
                         param_3[0xc]);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar19[9] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xd] -
                         param_3[0xd]) - param_3[9];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar19[10] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xe] -
                          param_3[0xe]) - param_3[10];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(pfVar19 + 0x14) =
                 *(short *)((int)param_3 + 0x3e) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 0x13) -
                             (float)*(ushort *)(param_3 + 0x13));
            *(ushort *)((int)pfVar19 + 0x52) = *(ushort *)((int)param_3 + 0x3e) / 2;
            pfVar19[0x15] = 1.0;
            uVar2 = *(ushort *)((int)param_3 + 0x3e);
            *(undefined1 *)(pfVar19 + 0x17) = 1;
            pfVar19[0x16] = 2.0 / (float)uVar2;
            FUN_089a3868(pfVar19 + 0xc,&DAT_089da360);
            FUN_089a3868(pfVar19 + 0x10,&DAT_089da360);
            pfVar19[0x18] = 1.4013e-45;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar21);
      }
    }
    uVar21 = 0;
    if (uVar16 != 0) {
      do {
        if (*(char *)(iVar15 + uVar21 * 0x70 + 0x5c) != '\0') {
          iVar9 = iVar15 + uVar21 * 0x70;
          sVar11 = *(short *)(iVar9 + 0x50) + -1;
          *(short *)(iVar9 + 0x50) = sVar11;
          if (sVar11 == 0) {
            *(undefined1 *)(iVar15 + uVar21 * 0x70 + 0x5c) = 0;
          }
          else {
            iVar9 = iVar15 + uVar21 * 0x70;
            if (*(ushort *)(iVar9 + 0x50) < *(ushort *)(iVar9 + 0x52)) {
              iVar9 = iVar15 + uVar21 * 0x70;
              fVar20 = *(float *)(iVar9 + 0x54) - *(float *)(iVar9 + 0x58);
              *(float *)(iVar9 + 0x54) = fVar20;
              if (fVar20 < 0.0) {
                *(undefined4 *)(iVar15 + uVar21 * 0x70 + 0x54) = 0;
              }
            }
            iVar9 = iVar15 + uVar21 * 0x70;
            iVar12 = *(int *)(iVar9 + 0x60) + -1;
            *(int *)(iVar9 + 0x60) = iVar12;
            if (iVar12 == 0) {
              *(uint *)(iVar15 + uVar21 * 0x70 + 0x60) = (uint)*(byte *)((int)param_3 + 0x4e);
              auVar3._8_4_ = 0x40400000;
              auVar3._0_8_ = 0x4040000040400000;
              auVar3._12_4_ = 0x40400000;
              auVar5 = vrndf2_q();
              auVar5 = vsub_q(auVar5,auVar3);
              auVar4 = auVar5._0_12_;
              uVar24 = vdot_t(auVar4,auVar4);
              uVar24 = vsqrt_s(uVar24);
              uVar25 = vmov_s(uVar24);
              uVar26 = vmov_s(uVar24);
              auVar6._8_4_ = uVar26;
              auVar6._4_4_ = uVar25;
              auVar6._0_4_ = uVar24;
              auVar4 = vdiv_t(auVar4,auVar6);
              uVar24 = vrndf1_s();
              uVar25 = vone_s();
              uVar24 = vsub_s(uVar24,uVar25);
              uVar24 = vmul_s(param_3[3],uVar24);
              uVar25 = vzero_s();
              auVar5._12_4_ = uVar25;
              auVar5._8_4_ = auVar4._8_4_;
              auVar5._4_4_ = auVar4._4_4_;
              auVar5._0_4_ = auVar4._0_4_;
              auVar5 = vscl_q(auVar5,uVar24);
              uVar24 = auVar5._0_4_;
              uVar25 = auVar5._4_4_;
              uVar26 = auVar5._8_4_;
              uVar27 = auVar5._12_4_;
            }
            else {
              iVar9 = iVar15 + uVar21 * 0x70;
              uVar24 = *(undefined4 *)(iVar9 + 0x30);
              uVar25 = *(undefined4 *)(iVar9 + 0x34);
              uVar26 = *(undefined4 *)(iVar9 + 0x38);
              uVar27 = *(undefined4 *)(iVar9 + 0x3c);
            }
            iVar9 = iVar15 + uVar21 * 0x70;
            pauVar13 = (undefined1 (*) [16])(iVar9 + 0x40);
            auVar7._12_4_ = uVar27;
            auVar7._8_4_ = uVar26;
            auVar7._4_4_ = uVar25;
            auVar7._0_4_ = uVar24;
            auVar5 = vsub_q(auVar7,*pauVar13);
            auVar5 = vscl_q(auVar5,param_3[7]);
            auVar5 = vadd_q(*pauVar13,auVar5);
            *(int *)*pauVar13 = auVar5._0_4_;
            *(int *)(iVar9 + 0x44) = auVar5._4_4_;
            *(int *)(iVar9 + 0x48) = auVar5._8_4_;
            *(int *)(iVar9 + 0x4c) = auVar5._12_4_;
            *(undefined4 *)(iVar9 + 0x30) = uVar24;
            *(undefined4 *)(iVar9 + 0x34) = uVar25;
            *(undefined4 *)(iVar9 + 0x38) = uVar26;
            *(undefined4 *)(iVar9 + 0x3c) = uVar27;
            pauVar10 = (undefined1 (*) [12])(iVar15 + uVar21 * 0x70);
            uVar24 = *(undefined4 *)pauVar10[1];
            pauVar13 = (undefined1 (*) [16])(iVar9 + 0x10);
            auVar4 = vadd_t(*pauVar10,*(undefined1 (*) [12])*pauVar13);
            auVar3 = vadd_q(*pauVar13,*(undefined1 (*) [16])(iVar9 + 0x20));
            auVar4 = vadd_t(auVar4,auVar5._0_12_);
            *(int *)*pauVar10 = auVar4._0_4_;
            *(int *)(*pauVar10 + 4) = auVar4._4_4_;
            *(int *)(*pauVar10 + 8) = auVar4._8_4_;
            *(undefined4 *)pauVar10[1] = uVar24;
            *(int *)*pauVar13 = auVar3._0_4_;
            *(int *)(iVar9 + 0x14) = auVar3._4_4_;
            *(int *)(iVar9 + 0x18) = auVar3._8_4_;
            *(int *)(iVar9 + 0x1c) = auVar3._12_4_;
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar16);
    }
  }
  return;
}

