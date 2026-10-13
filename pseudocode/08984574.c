/* Entry 0x08984574 | file offset 0x0018154C | FUN_08984574 | bytes 1484 */

void FUN_08984574(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined1 auStack_d0 [12];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  float local_50;
  float local_4c;
  uint local_44;
  uint local_40;
  uint local_3c;
  
  fVar17 = *(float *)(param_2 + 8);
  fVar16 = *(float *)(param_2 + 0xc);
  fVar20 = *(float *)(param_1 + 0xc) + fVar17 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
  if (fVar20 < 1.0) {
    *(float *)(param_1 + 0xc) = fVar20;
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)fVar20;
    fVar19 = (float)(int)uVar18;
    if ((int)uVar18 < 0) {
      fVar19 = fVar19 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0xc) = fVar20 - fVar19;
    *(float *)(param_1 + 0xc) = (fVar20 - fVar19) - fVar16 * fVar17;
  }
  if (uVar18 != 0) {
    local_44 = 0;
    iVar11 = **(int **)(param_1 + 4);
    uVar12 = (*(int **)(param_1 + 4))[1];
    uVar13 = 0;
    if (uVar18 != 0) {
      do {
        if (uVar13 < uVar12) {
LAB_08984660:
          if (*(char *)(iVar11 + uVar13 * 0x50 + 0x38) != '\0') goto code_r0x0898467c;
          for (local_4c = *(float *)(param_2 + 0x10) * 3.1415927 * 0.0055555557 * 0.5;
              local_4c < -3.1415927; local_4c = local_4c + 6.2831855) {
          }
          for (; 3.1415927 < local_4c; local_4c = local_4c - 6.2831855) {
          }
          iVar10 = DAT_089da120 * 0x343fd + 0x269ec3;
          local_50 = ((float)(iVar10 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * local_4c - local_4c;
          uVar21 = vcst_s(5);
          uVar21 = vmul_s(local_50,uVar21);
          auVar4 = vrot_q(uVar21,1,2,0,0);
          auVar5 = vrot_q(uVar21,3,1,0,0);
          auVar1 = vidt_q();
          auVar2 = vidt_q();
          auVar3._60_4_ = auVar2._12_4_;
          auVar3._56_4_ = auVar1._12_4_;
          auVar3._52_4_ = auVar5._12_4_;
          auVar3._48_4_ = auVar4._12_4_;
          auVar3._44_4_ = auVar2._8_4_;
          auVar3._40_4_ = auVar1._8_4_;
          auVar3._36_4_ = auVar5._8_4_;
          auVar3._32_4_ = auVar4._8_4_;
          auVar3._28_4_ = auVar2._4_4_;
          auVar3._24_4_ = auVar1._4_4_;
          auVar3._20_4_ = auVar5._4_4_;
          auVar3._16_4_ = auVar4._4_4_;
          auVar3._12_4_ = auVar2._0_4_;
          auVar3._8_4_ = auVar1._0_4_;
          auVar3._4_4_ = auVar5._0_4_;
          auVar3._0_4_ = auVar4._0_4_;
          auVar6._60_4_ = DAT_089da3ac;
          auVar6._56_4_ = DAT_089da39c;
          auVar6._52_4_ = DAT_089da38c;
          auVar6._48_4_ = DAT_089da37c;
          auVar6._44_4_ = DAT_089da3a8;
          auVar6._40_4_ = DAT_089da398;
          auVar6._36_4_ = DAT_089da388;
          auVar6._32_4_ = DAT_089da378;
          auVar6._28_4_ = DAT_089da3a4;
          auVar6._24_4_ = DAT_089da394;
          auVar6._20_4_ = DAT_089da384;
          auVar6._16_4_ = DAT_089da374;
          auVar6._12_4_ = DAT_089da3a0;
          auVar6._8_4_ = DAT_089da390;
          auVar6._4_4_ = DAT_089da380;
          auVar6._0_4_ = DAT_089da370;
          auVar3 = vmmul_q(auVar3,auVar6);
          DAT_089da120 = iVar10 * 0x343fd + 0x269ec3;
          local_4c = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * local_4c - local_4c;
          uVar21 = vcst_s(5);
          uVar21 = vmul_s(local_4c,uVar21);
          auVar1 = vidt_q();
          auVar4 = vrot_q(uVar21,0,1,2,0);
          auVar5 = vrot_q(uVar21,0,3,1,0);
          auVar2 = vidt_q();
          auVar7._60_4_ = auVar2._12_4_;
          auVar7._56_4_ = auVar5._12_4_;
          auVar7._52_4_ = auVar4._12_4_;
          auVar7._48_4_ = auVar1._12_4_;
          auVar7._44_4_ = auVar2._8_4_;
          auVar7._40_4_ = auVar5._8_4_;
          auVar7._36_4_ = auVar4._8_4_;
          auVar7._32_4_ = auVar1._8_4_;
          auVar7._28_4_ = auVar2._4_4_;
          auVar7._24_4_ = auVar5._4_4_;
          auVar7._20_4_ = auVar4._4_4_;
          auVar7._16_4_ = auVar1._4_4_;
          auVar7._12_4_ = auVar2._0_4_;
          auVar7._8_4_ = auVar5._0_4_;
          auVar7._4_4_ = auVar4._0_4_;
          auVar7._0_4_ = auVar1._0_4_;
          auVar3 = vmmul_q(auVar7,auVar3);
          local_c0 = auVar3._0_4_;
          local_b0 = auVar3._4_4_;
          local_a0 = auVar3._8_4_;
          local_90 = auVar3._12_4_;
          uStack_bc = auVar3._16_4_;
          uStack_ac = auVar3._20_4_;
          uStack_9c = auVar3._24_4_;
          uStack_8c = auVar3._28_4_;
          uStack_b8 = auVar3._32_4_;
          uStack_a8 = auVar3._36_4_;
          uStack_98 = auVar3._40_4_;
          uStack_88 = auVar3._44_4_;
          uStack_b4 = auVar3._48_4_;
          uStack_a4 = auVar3._52_4_;
          uStack_94 = auVar3._56_4_;
          uStack_84 = auVar3._60_4_;
          local_80 = 0;
          local_7c = 0x3f800000;
          local_78 = 0;
          local_74 = 0x3f800000;
          puVar14 = (undefined4 *)(iVar11 + uVar13 * 0x50);
          auVar8._4_4_ = uStack_bc;
          auVar8._0_4_ = local_c0;
          auVar8._8_4_ = uStack_b8;
          auVar8._12_4_ = uStack_b4;
          auVar8._16_4_ = local_b0;
          auVar8._20_4_ = uStack_ac;
          auVar8._24_4_ = uStack_a8;
          auVar8._28_4_ = uStack_a4;
          auVar8._32_4_ = local_a0;
          auVar8._36_4_ = uStack_9c;
          auVar8._40_4_ = uStack_98;
          auVar8._44_4_ = uStack_94;
          auVar8._48_4_ = local_90;
          auVar8._52_4_ = uStack_8c;
          auVar8._56_4_ = uStack_88;
          auVar8._60_4_ = uStack_84;
          uVar22 = vone_s();
          auVar1._4_8_ = (ulonglong)uVar22 << 0x20;
          auVar1._0_4_ = 0x3f800000;
          auVar1._12_4_ = 0;
          auVar1 = vtfm4_q(auVar8,auVar1 << 0x20);
          *puVar14 = auVar1._0_4_;
          puVar14[1] = auVar1._4_4_;
          puVar14[2] = auVar1._8_4_;
          puVar14[3] = auVar1._12_4_;
          iVar10 = iVar11 + uVar13 * 0x50;
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          local_40 = uVar13;
          local_3c = uVar12;
          FUN_089a3a44(*(float *)(param_2 + 0x14) +
                       (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                        *(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x18)),iVar10 + 0x10,
                       puVar14);
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          FUN_089a3a44(*(float *)(param_2 + 0x1c) +
                       (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                        *(float *)(param_2 + 0x20) - *(float *)(param_2 + 0x20)),puVar14,puVar14);
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          FUN_089a3a44((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0,auStack_d0,puVar14);
          local_c4 = 0x3f800000;
          FUN_089a3868(iVar10 + 0x20,auStack_d0);
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          sVar9 = (short)*(undefined4 *)(param_2 + 0x28) +
                  (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                               (float)*(int *)(param_2 + 0x2c) - (float)*(int *)(param_2 + 0x2c));
          *(short *)(iVar10 + 0x32) = sVar9;
          *(short *)(iVar10 + 0x30) = sVar9;
          *(undefined4 *)(iVar10 + 0x34) = 0x3f800000;
          *(undefined1 *)(iVar10 + 0x38) = 1;
          *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
          FUN_089a3a44(0x3c000000,auStack_70,*(undefined4 *)(param_2 + 0x30));
          FUN_089a3a44(0x3c000000,auStack_60,*(undefined4 *)(param_2 + 0x34));
          FUN_089a38e0(auStack_60,auStack_60,auStack_70);
          uVar12 = local_3c;
          uVar13 = local_40;
          uVar22 = local_44;
          fVar16 = (float)*(int *)(param_1 + 8);
          if (*(int *)(param_1 + 8) < 0) {
            fVar16 = fVar16 + 4.2949673e+09;
          }
          FUN_089a3a44(1.0 / fVar16,auStack_60,auStack_60);
          iVar10 = *(int *)(iVar11 + uVar13 * 0x50 + 0x40);
          iVar15 = iVar10 + *(int *)(param_1 + 8) * 0x20;
          local_44 = uVar22;
          for (; iVar10 != iVar15; iVar10 = iVar10 + 0x20) {
            FUN_089a3868(iVar10 + 0x10,auStack_d0);
            FUN_089a3868(iVar10,auStack_70);
            FUN_089a38a8(auStack_70,auStack_70,auStack_60);
          }
        }
LAB_08984af4:
        local_44 = local_44 + 1;
      } while (local_44 < uVar18);
    }
  }
  return;
code_r0x0898467c:
  uVar13 = uVar13 + 1;
  if (uVar12 <= uVar13) goto LAB_08984af4;
  goto LAB_08984660;
}

