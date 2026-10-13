/* Entry 0x08979078 | file offset 0x00176050 | FUN_08979078 | bytes 1984 */

void FUN_08979078(undefined4 param_1,uint *param_2,int param_3,int *param_4)

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
  undefined1 auVar12 [64];
  bool bVar14;
  int iVar15;
  short sVar16;
  undefined4 *puVar17;
  undefined1 (*pauVar18) [64];
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  
  if ((*param_2 & 1) == 0) {
    bVar14 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar14 = true;
    }
  }
  else {
    bVar14 = true;
  }
  if (!bVar14) {
    fVar24 = *(float *)(param_3 + 0x40);
    iVar19 = *(int *)*param_4;
    uVar20 = ((int *)*param_4)[1];
    bVar1 = *(byte *)(param_3 + 0x4b);
    fVar27 = (float)param_4[1] + fVar24 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
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
      param_4[1] = (int)((fVar27 - fVar26) - (float)bVar1 * fVar24);
    }
    if (uVar25 != 0) {
      uVar22 = 0;
      uVar21 = 0;
      if (uVar25 != 0) {
        do {
          if (uVar21 < uVar20) {
LAB_0897919c:
            if (*(char *)(iVar19 + uVar21 * 0xe0 + 0xdc) != '\0') goto code_r0x089791b8;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar23 = (float *)(iVar19 + uVar21 * 0xe0);
            *pfVar23 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar23[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar23[2] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            FUN_089a3bc8(pfVar23,pfVar23);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                         *(float *)(param_3 + 0x3c),pfVar23,pfVar23);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            for (fVar24 = (*(float *)(param_3 + 0xc) +
                          (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                           *(float *)(param_3 + 0x30) - *(float *)(param_3 + 0x30))) * 3.1415927 *
                          0.0055555557; fVar24 < -3.1415927; fVar24 = fVar24 + 6.2831855) {
            }
            for (; 3.1415927 < fVar24; fVar24 = fVar24 - 6.2831855) {
            }
            iVar15 = iVar19 + uVar21 * 0xe0;
            uVar28 = vcst_s(5);
            uVar28 = vmul_s(-fVar24,uVar28);
            auVar5 = vrot_q(uVar28,1,0,3,0);
            auVar2 = vidt_q();
            auVar6 = vrot_q(uVar28,2,0,1,0);
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
            *(int *)(iVar15 + 0x10) = auVar4._0_4_;
            *(int *)(iVar15 + 0x14) = auVar4._16_4_;
            *(int *)(iVar15 + 0x18) = auVar4._32_4_;
            *(int *)(iVar15 + 0x1c) = auVar4._48_4_;
            *(int *)(iVar15 + 0x20) = auVar4._4_4_;
            *(int *)(iVar15 + 0x24) = auVar4._20_4_;
            *(int *)(iVar15 + 0x28) = auVar4._36_4_;
            *(int *)(iVar15 + 0x2c) = auVar4._52_4_;
            *(int *)(iVar15 + 0x30) = auVar4._8_4_;
            *(int *)(iVar15 + 0x34) = auVar4._24_4_;
            *(int *)(iVar15 + 0x38) = auVar4._40_4_;
            *(int *)(iVar15 + 0x3c) = auVar4._56_4_;
            *(int *)(iVar15 + 0x40) = auVar4._12_4_;
            *(int *)(iVar15 + 0x44) = auVar4._28_4_;
            *(int *)(iVar15 + 0x48) = auVar4._44_4_;
            *(int *)(iVar15 + 0x4c) = auVar4._60_4_;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            for (fVar24 = (*(float *)(param_3 + 0x34) +
                          (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                           *(float *)(param_3 + 0x38) - *(float *)(param_3 + 0x38))) * 3.1415927 *
                          0.0055555557; fVar24 < -3.1415927; fVar24 = fVar24 + 6.2831855) {
            }
            for (; 3.1415927 < fVar24; fVar24 = fVar24 - 6.2831855) {
            }
            iVar15 = iVar19 + uVar21 * 0xe0;
            uVar28 = vcst_s(5);
            uVar28 = vmul_s(-fVar24,uVar28);
            auVar5 = vrot_q(uVar28,1,0,3,0);
            auVar2 = vidt_q();
            auVar6 = vrot_q(uVar28,2,0,1,0);
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
            *(int *)(iVar15 + 0x50) = auVar4._0_4_;
            *(int *)(iVar15 + 0x54) = auVar4._16_4_;
            *(int *)(iVar15 + 0x58) = auVar4._32_4_;
            *(int *)(iVar15 + 0x5c) = auVar4._48_4_;
            *(int *)(iVar15 + 0x60) = auVar4._4_4_;
            *(int *)(iVar15 + 100) = auVar4._20_4_;
            *(int *)(iVar15 + 0x68) = auVar4._36_4_;
            *(int *)(iVar15 + 0x6c) = auVar4._52_4_;
            *(int *)(iVar15 + 0x70) = auVar4._8_4_;
            *(int *)(iVar15 + 0x74) = auVar4._24_4_;
            *(int *)(iVar15 + 0x78) = auVar4._40_4_;
            *(int *)(iVar15 + 0x7c) = auVar4._56_4_;
            *(int *)(iVar15 + 0x80) = auVar4._12_4_;
            *(int *)(iVar15 + 0x84) = auVar4._28_4_;
            *(int *)(iVar15 + 0x88) = auVar4._44_4_;
            *(int *)(iVar15 + 0x8c) = auVar4._60_4_;
            uVar28 = vcst_s(5);
            uVar28 = vmul_s(-fVar24,uVar28);
            auVar5 = vrot_q(uVar28,1,0,3,0);
            auVar2 = vidt_q();
            auVar6 = vrot_q(uVar28,2,0,1,0);
            auVar3 = vidt_q();
            auVar10._60_4_ = auVar3._12_4_;
            auVar10._56_4_ = auVar6._12_4_;
            auVar10._52_4_ = auVar2._12_4_;
            auVar10._48_4_ = auVar5._12_4_;
            auVar10._44_4_ = auVar3._8_4_;
            auVar10._40_4_ = auVar6._8_4_;
            auVar10._36_4_ = auVar2._8_4_;
            auVar10._32_4_ = auVar5._8_4_;
            auVar10._28_4_ = auVar3._4_4_;
            auVar10._24_4_ = auVar6._4_4_;
            auVar10._20_4_ = auVar2._4_4_;
            auVar10._16_4_ = auVar5._4_4_;
            auVar10._12_4_ = auVar3._0_4_;
            auVar10._8_4_ = auVar6._0_4_;
            auVar10._4_4_ = auVar2._0_4_;
            auVar10._0_4_ = auVar5._0_4_;
            auVar11._60_4_ = DAT_089da3ac;
            auVar11._56_4_ = DAT_089da39c;
            auVar11._52_4_ = DAT_089da38c;
            auVar11._48_4_ = DAT_089da37c;
            auVar11._44_4_ = DAT_089da3a8;
            auVar11._40_4_ = DAT_089da398;
            auVar11._36_4_ = DAT_089da388;
            auVar11._32_4_ = DAT_089da378;
            auVar11._28_4_ = DAT_089da3a4;
            auVar11._24_4_ = DAT_089da394;
            auVar11._20_4_ = DAT_089da384;
            auVar11._16_4_ = DAT_089da374;
            auVar11._12_4_ = DAT_089da3a0;
            auVar11._8_4_ = DAT_089da390;
            auVar11._4_4_ = DAT_089da380;
            auVar11._0_4_ = DAT_089da370;
            auVar4 = vmmul_q(auVar10,auVar11);
            *(int *)(iVar15 + 0x90) = auVar4._0_4_;
            *(int *)(iVar15 + 0x94) = auVar4._16_4_;
            *(int *)(iVar15 + 0x98) = auVar4._32_4_;
            *(int *)(iVar15 + 0x9c) = auVar4._48_4_;
            *(int *)(iVar15 + 0xa0) = auVar4._4_4_;
            *(int *)(iVar15 + 0xa4) = auVar4._20_4_;
            *(int *)(iVar15 + 0xa8) = auVar4._36_4_;
            *(int *)(iVar15 + 0xac) = auVar4._52_4_;
            *(int *)(iVar15 + 0xb0) = auVar4._8_4_;
            *(int *)(iVar15 + 0xb4) = auVar4._24_4_;
            *(int *)(iVar15 + 0xb8) = auVar4._40_4_;
            *(int *)(iVar15 + 0xbc) = auVar4._56_4_;
            *(int *)(iVar15 + 0xc0) = auVar4._12_4_;
            *(int *)(iVar15 + 0xc4) = auVar4._28_4_;
            *(int *)(iVar15 + 200) = auVar4._44_4_;
            *(int *)(iVar15 + 0xcc) = auVar4._60_4_;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(iVar15 + 0xd0) =
                 *(short *)(param_3 + 0x46) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 0x48) -
                             (float)*(ushort *)(param_3 + 0x48));
            *(ushort *)(iVar15 + 0xd2) = *(ushort *)(param_3 + 0x46) / 2;
            *(undefined4 *)(iVar15 + 0xd4) = 0x3f800000;
            *(float *)(iVar15 + 0xd8) = 2.0 / (float)*(ushort *)(param_3 + 0x46);
            *(undefined1 *)(iVar15 + 0xdc) = 1;
          }
LAB_089796a8:
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar25);
      }
    }
    uVar25 = 0;
    if (uVar20 != 0) {
      do {
        if (*(char *)(iVar19 + uVar25 * 0xe0 + 0xdc) != '\0') {
          iVar15 = iVar19 + uVar25 * 0xe0;
          sVar16 = *(short *)(iVar15 + 0xd0) + -1;
          *(short *)(iVar15 + 0xd0) = sVar16;
          if (sVar16 == 0) {
            *(undefined1 *)(iVar19 + uVar25 * 0xe0 + 0xdc) = 0;
          }
          else {
            iVar15 = iVar19 + uVar25 * 0xe0;
            if (*(ushort *)(iVar15 + 0xd0) < *(ushort *)(iVar15 + 0xd2)) {
              iVar15 = iVar19 + uVar25 * 0xe0;
              fVar24 = *(float *)(iVar15 + 0xd4) - *(float *)(iVar15 + 0xd8);
              *(float *)(iVar15 + 0xd4) = fVar24;
              if (fVar24 < 0.0) {
                *(undefined4 *)(iVar19 + uVar25 * 0xe0 + 0xd4) = 0;
              }
            }
            puVar17 = (undefined4 *)(iVar19 + uVar25 * 0xe0);
            iVar15 = iVar19 + uVar25 * 0xe0;
            pauVar18 = (undefined1 (*) [64])(iVar15 + 0x10);
            uVar28 = vone_s();
            auVar2._12_4_ = uVar28;
            auVar2._8_4_ = puVar17[2];
            auVar2._4_4_ = puVar17[1];
            auVar2._0_4_ = *puVar17;
            auVar2 = vtfm4_q(*pauVar18,auVar2);
            auVar12._60_4_ = *(undefined4 *)(iVar15 + 0x8c);
            auVar12._56_4_ = *(undefined4 *)(iVar15 + 0x7c);
            auVar12._52_4_ = *(undefined4 *)(iVar15 + 0x6c);
            auVar12._48_4_ = *(undefined4 *)(iVar15 + 0x5c);
            auVar12._44_4_ = *(undefined4 *)(iVar15 + 0x88);
            auVar12._40_4_ = *(undefined4 *)(iVar15 + 0x78);
            auVar12._36_4_ = *(undefined4 *)(iVar15 + 0x68);
            auVar12._32_4_ = *(undefined4 *)(iVar15 + 0x58);
            auVar12._28_4_ = *(undefined4 *)(iVar15 + 0x84);
            auVar12._24_4_ = *(undefined4 *)(iVar15 + 0x74);
            auVar12._20_4_ = *(undefined4 *)(iVar15 + 100);
            auVar12._16_4_ = *(undefined4 *)(iVar15 + 0x54);
            auVar12._12_4_ = *(undefined4 *)(iVar15 + 0x80);
            auVar12._8_4_ = *(undefined4 *)(iVar15 + 0x70);
            auVar12._4_4_ = *(undefined4 *)(iVar15 + 0x60);
            auVar12._0_4_ = *(undefined4 *)(iVar15 + 0x50);
            auVar13._60_4_ = *(undefined4 *)(iVar15 + 0x4c);
            auVar13._56_4_ = *(undefined4 *)(iVar15 + 0x3c);
            auVar13._52_4_ = *(undefined4 *)(iVar15 + 0x2c);
            auVar13._48_4_ = *(undefined4 *)(iVar15 + 0x1c);
            auVar13._44_4_ = *(undefined4 *)(iVar15 + 0x48);
            auVar13._40_4_ = *(undefined4 *)(iVar15 + 0x38);
            auVar13._36_4_ = *(undefined4 *)(iVar15 + 0x28);
            auVar13._32_4_ = *(undefined4 *)(iVar15 + 0x18);
            auVar13._28_4_ = *(undefined4 *)(iVar15 + 0x44);
            auVar13._24_4_ = *(undefined4 *)(iVar15 + 0x34);
            auVar13._20_4_ = *(undefined4 *)(iVar15 + 0x24);
            auVar13._16_4_ = *(undefined4 *)(iVar15 + 0x14);
            auVar13._12_4_ = *(undefined4 *)(iVar15 + 0x40);
            auVar13._8_4_ = *(undefined4 *)(iVar15 + 0x30);
            auVar13._4_4_ = *(undefined4 *)(iVar15 + 0x20);
            auVar13._0_4_ = *(undefined4 *)*pauVar18;
            auVar4 = vmmul_q(auVar12,auVar13);
            *puVar17 = auVar2._0_4_;
            puVar17[1] = auVar2._4_4_;
            puVar17[2] = auVar2._8_4_;
            puVar17[3] = auVar2._12_4_;
            *(int *)*pauVar18 = auVar4._0_4_;
            *(int *)(iVar15 + 0x14) = auVar4._16_4_;
            *(int *)(iVar15 + 0x18) = auVar4._32_4_;
            *(int *)(iVar15 + 0x1c) = auVar4._48_4_;
            *(int *)(iVar15 + 0x20) = auVar4._4_4_;
            *(int *)(iVar15 + 0x24) = auVar4._20_4_;
            *(int *)(iVar15 + 0x28) = auVar4._36_4_;
            *(int *)(iVar15 + 0x2c) = auVar4._52_4_;
            *(int *)(iVar15 + 0x30) = auVar4._8_4_;
            *(int *)(iVar15 + 0x34) = auVar4._24_4_;
            *(int *)(iVar15 + 0x38) = auVar4._40_4_;
            *(int *)(iVar15 + 0x3c) = auVar4._56_4_;
            *(int *)(iVar15 + 0x40) = auVar4._12_4_;
            *(int *)(iVar15 + 0x44) = auVar4._28_4_;
            *(int *)(iVar15 + 0x48) = auVar4._44_4_;
            *(int *)(iVar15 + 0x4c) = auVar4._60_4_;
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar20);
    }
  }
  return;
code_r0x089791b8:
  uVar21 = uVar21 + 1;
  if (uVar20 <= uVar21) goto LAB_089796a8;
  goto LAB_0897919c;
}

