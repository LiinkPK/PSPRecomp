/* Entry 0x08958DB4 | file offset 0x00155D8C | FUN_08958db4 | bytes 1976 */

void FUN_08958db4(undefined4 param_1,int param_2,int param_3,int *param_4)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [36];
  undefined1 auVar13 [36];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [16];
  int iVar19;
  undefined4 *puVar20;
  undefined1 (*pauVar21) [64];
  undefined1 (*pauVar22) [12];
  undefined4 *puVar23;
  int iVar24;
  undefined4 *puVar25;
  int iVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  undefined4 auStack_190 [16];
  undefined4 local_150 [16];
  undefined4 local_110 [4];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float local_e4;
  undefined1 local_e0 [32];
  float local_c0;
  undefined1 (*local_8c) [16];
  undefined1 (*local_84) [16];
  undefined1 (*local_74) [64];
  int local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined1 (*local_64) [64];
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 *local_4c;
  undefined1 auVar14 [36];
  undefined1 auVar17 [64];
  
  *(undefined4 *)(*(int *)(param_2 + 0x9c) + 0x2c) = 0xffffffff;
  if (*param_4 != 0) {
    puVar23 = auStack_190;
    local_6c = local_150;
    iVar24 = *param_4;
    local_54 = local_110;
    local_84 = (undefined1 (*) [16])local_e0;
    local_8c = (undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40);
    local_64 = DAT_089da278;
    local_60 = DAT_089da27c;
    local_68 = DAT_089da280;
    if (*(int *)(param_3 + 0xc) < 0) {
      local_58 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) == 0) {
      local_58 = -1;
    }
    else {
      local_58 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x38) +
                                  *(int *)(param_3 + 0xc) * 4) + 0x10);
    }
    if (local_58 != -1) {
      local_74 = *(undefined1 (**) [64])(*(int *)(param_2 + 0x8c) + 0x50);
      if (*(char *)(param_3 + 0x10e) == '\0') {
        puVar23 = (undefined4 *)0x0;
      }
      else if (*(float *)(param_3 + 0xec) == 0.0) {
        puVar23 = (undefined4 *)0x0;
      }
      local_70 = param_3;
      FUN_089a0384(9);
      FUN_089a0f84(0,0);
      FUN_089a119c(1);
      FUN_089a03dc(5);
      iVar26 = 0;
      local_50 = iVar24 + 0x30;
      if (0 < *(short *)(iVar24 + 0x1e)) {
        local_5c = puVar23 + 0xc;
        puVar25 = &local_1a0;
        sVar2 = *(short *)(iVar24 + 0x20);
        do {
          puVar20 = local_54;
          pauVar22 = (undefined1 (*) [12])
                     (local_50 + ((sVar2 + iVar26) % (int)*(short *)(iVar24 + 0x1c)) * 0xa0);
          fVar29 = *(float *)pauVar22[0xb];
          if (fVar29 < *(float *)(iVar24 + 8)) {
            uVar31 = *(undefined4 *)pauVar22[1];
            uVar30 = vmul_s(fVar29,fVar29);
            uVar30 = vmul_s(uVar30,0x3f000000);
            auVar3 = vscl_t(*(undefined1 (*) [12])(pauVar22[1] + 4),fVar29);
            auVar3 = vadd_t(*pauVar22,auVar3);
            auVar4 = vscl_t(*(undefined1 (*) [12])(pauVar22[2] + 8),uVar30);
            auVar3 = vadd_t(auVar3,auVar4);
            *local_54 = auVar3._0_4_;
            puVar20[1] = auVar3._4_4_;
            puVar20[2] = auVar3._8_4_;
            puVar20[3] = uVar31;
            puVar20 = local_6c;
            uVar31 = vmul_s(fVar29,fVar29);
            uVar31 = vmul_s(uVar31,0x3f000000);
            auVar3 = vscl_t(*(undefined1 (*) [12])(pauVar22[5] + 4),fVar29);
            auVar3 = vadd_t(pauVar22[4],auVar3);
            auVar4 = vscl_t(*(undefined1 (*) [12])(pauVar22[6] + 8),uVar31);
            auVar3 = vadd_t(auVar3,auVar4);
            auVar3 = vscl_t(auVar3,0x3a83126f);
            vzero_s();
            auVar5 = vscl_q(*(undefined1 (*) [16])(pauVar22[9] + 4),fVar29);
            auVar5 = vadd_q(*(undefined1 (*) [16])(pauVar22 + 8),auVar5);
            local_f0 = auVar5._0_4_;
            uStack_ec = auVar5._4_4_;
            uStack_e8 = auVar5._8_4_;
            local_e4 = auVar5._12_4_;
            auVar3 = vmul_t(auVar3,*(undefined1 (*) [12])(*(int *)(param_2 + 0x88) + 0x30));
            uStack_f4 = vone_s();
            local_100 = auVar3._0_4_;
            uStack_fc = auVar3._4_4_;
            uStack_f8 = auVar3._8_4_;
            fVar28 = -(*(float *)pauVar22[0xc] * 0.5 * fVar29 * fVar29 +
                       *(float *)(pauVar22[0xb] + 8) * fVar29 + *(float *)(pauVar22[0xb] + 4));
            auVar8 = vmidt_q();
            local_1cc = auVar8._4_4_;
            local_1c8 = auVar8._8_4_;
            local_1c4 = auVar8._12_4_;
            local_1c0 = auVar8._16_4_;
            local_1b8 = auVar8._24_4_;
            local_1b4 = auVar8._28_4_;
            local_1b0 = auVar8._32_4_;
            local_1ac = auVar8._36_4_;
            local_1a4 = auVar8._44_4_;
            local_194 = auVar8._60_4_;
            local_1d0 = vmul_s(auVar8._0_4_,auVar3._0_4_);
            local_1bc = vmul_s(auVar8._20_4_,auVar3._4_4_);
            local_1a8 = vmul_s(auVar8._40_4_,auVar3._8_4_);
            local_1a0 = auVar8._48_4_;
            local_19c = auVar8._52_4_;
            local_198 = auVar8._56_4_;
            if (pauVar22[0xc][10] != '\0') {
              local_4c = puVar25;
              FUN_08970b40(local_6c,pauVar22[0xc][10]);
              auVar7._32_4_ = puVar20[10];
              auVar7._28_4_ = puVar20[6];
              auVar7._24_4_ = puVar20[2];
              auVar7._20_4_ = puVar20[9];
              auVar7._16_4_ = puVar20[5];
              auVar7._12_4_ = puVar20[1];
              auVar7._8_4_ = puVar20[8];
              auVar7._4_4_ = puVar20[4];
              auVar7._0_4_ = *puVar20;
              auVar12._32_4_ = local_1a8;
              auVar12._28_4_ = local_1b8;
              auVar12._24_4_ = local_1c8;
              auVar12._20_4_ = local_1ac;
              auVar12._16_4_ = local_1bc;
              auVar12._12_4_ = local_1cc;
              auVar12._8_4_ = local_1b0;
              auVar12._4_4_ = local_1c0;
              auVar12._0_4_ = local_1d0;
              auVar7 = vmmul_t(auVar7,auVar12);
              local_1d0 = auVar7._0_4_;
              local_1c0 = auVar7._4_4_;
              local_1b0 = auVar7._8_4_;
              local_1cc = auVar7._12_4_;
              local_1bc = auVar7._16_4_;
              local_1ac = auVar7._20_4_;
              local_1c8 = auVar7._24_4_;
              local_1b8 = auVar7._28_4_;
              local_1a8 = auVar7._32_4_;
              local_1c4 = vzero_s();
              local_1b4 = vzero_s();
              local_1a4 = vzero_s();
              puVar25 = local_4c;
            }
            iVar19 = local_70;
            if (fVar28 != 0.0) {
              local_c0 = fVar28 * 0.017453292;
              uVar31 = vcst_s(5);
              uVar31 = vmul_s(local_c0,uVar31);
              auVar9 = vrot_q(uVar31,1,2,0,0);
              auVar10 = vrot_q(uVar31,3,1,0,0);
              auVar5 = vidt_q();
              auVar6 = vidt_q();
              auVar8._60_4_ = auVar6._12_4_;
              auVar8._56_4_ = auVar5._12_4_;
              auVar8._52_4_ = auVar10._12_4_;
              auVar8._48_4_ = auVar9._12_4_;
              auVar8._44_4_ = auVar6._8_4_;
              auVar8._40_4_ = auVar5._8_4_;
              auVar8._36_4_ = auVar10._8_4_;
              auVar8._32_4_ = auVar9._8_4_;
              auVar8._28_4_ = auVar6._4_4_;
              auVar8._24_4_ = auVar5._4_4_;
              auVar8._20_4_ = auVar10._4_4_;
              auVar8._16_4_ = auVar9._4_4_;
              auVar8._12_4_ = auVar6._0_4_;
              auVar8._8_4_ = auVar5._0_4_;
              auVar8._4_4_ = auVar10._0_4_;
              auVar8._0_4_ = auVar9._0_4_;
              auVar15._60_4_ = local_194;
              auVar15._56_4_ = local_1a4;
              auVar15._52_4_ = local_1b4;
              auVar15._48_4_ = local_1c4;
              auVar15._44_4_ = local_198;
              auVar15._40_4_ = local_1a8;
              auVar15._36_4_ = local_1b8;
              auVar15._32_4_ = local_1c8;
              auVar15._28_4_ = local_19c;
              auVar15._24_4_ = local_1ac;
              auVar15._20_4_ = local_1bc;
              auVar15._16_4_ = local_1cc;
              auVar15._12_4_ = local_1a0;
              auVar15._8_4_ = local_1b0;
              auVar15._4_4_ = local_1c0;
              auVar15._0_4_ = local_1d0;
              auVar8 = vmmul_q(auVar8,auVar15);
              local_1d0 = auVar8._0_4_;
              local_1c0 = auVar8._4_4_;
              local_1b0 = auVar8._8_4_;
              local_1cc = auVar8._16_4_;
              local_1bc = auVar8._20_4_;
              local_1ac = auVar8._24_4_;
              local_1c8 = auVar8._32_4_;
              local_1b8 = auVar8._36_4_;
              local_1a8 = auVar8._40_4_;
              local_1c4 = auVar8._48_4_;
              local_1b4 = auVar8._52_4_;
              local_1a4 = auVar8._56_4_;
              local_1a0 = auVar8._12_4_;
              local_19c = auVar8._28_4_;
              local_198 = auVar8._44_4_;
            }
            uVar31 = local_54[1];
            uVar27 = local_54[2];
            uVar30 = local_54[3];
            *puVar25 = *local_54;
            puVar25[1] = uVar31;
            puVar25[2] = uVar27;
            puVar25[3] = uVar30;
            local_194 = 0x3f800000;
            bVar1 = *(byte *)(iVar19 + 0xfb);
            if (bVar1 < 6) {
              if (bVar1 != 2) {
LAB_0895922c:
                if ((*(char *)(iVar19 + 0xfe) != '\b') && (*(char *)(iVar19 + 0xfe) != '\t')) {
                  local_19c = -local_19c;
                  local_198 = -local_198;
                }
                if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
                  pauVar21 = (undefined1 (*) [64])(*(int *)(param_2 + 0x88) + 0x50);
                }
                else {
                  pauVar21 = *(undefined1 (**) [64])
                              (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
                }
                uVar31 = vone_s();
                auVar5._12_4_ = uVar31;
                auVar5._8_4_ = puVar25[2];
                auVar5._4_4_ = puVar25[1];
                auVar5._0_4_ = *puVar25;
                auVar5 = vtfm4_q(*local_74,auVar5);
                *puVar25 = auVar5._0_4_;
                puVar25[1] = auVar5._4_4_;
                puVar25[2] = auVar5._8_4_;
                puVar25[3] = auVar5._12_4_;
                uVar31 = vone_s();
                auVar6._12_4_ = uVar31;
                auVar6._8_4_ = puVar25[2];
                auVar6._4_4_ = puVar25[1];
                auVar6._0_4_ = *puVar25;
                auVar5 = vtfm4_q(*pauVar21,auVar6);
                *puVar25 = auVar5._0_4_;
                puVar25[1] = auVar5._4_4_;
                puVar25[2] = auVar5._8_4_;
                puVar25[3] = auVar5._12_4_;
              }
            }
            else if (7 < bVar1) goto LAB_0895922c;
            if (puVar23 != (undefined4 *)0x0) {
              *puVar23 = local_1d0;
              puVar23[1] = local_1cc;
              puVar23[2] = local_1c8;
              puVar23[3] = local_1c4;
              puVar23[4] = local_1c0;
              puVar23[5] = local_1bc;
              puVar23[6] = local_1b8;
              puVar23[7] = local_1b4;
              puVar23[8] = local_1b0;
              puVar23[9] = local_1ac;
              puVar23[10] = local_1a8;
              puVar23[0xb] = local_1a4;
              puVar23[0xc] = local_1a0;
              puVar23[0xd] = local_19c;
              puVar23[0xe] = local_198;
              puVar23[0xf] = local_194;
            }
            auVar13._32_4_ = local_60[10];
            auVar13._28_4_ = local_60[6];
            auVar13._24_4_ = local_60[2];
            auVar13._20_4_ = local_60[9];
            auVar13._16_4_ = local_60[5];
            auVar13._12_4_ = local_60[1];
            auVar13._8_4_ = local_60[8];
            auVar13._4_4_ = local_60[4];
            auVar13._0_4_ = *local_60;
            auVar14._32_4_ = local_1a8;
            auVar14._28_4_ = local_1b8;
            auVar14._24_4_ = local_1c8;
            auVar14._20_4_ = local_1ac;
            auVar14._16_4_ = local_1bc;
            auVar14._12_4_ = local_1cc;
            auVar14._8_4_ = local_1b0;
            auVar14._4_4_ = local_1c0;
            auVar14._0_4_ = local_1d0;
            auVar7 = vmmul_t(auVar13,auVar14);
            local_1d0 = auVar7._0_4_;
            local_1c0 = auVar7._4_4_;
            local_1b0 = auVar7._8_4_;
            local_1cc = auVar7._12_4_;
            local_1bc = auVar7._16_4_;
            local_1ac = auVar7._20_4_;
            local_1c8 = auVar7._24_4_;
            local_1b8 = auVar7._28_4_;
            local_1a8 = auVar7._32_4_;
            local_1c4 = vzero_s();
            local_1b4 = vzero_s();
            local_1a4 = vzero_s();
            FUN_0896fb5c(&local_1d0);
            puVar20 = local_5c;
            if (fVar29 < *(float *)(iVar24 + 0xc)) {
              fVar29 = *(float *)(iVar24 + 0x10) * fVar29;
            }
            else {
              fVar29 = 1.0 - *(float *)(iVar24 + 0x14) * (fVar29 - *(float *)(iVar24 + 0xc));
            }
            if (fVar29 < 0.0) {
              local_e4 = 0.0;
            }
            else if (fVar29 < 1.0) {
              local_e4 = local_e4 * fVar29;
            }
            auVar10._8_4_ = local_e4;
            auVar10._4_4_ = uStack_e8;
            auVar9._8_4_ = local_e4;
            auVar9._4_4_ = uStack_e8;
            auVar18._4_4_ = uStack_ec;
            auVar18._0_4_ = local_f0;
            auVar18._8_4_ = uStack_e8;
            auVar18._12_4_ = local_e4;
            auVar5 = vmul_q(auVar18,*local_8c);
            *(int *)*local_84 = auVar5._0_4_;
            *(int *)(*local_84 + 4) = auVar5._4_4_;
            *(int *)(*local_84 + 8) = auVar5._8_4_;
            *(int *)(*local_84 + 0xc) = auVar5._12_4_;
            vpfxt(0,0,0,0);
            auVar9._0_4_ = 0x437f0000;
            auVar9._12_4_ = 0;
            auVar5 = vmax_q(*local_84,auVar9 << 0x20);
            vpfxt(1,1,1,1);
            auVar10._0_4_ = 0x437f0000;
            auVar10._12_4_ = 0;
            auVar5 = vmin_q(auVar5,auVar10 << 0x20);
            *(int *)*local_84 = auVar5._0_4_;
            *(int *)(*local_84 + 4) = auVar5._4_4_;
            *(int *)(*local_84 + 8) = auVar5._8_4_;
            *(int *)(*local_84 + 0xc) = auVar5._12_4_;
            if (puVar23 == (undefined4 *)0x0) {
              FUN_08942fb8(*(undefined4 *)(param_2 + 0x9c),local_58,
                           *(undefined2 *)(pauVar22[0xc] + 8),local_84);
            }
            else {
              uVar31 = vone_s();
              auVar11._12_4_ = uVar31;
              auVar11._8_4_ = local_5c[2];
              auVar11._4_4_ = local_5c[1];
              auVar11._0_4_ = *local_5c;
              auVar5 = vtfm4_q(*local_64,auVar11);
              *local_5c = auVar5._0_4_;
              puVar20[1] = auVar5._4_4_;
              puVar20[2] = auVar5._8_4_;
              puVar20[3] = auVar5._12_4_;
              puVar23[0xe] = (float)puVar23[0xe] - *(float *)(local_70 + 0xec);
              auVar16._60_4_ = local_68[0xf];
              auVar16._56_4_ = local_68[0xb];
              auVar16._52_4_ = local_68[7];
              auVar16._48_4_ = local_68[3];
              auVar16._44_4_ = local_68[0xe];
              auVar16._40_4_ = local_68[10];
              auVar16._36_4_ = local_68[6];
              auVar16._32_4_ = local_68[2];
              auVar16._28_4_ = local_68[0xd];
              auVar16._24_4_ = local_68[9];
              auVar16._20_4_ = local_68[5];
              auVar16._16_4_ = local_68[1];
              auVar16._12_4_ = local_68[0xc];
              auVar16._8_4_ = local_68[8];
              auVar16._4_4_ = local_68[4];
              auVar16._0_4_ = *local_68;
              auVar17._60_4_ = puVar23[0xf];
              auVar17._56_4_ = puVar23[0xb];
              auVar17._52_4_ = puVar23[7];
              auVar17._48_4_ = puVar23[3];
              auVar17._44_4_ = puVar23[0xe];
              auVar17._40_4_ = puVar23[10];
              auVar17._36_4_ = puVar23[6];
              auVar17._32_4_ = puVar23[2];
              auVar17._28_4_ = puVar23[0xd];
              auVar17._24_4_ = puVar23[9];
              auVar17._20_4_ = puVar23[5];
              auVar17._16_4_ = puVar23[1];
              auVar17._12_4_ = puVar23[0xc];
              auVar17._8_4_ = puVar23[8];
              auVar17._4_4_ = puVar23[4];
              auVar17._0_4_ = *puVar23;
              auVar8 = vmmul_q(auVar16,auVar17);
              *puVar23 = auVar8._0_4_;
              puVar23[1] = auVar8._16_4_;
              puVar23[2] = auVar8._32_4_;
              puVar23[3] = auVar8._48_4_;
              puVar23[4] = auVar8._4_4_;
              puVar23[5] = auVar8._20_4_;
              puVar23[6] = auVar8._36_4_;
              puVar23[7] = auVar8._52_4_;
              puVar23[8] = auVar8._8_4_;
              puVar23[9] = auVar8._24_4_;
              puVar23[10] = auVar8._40_4_;
              puVar23[0xb] = auVar8._56_4_;
              puVar23[0xc] = auVar8._12_4_;
              puVar23[0xd] = auVar8._28_4_;
              puVar23[0xe] = auVar8._44_4_;
              puVar23[0xf] = auVar8._60_4_;
              uVar31 = FUN_0896fd08(&local_1d0,puVar23);
              FUN_0896fd88(uVar31);
              FUN_08942fb8(*(undefined4 *)(param_2 + 0x9c),local_58,
                           *(undefined2 *)(pauVar22[0xc] + 8),local_84);
            }
          }
          iVar26 = iVar26 + 1;
          if (*(short *)(iVar24 + 0x1e) <= iVar26) break;
          sVar2 = *(short *)(iVar24 + 0x20);
        } while( true );
      }
      if (puVar23 != (undefined4 *)0x0) {
        FUN_0896fe50();
      }
    }
  }
  return;
}

