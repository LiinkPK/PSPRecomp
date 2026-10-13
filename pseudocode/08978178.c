/* Entry 0x08978178 | file offset 0x00175150 | FUN_08978178 | bytes 2216 */

void FUN_08978178(undefined4 param_1,uint *param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  bool bVar20;
  undefined4 *puVar21;
  short sVar22;
  int iVar23;
  undefined1 (*pauVar24) [64];
  int iVar25;
  uint uVar26;
  uint uVar27;
  float *pfVar28;
  uint uVar29;
  int iVar30;
  float fVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar10 [16];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar19 [64];
  
  if ((*param_2 & 1) == 0) {
    bVar20 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar20 = true;
    }
  }
  else {
    bVar20 = true;
  }
  if (!bVar20) {
    fVar31 = *(float *)(param_3 + 0x28);
    iVar25 = *(int *)*param_4;
    uVar26 = ((int *)*param_4)[1];
    bVar1 = *(byte *)(param_3 + 0x33);
    fVar34 = (float)param_4[1] + fVar31 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar34 < 1.0) {
      param_4[1] = (int)fVar34;
      uVar32 = 0;
    }
    else {
      uVar32 = (uint)fVar34;
      fVar33 = (float)(int)uVar32;
      if ((int)uVar32 < 0) {
        fVar33 = fVar33 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar34 - fVar33);
      param_4[1] = (int)((fVar34 - fVar33) - (float)bVar1 * fVar31);
    }
    if (uVar32 != 0) {
      uVar29 = 0;
      uVar27 = 0;
      if (uVar32 != 0) {
        do {
          if (uVar27 < uVar26) {
LAB_0897829c:
            if (*(char *)(iVar25 + uVar27 * 0xe0 + 0xcc) != '\0') goto code_r0x089782b8;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar28 = (float *)(iVar25 + uVar27 * 0xe0);
            *pfVar28 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar28[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar28[2] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            FUN_089a3bc8(pfVar28,pfVar28);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                         *(float *)(param_3 + 0x24),pfVar28,pfVar28);
            iVar30 = iVar25 + uVar27 * 0xe0;
            FUN_089a3868(iVar30 + 0xb0,pfVar28);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            for (fVar31 = ((((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                            *(float *)(param_3 + 0x10) - *(float *)(param_3 + 0x10)) -
                          *(float *)(param_3 + 0xc)) * 3.1415927 * 0.0055555557; fVar31 < -3.1415927
                ; fVar31 = fVar31 + 6.2831855) {
            }
            for (; 3.1415927 < fVar31; fVar31 = fVar31 - 6.2831855) {
            }
            uVar40 = vcst_s(5);
            uVar40 = vmul_s(fVar31,uVar40);
            auVar6 = vrot_q(uVar40,1,0,3,0);
            auVar3 = vidt_q();
            auVar7 = vrot_q(uVar40,2,0,1,0);
            auVar4 = vidt_q();
            auVar5._60_4_ = auVar4._12_4_;
            auVar5._56_4_ = auVar7._12_4_;
            auVar5._52_4_ = auVar3._12_4_;
            auVar5._48_4_ = auVar6._12_4_;
            auVar5._44_4_ = auVar4._8_4_;
            auVar5._40_4_ = auVar7._8_4_;
            auVar5._36_4_ = auVar3._8_4_;
            auVar5._32_4_ = auVar6._8_4_;
            auVar5._28_4_ = auVar4._4_4_;
            auVar5._24_4_ = auVar7._4_4_;
            auVar5._20_4_ = auVar3._4_4_;
            auVar5._16_4_ = auVar6._4_4_;
            auVar5._12_4_ = auVar4._0_4_;
            auVar5._8_4_ = auVar7._0_4_;
            auVar5._4_4_ = auVar3._0_4_;
            auVar5._0_4_ = auVar6._0_4_;
            auVar12._60_4_ = DAT_089da3ac;
            auVar12._56_4_ = DAT_089da39c;
            auVar12._52_4_ = DAT_089da38c;
            auVar12._48_4_ = DAT_089da37c;
            auVar12._44_4_ = DAT_089da3a8;
            auVar12._40_4_ = DAT_089da398;
            auVar12._36_4_ = DAT_089da388;
            auVar12._32_4_ = DAT_089da378;
            auVar12._28_4_ = DAT_089da3a4;
            auVar12._24_4_ = DAT_089da394;
            auVar12._20_4_ = DAT_089da384;
            auVar12._16_4_ = DAT_089da374;
            auVar12._12_4_ = DAT_089da3a0;
            auVar12._8_4_ = DAT_089da390;
            auVar12._4_4_ = DAT_089da380;
            auVar12._0_4_ = DAT_089da370;
            auVar5 = vmmul_q(auVar5,auVar12);
            *(int *)(iVar30 + 0x10) = auVar5._0_4_;
            *(int *)(iVar30 + 0x14) = auVar5._16_4_;
            *(int *)(iVar30 + 0x18) = auVar5._32_4_;
            *(int *)(iVar30 + 0x1c) = auVar5._48_4_;
            *(int *)(iVar30 + 0x20) = auVar5._4_4_;
            *(int *)(iVar30 + 0x24) = auVar5._20_4_;
            *(int *)(iVar30 + 0x28) = auVar5._36_4_;
            *(int *)(iVar30 + 0x2c) = auVar5._52_4_;
            *(int *)(iVar30 + 0x30) = auVar5._8_4_;
            *(int *)(iVar30 + 0x34) = auVar5._24_4_;
            *(int *)(iVar30 + 0x38) = auVar5._40_4_;
            *(int *)(iVar30 + 0x3c) = auVar5._56_4_;
            *(int *)(iVar30 + 0x40) = auVar5._12_4_;
            *(int *)(iVar30 + 0x44) = auVar5._28_4_;
            *(int *)(iVar30 + 0x48) = auVar5._44_4_;
            *(int *)(iVar30 + 0x4c) = auVar5._60_4_;
            iVar30 = iVar25 + uVar27 * 0xe0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            for (fVar31 = ((((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                            *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x18)) -
                          *(float *)(param_3 + 0x14)) * 3.1415927 * 0.0055555557;
                fVar31 < -3.1415927; fVar31 = fVar31 + 6.2831855) {
            }
            for (; 3.1415927 < fVar31; fVar31 = fVar31 - 6.2831855) {
            }
            uVar40 = vcst_s(5);
            uVar40 = vmul_s(fVar31,uVar40);
            auVar6 = vrot_q(uVar40,1,0,3,0);
            auVar3 = vidt_q();
            auVar7 = vrot_q(uVar40,2,0,1,0);
            auVar4 = vidt_q();
            auVar13._60_4_ = auVar4._12_4_;
            auVar13._56_4_ = auVar7._12_4_;
            auVar13._52_4_ = auVar3._12_4_;
            auVar13._48_4_ = auVar6._12_4_;
            auVar13._44_4_ = auVar4._8_4_;
            auVar13._40_4_ = auVar7._8_4_;
            auVar13._36_4_ = auVar3._8_4_;
            auVar13._32_4_ = auVar6._8_4_;
            auVar13._28_4_ = auVar4._4_4_;
            auVar13._24_4_ = auVar7._4_4_;
            auVar13._20_4_ = auVar3._4_4_;
            auVar13._16_4_ = auVar6._4_4_;
            auVar13._12_4_ = auVar4._0_4_;
            auVar13._8_4_ = auVar7._0_4_;
            auVar13._4_4_ = auVar3._0_4_;
            auVar13._0_4_ = auVar6._0_4_;
            auVar14._60_4_ = DAT_089da3ac;
            auVar14._56_4_ = DAT_089da39c;
            auVar14._52_4_ = DAT_089da38c;
            auVar14._48_4_ = DAT_089da37c;
            auVar14._44_4_ = DAT_089da3a8;
            auVar14._40_4_ = DAT_089da398;
            auVar14._36_4_ = DAT_089da388;
            auVar14._32_4_ = DAT_089da378;
            auVar14._28_4_ = DAT_089da3a4;
            auVar14._24_4_ = DAT_089da394;
            auVar14._20_4_ = DAT_089da384;
            auVar14._16_4_ = DAT_089da374;
            auVar14._12_4_ = DAT_089da3a0;
            auVar14._8_4_ = DAT_089da390;
            auVar14._4_4_ = DAT_089da380;
            auVar14._0_4_ = DAT_089da370;
            auVar5 = vmmul_q(auVar13,auVar14);
            *(int *)(iVar30 + 0x50) = auVar5._0_4_;
            *(int *)(iVar30 + 0x54) = auVar5._16_4_;
            *(int *)(iVar30 + 0x58) = auVar5._32_4_;
            *(int *)(iVar30 + 0x5c) = auVar5._48_4_;
            *(int *)(iVar30 + 0x60) = auVar5._4_4_;
            *(int *)(iVar30 + 100) = auVar5._20_4_;
            *(int *)(iVar30 + 0x68) = auVar5._36_4_;
            *(int *)(iVar30 + 0x6c) = auVar5._52_4_;
            *(int *)(iVar30 + 0x70) = auVar5._8_4_;
            *(int *)(iVar30 + 0x74) = auVar5._24_4_;
            *(int *)(iVar30 + 0x78) = auVar5._40_4_;
            *(int *)(iVar30 + 0x7c) = auVar5._56_4_;
            *(int *)(iVar30 + 0x80) = auVar5._12_4_;
            *(int *)(iVar30 + 0x84) = auVar5._28_4_;
            *(int *)(iVar30 + 0x88) = auVar5._44_4_;
            *(int *)(iVar30 + 0x8c) = auVar5._60_4_;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar30 = iVar25 + uVar27 * 0xe0;
            *(short *)(iVar30 + 0xc0) =
                 *(short *)(param_3 + 0x2e) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 0x30) -
                             (float)*(ushort *)(param_3 + 0x30));
            *(ushort *)(iVar30 + 0xc2) = *(ushort *)(param_3 + 0x2e) / 2;
            *(undefined4 *)(iVar30 + 0xc4) = 0x3f800000;
            *(float *)(iVar30 + 200) = 2.0 / (float)*(ushort *)(param_3 + 0x2e);
            FUN_089a3868(iVar30 + 0x90,&DAT_089da360);
            FUN_089a3868(iVar30 + 0xa0,&DAT_089da360);
            *(undefined4 *)(iVar30 + 0xd0) = 1;
            *(undefined1 *)(iVar30 + 0xcc) = 1;
          }
LAB_08978790:
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar32);
      }
    }
    uVar32 = 0;
    if (uVar26 != 0) {
      do {
        if (*(char *)(iVar25 + uVar32 * 0xe0 + 0xcc) != '\0') {
          iVar30 = iVar25 + uVar32 * 0xe0;
          sVar22 = *(short *)(iVar30 + 0xc0) + -1;
          *(short *)(iVar30 + 0xc0) = sVar22;
          if (sVar22 == 0) {
            *(undefined1 *)(iVar25 + uVar32 * 0xe0 + 0xcc) = 0;
          }
          else {
            iVar30 = iVar25 + uVar32 * 0xe0;
            if (*(ushort *)(iVar30 + 0xc0) < *(ushort *)(iVar30 + 0xc2)) {
              iVar30 = iVar25 + uVar32 * 0xe0;
              fVar31 = *(float *)(iVar30 + 0xc4) - *(float *)(iVar30 + 200);
              *(float *)(iVar30 + 0xc4) = fVar31;
              if (fVar31 < 0.0) {
                *(undefined4 *)(iVar25 + uVar32 * 0xe0 + 0xc4) = 0;
              }
            }
            iVar23 = iVar25 + uVar32 * 0xe0;
            uVar40 = *(undefined4 *)(iVar23 + 0xb0);
            uVar36 = *(undefined4 *)(iVar23 + 0x94);
            uVar37 = *(undefined4 *)(iVar23 + 0x98);
            uVar39 = *(undefined4 *)(iVar23 + 0x9c);
            pauVar24 = (undefined1 (*) [64])(iVar23 + 0x10);
            auVar2._4_4_ = DAT_089da3a4;
            auVar2._0_4_ = DAT_089da3a0;
            auVar2._8_4_ = DAT_089da3a8;
            auVar2 = vadd_t(auVar2,*(undefined1 (*) [12])(iVar23 + 0x90));
            uVar42 = vmov_s(uVar39);
            auVar15._60_4_ = *(undefined4 *)(iVar23 + 0x4c);
            auVar15._56_4_ = *(undefined4 *)(iVar23 + 0x3c);
            auVar15._52_4_ = *(undefined4 *)(iVar23 + 0x2c);
            auVar15._48_4_ = *(undefined4 *)(iVar23 + 0x1c);
            auVar15._44_4_ = *(undefined4 *)(iVar23 + 0x48);
            auVar15._40_4_ = *(undefined4 *)(iVar23 + 0x38);
            auVar15._36_4_ = *(undefined4 *)(iVar23 + 0x28);
            auVar15._32_4_ = *(undefined4 *)(iVar23 + 0x18);
            auVar15._28_4_ = *(undefined4 *)(iVar23 + 0x44);
            auVar15._24_4_ = *(undefined4 *)(iVar23 + 0x34);
            auVar15._20_4_ = *(undefined4 *)(iVar23 + 0x24);
            auVar15._16_4_ = *(undefined4 *)(iVar23 + 0x14);
            auVar15._12_4_ = *(undefined4 *)(iVar23 + 0x40);
            auVar15._8_4_ = *(undefined4 *)(iVar23 + 0x30);
            auVar15._4_4_ = *(undefined4 *)(iVar23 + 0x20);
            auVar15._0_4_ = *(undefined4 *)*pauVar24;
            auVar16._60_4_ = uVar42;
            auVar16._56_4_ = DAT_089da39c;
            auVar16._52_4_ = DAT_089da38c;
            auVar16._48_4_ = DAT_089da37c;
            auVar16._44_4_ = auVar2._8_4_;
            auVar16._40_4_ = DAT_089da398;
            auVar16._36_4_ = DAT_089da388;
            auVar16._32_4_ = DAT_089da378;
            auVar16._28_4_ = auVar2._4_4_;
            auVar16._24_4_ = DAT_089da394;
            auVar16._20_4_ = DAT_089da384;
            auVar16._16_4_ = DAT_089da374;
            auVar16._12_4_ = auVar2._0_4_;
            auVar16._8_4_ = DAT_089da390;
            auVar16._4_4_ = DAT_089da380;
            auVar16._0_4_ = DAT_089da370;
            auVar5 = vmmul_q(auVar15,auVar16);
            uVar42 = vone_s();
            auVar17._60_4_ = auVar5._60_4_;
            auVar17._56_4_ = auVar5._44_4_;
            auVar17._52_4_ = auVar5._28_4_;
            auVar17._48_4_ = auVar5._12_4_;
            auVar17._44_4_ = auVar5._56_4_;
            auVar17._40_4_ = auVar5._40_4_;
            auVar17._36_4_ = auVar5._24_4_;
            auVar17._32_4_ = auVar5._8_4_;
            auVar17._28_4_ = auVar5._52_4_;
            auVar17._24_4_ = auVar5._36_4_;
            auVar17._20_4_ = auVar5._20_4_;
            auVar17._16_4_ = auVar5._4_4_;
            auVar17._12_4_ = auVar5._48_4_;
            auVar17._8_4_ = auVar5._32_4_;
            auVar17._4_4_ = auVar5._16_4_;
            auVar17._0_4_ = auVar5._0_4_;
            auVar3._12_4_ = uVar42;
            auVar3._8_4_ = *(undefined4 *)(iVar23 + 0xb8);
            auVar3._4_4_ = *(undefined4 *)(iVar23 + 0xb4);
            auVar3._0_4_ = uVar40;
            auVar3 = vtfm4_q(auVar17,auVar3);
            auVar4._12_4_ = uVar42;
            auVar4._8_4_ = *(undefined4 *)(iVar23 + 0xb8);
            auVar4._4_4_ = *(undefined4 *)(iVar23 + 0xb4);
            auVar4._0_4_ = uVar40;
            auVar4 = vtfm4_q(*pauVar24,auVar4);
            auVar18._60_4_ = *(undefined4 *)(iVar23 + 0x8c);
            auVar18._56_4_ = *(undefined4 *)(iVar23 + 0x7c);
            auVar18._52_4_ = *(undefined4 *)(iVar23 + 0x6c);
            auVar18._48_4_ = *(undefined4 *)(iVar23 + 0x5c);
            auVar18._44_4_ = *(undefined4 *)(iVar23 + 0x88);
            auVar18._40_4_ = *(undefined4 *)(iVar23 + 0x78);
            auVar18._36_4_ = *(undefined4 *)(iVar23 + 0x68);
            auVar18._32_4_ = *(undefined4 *)(iVar23 + 0x58);
            auVar18._28_4_ = *(undefined4 *)(iVar23 + 0x84);
            auVar18._24_4_ = *(undefined4 *)(iVar23 + 0x74);
            auVar18._20_4_ = *(undefined4 *)(iVar23 + 100);
            auVar18._16_4_ = *(undefined4 *)(iVar23 + 0x54);
            auVar18._12_4_ = *(undefined4 *)(iVar23 + 0x80);
            auVar18._8_4_ = *(undefined4 *)(iVar23 + 0x70);
            auVar18._4_4_ = *(undefined4 *)(iVar23 + 0x60);
            auVar18._0_4_ = *(undefined4 *)(iVar23 + 0x50);
            auVar19._60_4_ = *(undefined4 *)(iVar23 + 0x4c);
            auVar19._56_4_ = *(undefined4 *)(iVar23 + 0x3c);
            auVar19._52_4_ = *(undefined4 *)(iVar23 + 0x2c);
            auVar19._48_4_ = *(undefined4 *)(iVar23 + 0x1c);
            auVar19._44_4_ = *(undefined4 *)(iVar23 + 0x48);
            auVar19._40_4_ = *(undefined4 *)(iVar23 + 0x38);
            auVar19._36_4_ = *(undefined4 *)(iVar23 + 0x28);
            auVar19._32_4_ = *(undefined4 *)(iVar23 + 0x18);
            auVar19._28_4_ = *(undefined4 *)(iVar23 + 0x44);
            auVar19._24_4_ = *(undefined4 *)(iVar23 + 0x34);
            auVar19._20_4_ = *(undefined4 *)(iVar23 + 0x24);
            auVar19._16_4_ = *(undefined4 *)(iVar23 + 0x14);
            auVar19._12_4_ = *(undefined4 *)(iVar23 + 0x40);
            auVar19._8_4_ = *(undefined4 *)(iVar23 + 0x30);
            auVar19._4_4_ = *(undefined4 *)(iVar23 + 0x20);
            auVar19._0_4_ = *(undefined4 *)*pauVar24;
            auVar5 = vmmul_q(auVar18,auVar19);
            puVar21 = (undefined4 *)(iVar25 + uVar32 * 0xe0);
            *puVar21 = auVar3._0_4_;
            puVar21[1] = auVar3._4_4_;
            puVar21[2] = auVar3._8_4_;
            puVar21[3] = auVar3._12_4_;
            *(undefined4 *)(iVar23 + 0xb0) = auVar4._0_4_;
            *(int *)(iVar23 + 0xb4) = auVar4._4_4_;
            *(int *)(iVar23 + 0xb8) = auVar4._8_4_;
            *(int *)(iVar23 + 0xbc) = auVar4._12_4_;
            *(int *)*pauVar24 = auVar5._0_4_;
            *(int *)(iVar23 + 0x14) = auVar5._16_4_;
            *(int *)(iVar23 + 0x18) = auVar5._32_4_;
            *(int *)(iVar23 + 0x1c) = auVar5._48_4_;
            *(int *)(iVar23 + 0x20) = auVar5._4_4_;
            *(int *)(iVar23 + 0x24) = auVar5._20_4_;
            *(int *)(iVar23 + 0x28) = auVar5._36_4_;
            *(int *)(iVar23 + 0x2c) = auVar5._52_4_;
            *(int *)(iVar23 + 0x30) = auVar5._8_4_;
            *(int *)(iVar23 + 0x34) = auVar5._24_4_;
            *(int *)(iVar23 + 0x38) = auVar5._40_4_;
            *(int *)(iVar23 + 0x3c) = auVar5._56_4_;
            *(int *)(iVar23 + 0x40) = auVar5._12_4_;
            *(int *)(iVar23 + 0x44) = auVar5._28_4_;
            *(int *)(iVar23 + 0x48) = auVar5._44_4_;
            *(int *)(iVar23 + 0x4c) = auVar5._60_4_;
            iVar30 = *(int *)(iVar23 + 0xd0) + -1;
            *(int *)(iVar23 + 0xd0) = iVar30;
            if (iVar30 == 0) {
              *(uint *)(iVar25 + uVar32 * 0xe0 + 0xd0) = (uint)*(byte *)(param_3 + 0x32);
              uVar36 = 0x40400000;
              uVar37 = 0x40400000;
              uVar39 = 0x40400000;
              auVar7._8_4_ = 0x40400000;
              auVar7._0_8_ = 0x4040000040400000;
              auVar7._12_4_ = 0x40400000;
              auVar3 = vrndf2_q();
              auVar3 = vsub_q(auVar3,auVar7);
              auVar2 = auVar3._0_12_;
              uVar40 = vdot_t(auVar2,auVar2);
              uVar40 = vsqrt_s(uVar40);
              uVar42 = vmov_s(uVar40);
              uVar38 = vmov_s(uVar40);
              auVar8._8_4_ = uVar38;
              auVar8._4_4_ = uVar42;
              auVar8._0_4_ = uVar40;
              auVar2 = vdiv_t(auVar2,auVar8);
              uVar40 = vzero_s();
              auVar6._12_4_ = uVar40;
              auVar6._8_4_ = auVar2._8_4_;
              auVar6._4_4_ = auVar2._4_4_;
              auVar6._0_4_ = auVar2._0_4_;
              auVar3 = vscl_q(auVar6,*(undefined4 *)(param_3 + 0x1c));
              uVar40 = auVar3._0_4_;
              uVar42 = auVar3._4_4_;
              uVar38 = auVar3._8_4_;
              uVar41 = auVar3._12_4_;
            }
            else {
              iVar30 = iVar25 + uVar32 * 0xe0;
              uVar40 = *(undefined4 *)(iVar30 + 0xa0);
              uVar42 = *(undefined4 *)(iVar30 + 0xa4);
              uVar38 = *(undefined4 *)(iVar30 + 0xa8);
              uVar41 = *(undefined4 *)(iVar30 + 0xac);
            }
            iVar30 = iVar25 + uVar32 * 0xe0;
            uVar35 = *(undefined4 *)(param_3 + 0x20);
            auVar9._12_4_ = uVar41;
            auVar9._8_4_ = uVar38;
            auVar9._4_4_ = uVar42;
            auVar9._0_4_ = uVar40;
            auVar10._12_4_ = uVar39;
            auVar10._8_4_ = uVar37;
            auVar10._4_4_ = uVar36;
            auVar10._0_4_ = uVar35;
            auVar3 = vsub_q(auVar9,auVar10);
            auVar3 = vscl_q(auVar3,uVar35);
            auVar11._12_4_ = uVar39;
            auVar11._8_4_ = uVar37;
            auVar11._4_4_ = uVar36;
            auVar11._0_4_ = uVar35;
            auVar3 = vadd_q(auVar11,auVar3);
            *(int *)(iVar30 + 0x90) = auVar3._0_4_;
            *(int *)(iVar30 + 0x94) = auVar3._4_4_;
            *(int *)(iVar30 + 0x98) = auVar3._8_4_;
            *(int *)(iVar30 + 0x9c) = auVar3._12_4_;
            *(undefined4 *)(iVar30 + 0xa0) = uVar40;
            *(undefined4 *)(iVar30 + 0xa4) = uVar42;
            *(undefined4 *)(iVar30 + 0xa8) = uVar38;
            *(undefined4 *)(iVar30 + 0xac) = uVar41;
          }
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar26);
    }
  }
  return;
code_r0x089782b8:
  uVar27 = uVar27 + 1;
  if (uVar26 <= uVar27) goto LAB_08978790;
  goto LAB_0897829c;
}

