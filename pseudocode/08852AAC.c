/* Entry 0x08852AAC | file offset 0x0004FA84 | FUN_08852aac | bytes 1992 */

void FUN_08852aac(int param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [12];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_220 [24];
  undefined4 local_208;
  uint local_1f4;
  undefined1 auStack_1f0 [4];
  float local_1ec;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  float local_4c;
  int local_48;
  float fVar3;
  float fVar4;
  
  local_50 = 0;
  local_68 = local_18c;
  local_6c = local_188;
  local_70 = local_184;
  local_74 = local_14c;
  local_78 = local_148;
  local_7c = local_144;
  local_80 = local_15c;
  local_84 = local_158;
  local_88 = local_154;
  iVar11 = 0x269ec3;
  local_54 = param_1;
  do {
    iVar5 = local_54;
    if (*(int *)(local_54 + 0x334) != 0) {
      iVar9 = *(int *)(local_54 + 0x330);
      iVar6 = *(int *)(local_54 + 0x334);
      local_64 = iVar6;
      local_58 = FUN_08899300();
      iVar10 = 0;
      fVar13 = DAT_089d5eac / 60.0;
      if (0 < iVar6) {
        local_60 = fVar13 * 9.8;
        local_5c = fVar13 * 4.9 * fVar13;
        do {
          iVar6 = local_54 + iVar9 * 0x50;
          iVar7 = iVar6 + 0x10;
          if (0.0 < *(float *)(iVar6 + 0x50)) {
            FUN_089a3868(auStack_1f0,iVar7);
            iVar8 = iVar6 + 0x20;
            FUN_089a3a44(fVar13,&local_120,iVar8);
            local_190 = local_120;
            local_68 = local_11c;
            local_6c = local_118;
            local_70 = local_114;
            local_1a0 = local_120;
            local_19c = local_11c;
            local_198 = local_118;
            local_194 = local_114;
            FUN_089a38a8(iVar7,iVar7,&local_1a0);
            *(float *)(iVar6 + 0x14) = *(float *)(iVar6 + 0x14) - local_5c;
            if (fVar13 != 0.0) {
              FUN_089a38e0(&local_100,iVar7,auStack_1f0);
              local_150 = local_100;
              local_74 = local_fc;
              local_78 = local_f8;
              local_7c = local_f4;
              local_170 = local_100;
              local_16c = local_fc;
              local_168 = local_f8;
              local_164 = local_f4;
              FUN_089a3a44(1.0 / fVar13,&local_e0,&local_170);
              local_80 = local_dc;
              local_84 = local_d8;
              local_88 = local_d4;
              local_160 = local_e0;
              local_17c = local_dc;
              local_178 = local_d8;
              local_180 = local_e0;
              local_174 = local_d4;
              FUN_089a3868(iVar8,&local_180);
            }
            *(float *)(iVar6 + 0x24) = *(float *)(iVar6 + 0x24) - local_60;
            fVar14 = *(float *)(iVar6 + 0x54) * fVar13;
            pauVar1 = (undefined1 (*) [12])(iVar6 + 0x40);
            uVar15 = vdot_t(*pauVar1,*pauVar1);
            uVar16 = vzero_s();
            uVar17 = vcmp_s(8,uVar15,*(undefined4 *)*pauVar1);
            local_90 = vsqrt_s(uVar15);
            vrcp_s(local_90);
            uVar15 = vcmovt_s(uVar16,(byte)uVar17 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(*pauVar1,uVar15);
            fVar12 = auVar2._0_4_;
            fVar3 = auVar2._4_4_;
            fVar4 = auVar2._8_4_;
            local_a0 = fVar12;
            local_9c = fVar3;
            local_98 = fVar4;
            local_4c = fVar13;
            local_48 = iVar11;
            fVar13 = (float)FUN_089a47a4(fVar14);
            local_1b8 = (float)FUN_089a46dc(fVar14);
            fVar14 = 1.0 - local_1b8;
            local_1e0 = fVar12 * fVar12 * fVar14 + local_1b8;
            local_1d0 = fVar12 * fVar3 * fVar14;
            local_1dc = local_1d0 + fVar13 * fVar4;
            local_1c0 = fVar12 * fVar4 * fVar14;
            local_1d8 = local_1c0 - fVar13 * fVar3;
            local_1d4 = 0;
            local_1d0 = local_1d0 - fVar13 * fVar4;
            local_1cc = fVar3 * fVar3 * fVar14 + local_1b8;
            local_1bc = fVar3 * fVar4 * fVar14;
            local_1c8 = local_1bc + fVar13 * fVar12;
            local_1c4 = 0;
            local_1c0 = local_1c0 + fVar13 * fVar3;
            local_1bc = local_1bc - fVar13 * fVar12;
            local_1b8 = fVar4 * fVar4 * fVar14 + local_1b8;
            local_1b4 = 0;
            local_1b0 = 0;
            local_1ac = 0;
            local_1a8 = 0;
            local_1a4 = 0x3f800000;
            FUN_089a3f40(&local_c0,&local_1e0,iVar6 + 0x30);
            local_140 = local_c0;
            local_1a0 = local_c0;
            local_19c = local_bc;
            local_198 = local_b8;
            local_194 = local_b4;
            FUN_089a3868(iVar6 + 0x30,&local_1a0);
            *(float *)(iVar6 + 0x50) = *(float *)(iVar6 + 0x50) - DAT_089d5eac;
            local_1ec = local_1ec + 1.0;
            FUN_08935828(auStack_220,0,0x30);
            uVar15 = FUN_088976e4(local_58,auStack_220,auStack_1f0,0x22,1,0x2000,0x2000);
            iVar11 = local_48;
            fVar13 = local_4c;
            *(undefined4 *)(iVar6 + 0x58) = uVar15;
            if ((*(float *)(iVar6 + 0x24) < 0.0) &&
               (*(float *)(iVar6 + 0x14) < *(float *)(iVar6 + 0x58))) {
              if (((local_1f4 & 0x1f0000) == 0x1e0000) || ((local_1f4 & 0x1f0000) == 0x1f0000)) {
                if (*(char *)(iVar6 + 0x5c) == '\0') {
                  *(undefined4 *)(iVar6 + 0x50) = 0;
                  FUN_089a3868(auStack_1f0,iVar7);
                  local_1ec = *(float *)(iVar6 + 0x58);
                  FUN_0885ad38(0x3c23d70a,0x40000000,0x41a00000,DAT_089d4dc8 + 0x160,auStack_1f0,
                               local_208,0x1e,0);
                  *(undefined1 *)(iVar6 + 0x5c) = 1;
                }
              }
              else if ((local_1f4 & 0x1f0000) != 0x120000) {
                *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar6 + 0x58);
                *(float *)(iVar6 + 0x24) = -*(float *)(iVar6 + 0x24);
                if ((local_1f4 & 0x1f0000) == 0x60000) {
                  DAT_09afb89c = DAT_09afb89c * 0x343fd + local_48;
                  fVar12 = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 0.2 + 0.2;
                }
                else {
                  DAT_09afb89c = DAT_09afb89c * 0x343fd + local_48;
                  fVar12 = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 0.20000002 + 0.4;
                }
                FUN_089a3a44(fVar12,iVar8,iVar8);
                fVar12 = (float)FUN_089a3bf8(iVar8);
                if (fVar12 < 0.5) {
                  *(undefined4 *)(iVar6 + 0x20) = 0;
                  *(undefined4 *)(iVar6 + 0x24) = 0;
                  *(undefined4 *)(iVar6 + 0x28) = 0;
                  *(undefined4 *)(iVar6 + 0x2c) = 0x3f800000;
                  *(float *)(iVar6 + 0x54) = *(float *)(iVar6 + 0x54) * 0.6;
                }
              }
            }
          }
          else if (iVar9 == *(int *)(iVar5 + 0x330)) {
            iVar6 = *(int *)(iVar5 + 0x330) + 1;
            *(int *)(iVar5 + 0x330) = iVar6;
            if (9 < iVar6) {
              *(undefined4 *)(iVar5 + 0x330) = 0;
            }
            *(int *)(iVar5 + 0x334) = *(int *)(iVar5 + 0x334) + -1;
          }
          iVar9 = iVar9 + 1;
          if (9 < iVar9) {
            iVar9 = 0;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_64);
      }
    }
    local_50 = local_50 + 1;
    local_54 = local_54 + 0x340;
  } while (local_50 < 2);
  return;
}

