/* Entry 0x089760E8 | file offset 0x001730C0 | FUN_089760e8 | bytes 1648 */

void FUN_089760e8(undefined4 param_1,uint *param_2,float *param_3,int *param_4)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  short sVar13;
  undefined1 (*pauVar14) [12];
  undefined1 (*pauVar15) [16];
  uint uVar16;
  undefined1 (*pauVar17) [12];
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 in_V2C;
  
  if ((*param_2 & 1) == 0) {
    bVar11 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar11 = true;
    }
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    fVar23 = param_3[7];
    iVar18 = *(int *)*param_4;
    uVar19 = ((int *)*param_4)[1];
    bVar1 = *(byte *)((int)param_3 + 0x3e);
    fVar27 = (float)param_4[1] + fVar23 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar27 < 1.0) {
      param_4[1] = (int)fVar27;
      uVar25 = 0;
    }
    else {
      uVar25 = (uint)fVar27;
      fVar26 = (float)(int)uVar25;
      if ((int)uVar25 < 0) {
        fVar26 = fVar26 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar27 - fVar26);
      param_4[1] = (int)((fVar27 - fVar26) - (float)bVar1 * fVar23);
    }
    if (uVar25 != 0) {
      fVar27 = param_3[0x10];
      fVar26 = param_3[0x11];
      fVar23 = param_3[0x12];
      uVar21 = 0;
      uVar20 = 0;
      if (uVar25 != 0) {
joined_r0x08976234:
        do {
          if (uVar20 < uVar19) {
            if (*(char *)(iVar18 + uVar20 * 0x60 + 0x50) != '\0') {
              uVar20 = uVar20 + 1;
              goto joined_r0x08976234;
            }
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar22 = (float *)(iVar18 + uVar20 * 0x60);
            *pfVar22 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar27 * 0.5 -
                       fVar27 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar22[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar26 * 0.5 -
                         fVar26 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar16 = DAT_089da120 >> 0x10;
            pfVar22[3] = 1.0;
            pfVar22[2] = ((float)(uVar16 & 0x7fff) / 32767.0) * 2.0 * fVar23 * 0.5 - fVar23 * 0.5;
            FUN_089a3868(pfVar22 + 4,iVar18 + uVar20 * 0x60);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar22[8] = *param_3 +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[4] -
                         param_3[4]);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar22[9] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[5] -
                         param_3[5]) - param_3[1];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar22[10] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[6] -
                          param_3[6]) - param_3[2];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar22[0xc] = param_3[8] +
                           (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xc]
                           - param_3[0xc]);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar22[0xd] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xd]
                           - param_3[0xd]) - param_3[9];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar22[0xe] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xe]
                           - param_3[0xe]) - param_3[10];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(pfVar22 + 0x10) =
                 *(short *)((int)param_3 + 0x2e) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 0xf) - (float)*(ushort *)(param_3 + 0xf))
            ;
            *(ushort *)((int)pfVar22 + 0x42) = *(ushort *)((int)param_3 + 0x2e) / 2;
            pfVar22[0x11] = 1.0;
            pfVar22[0x12] = 2.0 / (float)*(ushort *)((int)param_3 + 0x2e);
            fVar24 = param_3[3];
            *(undefined1 *)(pfVar22 + 0x14) = 1;
            pfVar22[0x13] = fVar24;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar25);
      }
    }
    uVar25 = 0;
    if (uVar19 != 0) {
      do {
        if (*(char *)(iVar18 + uVar25 * 0x60 + 0x50) != '\0') {
          iVar12 = iVar18 + uVar25 * 0x60;
          sVar13 = *(short *)(iVar12 + 0x40) + -1;
          *(short *)(iVar12 + 0x40) = sVar13;
          if (sVar13 != 0) {
            iVar12 = iVar18 + uVar25 * 0x60;
            if (*(ushort *)(iVar12 + 0x40) < *(ushort *)(iVar12 + 0x42)) {
              iVar12 = iVar18 + uVar25 * 0x60;
              fVar23 = *(float *)(iVar12 + 0x44) - *(float *)(iVar12 + 0x48);
              *(float *)(iVar12 + 0x44) = fVar23;
              if (fVar23 < 0.0) {
                *(undefined4 *)(iVar18 + uVar25 * 0x60 + 0x44) = 0;
              }
            }
            pauVar14 = (undefined1 (*) [12])(iVar18 + uVar25 * 0x60);
            uVar6 = *(undefined4 *)pauVar14[1];
            iVar18 = iVar18 + uVar25 * 0x60;
            pauVar15 = (undefined1 (*) [16])(iVar18 + 0x20);
            auVar2 = vadd_t(*pauVar14,*(undefined1 (*) [12])*pauVar15);
            auVar3 = vadd_q(*pauVar15,*(undefined1 (*) [16])(iVar18 + 0x30));
            pauVar17 = (undefined1 (*) [12])(iVar18 + 0x10);
            uVar30 = *(undefined4 *)*pauVar17;
            uVar31 = *(undefined4 *)(iVar18 + 0x14);
            uVar32 = *(undefined4 *)(iVar18 + 0x18);
            uVar7 = *(undefined4 *)(iVar18 + 0x1c);
            uVar28 = *(undefined4 *)(iVar18 + 0x4c);
            auVar4 = vsub_t(auVar2,*pauVar17);
            uVar29 = vdot_t(auVar4,auVar4);
            uVar29 = vsqrt_s(uVar29);
            uVar19 = vcmp_s(2,uVar28,uVar29);
            if ((uVar19 & 1) != 0) goto code_r0x089766d4;
            do {
              *(int *)*pauVar14 = auVar2._0_4_;
              *(int *)(*pauVar14 + 4) = auVar2._4_4_;
              *(int *)(*pauVar14 + 8) = auVar2._8_4_;
              *(undefined4 *)pauVar14[1] = uVar6;
              *(int *)*pauVar15 = auVar3._0_4_;
              *(int *)(iVar18 + 0x24) = auVar3._4_4_;
              *(int *)(iVar18 + 0x28) = auVar3._8_4_;
              *(int *)(iVar18 + 0x2c) = auVar3._12_4_;
              *(undefined4 *)*pauVar17 = uVar30;
              *(undefined4 *)(iVar18 + 0x14) = uVar31;
              *(undefined4 *)(iVar18 + 0x18) = uVar32;
              *(undefined4 *)(iVar18 + 0x1c) = uVar7;
code_r0x089766d4:
              auVar5._12_4_ = uVar7;
              auVar5._8_4_ = uVar32;
              auVar5._4_4_ = uVar31;
              auVar5._0_4_ = uVar30;
              auVar9._12_4_ = uVar6;
              auVar9._8_4_ = auVar2._8_4_;
              auVar9._4_4_ = auVar2._4_4_;
              auVar9._0_4_ = auVar2._0_4_;
              auVar5 = vsub_q(auVar5,auVar9);
              auVar4 = auVar5._0_12_;
              uVar30 = vdot_t(auVar4,auVar4);
              uVar30 = vsqrt_s(uVar30);
              uVar31 = vmov_s(uVar30);
              uVar32 = vmov_s(uVar30);
              auVar8._8_4_ = uVar32;
              auVar8._4_4_ = uVar31;
              auVar8._0_4_ = uVar30;
              auVar4 = vdiv_t(auVar4,auVar8);
              auVar10._12_4_ = in_V2C;
              auVar10._8_4_ = auVar4._8_4_;
              auVar10._4_4_ = auVar4._4_4_;
              auVar10._0_4_ = auVar4._0_4_;
              auVar5 = vscl_q(auVar10,uVar28);
              in_V2C = auVar5._12_4_;
              auVar4 = vadd_t(auVar2,auVar5._0_12_);
              uVar30 = auVar4._0_4_;
              uVar31 = auVar4._4_4_;
              uVar32 = auVar4._8_4_;
            } while( true );
          }
          *(undefined1 *)(iVar18 + uVar25 * 0x60 + 0x50) = 0;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar19);
    }
  }
  return;
}

