/* Entry 0x08948CCC | file offset 0x00145CA4 | FUN_08948ccc | bytes 2176 */

void FUN_08948ccc(int param_1)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  undefined1 (*pauVar29) [12];
  undefined4 *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_f26;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_160 [12];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
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
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100 [4];
  undefined4 local_f0 [4];
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float local_a0;
  float local_9c;
  undefined1 (*local_90) [12];
  uint local_68;
  undefined4 *local_64;
  undefined1 (*local_60) [12];
  undefined4 *local_5c;
  undefined1 (*local_58) [12];
  undefined *local_54;
  undefined *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  int local_44;
  undefined1 auVar9 [64];
  undefined1 auVar14 [64];
  undefined1 auVar19 [64];
  
  local_90 = DAT_09b6f470;
  local_64 = local_100;
  puVar30 = local_f0;
  pauVar29 = (undefined1 (*) [12])local_e0;
  iVar28 = *(int *)(param_1 + 0x68);
  if (iVar28 != 0) {
    local_4c = (undefined4 *)&DAT_089d91e0;
    local_58 = (undefined1 (*) [12])&DAT_089d9180;
    local_48 = (undefined4 *)&DAT_089d91d0;
    local_5c = &local_110;
    local_50 = &DAT_089d91f0;
    local_60 = &local_160;
    local_54 = &DAT_089d9204;
    local_44 = param_1;
    do {
      iVar26 = *(int *)(iVar28 + 0x1d0);
      if (iVar26 != 0) {
        iVar25 = FUN_08944f7c(local_44,iVar28);
        if (iVar25 != 0) {
          FUN_0896fbc0();
        }
        if (*(char *)(iVar28 + 1) == '\x01') {
          FUN_089a0be4((int)*(float *)(iVar28 + 0x194),(int)*(float *)(iVar28 + 0x198));
        }
        else {
          FUN_089a0be4(0x710,0x778);
        }
        iVar25 = 0;
        if (*(char *)(iVar28 + 1) == '\x01') {
          *(undefined4 *)(iVar28 + 0x4c) = *(undefined4 *)(iVar28 + 0x16c);
        }
        else {
          bVar1 = *(byte *)(iVar26 + 10);
          pauVar29 = local_58;
          if (bVar1 < 2) {
            puVar30 = local_48;
            if (bVar1 != 0) goto LAB_08948e94;
          }
          else {
            if (3 < bVar1) {
LAB_08948e94:
              local_68 = 0xff28ffff;
              puVar30 = local_4c;
              goto LAB_089494f8;
            }
            pauVar29 = (undefined1 (*) [12])(iVar26 + 0x50);
            puVar30 = (undefined4 *)(iVar26 + 0x40);
          }
          local_68 = 0xff28ffff;
          FUN_08935524(&local_140,iVar28 + 0x50,0x40);
          puVar24 = local_5c;
          auVar5._4_4_ = uStack_13c;
          auVar5._0_4_ = local_140;
          auVar5._8_4_ = uStack_138;
          auVar5._12_4_ = uStack_134;
          auVar5._16_4_ = local_130;
          auVar5._20_4_ = uStack_12c;
          auVar5._24_4_ = uStack_128;
          auVar5._28_4_ = uStack_124;
          auVar5._32_4_ = local_120;
          auVar5._36_4_ = uStack_11c;
          auVar5._40_4_ = uStack_118;
          auVar5._44_4_ = uStack_114;
          auVar5._48_4_ = local_110;
          auVar5._52_4_ = uStack_10c;
          auVar5._56_4_ = uStack_108;
          auVar5._60_4_ = uStack_104;
          uVar34 = vone_s();
          auVar3._12_4_ = uVar34;
          auVar3._8_4_ = *(undefined4 *)(*pauVar29 + 8);
          auVar3._4_4_ = *(undefined4 *)(*pauVar29 + 4);
          auVar3._0_4_ = *(undefined4 *)*pauVar29;
          auVar3 = vtfm4_q(auVar5,auVar3);
          *local_5c = auVar3._0_4_;
          puVar24[1] = auVar3._4_4_;
          puVar24[2] = auVar3._8_4_;
          puVar24[3] = auVar3._12_4_;
          bVar1 = *(byte *)(iVar26 + 0xb);
          if (bVar1 < 2) {
            if (bVar1 == 0) {
LAB_08948f14:
              iVar25 = (uint)*(byte *)(iVar26 + 0xb) * 4;
              unaff_f26 = (float)FUN_0896f5d0(*(undefined4 *)(local_50 + iVar25),
                                              *(undefined4 *)(local_54 + iVar25),local_90,&local_140
                                              ,puVar30);
LAB_08948f64:
              iVar25 = FUN_0896f8e8(local_90,&local_140,puVar30);
              goto LAB_08948f78;
            }
          }
          else {
            if (bVar1 < 4) {
              unaff_f26 = (float)FUN_0896f87c(*(undefined4 *)(iVar26 + 0x94),
                                              *(undefined4 *)(iVar26 + 0x98),local_90,puVar24);
              goto LAB_08948f64;
            }
            if (bVar1 < 5) goto LAB_08948f14;
          }
          unaff_f26 = 1.0;
          iVar25 = 0;
        }
LAB_08948f78:
        puVar24 = local_64;
        fVar33 = 1.0;
        if (*(char *)(iVar26 + 6) != '\0') {
          auVar2 = vsub_t(*local_90,*(undefined1 (*) [12])(iVar28 + 0x80));
          vone_s();
          uVar34 = vdot_t(auVar2,auVar2);
          uVar35 = vzero_s();
          uVar36 = vcmp_s(8,uVar34,auVar2._0_4_);
          vrsq_s(uVar34);
          uVar34 = vcmovt_s(uVar35,(byte)uVar36 & 1);
          vpfxd(4,4,4,5);
          auVar2 = vscl_t(auVar2,uVar34);
          uStack_b4 = vone_s();
          local_c0 = auVar2._0_4_;
          uStack_bc = auVar2._4_4_;
          local_b8 = auVar2._8_4_;
          local_64[1] = 0;
          *puVar24 = 0;
          puVar24[2] = 0x3f800000;
          puVar24[3] = 0x3f800000;
          bVar1 = *(byte *)(iVar26 + 6);
          if (bVar1 < 3) {
            if (1 < bVar1) {
              auVar5 = vmidt_q();
              *(undefined4 *)(iVar26 + 0x6c) = 0x3c360b60;
              auVar2 = vscl_t(*(undefined1 (*) [12])(iVar26 + 0x60),*(undefined4 *)(iVar26 + 0x6c));
              auVar6 = vrot_q(auVar2._8_4_,1,2,0,0);
              auVar7 = vrot_q(auVar2._8_4_,3,1,0,0);
              auVar3 = vidt_q();
              auVar4 = vidt_q();
              auVar8._60_4_ = auVar4._12_4_;
              auVar8._56_4_ = auVar3._12_4_;
              auVar8._52_4_ = auVar7._12_4_;
              auVar8._48_4_ = auVar6._12_4_;
              auVar8._44_4_ = auVar4._8_4_;
              auVar8._40_4_ = auVar3._8_4_;
              auVar8._36_4_ = auVar7._8_4_;
              auVar8._32_4_ = auVar6._8_4_;
              auVar8._28_4_ = auVar4._4_4_;
              auVar8._24_4_ = auVar3._4_4_;
              auVar8._20_4_ = auVar7._4_4_;
              auVar8._16_4_ = auVar6._4_4_;
              auVar8._12_4_ = auVar4._0_4_;
              auVar8._8_4_ = auVar3._0_4_;
              auVar8._4_4_ = auVar7._0_4_;
              auVar8._0_4_ = auVar6._0_4_;
              auVar9._60_4_ = auVar5._60_4_;
              auVar9._56_4_ = auVar5._44_4_;
              auVar9._52_4_ = auVar5._28_4_;
              auVar9._48_4_ = auVar5._12_4_;
              auVar9._44_4_ = auVar5._56_4_;
              auVar9._40_4_ = auVar5._40_4_;
              auVar9._36_4_ = auVar5._24_4_;
              auVar9._32_4_ = auVar5._8_4_;
              auVar9._28_4_ = auVar5._52_4_;
              auVar9._24_4_ = auVar5._36_4_;
              auVar9._20_4_ = auVar5._20_4_;
              auVar9._16_4_ = auVar5._4_4_;
              auVar9._12_4_ = auVar5._48_4_;
              auVar9._8_4_ = auVar5._32_4_;
              auVar9._4_4_ = auVar5._16_4_;
              auVar9._0_4_ = auVar5._0_4_;
              auVar5 = vmmul_q(auVar8,auVar9);
              auVar6 = vrot_q(auVar2._4_4_,1,0,3,0);
              auVar3 = vidt_q();
              auVar7 = vrot_q(auVar2._4_4_,2,0,1,0);
              auVar4 = vidt_q();
              auVar10._60_4_ = auVar4._12_4_;
              auVar10._56_4_ = auVar7._12_4_;
              auVar10._52_4_ = auVar3._12_4_;
              auVar10._48_4_ = auVar6._12_4_;
              auVar10._44_4_ = auVar4._8_4_;
              auVar10._40_4_ = auVar7._8_4_;
              auVar10._36_4_ = auVar3._8_4_;
              auVar10._32_4_ = auVar6._8_4_;
              auVar10._28_4_ = auVar4._4_4_;
              auVar10._24_4_ = auVar7._4_4_;
              auVar10._20_4_ = auVar3._4_4_;
              auVar10._16_4_ = auVar6._4_4_;
              auVar10._12_4_ = auVar4._0_4_;
              auVar10._8_4_ = auVar7._0_4_;
              auVar10._4_4_ = auVar3._0_4_;
              auVar10._0_4_ = auVar6._0_4_;
              auVar5 = vmmul_q(auVar10,auVar5);
              auVar3 = vidt_q();
              auVar6 = vrot_q(auVar2._0_4_,0,1,2,0);
              auVar7 = vrot_q(auVar2._0_4_,0,3,1,0);
              auVar4 = vidt_q();
              auVar11._60_4_ = auVar4._12_4_;
              auVar11._56_4_ = auVar7._12_4_;
              auVar11._52_4_ = auVar6._12_4_;
              auVar11._48_4_ = auVar3._12_4_;
              auVar11._44_4_ = auVar4._8_4_;
              auVar11._40_4_ = auVar7._8_4_;
              auVar11._36_4_ = auVar6._8_4_;
              auVar11._32_4_ = auVar3._8_4_;
              auVar11._28_4_ = auVar4._4_4_;
              auVar11._24_4_ = auVar7._4_4_;
              auVar11._20_4_ = auVar6._4_4_;
              auVar11._16_4_ = auVar3._4_4_;
              auVar11._12_4_ = auVar4._0_4_;
              auVar11._8_4_ = auVar7._0_4_;
              auVar11._4_4_ = auVar6._0_4_;
              auVar11._0_4_ = auVar3._0_4_;
              auVar5 = vmmul_q(auVar11,auVar5);
              auVar12._60_4_ = *(undefined4 *)(iVar28 + 0x8c);
              auVar12._56_4_ = *(undefined4 *)(iVar28 + 0x7c);
              auVar12._52_4_ = *(undefined4 *)(iVar28 + 0x6c);
              auVar12._48_4_ = *(undefined4 *)(iVar28 + 0x5c);
              auVar12._44_4_ = *(undefined4 *)(iVar28 + 0x88);
              auVar12._40_4_ = *(undefined4 *)(iVar28 + 0x78);
              auVar12._36_4_ = *(undefined4 *)(iVar28 + 0x68);
              auVar12._32_4_ = *(undefined4 *)(iVar28 + 0x58);
              auVar12._28_4_ = *(undefined4 *)(iVar28 + 0x84);
              auVar12._24_4_ = *(undefined4 *)(iVar28 + 0x74);
              auVar12._20_4_ = *(undefined4 *)(iVar28 + 100);
              auVar12._16_4_ = *(undefined4 *)(iVar28 + 0x54);
              auVar12._12_4_ = *(undefined4 *)(iVar28 + 0x80);
              auVar12._8_4_ = *(undefined4 *)(iVar28 + 0x70);
              auVar12._4_4_ = *(undefined4 *)(iVar28 + 0x60);
              auVar12._0_4_ = *(undefined4 *)(iVar28 + 0x50);
              auVar5 = vmmul_q(auVar12,auVar5);
              local_180 = auVar5._0_4_;
              local_170 = auVar5._4_4_;
              local_160._0_4_ = auVar5._8_4_;
              local_150 = auVar5._12_4_;
              uStack_17c = auVar5._16_4_;
              local_16c = auVar5._20_4_;
              local_160._4_4_ = auVar5._24_4_;
              uStack_14c = auVar5._28_4_;
              uStack_178 = auVar5._32_4_;
              uStack_168 = auVar5._36_4_;
              local_160._8_4_ = auVar5._40_4_;
              uStack_148 = auVar5._44_4_;
              uStack_174 = auVar5._48_4_;
              uStack_164 = auVar5._52_4_;
              local_154 = auVar5._56_4_;
              local_144 = auVar5._60_4_;
              uVar34 = vdot_t(*local_60,*local_60);
              uVar35 = vzero_s();
              uVar36 = vcmp_s(8,uVar34,*(undefined4 *)*local_60);
              vrsq_s(uVar34);
              uVar34 = vcmovt_s(uVar35,(byte)uVar36 & 1);
              vpfxd(4,4,4,5);
              auVar2 = vscl_t(*local_60,uVar34);
              local_d0 = auVar2._0_4_;
              local_cc = auVar2._4_4_;
              local_c8 = auVar2._8_4_;
              local_c4 = vone_s();
              auVar23._4_4_ = uStack_bc;
              auVar23._0_4_ = local_c0;
              auVar23._8_4_ = local_b8;
              local_a0 = (float)vdot_t(auVar2,auVar23);
              if (local_a0 < -1.0) {
                fVar31 = -1.0;
              }
              else {
                fVar31 = local_a0;
                if (1.0 < local_a0) {
                  fVar31 = 1.0;
                }
              }
              fVar31 = (float)FUN_08867e98(fVar31);
              fVar32 = 180.0 - (fVar31 * 180.0) / 3.1515925;
              fVar31 = *(float *)(iVar26 + 0x70);
              if (fVar32 < *(float *)(iVar26 + 0x80)) {
                if (fVar31 <= fVar32) {
                  fVar33 = *(float *)(iVar26 + 0x80) - fVar31;
                  if (fVar33 <= 0.0) goto LAB_089494f8;
                  fVar33 = 1.0 - (fVar32 - fVar31) / fVar33;
                }
              }
              else {
                fVar33 = 0.0;
              }
            }
          }
          else if (bVar1 < 4) {
            auVar5 = vmidt_q();
            *(undefined4 *)(iVar26 + 0x6c) = 0x3c360b60;
            auVar2 = vscl_t(*(undefined1 (*) [12])(iVar26 + 0x60),*(undefined4 *)(iVar26 + 0x6c));
            auVar6 = vrot_q(auVar2._8_4_,1,2,0,0);
            auVar7 = vrot_q(auVar2._8_4_,3,1,0,0);
            auVar3 = vidt_q();
            auVar4 = vidt_q();
            auVar13._60_4_ = auVar4._12_4_;
            auVar13._56_4_ = auVar3._12_4_;
            auVar13._52_4_ = auVar7._12_4_;
            auVar13._48_4_ = auVar6._12_4_;
            auVar13._44_4_ = auVar4._8_4_;
            auVar13._40_4_ = auVar3._8_4_;
            auVar13._36_4_ = auVar7._8_4_;
            auVar13._32_4_ = auVar6._8_4_;
            auVar13._28_4_ = auVar4._4_4_;
            auVar13._24_4_ = auVar3._4_4_;
            auVar13._20_4_ = auVar7._4_4_;
            auVar13._16_4_ = auVar6._4_4_;
            auVar13._12_4_ = auVar4._0_4_;
            auVar13._8_4_ = auVar3._0_4_;
            auVar13._4_4_ = auVar7._0_4_;
            auVar13._0_4_ = auVar6._0_4_;
            auVar14._60_4_ = auVar5._60_4_;
            auVar14._56_4_ = auVar5._44_4_;
            auVar14._52_4_ = auVar5._28_4_;
            auVar14._48_4_ = auVar5._12_4_;
            auVar14._44_4_ = auVar5._56_4_;
            auVar14._40_4_ = auVar5._40_4_;
            auVar14._36_4_ = auVar5._24_4_;
            auVar14._32_4_ = auVar5._8_4_;
            auVar14._28_4_ = auVar5._52_4_;
            auVar14._24_4_ = auVar5._36_4_;
            auVar14._20_4_ = auVar5._20_4_;
            auVar14._16_4_ = auVar5._4_4_;
            auVar14._12_4_ = auVar5._48_4_;
            auVar14._8_4_ = auVar5._32_4_;
            auVar14._4_4_ = auVar5._16_4_;
            auVar14._0_4_ = auVar5._0_4_;
            auVar5 = vmmul_q(auVar13,auVar14);
            auVar6 = vrot_q(auVar2._4_4_,1,0,3,0);
            auVar3 = vidt_q();
            auVar7 = vrot_q(auVar2._4_4_,2,0,1,0);
            auVar4 = vidt_q();
            auVar15._60_4_ = auVar4._12_4_;
            auVar15._56_4_ = auVar7._12_4_;
            auVar15._52_4_ = auVar3._12_4_;
            auVar15._48_4_ = auVar6._12_4_;
            auVar15._44_4_ = auVar4._8_4_;
            auVar15._40_4_ = auVar7._8_4_;
            auVar15._36_4_ = auVar3._8_4_;
            auVar15._32_4_ = auVar6._8_4_;
            auVar15._28_4_ = auVar4._4_4_;
            auVar15._24_4_ = auVar7._4_4_;
            auVar15._20_4_ = auVar3._4_4_;
            auVar15._16_4_ = auVar6._4_4_;
            auVar15._12_4_ = auVar4._0_4_;
            auVar15._8_4_ = auVar7._0_4_;
            auVar15._4_4_ = auVar3._0_4_;
            auVar15._0_4_ = auVar6._0_4_;
            auVar5 = vmmul_q(auVar15,auVar5);
            auVar3 = vidt_q();
            auVar6 = vrot_q(auVar2._0_4_,0,1,2,0);
            auVar7 = vrot_q(auVar2._0_4_,0,3,1,0);
            auVar4 = vidt_q();
            auVar16._60_4_ = auVar4._12_4_;
            auVar16._56_4_ = auVar7._12_4_;
            auVar16._52_4_ = auVar6._12_4_;
            auVar16._48_4_ = auVar3._12_4_;
            auVar16._44_4_ = auVar4._8_4_;
            auVar16._40_4_ = auVar7._8_4_;
            auVar16._36_4_ = auVar6._8_4_;
            auVar16._32_4_ = auVar3._8_4_;
            auVar16._28_4_ = auVar4._4_4_;
            auVar16._24_4_ = auVar7._4_4_;
            auVar16._20_4_ = auVar6._4_4_;
            auVar16._16_4_ = auVar3._4_4_;
            auVar16._12_4_ = auVar4._0_4_;
            auVar16._8_4_ = auVar7._0_4_;
            auVar16._4_4_ = auVar6._0_4_;
            auVar16._0_4_ = auVar3._0_4_;
            auVar5 = vmmul_q(auVar16,auVar5);
            auVar17._60_4_ = *(undefined4 *)(iVar28 + 0x8c);
            auVar17._56_4_ = *(undefined4 *)(iVar28 + 0x7c);
            auVar17._52_4_ = *(undefined4 *)(iVar28 + 0x6c);
            auVar17._48_4_ = *(undefined4 *)(iVar28 + 0x5c);
            auVar17._44_4_ = *(undefined4 *)(iVar28 + 0x88);
            auVar17._40_4_ = *(undefined4 *)(iVar28 + 0x78);
            auVar17._36_4_ = *(undefined4 *)(iVar28 + 0x68);
            auVar17._32_4_ = *(undefined4 *)(iVar28 + 0x58);
            auVar17._28_4_ = *(undefined4 *)(iVar28 + 0x84);
            auVar17._24_4_ = *(undefined4 *)(iVar28 + 0x74);
            auVar17._20_4_ = *(undefined4 *)(iVar28 + 100);
            auVar17._16_4_ = *(undefined4 *)(iVar28 + 0x54);
            auVar17._12_4_ = *(undefined4 *)(iVar28 + 0x80);
            auVar17._8_4_ = *(undefined4 *)(iVar28 + 0x70);
            auVar17._4_4_ = *(undefined4 *)(iVar28 + 0x60);
            auVar17._0_4_ = *(undefined4 *)(iVar28 + 0x50);
            auVar5 = vmmul_q(auVar17,auVar5);
            local_180 = auVar5._0_4_;
            local_170 = auVar5._4_4_;
            uStack_17c = auVar5._16_4_;
            local_16c = auVar5._20_4_;
            uStack_178 = auVar5._32_4_;
            uStack_168 = auVar5._36_4_;
            uStack_174 = auVar5._48_4_;
            uStack_164 = auVar5._52_4_;
            local_160._0_4_ = auVar5._8_4_;
            local_160._4_4_ = auVar5._24_4_;
            local_160._8_4_ = auVar5._40_4_;
            local_154 = auVar5._56_4_;
            local_150 = auVar5._12_4_;
            uStack_14c = auVar5._28_4_;
            uStack_148 = auVar5._44_4_;
            local_144 = auVar5._60_4_;
            uVar27 = *(uint *)*local_60;
            uVar34 = *(undefined4 *)(*local_60 + 8);
            auVar21._4_4_ = 0;
            auVar21._0_4_ = uVar27;
            auVar21._8_4_ = uVar34;
            auVar20._4_4_ = 0;
            auVar20._0_4_ = uVar27;
            auVar20._8_4_ = uVar34;
            auVar2._4_4_ = 0;
            auVar2._0_4_ = uVar27;
            auVar2._8_4_ = uVar34;
            uVar34 = vdot_t(auVar2,auVar20);
            uVar35 = vzero_s();
            uVar36 = vcmp_s(8,uVar34,uVar27);
            vrsq_s(uVar34);
            uVar34 = vcmovt_s(uVar35,(byte)uVar36 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(auVar21,uVar34);
            local_c4 = vone_s();
            local_d0 = auVar2._0_4_;
            local_cc = auVar2._4_4_;
            local_c8 = auVar2._8_4_;
            *(undefined4 *)*pauVar29 = local_c0;
            *(undefined4 *)(*pauVar29 + 4) = 0;
            *(undefined4 *)(*pauVar29 + 8) = local_b8;
            uVar34 = vdot_t(*pauVar29,*pauVar29);
            uVar35 = vzero_s();
            uVar36 = vcmp_s(8,uVar34,*(undefined4 *)*pauVar29);
            vrsq_s(uVar34);
            uVar34 = vcmovt_s(uVar35,(byte)uVar36 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(*pauVar29,uVar34);
            uVar34 = vone_s();
            *(int *)*pauVar29 = auVar2._0_4_;
            *(int *)(*pauVar29 + 4) = auVar2._4_4_;
            *(int *)(*pauVar29 + 8) = auVar2._8_4_;
            *(undefined4 *)pauVar29[1] = uVar34;
            auVar22._4_4_ = local_cc;
            auVar22._0_4_ = local_d0;
            auVar22._8_4_ = local_c8;
            local_9c = (float)vdot_t(auVar22,*pauVar29);
            if (local_9c < -1.0) {
              fVar31 = -1.0;
            }
            else {
              fVar31 = local_9c;
              if (1.0 < local_9c) {
                fVar31 = 1.0;
              }
            }
            fVar31 = (float)FUN_08867e98(fVar31);
            fVar32 = 180.0 - (fVar31 * 180.0) / 3.1515925;
            fVar31 = *(float *)(iVar26 + 0x74);
            if (fVar32 < *(float *)(iVar26 + 0x84)) {
              if (fVar31 <= fVar32) {
                fVar33 = *(float *)(iVar26 + 0x84) - fVar31;
                if (fVar33 <= 0.0) goto LAB_089494f8;
                fVar33 = 1.0 - (fVar32 - fVar31) / fVar33;
              }
            }
            else {
              fVar33 = 0.0;
            }
          }
        }
        if (iVar25 == 0) {
          uVar27 = local_68 & 0xffffff | (int)(unaff_f26 * 255.0 * fVar33) << 0x18;
        }
        else {
          uVar27 = 0xff0000ff;
          unaff_f26 = fVar33;
        }
        if (unaff_f26 * fVar33 == 0.0) {
          uVar27 = 0xff0000ff;
        }
        if ((*(ushort *)(iVar28 + 10) & 0x80) != 0) {
          uVar27 = 0xff0000ff;
        }
        FUN_08935828(&local_180,0,0x40);
        local_180 = *puVar30;
        local_16c = puVar30[1];
        local_160._8_4_ = puVar30[2];
        local_144 = 0x3f800000;
        auVar18._60_4_ = uStack_104;
        auVar18._56_4_ = uStack_114;
        auVar18._52_4_ = uStack_124;
        auVar18._48_4_ = uStack_134;
        auVar18._44_4_ = uStack_108;
        auVar18._40_4_ = uStack_118;
        auVar18._36_4_ = uStack_128;
        auVar18._32_4_ = uStack_138;
        auVar18._28_4_ = uStack_10c;
        auVar18._24_4_ = uStack_11c;
        auVar18._20_4_ = uStack_12c;
        auVar18._16_4_ = uStack_13c;
        auVar18._12_4_ = local_110;
        auVar18._8_4_ = local_120;
        auVar18._4_4_ = local_130;
        auVar18._0_4_ = local_140;
        auVar19._60_4_ = 0x3f800000;
        auVar19._56_4_ = local_154;
        auVar19._52_4_ = uStack_164;
        auVar19._48_4_ = uStack_174;
        auVar19._44_4_ = uStack_148;
        auVar19._40_4_ = local_160._8_4_;
        auVar19._36_4_ = uStack_168;
        auVar19._32_4_ = uStack_178;
        auVar19._28_4_ = uStack_14c;
        auVar19._24_4_ = local_160._4_4_;
        auVar19._20_4_ = local_16c;
        auVar19._16_4_ = uStack_17c;
        auVar19._12_4_ = local_150;
        auVar19._8_4_ = local_160._0_4_;
        auVar19._4_4_ = local_170;
        auVar19._0_4_ = local_180;
        auVar5 = vmmul_q(auVar18,auVar19);
        local_140 = auVar5._0_4_;
        local_130 = auVar5._4_4_;
        local_120 = auVar5._8_4_;
        local_110 = auVar5._12_4_;
        uStack_13c = auVar5._16_4_;
        uStack_12c = auVar5._20_4_;
        uStack_11c = auVar5._24_4_;
        uStack_10c = auVar5._28_4_;
        uStack_138 = auVar5._32_4_;
        uStack_128 = auVar5._36_4_;
        uStack_118 = auVar5._40_4_;
        uStack_108 = auVar5._44_4_;
        uStack_134 = auVar5._48_4_;
        uStack_124 = auVar5._52_4_;
        uStack_114 = auVar5._56_4_;
        uStack_104 = auVar5._60_4_;
        FUN_08946700(&local_140,uVar27);
      }
LAB_089494f8:
      iVar28 = *(int *)(iVar28 + 0x154);
    } while (iVar28 != 0);
  }
  return;
}

