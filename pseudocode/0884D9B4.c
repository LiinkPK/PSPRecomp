/* Entry 0x0884D9B4 | file offset 0x0004A98C | FUN_0884d9b4 | bytes 2540 */

void FUN_0884d9b4(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  ushort uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int local_560 [2];
  undefined1 auStack_558 [248];
  undefined4 auStack_460 [128];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [48];
  undefined1 auStack_220 [16];
  char local_210;
  char local_20f;
  char local_20c;
  char local_20b;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 auStack_1d0 [16];
  char acStack_1c0 [16];
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
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  piVar10 = local_560;
  if (*(int *)(param_1 + 0x2580) != 0) {
    local_44 = param_1;
    FUN_08935524(acStack_1c0,&DAT_089d4d84,0x10);
    iVar15 = 1;
    puVar13 = auStack_558;
    iVar12 = 2;
    do {
      param_1 = param_1 + 0x14;
      iVar11 = 0;
      iVar8 = iVar12 * 0x48;
      puVar7 = puVar13;
      iVar9 = param_1;
      do {
        if (*(int *)(iVar9 + 0x2598) == 0) {
          *(undefined4 *)(puVar7 + 0x200) = 0;
          *(undefined4 *)(puVar7 + 0x100) = 0;
        }
        else {
          uVar3 = FUN_089a00f4(*(int *)(iVar9 + 0x2598) *
                               (*(byte *)(*(int *)(DAT_089d4d80 + 0x2810) + iVar8 + -0x86) + 1) *
                               0x20);
          *(undefined4 *)(puVar7 + 0x200) = uVar3;
          *(undefined4 *)(puVar7 + 0x100) = uVar3;
        }
        iVar2 = local_44;
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 4;
        puVar7 = puVar7 + 4;
        iVar8 = iVar8 + 0x48;
      } while (iVar11 < 2);
      iVar15 = iVar15 + 1;
      puVar13 = puVar13 + 8;
      iVar12 = iVar12 + 2;
    } while (iVar15 < 0x20);
    uVar3 = FUN_0885ea88(DAT_089d5ec0 + 0x720);
    FUN_089a3efc(auStack_250,uVar3);
    FUN_089a383c(0,0,0,0x3f800000,auStack_220);
    FUN_089a405c(auStack_250,auStack_250);
    FUN_089a383c(0x3f800000,0xbf800000,0,0x3f800000,auStack_260);
    FUN_089a3f40(auStack_200,auStack_250,auStack_260);
    FUN_08935828(local_560,0,0x100);
    iVar12 = *(int *)(iVar2 + 0x2580);
    local_4c = *(int *)(iVar2 + 0x2584);
    local_48 = 0;
    if (0 < iVar12) {
      local_50 = local_11c;
      local_54 = local_118;
      local_58 = local_114;
      local_5c = local_12c;
      local_60 = local_128;
      local_64 = local_124;
      local_68 = local_13c;
      local_6c = local_138;
      local_70 = local_134;
      uVar19 = local_154;
      uVar20 = local_158;
      uVar21 = local_15c;
      uVar22 = local_144;
      uVar23 = local_148;
      uVar3 = local_14c;
      do {
        if (0x95 < local_4c) {
          local_4c = 0;
        }
        iVar15 = local_44 + local_4c * 0x40;
        fVar18 = *(float *)(iVar15 + 0x34);
        local_4c = local_4c + 1;
        if (0.0 < fVar18) {
          iVar12 = *(int *)(iVar15 + 0x3c);
          uVar16 = 0xf;
          if ((*(byte *)(iVar12 + 0xd) != 0) &&
             (fVar17 = (float)*(byte *)(iVar12 + 0xd), fVar18 < fVar17)) {
            if ((fVar18 / fVar17) * 16.0 < 2.1474836e+09) {
              uVar16 = (uint)((fVar18 / fVar17) * 16.0);
            }
            else {
              uVar16 = (int)((fVar18 / fVar17) * 16.0 - 2.1474836e+09) + 0x80000000;
            }
          }
          uVar6 = (ushort)(uVar16 << 0xc);
          cVar4 = '\0';
          if (*(char *)(iVar15 + 0x39) != '\0') {
            cVar4 = '@';
          }
          local_210 = acStack_1c0[(uint)*(byte *)(iVar15 + 0x3a) * 4] + cVar4;
          local_20c = acStack_1c0[(uint)*(byte *)(iVar15 + 0x3a) * 4 + 1];
          cVar4 = '\0';
          if (*(char *)(iVar15 + 0x39) != '\0') {
            cVar4 = '@';
          }
          local_20f = acStack_1c0[(uint)*(byte *)(iVar15 + 0x3a) * 4 + 2] + cVar4;
          local_20b = acStack_1c0[(uint)*(byte *)(iVar15 + 0x3a) * 4 + 3];
          FUN_089a3a64(*(float *)(iVar15 + 0x30) * 0.1,auStack_1f0,auStack_200);
          if (*(byte *)(iVar12 + 10) != 0) {
            if (5 < *(byte *)(iVar12 + 10)) {
              *(undefined1 *)(iVar12 + 10) = 5;
            }
            FUN_089a38fc(auStack_260,iVar15 + 0x20,iVar15);
            FUN_089a3bc8(auStack_260,auStack_260);
            iVar8 = 0;
            if (*(char *)(iVar12 + 10) != '\0') {
              do {
                FUN_089a3a44(0x3dcccccd,&local_110,auStack_260);
                local_120 = local_110;
                local_50 = local_10c;
                local_54 = local_108;
                local_170 = local_110;
                local_16c = local_10c;
                local_58 = local_104;
                local_168 = local_108;
                local_164 = local_104;
                FUN_089a3a44(*(undefined4 *)(iVar15 + 0x30),&local_f0,&local_170);
                local_130 = local_f0;
                local_5c = local_ec;
                local_60 = local_e8;
                local_180 = local_f0;
                local_17c = local_ec;
                local_64 = local_e4;
                local_178 = local_e8;
                local_174 = local_e4;
                FUN_089a3a44(*(undefined4 *)(iVar12 + 0x44),&local_d0,&local_180);
                local_140 = local_d0;
                local_68 = local_cc;
                local_6c = local_c8;
                local_70 = local_c4;
                local_190 = local_d0;
                local_18c = local_cc;
                iVar9 = iVar8 + 1;
                local_188 = local_c8;
                local_184 = local_c4;
                FUN_089a3a44((float)iVar9,&local_b0,&local_190);
                uVar22 = local_a4;
                uVar23 = local_a8;
                uVar3 = local_ac;
                local_150 = local_b0;
                local_19c = local_ac;
                local_1a0 = local_b0;
                local_198 = local_a8;
                local_194 = local_a4;
                FUN_089a38a8(&local_90,iVar15,&local_1a0);
                uVar19 = local_84;
                uVar20 = local_88;
                uVar21 = local_8c;
                local_160 = local_90;
                local_1ac = local_8c;
                local_1b0 = local_90;
                local_1a8 = local_88;
                local_1a4 = local_84;
                FUN_089a3868(auStack_1d0,&local_1b0);
                uVar1 = uVar6;
                if (*(char *)(iVar12 + 0xb) == '\x02') {
                  uVar1 = (short)(uVar16 / (*(byte *)(iVar12 + 10) + 1)) *
                          ((ushort)*(byte *)(iVar12 + 10) - (short)iVar8) * 0x1000;
                }
                FUN_089a38c4(&local_1e0,auStack_1d0,auStack_1f0);
                cVar4 = local_210;
                pcVar5 = (char *)auStack_460
                                 [(uint)*(byte *)(iVar15 + 0x38) * 2 +
                                  (uint)*(byte *)(iVar15 + 0x39)];
                auStack_460[(uint)*(byte *)(iVar15 + 0x38) * 2 + (uint)*(byte *)(iVar15 + 0x39)] =
                     pcVar5 + 0x10;
                *(undefined4 *)(pcVar5 + 4) = local_1e0;
                *(undefined4 *)(pcVar5 + 8) = local_1dc;
                *pcVar5 = cVar4;
                *(undefined4 *)(pcVar5 + 0xc) = local_1d8;
                pcVar5[1] = local_20c;
                *(ushort *)(pcVar5 + 2) = uVar1 | 0xfff;
                FUN_089a38fc(&local_1e0,auStack_1d0,auStack_1f0);
                cVar4 = local_20f;
                pcVar5 = (char *)auStack_460
                                 [(uint)*(byte *)(iVar15 + 0x38) * 2 +
                                  (uint)*(byte *)(iVar15 + 0x39)];
                auStack_460[(uint)*(byte *)(iVar15 + 0x38) * 2 + (uint)*(byte *)(iVar15 + 0x39)] =
                     pcVar5 + 0x10;
                *(undefined4 *)(pcVar5 + 4) = local_1e0;
                *(undefined4 *)(pcVar5 + 8) = local_1dc;
                *pcVar5 = cVar4;
                *(undefined4 *)(pcVar5 + 0xc) = local_1d8;
                pcVar5[1] = local_20b;
                *(ushort *)(pcVar5 + 2) = uVar1 | 0xfff;
                iVar8 = iVar9;
              } while (iVar9 < (int)(uint)*(byte *)(iVar12 + 10));
            }
          }
          FUN_089a38c4(&local_1e0,iVar15,auStack_1f0);
          cVar4 = local_210;
          pcVar5 = (char *)auStack_460
                           [(uint)*(byte *)(iVar15 + 0x38) * 2 + (uint)*(byte *)(iVar15 + 0x39)];
          auStack_460[(uint)*(byte *)(iVar15 + 0x38) * 2 + (uint)*(byte *)(iVar15 + 0x39)] =
               pcVar5 + 0x10;
          *(undefined4 *)(pcVar5 + 4) = local_1e0;
          uVar6 = uVar6 | 0xfff;
          *(undefined4 *)(pcVar5 + 8) = local_1dc;
          *pcVar5 = cVar4;
          *(undefined4 *)(pcVar5 + 0xc) = local_1d8;
          pcVar5[1] = local_20c;
          *(ushort *)(pcVar5 + 2) = uVar6;
          FUN_089a38fc(&local_1e0,iVar15,auStack_1f0);
          cVar4 = local_20f;
          pcVar5 = (char *)auStack_460
                           [(uint)*(byte *)(iVar15 + 0x38) * 2 + (uint)*(byte *)(iVar15 + 0x39)];
          auStack_460[(uint)*(byte *)(iVar15 + 0x38) * 2 + (uint)*(byte *)(iVar15 + 0x39)] =
               pcVar5 + 0x10;
          iVar12 = local_44;
          *(undefined4 *)(pcVar5 + 4) = local_1e0;
          *(undefined4 *)(pcVar5 + 8) = local_1dc;
          *pcVar5 = cVar4;
          *(undefined4 *)(pcVar5 + 0xc) = local_1d8;
          pcVar5[1] = local_20b;
          *(ushort *)(pcVar5 + 2) = uVar6;
          local_560[(uint)*(byte *)(iVar15 + 0x38) * 2 + (uint)*(byte *)(iVar15 + 0x39)] =
               local_560[(uint)*(byte *)(iVar15 + 0x38) * 2 + (uint)*(byte *)(iVar15 + 0x39)] + 1;
          iVar12 = *(int *)(iVar12 + 0x2580);
        }
        local_48 = local_48 + 1;
      } while (local_48 < iVar12);
      local_11c = local_50;
      local_118 = local_54;
      local_114 = local_58;
      local_12c = local_5c;
      local_128 = local_60;
      local_124 = local_64;
      local_13c = local_68;
      local_138 = local_6c;
      local_134 = local_70;
      local_14c = uVar3;
      local_148 = uVar23;
      local_144 = uVar22;
      local_15c = uVar21;
      local_158 = uVar20;
      local_154 = uVar19;
    }
    iVar15 = 0;
    iVar12 = local_44;
    do {
      iVar8 = 0;
      piVar14 = piVar10;
      do {
        if (*piVar14 != 0) {
          iVar9 = *(int *)(DAT_089d4d80 + 0x2810) +
                  ((uint)*(byte *)(iVar12 + 0x258c) * 2 + iVar8) * 0x48;
          FUN_0899d2f8(*(undefined4 *)(iVar12 + 0x2594));
          if (*(char *)(iVar9 + -0x8b) == '\x01') {
            FUN_089a12a4(0,2,10,0,0xffffffff);
            iVar11 = piVar14[0x80];
            iVar9 = *piVar14 * (*(byte *)(iVar9 + -0x86) + 1) * 2;
          }
          else if (*(char *)(iVar9 + -0x8b) == '\x02') {
            FUN_089a12a4(2,2,10,0,0xffffffff);
            iVar11 = piVar14[0x80];
            iVar9 = *piVar14 * (*(byte *)(iVar9 + -0x86) + 1) * 2;
          }
          else {
            FUN_089a12a4(0,2,3,0,0);
            iVar11 = piVar14[0x80];
            iVar9 = *piVar14 * (*(byte *)(iVar9 + -0x86) + 1) * 2;
          }
          FUN_089a0520(6,0x199,iVar9,0,iVar11);
        }
        iVar8 = iVar8 + 1;
        piVar14 = piVar14 + 1;
      } while (iVar8 < 2);
      iVar15 = iVar15 + 1;
      iVar12 = iVar12 + 0x14;
      piVar10 = piVar10 + 2;
    } while (iVar15 < 0x20);
  }
  return;
}

