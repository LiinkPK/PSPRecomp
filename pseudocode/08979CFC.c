/* Entry 0x08979CFC | file offset 0x00176CD4 | FUN_08979cfc | bytes 1908 */

void FUN_08979cfc(undefined4 param_1,uint *param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  bool bVar12;
  int iVar13;
  short sVar14;
  undefined4 *puVar15;
  undefined1 (*pauVar16) [64];
  int iVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  
  if ((*param_2 & 1) == 0) {
    bVar12 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar12 = true;
    }
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    fVar22 = *(float *)(param_3 + 0x20);
    iVar17 = *(int *)*param_4;
    uVar18 = ((int *)*param_4)[1];
    bVar1 = *(byte *)(param_3 + 0x2a);
    fVar25 = (float)param_4[1] + fVar22 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar25 < 1.0) {
      param_4[1] = (int)fVar25;
      uVar23 = 0;
    }
    else {
      uVar23 = (uint)fVar25;
      fVar24 = (float)(int)uVar23;
      if ((int)uVar23 < 0) {
        fVar24 = fVar24 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar25 - fVar24);
      param_4[1] = (int)((fVar25 - fVar24) - (float)bVar1 * fVar22);
    }
    if (uVar23 != 0) {
      uVar21 = 0;
      uVar19 = 0;
      if (uVar23 != 0) {
        do {
          if (uVar19 < uVar18) {
LAB_08979e20:
            if (*(char *)(iVar17 + uVar19 * 0xa0 + 0x9c) != '\0') goto code_r0x08979e3c;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar20 = (float *)(iVar17 + uVar19 * 0xa0);
            *pfVar20 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar20[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar20[2] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            FUN_089a3bc8(pfVar20,pfVar20);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                         *(float *)(param_3 + 0x1c),pfVar20,pfVar20);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar13 = iVar17 + uVar19 * 0xa0;
            for (fVar22 = ((((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                            *(float *)(param_3 + 0x10) - *(float *)(param_3 + 0x10)) -
                          *(float *)(param_3 + 0xc)) * 3.1415927 * 0.0055555557; fVar22 < -3.1415927
                ; fVar22 = fVar22 + 6.2831855) {
            }
            for (; 3.1415927 < fVar22; fVar22 = fVar22 - 6.2831855) {
            }
            uVar26 = vcst_s(5);
            uVar26 = vmul_s(fVar22,uVar26);
            auVar5 = vrot_q(uVar26,1,0,3,0);
            auVar2 = vidt_q();
            auVar6 = vrot_q(uVar26,2,0,1,0);
            auVar3 = vidt_q();
            auVar4._60_4_ = auVar3._12_4_;
            auVar4._56_4_ = auVar6._12_4_;
            auVar4._52_4_ = auVar2._12_4_;
            auVar4._48_4_ = auVar5._12_4_;
            auVar4._44_4_ = auVar3._8_4_;
            auVar4._40_4_ = auVar6._8_4_;
            auVar4._36_4_ = auVar2._8_4_;
            auVar4._32_4_ = auVar5._8_4_;
            auVar4._28_4_ = auVar3._4_4_;
            auVar4._24_4_ = auVar6._4_4_;
            auVar4._20_4_ = auVar2._4_4_;
            auVar4._16_4_ = auVar5._4_4_;
            auVar4._12_4_ = auVar3._0_4_;
            auVar4._8_4_ = auVar6._0_4_;
            auVar4._4_4_ = auVar2._0_4_;
            auVar4._0_4_ = auVar5._0_4_;
            auVar7._60_4_ = DAT_089da3ac;
            auVar7._56_4_ = DAT_089da39c;
            auVar7._52_4_ = DAT_089da38c;
            auVar7._48_4_ = DAT_089da37c;
            auVar7._44_4_ = DAT_089da3a8;
            auVar7._40_4_ = DAT_089da398;
            auVar7._36_4_ = DAT_089da388;
            auVar7._32_4_ = DAT_089da378;
            auVar7._28_4_ = DAT_089da3a4;
            auVar7._24_4_ = DAT_089da394;
            auVar7._20_4_ = DAT_089da384;
            auVar7._16_4_ = DAT_089da374;
            auVar7._12_4_ = DAT_089da3a0;
            auVar7._8_4_ = DAT_089da390;
            auVar7._4_4_ = DAT_089da380;
            auVar7._0_4_ = DAT_089da370;
            auVar4 = vmmul_q(auVar4,auVar7);
            *(int *)(iVar13 + 0x10) = auVar4._0_4_;
            *(int *)(iVar13 + 0x14) = auVar4._16_4_;
            *(int *)(iVar13 + 0x18) = auVar4._32_4_;
            *(int *)(iVar13 + 0x1c) = auVar4._48_4_;
            *(int *)(iVar13 + 0x20) = auVar4._4_4_;
            *(int *)(iVar13 + 0x24) = auVar4._20_4_;
            *(int *)(iVar13 + 0x28) = auVar4._36_4_;
            *(int *)(iVar13 + 0x2c) = auVar4._52_4_;
            *(int *)(iVar13 + 0x30) = auVar4._8_4_;
            *(int *)(iVar13 + 0x34) = auVar4._24_4_;
            *(int *)(iVar13 + 0x38) = auVar4._40_4_;
            *(int *)(iVar13 + 0x3c) = auVar4._56_4_;
            *(int *)(iVar13 + 0x40) = auVar4._12_4_;
            *(int *)(iVar13 + 0x44) = auVar4._28_4_;
            *(int *)(iVar13 + 0x48) = auVar4._44_4_;
            *(int *)(iVar13 + 0x4c) = auVar4._60_4_;
            iVar13 = iVar17 + uVar19 * 0xa0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            for (fVar22 = ((((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                            *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x18)) -
                          *(float *)(param_3 + 0x14)) * 3.1415927 * 0.0055555557;
                fVar22 < -3.1415927; fVar22 = fVar22 + 6.2831855) {
            }
            for (; 3.1415927 < fVar22; fVar22 = fVar22 - 6.2831855) {
            }
            uVar26 = vcst_s(5);
            uVar26 = vmul_s(fVar22,uVar26);
            auVar5 = vrot_q(uVar26,1,0,3,0);
            auVar2 = vidt_q();
            auVar6 = vrot_q(uVar26,2,0,1,0);
            auVar3 = vidt_q();
            auVar8._60_4_ = auVar3._12_4_;
            auVar8._56_4_ = auVar6._12_4_;
            auVar8._52_4_ = auVar2._12_4_;
            auVar8._48_4_ = auVar5._12_4_;
            auVar8._44_4_ = auVar3._8_4_;
            auVar8._40_4_ = auVar6._8_4_;
            auVar8._36_4_ = auVar2._8_4_;
            auVar8._32_4_ = auVar5._8_4_;
            auVar8._28_4_ = auVar3._4_4_;
            auVar8._24_4_ = auVar6._4_4_;
            auVar8._20_4_ = auVar2._4_4_;
            auVar8._16_4_ = auVar5._4_4_;
            auVar8._12_4_ = auVar3._0_4_;
            auVar8._8_4_ = auVar6._0_4_;
            auVar8._4_4_ = auVar2._0_4_;
            auVar8._0_4_ = auVar5._0_4_;
            auVar9._60_4_ = DAT_089da3ac;
            auVar9._56_4_ = DAT_089da39c;
            auVar9._52_4_ = DAT_089da38c;
            auVar9._48_4_ = DAT_089da37c;
            auVar9._44_4_ = DAT_089da3a8;
            auVar9._40_4_ = DAT_089da398;
            auVar9._36_4_ = DAT_089da388;
            auVar9._32_4_ = DAT_089da378;
            auVar9._28_4_ = DAT_089da3a4;
            auVar9._24_4_ = DAT_089da394;
            auVar9._20_4_ = DAT_089da384;
            auVar9._16_4_ = DAT_089da374;
            auVar9._12_4_ = DAT_089da3a0;
            auVar9._8_4_ = DAT_089da390;
            auVar9._4_4_ = DAT_089da380;
            auVar9._0_4_ = DAT_089da370;
            auVar4 = vmmul_q(auVar8,auVar9);
            *(int *)(iVar13 + 0x50) = auVar4._0_4_;
            *(int *)(iVar13 + 0x54) = auVar4._16_4_;
            *(int *)(iVar13 + 0x58) = auVar4._32_4_;
            *(int *)(iVar13 + 0x5c) = auVar4._48_4_;
            *(int *)(iVar13 + 0x60) = auVar4._4_4_;
            *(int *)(iVar13 + 100) = auVar4._20_4_;
            *(int *)(iVar13 + 0x68) = auVar4._36_4_;
            *(int *)(iVar13 + 0x6c) = auVar4._52_4_;
            *(int *)(iVar13 + 0x70) = auVar4._8_4_;
            *(int *)(iVar13 + 0x74) = auVar4._24_4_;
            *(int *)(iVar13 + 0x78) = auVar4._40_4_;
            *(int *)(iVar13 + 0x7c) = auVar4._56_4_;
            *(int *)(iVar13 + 0x80) = auVar4._12_4_;
            *(int *)(iVar13 + 0x84) = auVar4._28_4_;
            *(int *)(iVar13 + 0x88) = auVar4._44_4_;
            *(int *)(iVar13 + 0x8c) = auVar4._60_4_;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar13 = iVar17 + uVar19 * 0xa0;
            *(short *)(iVar13 + 0x90) =
                 *(short *)(param_3 + 0x26) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 0x28) -
                             (float)*(ushort *)(param_3 + 0x28));
            *(ushort *)(iVar13 + 0x92) = *(ushort *)(param_3 + 0x26) / 2;
            *(undefined4 *)(iVar13 + 0x94) = 0x3f800000;
            *(float *)(iVar13 + 0x98) = 2.0 / (float)*(ushort *)(param_3 + 0x26);
            *(undefined1 *)(iVar13 + 0x9c) = 1;
          }
LAB_0897a2e0:
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar23);
      }
    }
    uVar23 = 0;
    if (uVar18 != 0) {
      do {
        if (*(char *)(iVar17 + uVar23 * 0xa0 + 0x9c) != '\0') {
          iVar13 = iVar17 + uVar23 * 0xa0;
          sVar14 = *(short *)(iVar13 + 0x90) + -1;
          *(short *)(iVar13 + 0x90) = sVar14;
          if (sVar14 == 0) {
            *(undefined1 *)(iVar17 + uVar23 * 0xa0 + 0x9c) = 0;
          }
          else {
            iVar13 = iVar17 + uVar23 * 0xa0;
            if (*(ushort *)(iVar13 + 0x90) < *(ushort *)(iVar13 + 0x92)) {
              iVar13 = iVar17 + uVar23 * 0xa0;
              fVar22 = *(float *)(iVar13 + 0x94) - *(float *)(iVar13 + 0x98);
              *(float *)(iVar13 + 0x94) = fVar22;
              if (fVar22 < 0.0) {
                *(undefined4 *)(iVar17 + uVar23 * 0xa0 + 0x94) = 0;
              }
            }
            puVar15 = (undefined4 *)(iVar17 + uVar23 * 0xa0);
            iVar13 = iVar17 + uVar23 * 0xa0;
            pauVar16 = (undefined1 (*) [64])(iVar13 + 0x10);
            uVar26 = vone_s();
            auVar2._12_4_ = uVar26;
            auVar2._8_4_ = puVar15[2];
            auVar2._4_4_ = puVar15[1];
            auVar2._0_4_ = *puVar15;
            auVar2 = vtfm4_q(*pauVar16,auVar2);
            auVar10._60_4_ = *(undefined4 *)(iVar13 + 0x8c);
            auVar10._56_4_ = *(undefined4 *)(iVar13 + 0x7c);
            auVar10._52_4_ = *(undefined4 *)(iVar13 + 0x6c);
            auVar10._48_4_ = *(undefined4 *)(iVar13 + 0x5c);
            auVar10._44_4_ = *(undefined4 *)(iVar13 + 0x88);
            auVar10._40_4_ = *(undefined4 *)(iVar13 + 0x78);
            auVar10._36_4_ = *(undefined4 *)(iVar13 + 0x68);
            auVar10._32_4_ = *(undefined4 *)(iVar13 + 0x58);
            auVar10._28_4_ = *(undefined4 *)(iVar13 + 0x84);
            auVar10._24_4_ = *(undefined4 *)(iVar13 + 0x74);
            auVar10._20_4_ = *(undefined4 *)(iVar13 + 100);
            auVar10._16_4_ = *(undefined4 *)(iVar13 + 0x54);
            auVar10._12_4_ = *(undefined4 *)(iVar13 + 0x80);
            auVar10._8_4_ = *(undefined4 *)(iVar13 + 0x70);
            auVar10._4_4_ = *(undefined4 *)(iVar13 + 0x60);
            auVar10._0_4_ = *(undefined4 *)(iVar13 + 0x50);
            auVar11._60_4_ = *(undefined4 *)(iVar13 + 0x4c);
            auVar11._56_4_ = *(undefined4 *)(iVar13 + 0x3c);
            auVar11._52_4_ = *(undefined4 *)(iVar13 + 0x2c);
            auVar11._48_4_ = *(undefined4 *)(iVar13 + 0x1c);
            auVar11._44_4_ = *(undefined4 *)(iVar13 + 0x48);
            auVar11._40_4_ = *(undefined4 *)(iVar13 + 0x38);
            auVar11._36_4_ = *(undefined4 *)(iVar13 + 0x28);
            auVar11._32_4_ = *(undefined4 *)(iVar13 + 0x18);
            auVar11._28_4_ = *(undefined4 *)(iVar13 + 0x44);
            auVar11._24_4_ = *(undefined4 *)(iVar13 + 0x34);
            auVar11._20_4_ = *(undefined4 *)(iVar13 + 0x24);
            auVar11._16_4_ = *(undefined4 *)(iVar13 + 0x14);
            auVar11._12_4_ = *(undefined4 *)(iVar13 + 0x40);
            auVar11._8_4_ = *(undefined4 *)(iVar13 + 0x30);
            auVar11._4_4_ = *(undefined4 *)(iVar13 + 0x20);
            auVar11._0_4_ = *(undefined4 *)*pauVar16;
            auVar4 = vmmul_q(auVar10,auVar11);
            *puVar15 = auVar2._0_4_;
            puVar15[1] = auVar2._4_4_;
            puVar15[2] = auVar2._8_4_;
            puVar15[3] = auVar2._12_4_;
            *(int *)*pauVar16 = auVar4._0_4_;
            *(int *)(iVar13 + 0x14) = auVar4._16_4_;
            *(int *)(iVar13 + 0x18) = auVar4._32_4_;
            *(int *)(iVar13 + 0x1c) = auVar4._48_4_;
            *(int *)(iVar13 + 0x20) = auVar4._4_4_;
            *(int *)(iVar13 + 0x24) = auVar4._20_4_;
            *(int *)(iVar13 + 0x28) = auVar4._36_4_;
            *(int *)(iVar13 + 0x2c) = auVar4._52_4_;
            *(int *)(iVar13 + 0x30) = auVar4._8_4_;
            *(int *)(iVar13 + 0x34) = auVar4._24_4_;
            *(int *)(iVar13 + 0x38) = auVar4._40_4_;
            *(int *)(iVar13 + 0x3c) = auVar4._56_4_;
            *(int *)(iVar13 + 0x40) = auVar4._12_4_;
            *(int *)(iVar13 + 0x44) = auVar4._28_4_;
            *(int *)(iVar13 + 0x48) = auVar4._44_4_;
            *(int *)(iVar13 + 0x4c) = auVar4._60_4_;
          }
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar18);
    }
  }
  return;
code_r0x08979e3c:
  uVar19 = uVar19 + 1;
  if (uVar18 <= uVar19) goto LAB_0897a2e0;
  goto LAB_08979e20;
}

