/* Entry 0x0894ABA4 | file offset 0x00147B7C | FUN_0894aba4 | bytes 2280 */

void FUN_0894aba4(int param_1)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined4 *puVar19;
  int iVar20;
  undefined *puVar21;
  int iVar22;
  int iVar23;
  undefined1 (*unaff_s4) [12];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_160 [12];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100 [12];
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
  undefined4 *local_68;
  undefined1 (*local_64) [12];
  undefined4 *local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 (*local_54) [12];
  undefined *local_50;
  undefined1 auVar10 [64];
  undefined1 auVar15 [64];
  
  DAT_09b6f478 = param_1;
  *(undefined1 *)(param_1 + 0x94) = 6;
  if (*(int *)(param_1 + 0x70) != 0) {
    local_90 = DAT_09b6f470;
    local_68 = local_100;
    iVar22 = *(int *)(param_1 + 0x68);
    if (iVar22 != 0) {
      local_50 = &DAT_089d9300;
      local_60 = &local_110;
      local_54 = (undefined1 (*) [12])&DAT_089d92f0;
      local_58 = &DAT_089d9310;
      local_5c = &DAT_089d9324;
      local_64 = &local_160;
      *(int *)(param_1 + 0x88) = iVar22;
      do {
        if ((((uint)*(ushort *)(param_1 + 0x24) & 1 << (**(uint **)(iVar22 + 0x1d0) >> 0x1c)) == 0)
           && ((*(ushort *)(iVar22 + 10) & 0xff7f) == 0)) {
          FUN_0894622c(param_1,iVar22);
          puVar19 = local_60;
          fVar26 = 1.0;
          *(ushort *)(iVar22 + 10) = *(ushort *)(iVar22 + 10) & 0xff7f;
          iVar23 = *(int *)(iVar22 + 0x1d0);
          *(ushort *)(iVar22 + 0xe) = *(ushort *)(iVar22 + 0xe) & 0xff7f;
          if (*(char *)(iVar22 + 1) == '\x01') {
            *(undefined4 *)(iVar22 + 0x4c) = *(undefined4 *)(iVar22 + 0x16c);
LAB_0894af4c:
            fVar24 = *(float *)(iVar22 + 0xcc);
LAB_0894af50:
            puVar19 = local_68;
            iVar23 = *(int *)(iVar22 + 0x1d0);
            *(float *)(iVar22 + 0x4c) = fVar24 * *(float *)(iVar22 + 0x16c) * fVar26;
            if ((iVar23 != 0) && (*(char *)(iVar23 + 6) != '\0')) {
              auVar2 = vsub_t(*local_90,*(undefined1 (*) [12])(iVar22 + 0x80));
              vone_s();
              uVar27 = vdot_t(auVar2,auVar2);
              uVar28 = vzero_s();
              uVar29 = vcmp_s(8,uVar27,auVar2._0_4_);
              vrsq_s(uVar27);
              uVar27 = vcmovt_s(uVar28,(byte)uVar29 & 1);
              vpfxd(4,4,4,5);
              auVar2 = vscl_t(auVar2,uVar27);
              local_c0 = auVar2._0_4_;
              uStack_bc = auVar2._4_4_;
              local_b8 = auVar2._8_4_;
              uStack_b4 = vone_s();
              local_68[1] = 0;
              *puVar19 = 0;
              puVar19[2] = 0x3f800000;
              puVar19[3] = 0x3f800000;
              bVar1 = *(byte *)(iVar23 + 6);
              if (bVar1 < 3) {
                if (bVar1 < 2) goto LAB_0894b3e4;
                auVar6 = vmidt_q();
                *(undefined4 *)(iVar23 + 0x6c) = 0x3c360b60;
                auVar2 = vscl_t(*(undefined1 (*) [12])(iVar23 + 0x60),*(undefined4 *)(iVar23 + 0x6c)
                               );
                auVar7 = vrot_q(auVar2._8_4_,1,2,0,0);
                auVar8 = vrot_q(auVar2._8_4_,3,1,0,0);
                auVar4 = vidt_q();
                auVar5 = vidt_q();
                auVar9._60_4_ = auVar5._12_4_;
                auVar9._56_4_ = auVar4._12_4_;
                auVar9._52_4_ = auVar8._12_4_;
                auVar9._48_4_ = auVar7._12_4_;
                auVar9._44_4_ = auVar5._8_4_;
                auVar9._40_4_ = auVar4._8_4_;
                auVar9._36_4_ = auVar8._8_4_;
                auVar9._32_4_ = auVar7._8_4_;
                auVar9._28_4_ = auVar5._4_4_;
                auVar9._24_4_ = auVar4._4_4_;
                auVar9._20_4_ = auVar8._4_4_;
                auVar9._16_4_ = auVar7._4_4_;
                auVar9._12_4_ = auVar5._0_4_;
                auVar9._8_4_ = auVar4._0_4_;
                auVar9._4_4_ = auVar8._0_4_;
                auVar9._0_4_ = auVar7._0_4_;
                auVar10._60_4_ = auVar6._60_4_;
                auVar10._56_4_ = auVar6._44_4_;
                auVar10._52_4_ = auVar6._28_4_;
                auVar10._48_4_ = auVar6._12_4_;
                auVar10._44_4_ = auVar6._56_4_;
                auVar10._40_4_ = auVar6._40_4_;
                auVar10._36_4_ = auVar6._24_4_;
                auVar10._32_4_ = auVar6._8_4_;
                auVar10._28_4_ = auVar6._52_4_;
                auVar10._24_4_ = auVar6._36_4_;
                auVar10._20_4_ = auVar6._20_4_;
                auVar10._16_4_ = auVar6._4_4_;
                auVar10._12_4_ = auVar6._48_4_;
                auVar10._8_4_ = auVar6._32_4_;
                auVar10._4_4_ = auVar6._16_4_;
                auVar10._0_4_ = auVar6._0_4_;
                auVar6 = vmmul_q(auVar9,auVar10);
                auVar7 = vrot_q(auVar2._4_4_,1,0,3,0);
                auVar4 = vidt_q();
                auVar8 = vrot_q(auVar2._4_4_,2,0,1,0);
                auVar5 = vidt_q();
                auVar11._60_4_ = auVar5._12_4_;
                auVar11._56_4_ = auVar8._12_4_;
                auVar11._52_4_ = auVar4._12_4_;
                auVar11._48_4_ = auVar7._12_4_;
                auVar11._44_4_ = auVar5._8_4_;
                auVar11._40_4_ = auVar8._8_4_;
                auVar11._36_4_ = auVar4._8_4_;
                auVar11._32_4_ = auVar7._8_4_;
                auVar11._28_4_ = auVar5._4_4_;
                auVar11._24_4_ = auVar8._4_4_;
                auVar11._20_4_ = auVar4._4_4_;
                auVar11._16_4_ = auVar7._4_4_;
                auVar11._12_4_ = auVar5._0_4_;
                auVar11._8_4_ = auVar8._0_4_;
                auVar11._4_4_ = auVar4._0_4_;
                auVar11._0_4_ = auVar7._0_4_;
                auVar6 = vmmul_q(auVar11,auVar6);
                auVar4 = vidt_q();
                auVar7 = vrot_q(auVar2._0_4_,0,1,2,0);
                auVar8 = vrot_q(auVar2._0_4_,0,3,1,0);
                auVar5 = vidt_q();
                auVar12._60_4_ = auVar5._12_4_;
                auVar12._56_4_ = auVar8._12_4_;
                auVar12._52_4_ = auVar7._12_4_;
                auVar12._48_4_ = auVar4._12_4_;
                auVar12._44_4_ = auVar5._8_4_;
                auVar12._40_4_ = auVar8._8_4_;
                auVar12._36_4_ = auVar7._8_4_;
                auVar12._32_4_ = auVar4._8_4_;
                auVar12._28_4_ = auVar5._4_4_;
                auVar12._24_4_ = auVar8._4_4_;
                auVar12._20_4_ = auVar7._4_4_;
                auVar12._16_4_ = auVar4._4_4_;
                auVar12._12_4_ = auVar5._0_4_;
                auVar12._8_4_ = auVar8._0_4_;
                auVar12._4_4_ = auVar7._0_4_;
                auVar12._0_4_ = auVar4._0_4_;
                auVar6 = vmmul_q(auVar12,auVar6);
                auVar13._60_4_ = *(undefined4 *)(iVar22 + 0x8c);
                auVar13._56_4_ = *(undefined4 *)(iVar22 + 0x7c);
                auVar13._52_4_ = *(undefined4 *)(iVar22 + 0x6c);
                auVar13._48_4_ = *(undefined4 *)(iVar22 + 0x5c);
                auVar13._44_4_ = *(undefined4 *)(iVar22 + 0x88);
                auVar13._40_4_ = *(undefined4 *)(iVar22 + 0x78);
                auVar13._36_4_ = *(undefined4 *)(iVar22 + 0x68);
                auVar13._32_4_ = *(undefined4 *)(iVar22 + 0x58);
                auVar13._28_4_ = *(undefined4 *)(iVar22 + 0x84);
                auVar13._24_4_ = *(undefined4 *)(iVar22 + 0x74);
                auVar13._20_4_ = *(undefined4 *)(iVar22 + 100);
                auVar13._16_4_ = *(undefined4 *)(iVar22 + 0x54);
                auVar13._12_4_ = *(undefined4 *)(iVar22 + 0x80);
                auVar13._8_4_ = *(undefined4 *)(iVar22 + 0x70);
                auVar13._4_4_ = *(undefined4 *)(iVar22 + 0x60);
                auVar13._0_4_ = *(undefined4 *)(iVar22 + 0x50);
                auVar6 = vmmul_q(auVar13,auVar6);
                local_160._0_4_ = auVar6._8_4_;
                local_150 = auVar6._12_4_;
                local_160._4_4_ = auVar6._24_4_;
                uStack_14c = auVar6._28_4_;
                local_160._8_4_ = auVar6._40_4_;
                uStack_148 = auVar6._44_4_;
                local_154 = auVar6._56_4_;
                uStack_144 = auVar6._60_4_;
                uVar27 = vdot_t(*local_64,*local_64);
                uVar28 = vzero_s();
                uVar29 = vcmp_s(8,uVar27,*(undefined4 *)*local_64);
                vrsq_s(uVar27);
                uVar27 = vcmovt_s(uVar28,(byte)uVar29 & 1);
                vpfxd(4,4,4,5);
                auVar2 = vscl_t(*local_64,uVar27);
                local_d0 = auVar2._0_4_;
                local_cc = auVar2._4_4_;
                local_c8 = auVar2._8_4_;
                local_c4 = vone_s();
                auVar3._4_4_ = uStack_bc;
                auVar3._0_4_ = local_c0;
                auVar3._8_4_ = local_b8;
                local_a0 = (float)vdot_t(auVar2,auVar3);
                if (local_a0 < -1.0) {
                  fVar26 = -1.0;
                }
                else {
                  fVar26 = local_a0;
                  if (1.0 < local_a0) {
                    fVar26 = 1.0;
                  }
                }
                fVar26 = (float)FUN_08867e98(fVar26);
                fVar24 = 180.0 - (fVar26 * 180.0) / 3.1515925;
                fVar26 = *(float *)(iVar23 + 0x70);
                if (fVar24 < *(float *)(iVar23 + 0x80)) {
                  if (fVar26 <= fVar24) {
                    fVar25 = *(float *)(iVar23 + 0x80) - fVar26;
                    if (fVar25 <= 0.0) goto LAB_0894b42c;
                    fVar26 = 1.0 - (fVar24 - fVar26) / fVar25;
                  }
                  else {
                    fVar26 = 1.0;
                  }
                }
                else {
                  fVar26 = 0.0;
                }
              }
              else if (bVar1 < 4) {
                auVar6 = vmidt_q();
                *(undefined4 *)(iVar23 + 0x6c) = 0x3c360b60;
                auVar2 = vscl_t(*(undefined1 (*) [12])(iVar23 + 0x60),*(undefined4 *)(iVar23 + 0x6c)
                               );
                auVar7 = vrot_q(auVar2._8_4_,1,2,0,0);
                auVar8 = vrot_q(auVar2._8_4_,3,1,0,0);
                auVar4 = vidt_q();
                auVar5 = vidt_q();
                auVar14._60_4_ = auVar5._12_4_;
                auVar14._56_4_ = auVar4._12_4_;
                auVar14._52_4_ = auVar8._12_4_;
                auVar14._48_4_ = auVar7._12_4_;
                auVar14._44_4_ = auVar5._8_4_;
                auVar14._40_4_ = auVar4._8_4_;
                auVar14._36_4_ = auVar8._8_4_;
                auVar14._32_4_ = auVar7._8_4_;
                auVar14._28_4_ = auVar5._4_4_;
                auVar14._24_4_ = auVar4._4_4_;
                auVar14._20_4_ = auVar8._4_4_;
                auVar14._16_4_ = auVar7._4_4_;
                auVar14._12_4_ = auVar5._0_4_;
                auVar14._8_4_ = auVar4._0_4_;
                auVar14._4_4_ = auVar8._0_4_;
                auVar14._0_4_ = auVar7._0_4_;
                auVar15._60_4_ = auVar6._60_4_;
                auVar15._56_4_ = auVar6._44_4_;
                auVar15._52_4_ = auVar6._28_4_;
                auVar15._48_4_ = auVar6._12_4_;
                auVar15._44_4_ = auVar6._56_4_;
                auVar15._40_4_ = auVar6._40_4_;
                auVar15._36_4_ = auVar6._24_4_;
                auVar15._32_4_ = auVar6._8_4_;
                auVar15._28_4_ = auVar6._52_4_;
                auVar15._24_4_ = auVar6._36_4_;
                auVar15._20_4_ = auVar6._20_4_;
                auVar15._16_4_ = auVar6._4_4_;
                auVar15._12_4_ = auVar6._48_4_;
                auVar15._8_4_ = auVar6._32_4_;
                auVar15._4_4_ = auVar6._16_4_;
                auVar15._0_4_ = auVar6._0_4_;
                auVar6 = vmmul_q(auVar14,auVar15);
                auVar7 = vrot_q(auVar2._4_4_,1,0,3,0);
                auVar4 = vidt_q();
                auVar8 = vrot_q(auVar2._4_4_,2,0,1,0);
                auVar5 = vidt_q();
                auVar16._60_4_ = auVar5._12_4_;
                auVar16._56_4_ = auVar8._12_4_;
                auVar16._52_4_ = auVar4._12_4_;
                auVar16._48_4_ = auVar7._12_4_;
                auVar16._44_4_ = auVar5._8_4_;
                auVar16._40_4_ = auVar8._8_4_;
                auVar16._36_4_ = auVar4._8_4_;
                auVar16._32_4_ = auVar7._8_4_;
                auVar16._28_4_ = auVar5._4_4_;
                auVar16._24_4_ = auVar8._4_4_;
                auVar16._20_4_ = auVar4._4_4_;
                auVar16._16_4_ = auVar7._4_4_;
                auVar16._12_4_ = auVar5._0_4_;
                auVar16._8_4_ = auVar8._0_4_;
                auVar16._4_4_ = auVar4._0_4_;
                auVar16._0_4_ = auVar7._0_4_;
                auVar6 = vmmul_q(auVar16,auVar6);
                auVar4 = vidt_q();
                auVar7 = vrot_q(auVar2._0_4_,0,1,2,0);
                auVar8 = vrot_q(auVar2._0_4_,0,3,1,0);
                auVar5 = vidt_q();
                auVar17._60_4_ = auVar5._12_4_;
                auVar17._56_4_ = auVar8._12_4_;
                auVar17._52_4_ = auVar7._12_4_;
                auVar17._48_4_ = auVar4._12_4_;
                auVar17._44_4_ = auVar5._8_4_;
                auVar17._40_4_ = auVar8._8_4_;
                auVar17._36_4_ = auVar7._8_4_;
                auVar17._32_4_ = auVar4._8_4_;
                auVar17._28_4_ = auVar5._4_4_;
                auVar17._24_4_ = auVar8._4_4_;
                auVar17._20_4_ = auVar7._4_4_;
                auVar17._16_4_ = auVar4._4_4_;
                auVar17._12_4_ = auVar5._0_4_;
                auVar17._8_4_ = auVar8._0_4_;
                auVar17._4_4_ = auVar7._0_4_;
                auVar17._0_4_ = auVar4._0_4_;
                auVar6 = vmmul_q(auVar17,auVar6);
                auVar18._60_4_ = *(undefined4 *)(iVar22 + 0x8c);
                auVar18._56_4_ = *(undefined4 *)(iVar22 + 0x7c);
                auVar18._52_4_ = *(undefined4 *)(iVar22 + 0x6c);
                auVar18._48_4_ = *(undefined4 *)(iVar22 + 0x5c);
                auVar18._44_4_ = *(undefined4 *)(iVar22 + 0x88);
                auVar18._40_4_ = *(undefined4 *)(iVar22 + 0x78);
                auVar18._36_4_ = *(undefined4 *)(iVar22 + 0x68);
                auVar18._32_4_ = *(undefined4 *)(iVar22 + 0x58);
                auVar18._28_4_ = *(undefined4 *)(iVar22 + 0x84);
                auVar18._24_4_ = *(undefined4 *)(iVar22 + 0x74);
                auVar18._20_4_ = *(undefined4 *)(iVar22 + 100);
                auVar18._16_4_ = *(undefined4 *)(iVar22 + 0x54);
                auVar18._12_4_ = *(undefined4 *)(iVar22 + 0x80);
                auVar18._8_4_ = *(undefined4 *)(iVar22 + 0x70);
                auVar18._4_4_ = *(undefined4 *)(iVar22 + 0x60);
                auVar18._0_4_ = *(undefined4 *)(iVar22 + 0x50);
                auVar6 = vmmul_q(auVar18,auVar6);
                local_160._0_4_ = auVar6._8_4_;
                local_150 = auVar6._12_4_;
                local_160._4_4_ = auVar6._24_4_;
                uStack_14c = auVar6._28_4_;
                local_160._8_4_ = auVar6._40_4_;
                uStack_148 = auVar6._44_4_;
                local_154 = auVar6._56_4_;
                uStack_144 = auVar6._60_4_;
                uVar27 = vdot_t(*local_64,*local_64);
                uVar28 = vzero_s();
                uVar29 = vcmp_s(8,uVar27,*(undefined4 *)*local_64);
                vrsq_s(uVar27);
                uVar27 = vcmovt_s(uVar28,(byte)uVar29 & 1);
                vpfxd(4,4,4,5);
                auVar2 = vscl_t(*local_64,uVar27);
                local_d0 = auVar2._0_4_;
                local_cc = auVar2._4_4_;
                local_c8 = auVar2._8_4_;
                local_c4 = vone_s();
                *(undefined4 *)*unaff_s4 = local_c0;
                *(undefined4 *)(*unaff_s4 + 4) = 0;
                *(undefined4 *)(*unaff_s4 + 8) = local_b8;
                uVar27 = vdot_t(*unaff_s4,*unaff_s4);
                uVar28 = vzero_s();
                uVar29 = vcmp_s(8,uVar27,*(undefined4 *)*unaff_s4);
                vrsq_s(uVar27);
                uVar27 = vcmovt_s(uVar28,(byte)uVar29 & 1);
                vpfxd(4,4,4,5);
                auVar3 = vscl_t(*unaff_s4,uVar27);
                uVar27 = vone_s();
                *(int *)*unaff_s4 = auVar3._0_4_;
                *(int *)(*unaff_s4 + 4) = auVar3._4_4_;
                *(int *)(*unaff_s4 + 8) = auVar3._8_4_;
                *(undefined4 *)unaff_s4[1] = uVar27;
                local_9c = (float)vdot_t(auVar2,*unaff_s4);
                if (local_9c < -1.0) {
                  fVar26 = -1.0;
                }
                else {
                  fVar26 = local_9c;
                  if (1.0 < local_9c) {
                    fVar26 = 1.0;
                  }
                }
                fVar26 = (float)FUN_08867e98(fVar26);
                fVar24 = 180.0 - (fVar26 * 180.0) / 3.1515925;
                fVar26 = *(float *)(iVar23 + 0x74);
                if (fVar24 < *(float *)(iVar23 + 0x84)) {
                  if (fVar26 <= fVar24) {
                    fVar25 = *(float *)(iVar23 + 0x84) - fVar26;
                    if (fVar25 <= 0.0) goto LAB_0894b42c;
                    fVar26 = 1.0 - (fVar24 - fVar26) / fVar25;
                  }
                  else {
                    fVar26 = 1.0;
                  }
                }
                else {
                  fVar26 = 0.0;
                }
              }
              else {
LAB_0894b3e4:
                fVar26 = 1.0;
              }
              if (fVar26 == 0.0) {
                *(ushort *)(iVar22 + 10) = *(ushort *)(iVar22 + 10) | 0x80;
                *(ushort *)(iVar22 + 0xe) = *(ushort *)(iVar22 + 0xe) | 0x80;
                goto LAB_0894b42c;
              }
              *(float *)(iVar22 + 0x4c) = *(float *)(iVar22 + 0x4c) * fVar26;
            }
            FUN_0894a674(param_1,iVar22);
          }
          else {
            if (iVar23 == 0) {
              fVar24 = *(float *)(iVar22 + 0xcc);
              goto LAB_0894af50;
            }
            bVar1 = *(byte *)(iVar23 + 10);
            if (bVar1 < 2) {
              puVar21 = local_50;
              unaff_s4 = local_54;
              if (bVar1 != 0) goto LAB_0894ad94;
            }
            else {
              if (3 < bVar1) {
LAB_0894ad94:
                unaff_s4 = (undefined1 (*) [12])0x0;
                goto LAB_0894af4c;
              }
              puVar21 = (undefined *)(iVar23 + 0x40);
              unaff_s4 = (undefined1 (*) [12])(iVar23 + 0x50);
            }
            local_140 = *(undefined4 *)*(undefined1 (*) [64])(iVar22 + 0x50);
            local_13c = *(undefined4 *)(iVar22 + 0x54);
            local_138 = *(undefined4 *)(iVar22 + 0x58);
            local_134 = *(undefined4 *)(iVar22 + 0x5c);
            local_130 = *(undefined4 *)(iVar22 + 0x60);
            local_12c = *(undefined4 *)(iVar22 + 100);
            local_128 = *(undefined4 *)(iVar22 + 0x68);
            local_124 = *(undefined4 *)(iVar22 + 0x6c);
            local_120 = *(undefined4 *)(iVar22 + 0x70);
            local_11c = *(undefined4 *)(iVar22 + 0x74);
            local_118 = *(undefined4 *)(iVar22 + 0x78);
            local_114 = *(undefined4 *)(iVar22 + 0x7c);
            local_110 = *(undefined4 *)(iVar22 + 0x80);
            local_10c = *(undefined4 *)(iVar22 + 0x84);
            local_108 = *(undefined4 *)(iVar22 + 0x88);
            local_104 = *(undefined4 *)(iVar22 + 0x8c);
            if (puVar21 == (undefined *)0x0) {
LAB_0894ae78:
              if (*(short *)(iVar22 + 0xe) == 0) {
                bVar1 = *(byte *)(iVar23 + 0xb);
                if (bVar1 < 2) {
                  if (bVar1 == 0) {
LAB_0894aeb4:
                    if (puVar21 != (undefined *)0x0) {
                      iVar23 = (uint)*(byte *)(iVar23 + 0xb) * 4;
                      fVar26 = (float)FUN_0896f5d0(*(undefined4 *)(local_58 + iVar23),
                                                   *(undefined4 *)(local_5c + iVar23),local_90,
                                                   &local_140,puVar21);
                    }
                  }
                }
                else if (bVar1 < 4) {
                  if (puVar21 != (undefined *)0x0) {
                    fVar26 = (float)FUN_0896f87c(*(undefined4 *)(iVar23 + 0x94),
                                                 *(undefined4 *)(iVar23 + 0x98),local_90,local_60);
                  }
                }
                else if (bVar1 < 5) goto LAB_0894aeb4;
                if (fVar26 <= 0.0) {
                  *(ushort *)(iVar22 + 10) = *(ushort *)(iVar22 + 10) | 0x80;
                  *(ushort *)(iVar22 + 0xe) = *(ushort *)(iVar22 + 0xe) | 0x80;
                  goto LAB_0894b42c;
                }
                fVar24 = *(float *)(iVar22 + 0xcc);
              }
              else {
                fVar24 = *(float *)(iVar22 + 0xcc);
              }
              goto LAB_0894af50;
            }
            uVar27 = vone_s();
            auVar4._12_4_ = uVar27;
            auVar4._8_4_ = *(undefined4 *)(*unaff_s4 + 8);
            auVar4._4_4_ = *(undefined4 *)(*unaff_s4 + 4);
            auVar4._0_4_ = *(undefined4 *)*unaff_s4;
            auVar4 = vtfm4_q(*(undefined1 (*) [64])(iVar22 + 0x50),auVar4);
            *local_60 = auVar4._0_4_;
            puVar19[1] = auVar4._4_4_;
            puVar19[2] = auVar4._8_4_;
            puVar19[3] = auVar4._12_4_;
            iVar20 = FUN_0896f8e8(local_90,&local_140,puVar21);
            if (iVar20 == 0) goto LAB_0894ae78;
            *(ushort *)(iVar22 + 10) = *(ushort *)(iVar22 + 10) | 0x80;
            *(ushort *)(iVar22 + 0xe) = *(ushort *)(iVar22 + 0xe) | 0x80;
          }
LAB_0894b42c:
          iVar22 = *(int *)(iVar22 + 0x154);
        }
        else {
          iVar22 = *(int *)(iVar22 + 0x154);
        }
        if (iVar22 == 0) break;
        *(int *)(param_1 + 0x88) = iVar22;
      } while( true );
    }
    *(undefined1 *)(param_1 + 0x94) = 9;
  }
  return;
}

