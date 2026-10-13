/* Entry 0x08957344 | file offset 0x0015431C | FUN_08957344 | bytes 6764 */

void FUN_08957344(undefined4 param_1,int param_2,float *param_3,int *param_4)

{
  byte bVar1;
  short sVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [36];
  undefined1 auVar8 [64];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [36];
  undefined1 auVar12 [36];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 (*pauVar32) [12];
  undefined4 *puVar33;
  float *pfVar34;
  uint uVar35;
  int iVar36;
  int *piVar37;
  undefined1 uVar38;
  int iVar39;
  int iVar40;
  float *pfVar41;
  float fVar42;
  float fVar43;
  int iVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  int local_1a0 [4];
  undefined4 local_190 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [72];
  undefined1 (*local_a8) [12];
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined1 (*local_98) [12];
  undefined1 (*local_94) [12];
  int local_90;
  int local_8c;
  int local_88;
  undefined4 *local_84;
  uint local_80;
  undefined4 *local_7c;
  int *local_78;
  float *local_74;
  float *local_70;
  int local_6c;
  float *local_68;
  float *local_64;
  float *local_60;
  float *local_5c;
  float *local_58;
  float *local_54;
  int *local_50;
  float local_4c;
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar23 [64];
  
  local_8c = *param_4;
  local_4c = *(float *)(*(int *)(param_2 + 0x88) + 0x160);
  local_9c = local_190;
  local_a8 = (undefined1 (*) [12])local_f0;
  if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
    local_7c = (undefined4 *)(*(int *)(param_2 + 0x88) + 0x50);
  }
  else {
    local_7c = *(undefined4 **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
  }
  if (local_8c == 0) {
    return;
  }
  if (local_4c == 0.0) {
    return;
  }
  local_6c = local_8c + 0x30;
  fVar42 = *(float *)(local_8c + 4);
  *(float *)(local_8c + 0x18) = *(float *)(local_8c + 0x18) + local_4c;
  local_88 = param_2;
  if (fVar42 <= 0.0) {
    if (fVar42 != 0.0) {
      fVar42 = param_3[0xf];
      goto LAB_08957484;
    }
  }
  else if (*(float *)(local_8c + 0x18) <= fVar42) {
    fVar42 = param_3[0xf];
LAB_08957484:
    local_84 = *(undefined4 **)(*(int *)(param_2 + 0x8c) + 0x50);
    bVar1 = *(byte *)(*(int *)(param_2 + 0x8c) + 0x58);
    fVar42 = fVar42 * 0.5 * local_4c * local_4c + param_3[0xb] * local_4c;
    param_4[2] = (int)fVar42;
    if (0.0 < fVar42) {
      fVar42 = (float)param_4[2] + (float)param_4[1];
      if (fVar42 < 1.0) {
        param_4[1] = (int)fVar42;
      }
      else {
        local_4c = local_4c / fVar42;
        iVar44 = (int)fVar42;
        param_4[1] = (int)(fVar42 - (float)iVar44);
        uVar35 = (uint)*(byte *)(param_3 + 0x3f);
        param_4[1] = (int)((fVar42 - (float)iVar44) -
                          (param_3[0xf] * 0.5 * (float)(uVar35 * uVar35) +
                          (float)param_4[2] * (float)uVar35));
        if (0 < iVar44) {
          local_80 = (uint)bVar1;
          local_70 = param_3 + 4;
          local_74 = param_3 + 0x3d;
          local_50 = param_4 + 3;
          local_54 = param_3 + 8;
          local_58 = param_3 + 0x26;
          local_5c = param_3 + 0x28;
          local_60 = param_3 + 0x2a;
          local_68 = param_3 + 0x14;
          local_64 = param_3 + 0x10;
          local_78 = param_4;
          do {
            puVar33 = local_9c;
            if ((*(byte *)((int)param_3 + 0xfd) < 100) &&
               (DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3,
               (int)(uint)*(byte *)((int)param_3 + 0xfd) <=
               (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 100.0))) {
              local_90 = iVar44 + -1;
              goto LAB_08958b10;
            }
            pfVar41 = (float *)(local_6c +
                               (((int)*(short *)(local_8c + 0x1e) + (int)*(short *)(local_8c + 0x20)
                                ) % (int)*(short *)(local_8c + 0x1c)) * 0xa0);
            if ((int)*(short *)(local_8c + 0x1c) <= (int)*(short *)(local_8c + 0x1e)) break;
            *(short *)(local_8c + 0x1e) = *(short *)(local_8c + 0x1e) + 1;
            *(undefined2 *)(pfVar41 + 0x26) = 0;
            fVar42 = local_4c * (float)iVar44 - 1.0;
            pfVar41[0x25] = fVar42;
            pfVar41[0x21] = fVar42;
            bVar1 = *(byte *)((int)param_3 + 0xfa);
            uVar38 = 0;
            if (bVar1 < 2) {
              uVar38 = 0;
              if (bVar1 != 0) {
                DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                uVar38 = 0x7f < (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 256.0);
              }
            }
            else if (bVar1 < 3) {
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              if (0x7f < (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 256.0)) {
                uVar38 = 2;
              }
            }
            else {
              uVar38 = 0;
              if (bVar1 < 4) {
                DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                iVar36 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 255.0);
                uVar38 = (undefined1)((int)(iVar36 + ((uint)(iVar36 >> 6) >> 0x1a)) >> 6);
              }
            }
            *(undefined1 *)((int)pfVar41 + 0x9a) = uVar38;
            switch(*(undefined1 *)((int)param_3 + 0xfe)) {
            case 0:
            case 2:
              iVar36 = DAT_089da120 * 0x343fd + 0x269ec3;
              local_110 = ((float)(iVar36 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_3 - *param_3;
              iVar36 = iVar36 * 0x343fd + 0x269ec3;
              local_10c = ((float)(iVar36 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] -
                          param_3[1];
              DAT_089da120 = iVar36 * 0x343fd + 0x269ec3;
              local_104 = 0.0;
              local_108 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[2] -
                          param_3[2];
              FUN_089571f4(local_88,local_84,&local_110,local_80,
                           *(undefined1 *)((int)param_3 + 0xfb),&local_110,&local_100);
              *pfVar41 = local_110;
              pfVar41[1] = local_10c;
              pfVar41[2] = local_108;
              pfVar41[3] = local_104;
              local_94 = (undefined1 (*) [12])(pfVar41 + 4);
              local_98 = (undefined1 (*) [12])(pfVar41 + 8);
              local_90 = iVar44 + -1;
              break;
            case 1:
            case 3:
              iVar36 = DAT_089da120 * 0x343fd + 0x269ec3;
              fVar42 = param_3[0x2c];
              local_100 = ((float)(iVar36 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar42 - fVar42;
              iVar36 = iVar36 * 0x343fd + 0x269ec3;
              local_fc = ((float)(iVar36 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar42 - fVar42;
              DAT_089da120 = iVar36 * 0x343fd + 0x269ec3;
              local_f8 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar42 - fVar42;
              goto LAB_089579fc;
            default:
              local_94 = (undefined1 (*) [12])(pfVar41 + 4);
              local_98 = (undefined1 (*) [12])(pfVar41 + 8);
              local_90 = iVar44 + -1;
              break;
            case 6:
            case 7:
              fVar42 = param_3[0x2c];
              local_100 = 0.0;
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              local_f8 = 0.0;
              local_fc = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar42 - fVar42;
LAB_089579fc:
              local_90 = iVar44 + -1;
              local_94 = (undefined1 (*) [12])(pfVar41 + 4);
              local_98 = (undefined1 (*) [12])(pfVar41 + 8);
              auVar8 = vmidt_q();
              *local_9c = auVar8._0_4_;
              puVar33[1] = auVar8._4_4_;
              puVar33[2] = auVar8._8_4_;
              puVar33[3] = auVar8._12_4_;
              puVar33[4] = auVar8._16_4_;
              puVar33[5] = auVar8._20_4_;
              puVar33[6] = auVar8._24_4_;
              puVar33[7] = auVar8._28_4_;
              puVar33[8] = auVar8._32_4_;
              puVar33[9] = auVar8._36_4_;
              puVar33[10] = auVar8._40_4_;
              puVar33[0xb] = auVar8._44_4_;
              puVar33[0xc] = auVar8._48_4_;
              puVar33[0xd] = auVar8._52_4_;
              puVar33[0xe] = auVar8._56_4_;
              puVar33[0xf] = auVar8._60_4_;
              local_f4 = 0x3c360b60;
              auVar3._4_4_ = local_fc;
              auVar3._0_4_ = local_100;
              auVar3._8_4_ = local_f8;
              auVar3 = vscl_t(auVar3,0x3c360b60);
              auVar9 = vrot_q(auVar3._8_4_,1,2,0,0);
              auVar10 = vrot_q(auVar3._8_4_,3,1,0,0);
              auVar5 = vidt_q();
              auVar6 = vidt_q();
              auVar13._60_4_ = auVar6._12_4_;
              auVar13._56_4_ = auVar5._12_4_;
              auVar13._52_4_ = auVar10._12_4_;
              auVar13._48_4_ = auVar9._12_4_;
              auVar13._44_4_ = auVar6._8_4_;
              auVar13._40_4_ = auVar5._8_4_;
              auVar13._36_4_ = auVar10._8_4_;
              auVar13._32_4_ = auVar9._8_4_;
              auVar13._28_4_ = auVar6._4_4_;
              auVar13._24_4_ = auVar5._4_4_;
              auVar13._20_4_ = auVar10._4_4_;
              auVar13._16_4_ = auVar9._4_4_;
              auVar13._12_4_ = auVar6._0_4_;
              auVar13._8_4_ = auVar5._0_4_;
              auVar13._4_4_ = auVar10._0_4_;
              auVar13._0_4_ = auVar9._0_4_;
              auVar8._60_4_ = puVar33[0xf];
              auVar8._56_4_ = puVar33[0xb];
              auVar8._52_4_ = puVar33[7];
              auVar8._48_4_ = puVar33[3];
              auVar8._44_4_ = puVar33[0xe];
              auVar8._40_4_ = puVar33[10];
              auVar8._36_4_ = puVar33[6];
              auVar8._32_4_ = puVar33[2];
              auVar8._28_4_ = puVar33[0xd];
              auVar8._24_4_ = puVar33[9];
              auVar8._20_4_ = puVar33[5];
              auVar8._16_4_ = puVar33[1];
              auVar8._12_4_ = puVar33[0xc];
              auVar8._8_4_ = puVar33[8];
              auVar8._4_4_ = puVar33[4];
              auVar8._0_4_ = *puVar33;
              auVar8 = vmmul_q(auVar13,auVar8);
              auVar9 = vrot_q(auVar3._4_4_,1,0,3,0);
              auVar5 = vidt_q();
              auVar10 = vrot_q(auVar3._4_4_,2,0,1,0);
              auVar6 = vidt_q();
              auVar14._60_4_ = auVar6._12_4_;
              auVar14._56_4_ = auVar10._12_4_;
              auVar14._52_4_ = auVar5._12_4_;
              auVar14._48_4_ = auVar9._12_4_;
              auVar14._44_4_ = auVar6._8_4_;
              auVar14._40_4_ = auVar10._8_4_;
              auVar14._36_4_ = auVar5._8_4_;
              auVar14._32_4_ = auVar9._8_4_;
              auVar14._28_4_ = auVar6._4_4_;
              auVar14._24_4_ = auVar10._4_4_;
              auVar14._20_4_ = auVar5._4_4_;
              auVar14._16_4_ = auVar9._4_4_;
              auVar14._12_4_ = auVar6._0_4_;
              auVar14._8_4_ = auVar10._0_4_;
              auVar14._4_4_ = auVar5._0_4_;
              auVar14._0_4_ = auVar9._0_4_;
              auVar8 = vmmul_q(auVar14,auVar8);
              auVar5 = vidt_q();
              auVar9 = vrot_q(auVar3._0_4_,0,1,2,0);
              auVar10 = vrot_q(auVar3._0_4_,0,3,1,0);
              auVar6 = vidt_q();
              auVar15._60_4_ = auVar6._12_4_;
              auVar15._56_4_ = auVar10._12_4_;
              auVar15._52_4_ = auVar9._12_4_;
              auVar15._48_4_ = auVar5._12_4_;
              auVar15._44_4_ = auVar6._8_4_;
              auVar15._40_4_ = auVar10._8_4_;
              auVar15._36_4_ = auVar9._8_4_;
              auVar15._32_4_ = auVar5._8_4_;
              auVar15._28_4_ = auVar6._4_4_;
              auVar15._24_4_ = auVar10._4_4_;
              auVar15._20_4_ = auVar9._4_4_;
              auVar15._16_4_ = auVar5._4_4_;
              auVar15._12_4_ = auVar6._0_4_;
              auVar15._8_4_ = auVar10._0_4_;
              auVar15._4_4_ = auVar9._0_4_;
              auVar15._0_4_ = auVar5._0_4_;
              auVar8 = vmmul_q(auVar15,auVar8);
              *puVar33 = auVar8._0_4_;
              puVar33[1] = auVar8._16_4_;
              puVar33[2] = auVar8._32_4_;
              puVar33[3] = auVar8._48_4_;
              puVar33[4] = auVar8._4_4_;
              puVar33[5] = auVar8._20_4_;
              puVar33[6] = auVar8._36_4_;
              puVar33[7] = auVar8._52_4_;
              puVar33[8] = auVar8._8_4_;
              puVar33[9] = auVar8._24_4_;
              puVar33[10] = auVar8._40_4_;
              puVar33[0xb] = auVar8._56_4_;
              puVar33[0xc] = auVar8._12_4_;
              puVar33[0xd] = auVar8._28_4_;
              puVar33[0xe] = auVar8._44_4_;
              puVar33[0xf] = auVar8._60_4_;
              FUN_08935828(&local_110,0,0x10);
              FUN_08935524(&local_100,local_70,0xc);
              if (*(char *)((int)param_3 + 0xfb) == '\a') {
                local_fc = -local_fc;
                local_f8 = -local_f8;
              }
              if ((local_100 == 0.0) && (local_fc == 0.0)) {
                local_100 = 1e-06;
              }
              FUN_08956cc0(&local_150,&local_110,&local_100);
              auVar16._60_4_ = uStack_114;
              auVar16._56_4_ = uStack_124;
              auVar16._52_4_ = uStack_134;
              auVar16._48_4_ = uStack_144;
              auVar16._44_4_ = uStack_118;
              auVar16._40_4_ = uStack_128;
              auVar16._36_4_ = uStack_138;
              auVar16._32_4_ = uStack_148;
              auVar16._28_4_ = uStack_11c;
              auVar16._24_4_ = uStack_12c;
              auVar16._20_4_ = uStack_13c;
              auVar16._16_4_ = uStack_14c;
              auVar16._12_4_ = local_120;
              auVar16._8_4_ = local_130;
              auVar16._4_4_ = local_140;
              auVar16._0_4_ = local_150;
              auVar17._60_4_ = local_9c[0xf];
              auVar17._56_4_ = local_9c[0xb];
              auVar17._52_4_ = local_9c[7];
              auVar17._48_4_ = local_9c[3];
              auVar17._44_4_ = local_9c[0xe];
              auVar17._40_4_ = local_9c[10];
              auVar17._36_4_ = local_9c[6];
              auVar17._32_4_ = local_9c[2];
              auVar17._28_4_ = local_9c[0xd];
              auVar17._24_4_ = local_9c[9];
              auVar17._20_4_ = local_9c[5];
              auVar17._16_4_ = local_9c[1];
              auVar17._12_4_ = local_9c[0xc];
              auVar17._8_4_ = local_9c[8];
              auVar17._4_4_ = local_9c[4];
              auVar17._0_4_ = *local_9c;
              auVar8 = vmmul_q(auVar16,auVar17);
              local_150 = auVar8._0_4_;
              local_140 = auVar8._4_4_;
              local_130 = auVar8._8_4_;
              local_120 = auVar8._12_4_;
              uStack_14c = auVar8._16_4_;
              uStack_13c = auVar8._20_4_;
              uStack_12c = auVar8._24_4_;
              uStack_11c = auVar8._28_4_;
              uStack_148 = auVar8._32_4_;
              uStack_138 = auVar8._36_4_;
              uStack_128 = auVar8._40_4_;
              uStack_118 = auVar8._44_4_;
              uStack_144 = auVar8._48_4_;
              uStack_134 = auVar8._52_4_;
              uStack_124 = auVar8._56_4_;
              uStack_114 = auVar8._60_4_;
              if (*(char *)(param_3 + 0x40) == '\0') {
                DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                fVar42 = *param_3 * 0.5;
                local_108 = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar42 -
                            fVar42) + fVar42;
              }
              else if (*(byte *)((int)param_3 + 0x101) == 0) {
                DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                local_108 = *param_3 -
                            *param_3 *
                            ((float)*(byte *)((int)param_3 + 0x102) / 100.0) *
                            ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0);
              }
              else {
                local_108 = fVar42;
                if (*(byte *)((int)param_3 + 0x101) < 2) {
                  DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                  local_108 = *param_3 *
                              ((float)*(byte *)((int)param_3 + 0x102) / 100.0) *
                              ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0);
                }
              }
              auVar24._4_4_ = uStack_14c;
              auVar24._0_4_ = local_150;
              auVar24._8_4_ = uStack_148;
              auVar24._12_4_ = uStack_144;
              auVar24._16_4_ = local_140;
              auVar24._20_4_ = uStack_13c;
              auVar24._24_4_ = uStack_138;
              auVar24._28_4_ = uStack_134;
              auVar24._32_4_ = local_130;
              auVar24._36_4_ = uStack_12c;
              auVar24._40_4_ = uStack_128;
              auVar24._44_4_ = uStack_124;
              auVar24._48_4_ = local_120;
              auVar24._52_4_ = uStack_11c;
              auVar24._56_4_ = uStack_118;
              auVar24._60_4_ = uStack_114;
              uVar46 = vone_s();
              auVar5._4_4_ = uVar46;
              auVar5._0_4_ = local_108;
              auVar5._8_8_ = 0;
              auVar5 = vtfm4_q(auVar24,auVar5 << 0x40);
              local_110 = auVar5._0_4_;
              local_10c = auVar5._4_4_;
              local_108 = auVar5._8_4_;
              local_104 = auVar5._12_4_;
              FUN_089571f4(local_88,local_84,&local_110,local_80,
                           *(undefined1 *)((int)param_3 + 0xfb),&local_110,&local_100);
              *pfVar41 = local_110;
              pfVar41[1] = local_10c;
              pfVar41[2] = local_108;
              pfVar41[3] = local_104;
              pfVar41[6] = 0.0;
              goto LAB_08957f80;
            case 8:
            case 9:
              if (*(short *)(param_3 + 0x3d) < 0) {
                iVar36 = 0;
              }
              else if (*(int *)(*(int *)(*(int *)(local_88 + 0x88) + 0x1c8) + 0x34) == 0) {
                iVar36 = 0;
              }
              else {
                iVar36 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(local_88 + 0x88) + 0x1c8) +
                                                   0x34) + *(short *)(param_3 + 0x3d) * 4) + 0x10);
              }
              local_94 = (undefined1 (*) [12])(pfVar41 + 4);
              if (iVar36 == -1) {
                return;
              }
              local_90 = iVar44 + -1;
              local_a0 = *(undefined4 *)(local_88 + 0xa8);
              local_98 = (undefined1 (*) [12])(pfVar41 + 8);
              if (*(short *)((int)local_74 + 2) < 0) {
                iVar44 = 0;
              }
              else {
                iVar44 = FUN_08973e20(*(undefined4 *)(local_88 + 0xa8),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(*(int *)(*(int *)(local_88 + 0x88) + 0x1c8
                                                                  ) + 0x3c) +
                                                *(short *)((int)local_74 + 2) * 4) + 0x10),
                                      (int)*(short *)(local_74 + 1),local_1a0);
              }
              if (iVar44 == 0) {
                *pfVar41 = 0.0;
                pfVar41[1] = 0.0;
                pfVar41[2] = 0.0;
              }
              else {
                if (*(char *)((int)param_3 + 0xff) == '\x02') {
                  iVar36 = (int)(short)*local_50;
                  *(short *)local_50 = (short)*local_50 + 1;
                  if (local_1a0[0] <= (short)local_78[3]) {
                    *(undefined2 *)(local_78 + 3) = 0;
                  }
                }
                else {
                  DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                  iVar36 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                                (float)(local_1a0[0] + -1));
                }
                pfVar34 = (float *)FUN_08973e78(local_a0,*(undefined4 *)
                                                          (*(int *)(*(int *)(*(int *)(*(int *)(
                                                  local_88 + 0x88) + 0x1c8) + 0x3c) +
                                                  *(short *)((int)param_3 + 0xf6) * 4) + 0x10),
                                                *(undefined4 *)(iVar44 + iVar36 * 4));
                local_110 = *pfVar34;
                local_10c = pfVar34[1];
                local_108 = pfVar34[2];
                FUN_089571f4(local_88,local_84,&local_110,local_80,
                             *(undefined1 *)((int)param_3 + 0xfb),&local_110,&local_100);
                *pfVar41 = local_110;
                pfVar41[1] = local_10c;
                pfVar41[2] = local_108;
                pfVar41[3] = local_104;
              }
            }
            pfVar41[6] = 0.0;
LAB_08957f80:
            puVar33 = local_9c;
            pauVar32 = local_a8;
            pfVar41[5] = 0.0;
            pfVar41[4] = 0.0;
            pfVar41[10] = 0.0;
            pfVar41[9] = 0.0;
            pfVar41[8] = 0.0;
            if (*(char *)((int)param_3 + 0x103) == '\0') {
              fVar42 = 0.0;
              fVar43 = 0.0;
            }
            else {
              fVar43 = param_3[0x2d];
              fVar42 = param_3[0x2e];
            }
            if (*(char *)(param_3 + 0x41) != '\0') {
              iVar44 = DAT_089da120 * 0x343fd + 0x269ec3;
              DAT_089da120 = iVar44 * 0x343fd + 0x269ec3;
              fVar43 = fVar43 + (((float)(iVar44 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x2f]
                                - param_3[0x2f]);
              fVar42 = fVar42 + (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                                 param_3[0x30] - param_3[0x30]);
            }
            switch(*(undefined1 *)((int)param_3 + 0xfe)) {
            case 0:
            case 1:
            case 6:
            case 8:
              fVar45 = param_3[0x2c];
              iVar44 = DAT_089da120 * 0x343fd + 0x269ec3;
              local_100 = ((float)(iVar44 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar45 - fVar45;
              iVar44 = iVar44 * 0x343fd + 0x269ec3;
              local_fc = ((float)(iVar44 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar45 - fVar45;
              DAT_089da120 = iVar44 * 0x343fd + 0x269ec3;
              local_f8 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar45 - fVar45;
              auVar8 = vmidt_q();
              *local_9c = auVar8._0_4_;
              puVar33[1] = auVar8._4_4_;
              puVar33[2] = auVar8._8_4_;
              puVar33[3] = auVar8._12_4_;
              puVar33[4] = auVar8._16_4_;
              puVar33[5] = auVar8._20_4_;
              puVar33[6] = auVar8._24_4_;
              puVar33[7] = auVar8._28_4_;
              puVar33[8] = auVar8._32_4_;
              puVar33[9] = auVar8._36_4_;
              puVar33[10] = auVar8._40_4_;
              puVar33[0xb] = auVar8._44_4_;
              puVar33[0xc] = auVar8._48_4_;
              puVar33[0xd] = auVar8._52_4_;
              puVar33[0xe] = auVar8._56_4_;
              puVar33[0xf] = auVar8._60_4_;
              local_f4 = 0x3c360b60;
              auVar29._4_4_ = local_fc;
              auVar29._0_4_ = local_100;
              auVar29._8_4_ = local_f8;
              auVar3 = vscl_t(auVar29,0x3c360b60);
              auVar9 = vrot_q(auVar3._8_4_,1,2,0,0);
              auVar10 = vrot_q(auVar3._8_4_,3,1,0,0);
              auVar5 = vidt_q();
              auVar6 = vidt_q();
              auVar18._60_4_ = auVar6._12_4_;
              auVar18._56_4_ = auVar5._12_4_;
              auVar18._52_4_ = auVar10._12_4_;
              auVar18._48_4_ = auVar9._12_4_;
              auVar18._44_4_ = auVar6._8_4_;
              auVar18._40_4_ = auVar5._8_4_;
              auVar18._36_4_ = auVar10._8_4_;
              auVar18._32_4_ = auVar9._8_4_;
              auVar18._28_4_ = auVar6._4_4_;
              auVar18._24_4_ = auVar5._4_4_;
              auVar18._20_4_ = auVar10._4_4_;
              auVar18._16_4_ = auVar9._4_4_;
              auVar18._12_4_ = auVar6._0_4_;
              auVar18._8_4_ = auVar5._0_4_;
              auVar18._4_4_ = auVar10._0_4_;
              auVar18._0_4_ = auVar9._0_4_;
              auVar19._60_4_ = puVar33[0xf];
              auVar19._56_4_ = puVar33[0xb];
              auVar19._52_4_ = puVar33[7];
              auVar19._48_4_ = puVar33[3];
              auVar19._44_4_ = puVar33[0xe];
              auVar19._40_4_ = puVar33[10];
              auVar19._36_4_ = puVar33[6];
              auVar19._32_4_ = puVar33[2];
              auVar19._28_4_ = puVar33[0xd];
              auVar19._24_4_ = puVar33[9];
              auVar19._20_4_ = puVar33[5];
              auVar19._16_4_ = puVar33[1];
              auVar19._12_4_ = puVar33[0xc];
              auVar19._8_4_ = puVar33[8];
              auVar19._4_4_ = puVar33[4];
              auVar19._0_4_ = *puVar33;
              auVar8 = vmmul_q(auVar18,auVar19);
              auVar9 = vrot_q(auVar3._4_4_,1,0,3,0);
              auVar5 = vidt_q();
              auVar10 = vrot_q(auVar3._4_4_,2,0,1,0);
              auVar6 = vidt_q();
              auVar20._60_4_ = auVar6._12_4_;
              auVar20._56_4_ = auVar10._12_4_;
              auVar20._52_4_ = auVar5._12_4_;
              auVar20._48_4_ = auVar9._12_4_;
              auVar20._44_4_ = auVar6._8_4_;
              auVar20._40_4_ = auVar10._8_4_;
              auVar20._36_4_ = auVar5._8_4_;
              auVar20._32_4_ = auVar9._8_4_;
              auVar20._28_4_ = auVar6._4_4_;
              auVar20._24_4_ = auVar10._4_4_;
              auVar20._20_4_ = auVar5._4_4_;
              auVar20._16_4_ = auVar9._4_4_;
              auVar20._12_4_ = auVar6._0_4_;
              auVar20._8_4_ = auVar10._0_4_;
              auVar20._4_4_ = auVar5._0_4_;
              auVar20._0_4_ = auVar9._0_4_;
              auVar8 = vmmul_q(auVar20,auVar8);
              auVar5 = vidt_q();
              auVar9 = vrot_q(auVar3._0_4_,0,1,2,0);
              auVar10 = vrot_q(auVar3._0_4_,0,3,1,0);
              auVar6 = vidt_q();
              auVar21._60_4_ = auVar6._12_4_;
              auVar21._56_4_ = auVar10._12_4_;
              auVar21._52_4_ = auVar9._12_4_;
              auVar21._48_4_ = auVar5._12_4_;
              auVar21._44_4_ = auVar6._8_4_;
              auVar21._40_4_ = auVar10._8_4_;
              auVar21._36_4_ = auVar9._8_4_;
              auVar21._32_4_ = auVar5._8_4_;
              auVar21._28_4_ = auVar6._4_4_;
              auVar21._24_4_ = auVar10._4_4_;
              auVar21._20_4_ = auVar9._4_4_;
              auVar21._16_4_ = auVar5._4_4_;
              auVar21._12_4_ = auVar6._0_4_;
              auVar21._8_4_ = auVar10._0_4_;
              auVar21._4_4_ = auVar9._0_4_;
              auVar21._0_4_ = auVar5._0_4_;
              auVar8 = vmmul_q(auVar21,auVar8);
              *puVar33 = auVar8._0_4_;
              puVar33[1] = auVar8._16_4_;
              puVar33[2] = auVar8._32_4_;
              puVar33[3] = auVar8._48_4_;
              puVar33[4] = auVar8._4_4_;
              puVar33[5] = auVar8._20_4_;
              puVar33[6] = auVar8._36_4_;
              puVar33[7] = auVar8._52_4_;
              puVar33[8] = auVar8._8_4_;
              puVar33[9] = auVar8._24_4_;
              puVar33[10] = auVar8._40_4_;
              puVar33[0xb] = auVar8._56_4_;
              puVar33[0xc] = auVar8._12_4_;
              puVar33[0xd] = auVar8._28_4_;
              puVar33[0xe] = auVar8._44_4_;
              puVar33[0xf] = auVar8._60_4_;
              FUN_08935828(&local_110,0,0xc);
              FUN_08935524(&local_100,local_70,0xc);
              if (*(char *)((int)param_3 + 0xfb) == '\a') {
                local_fc = -local_fc;
                local_f8 = -local_f8;
              }
              if ((local_100 == 0.0) && (local_fc == 0.0)) {
                local_100 = 1e-06;
              }
              FUN_08956cc0(&local_150,&local_110,&local_100);
              pauVar32 = local_a8;
              auVar22._60_4_ = uStack_114;
              auVar22._56_4_ = uStack_124;
              auVar22._52_4_ = uStack_134;
              auVar22._48_4_ = uStack_144;
              auVar22._44_4_ = uStack_118;
              auVar22._40_4_ = uStack_128;
              auVar22._36_4_ = uStack_138;
              auVar22._32_4_ = uStack_148;
              auVar22._28_4_ = uStack_11c;
              auVar22._24_4_ = uStack_12c;
              auVar22._20_4_ = uStack_13c;
              auVar22._16_4_ = uStack_14c;
              auVar22._12_4_ = local_120;
              auVar22._8_4_ = local_130;
              auVar22._4_4_ = local_140;
              auVar22._0_4_ = local_150;
              auVar23._60_4_ = puVar33[0xf];
              auVar23._56_4_ = puVar33[0xb];
              auVar23._52_4_ = puVar33[7];
              auVar23._48_4_ = puVar33[3];
              auVar23._44_4_ = puVar33[0xe];
              auVar23._40_4_ = puVar33[10];
              auVar23._36_4_ = puVar33[6];
              auVar23._32_4_ = puVar33[2];
              auVar23._28_4_ = puVar33[0xd];
              auVar23._24_4_ = puVar33[9];
              auVar23._20_4_ = puVar33[5];
              auVar23._16_4_ = puVar33[1];
              auVar23._12_4_ = puVar33[0xc];
              auVar23._8_4_ = puVar33[8];
              auVar23._4_4_ = puVar33[4];
              auVar23._0_4_ = *puVar33;
              auVar8 = vmmul_q(auVar22,auVar23);
              local_150 = auVar8._0_4_;
              local_140 = auVar8._4_4_;
              local_130 = auVar8._8_4_;
              local_120 = auVar8._12_4_;
              uStack_14c = auVar8._16_4_;
              uStack_13c = auVar8._20_4_;
              uStack_12c = auVar8._24_4_;
              uStack_11c = auVar8._28_4_;
              uStack_148 = auVar8._32_4_;
              uStack_138 = auVar8._36_4_;
              uStack_128 = auVar8._40_4_;
              uStack_118 = auVar8._44_4_;
              uStack_144 = auVar8._48_4_;
              uStack_134 = auVar8._52_4_;
              uStack_124 = auVar8._56_4_;
              uStack_114 = auVar8._60_4_;
              if (*(char *)(local_8c + 0x22) != '\0') {
                auVar7._32_4_ = local_84[10];
                auVar7._28_4_ = local_84[6];
                auVar7._24_4_ = local_84[2];
                auVar7._20_4_ = local_84[9];
                auVar7._16_4_ = local_84[5];
                auVar7._12_4_ = local_84[1];
                auVar7._8_4_ = local_84[8];
                auVar7._4_4_ = local_84[4];
                auVar7._0_4_ = *local_84;
                auVar11._24_12_ = auVar8._32_12_;
                auVar11._20_4_ = uStack_12c;
                auVar11._16_4_ = uStack_13c;
                auVar11._12_4_ = uStack_14c;
                auVar11._8_4_ = local_130;
                auVar11._4_4_ = local_140;
                auVar11._0_4_ = local_150;
                auVar7 = vmmul_t(auVar7,auVar11);
                vzero_s();
                vzero_s();
                vzero_s();
                auVar12._32_4_ = local_7c[10];
                auVar12._28_4_ = local_7c[6];
                auVar12._24_4_ = local_7c[2];
                auVar12._20_4_ = local_7c[9];
                auVar12._16_4_ = local_7c[5];
                auVar12._12_4_ = local_7c[1];
                auVar12._8_4_ = local_7c[8];
                auVar12._4_4_ = local_7c[4];
                auVar12._0_4_ = *local_7c;
                auVar7 = vmmul_t(auVar12,auVar7);
                local_150 = auVar7._0_4_;
                local_140 = auVar7._4_4_;
                local_130 = auVar7._8_4_;
                uStack_14c = auVar7._12_4_;
                uStack_13c = auVar7._16_4_;
                uStack_12c = auVar7._20_4_;
                uStack_148 = auVar7._24_4_;
                uStack_138 = auVar7._28_4_;
                uStack_128 = auVar7._32_4_;
                uStack_144 = vzero_s();
                uStack_134 = vzero_s();
                uStack_124 = vzero_s();
              }
              auVar25._4_4_ = uStack_14c;
              auVar25._0_4_ = local_150;
              auVar25._8_4_ = uStack_148;
              auVar25._12_4_ = uStack_144;
              auVar25._16_4_ = local_140;
              auVar25._20_4_ = uStack_13c;
              auVar25._24_4_ = uStack_138;
              auVar25._28_4_ = uStack_134;
              auVar25._32_4_ = local_130;
              auVar25._36_4_ = uStack_12c;
              auVar25._40_4_ = uStack_128;
              auVar25._44_4_ = uStack_124;
              auVar25._48_4_ = local_120;
              auVar25._52_4_ = uStack_11c;
              auVar25._56_4_ = uStack_118;
              auVar25._60_4_ = uStack_114;
              uVar46 = vone_s();
              auVar31._4_4_ = uVar46;
              auVar31._0_4_ = 0x3f800000;
              auVar31._8_4_ = 0;
              auVar6._4_12_ = auVar31 << 0x20;
              auVar6._0_4_ = 0x3727c5ac;
              auVar5 = vtfm4_q(auVar25,auVar6);
              local_110 = auVar5._0_4_;
              local_10c = auVar5._4_4_;
              local_108 = auVar5._8_4_;
              local_104 = auVar5._12_4_;
              auVar3 = vscl_t(auVar5._0_12_,fVar43);
              local_100 = auVar3._0_4_;
              local_fc = auVar3._4_4_;
              local_f8 = auVar3._8_4_;
              local_f4 = vzero_s();
              auVar3 = vscl_t(auVar5._0_12_,fVar42);
              uVar46 = vzero_s();
              *(int *)*local_a8 = auVar3._0_4_;
              *(int *)(*pauVar32 + 4) = auVar3._4_4_;
              *(int *)(*pauVar32 + 8) = auVar3._8_4_;
              *(undefined4 *)pauVar32[1] = uVar46;
              *(float *)*local_94 = local_100;
              *(float *)((int)*local_94 + 4) = local_fc;
              *(float *)((int)*local_94 + 8) = local_f8;
              *(undefined4 *)local_94[1] = local_f4;
              uVar46 = *(undefined4 *)(*pauVar32 + 4);
              uVar47 = *(undefined4 *)(*pauVar32 + 8);
              *(undefined4 *)*local_98 = *(undefined4 *)*pauVar32;
              *(undefined4 *)((int)*local_98 + 4) = uVar46;
              *(undefined4 *)((int)*local_98 + 8) = uVar47;
              *(undefined4 *)local_98[1] = *(undefined4 *)pauVar32[1];
              break;
            case 2:
            case 3:
            case 7:
            case 9:
              auVar4._4_4_ = local_fc;
              auVar4._0_4_ = local_100;
              auVar4._8_4_ = local_f8;
              auVar3 = vscl_t(auVar4,fVar42);
              uVar46 = vzero_s();
              *(int *)*local_a8 = auVar3._0_4_;
              *(int *)(*pauVar32 + 4) = auVar3._4_4_;
              *(int *)(*pauVar32 + 8) = auVar3._8_4_;
              *(undefined4 *)pauVar32[1] = uVar46;
              auVar30._4_4_ = local_fc;
              auVar30._0_4_ = local_100;
              auVar30._8_4_ = local_f8;
              auVar3 = vscl_t(auVar30,fVar43);
              local_100 = auVar3._0_4_;
              local_fc = auVar3._4_4_;
              local_f8 = auVar3._8_4_;
              local_f4 = vzero_s();
              *(float *)*local_94 = local_100;
              *(float *)((int)*local_94 + 4) = local_fc;
              *(float *)((int)*local_94 + 8) = local_f8;
              *(undefined4 *)local_94[1] = local_f4;
              uVar46 = *(undefined4 *)(*pauVar32 + 4);
              uVar47 = *(undefined4 *)(*pauVar32 + 8);
              *(undefined4 *)*local_98 = *(undefined4 *)*pauVar32;
              *(undefined4 *)((int)*local_98 + 4) = uVar46;
              *(undefined4 *)((int)*local_98 + 8) = uVar47;
              *(undefined4 *)local_98[1] = *(undefined4 *)pauVar32[1];
            }
            FUN_08935524(&local_110,local_54,0xc);
            pauVar32 = local_a8;
            if (*(char *)((int)param_3 + 0xfb) == '\a') {
              local_10c = -local_10c;
              local_108 = -local_108;
            }
            if (*(char *)((int)param_3 + 0x105) == '\0') {
              fVar42 = 0.0;
              fVar43 = 0.0;
            }
            else {
              fVar43 = param_3[0x31];
              fVar42 = param_3[0x32];
            }
            if (*(char *)((int)param_3 + 0x106) != '\0') {
              iVar44 = DAT_089da120 * 0x343fd + 0x269ec3;
              local_110 = local_110 +
                          (((float)(iVar44 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xc] -
                          param_3[0xc]);
              iVar44 = iVar44 * 0x343fd + 0x269ec3;
              local_10c = local_10c +
                          (((float)(iVar44 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xd] -
                          param_3[0xd]);
              iVar44 = iVar44 * 0x343fd + 0x269ec3;
              local_108 = local_108 +
                          (((float)(iVar44 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0xe] -
                          param_3[0xe]);
              iVar44 = iVar44 * 0x343fd + 0x269ec3;
              DAT_089da120 = iVar44 * 0x343fd + 0x269ec3;
              fVar43 = fVar43 + (((float)(iVar44 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x33]
                                - param_3[0x33]);
              fVar42 = fVar42 + (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                                 param_3[0x34] - param_3[0x34]);
            }
            auVar28._4_4_ = local_10c;
            auVar28._0_4_ = local_110;
            auVar28._8_4_ = local_108;
            auVar27._4_4_ = local_10c;
            auVar27._0_4_ = local_110;
            auVar27._8_4_ = local_108;
            auVar26._4_4_ = local_10c;
            auVar26._0_4_ = local_110;
            auVar26._8_4_ = local_108;
            uVar46 = vdot_t(auVar26,auVar27);
            uVar47 = vzero_s();
            uVar48 = vcmp_s(8,uVar46,local_110);
            vrsq_s(uVar46);
            uVar46 = vcmovt_s(uVar47,(byte)uVar48 & 1);
            vpfxd(4,4,4,5);
            auVar3 = vscl_t(auVar28,uVar46);
            local_110 = auVar3._0_4_;
            local_10c = auVar3._4_4_;
            local_108 = auVar3._8_4_;
            local_104 = (float)vone_s();
            auVar4 = vscl_t(auVar3,fVar43);
            local_100 = auVar4._0_4_;
            local_fc = auVar4._4_4_;
            local_f8 = auVar4._8_4_;
            local_f4 = vzero_s();
            auVar3 = vscl_t(auVar3,fVar42);
            uVar46 = vzero_s();
            *(int *)*local_a8 = auVar3._0_4_;
            *(int *)(*pauVar32 + 4) = auVar3._4_4_;
            *(int *)(*pauVar32 + 8) = auVar3._8_4_;
            *(undefined4 *)pauVar32[1] = uVar46;
            auVar3 = vadd_t(*local_94,auVar4);
            uVar46 = vone_s();
            *(int *)*local_94 = auVar3._0_4_;
            *(int *)((int)*local_94 + 4) = auVar3._4_4_;
            *(int *)((int)*local_94 + 8) = auVar3._8_4_;
            *(undefined4 *)local_94[1] = uVar46;
            auVar3 = vadd_t(*local_98,*pauVar32);
            uVar46 = vone_s();
            *(int *)*local_98 = auVar3._0_4_;
            *(int *)((int)*local_98 + 4) = auVar3._4_4_;
            *(int *)((int)*local_98 + 8) = auVar3._8_4_;
            *(undefined4 *)local_98[1] = uVar46;
            pfVar41[0xc] = 100.0;
            pfVar41[0xd] = 100.0;
            pfVar41[0xe] = 100.0;
            pfVar41[0x14] = 0.0;
            pfVar41[0x10] = 0.0;
            pfVar41[0x15] = 0.0;
            pfVar41[0x11] = 0.0;
            pfVar41[0x16] = 0.0;
            pfVar41[0x12] = 0.0;
            if (*(char *)((int)param_3 + 0x107) != '\0') {
              pfVar41[0xc] = param_3[0x20];
              pfVar41[0x10] = param_3[0x22];
              pfVar41[0x14] = param_3[0x24];
              pfVar41[0xd] = param_3[0x21];
              pfVar41[0x11] = param_3[0x23];
              pfVar41[0x15] = param_3[0x25];
            }
            if (*(char *)(param_3 + 0x42) != '\0') {
              FUN_08956e48(pfVar41 + 0xc,local_58,pfVar41 + 0x10,local_5c,pfVar41 + 0x14,local_60,
                           *(undefined1 *)((int)param_3 + 0x109),2);
            }
            pfVar41[0x24] = 0.0;
            pfVar41[0x23] = 0.0;
            pfVar41[0x22] = 0.0;
            if (*(char *)((int)param_3 + 0x10a) != '\0') {
              pfVar41[0x22] = param_3[0x35];
              pfVar41[0x23] = param_3[0x36];
              pfVar41[0x24] = param_3[0x37];
            }
            if (*(char *)((int)param_3 + 0x10b) != '\0') {
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x22] =
                   pfVar41[0x22] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x38] -
                   param_3[0x38]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x23] =
                   pfVar41[0x23] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x39] -
                   param_3[0x39]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x24] =
                   pfVar41[0x24] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x3a] -
                   param_3[0x3a]);
            }
            if (*(char *)(param_3 + 0x43) == '\0') {
              pfVar41[0x1f] = 0.0;
              pfVar41[0x1b] = 128.0;
              pfVar41[0x1a] = 128.0;
              pfVar41[0x19] = 128.0;
              pfVar41[0x18] = 128.0;
              pfVar41[0x1e] = 0.0;
              pfVar41[0x1d] = 0.0;
              pfVar41[0x1c] = 0.0;
            }
            else {
              fVar42 = local_64[1];
              fVar45 = local_64[2];
              fVar43 = local_64[3];
              pfVar41[0x18] = *local_64;
              pfVar41[0x19] = fVar42;
              pfVar41[0x1a] = fVar45;
              pfVar41[0x1b] = fVar43;
              fVar42 = local_68[1];
              fVar45 = local_68[2];
              fVar43 = local_68[3];
              pfVar41[0x1c] = *local_68;
              pfVar41[0x1d] = fVar42;
              pfVar41[0x1e] = fVar45;
              pfVar41[0x1f] = fVar43;
            }
            if (*(char *)((int)param_3 + 0x10d) != '\0') {
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x18] =
                   pfVar41[0x18] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x18] -
                   param_3[0x18]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x1c] =
                   pfVar41[0x1c] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x1c] -
                   param_3[0x1c]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x19] =
                   pfVar41[0x19] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x19] -
                   param_3[0x19]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x1d] =
                   pfVar41[0x1d] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x1d] -
                   param_3[0x1d]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x1a] =
                   pfVar41[0x1a] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x1a] -
                   param_3[0x1a]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x1e] =
                   pfVar41[0x1e] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x1e] -
                   param_3[0x1e]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x1b] =
                   pfVar41[0x1b] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x1b] -
                   param_3[0x1b]);
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              pfVar41[0x1f] =
                   pfVar41[0x1f] +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[0x1f] -
                   param_3[0x1f]);
            }
LAB_08958b10:
            iVar44 = local_90;
          } while (0 < local_90);
        }
      }
    }
  }
  iVar44 = 0;
  fVar42 = *(float *)(*(int *)(local_88 + 0x88) + 0x160);
  if ((int)param_3[3] < 0) {
    iVar36 = -1;
  }
  else if (*(int *)(*(int *)(*(int *)(local_88 + 0x88) + 0x1c8) + 0x38) == 0) {
    iVar36 = -1;
  }
  else {
    iVar36 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(local_88 + 0x88) + 0x1c8) + 0x38) +
                              (int)param_3[3] * 4) + 0x10);
  }
  if (iVar36 == -1) {
    return;
  }
  iVar39 = 0;
  piVar37 = *(int **)(**(int **)(local_88 + 0x9c) + iVar36 * 4);
  if (0 < *(short *)(local_8c + 0x1e)) {
    sVar2 = *(short *)(local_8c + 0x20);
    do {
      iVar36 = local_6c + ((sVar2 + iVar39) % (int)*(short *)(local_8c + 0x1c)) * 0xa0;
      if (*(float *)(local_8c + 8) <= *(float *)(iVar36 + 0x84)) {
        iVar44 = iVar44 + 1;
      }
      else {
        fVar43 = *(float *)(iVar36 + 0x94) * param_3[7];
        if ((float)*(int *)(*piVar37 + 0x1c) <= fVar43) {
          if ((*(uint *)(*piVar37 + 0x10) & 0x80) == 0) {
            iVar44 = iVar44 + 1;
            goto LAB_08958d28;
          }
          iVar40 = (int)(float)*(int *)(*piVar37 + 0x1c);
          *(undefined2 *)(iVar36 + 0x98) = 0;
          fVar43 = fVar43 - (float)(iVar40 * ((int)fVar43 / iVar40));
          *(float *)(iVar36 + 0x94) = fVar43;
          *(undefined2 *)(iVar36 + 0x98) = 0;
        }
        else {
          *(undefined2 *)(iVar36 + 0x98) = 0;
        }
        uVar35 = (uint)*(ushort *)(iVar36 + 0x98);
        iVar40 = *piVar37 + *(int *)(*piVar37 + 0x34) + uVar35 * 0xc;
        fVar45 = (float)*(int *)(iVar40 + 8);
        while (fVar45 <= fVar43) {
          uVar35 = uVar35 + 1;
          fVar45 = fVar45 + (float)*(int *)(iVar40 + 0x14);
          iVar40 = iVar40 + 0xc;
        }
        if ((int)uVar35 < *(int *)(*piVar37 + 0x24)) {
          fVar43 = *(float *)(iVar36 + 0x84);
        }
        else {
          uVar35 = *(int *)(*piVar37 + 0x24) - 1;
          fVar43 = *(float *)(iVar36 + 0x84);
        }
        *(short *)(iVar36 + 0x98) = (short)uVar35;
        *(float *)(iVar36 + 0x84) = fVar43 + fVar42;
        *(float *)(iVar36 + 0x94) = *(float *)(iVar36 + 0x94) + fVar42;
      }
LAB_08958d28:
      iVar39 = iVar39 + 1;
      if (*(short *)(local_8c + 0x1e) <= iVar39) goto code_r0x08958d3c;
      sVar2 = *(short *)(local_8c + 0x20);
    } while( true );
  }
  sVar2 = *(short *)(local_8c + 0x20);
LAB_08958d40:
  *(short *)(local_8c + 0x1e) = *(short *)(local_8c + 0x1e) - (short)iVar44;
  *(short *)(local_8c + 0x20) = (short)((sVar2 + iVar44) % (int)*(short *)(local_8c + 0x1c));
  if (*(short *)(local_8c + 0x1e) < 0) {
    *(undefined2 *)(local_8c + 0x1e) = 0;
  }
  return;
code_r0x08958d3c:
  sVar2 = *(short *)(local_8c + 0x20);
  goto LAB_08958d40;
}

