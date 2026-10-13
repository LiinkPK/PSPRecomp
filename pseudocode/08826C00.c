/* Entry 0x08826C00 | file offset 0x00023BD8 | FUN_08826c00 | bytes 2164 */

void FUN_08826c00(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  float fVar18;
  float local_1a0 [3];
  undefined4 local_194;
  undefined1 auStack_190 [4];
  undefined4 local_18c;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [4];
  undefined4 local_16c;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [4];
  undefined4 local_13c;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined1 auStack_108 [12];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  short *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c;
  char local_48;
  undefined1 *local_44;
  
  local_7c = param_1;
  local_78 = param_3;
  local_58 = param_4;
  uVar4 = FUN_08899300();
  local_4c = (uint)((*(uint *)(*(int *)(param_2 + 0x24) + 0x184) & 2) != 0);
  psVar8 = *(short **)(*(int *)(param_2 + 0x24) + 0x564);
  local_48 = '\0';
  local_80 = psVar8;
  local_54 = uVar4;
  if ((psVar8 != (short *)0x0) && (iVar5 = FUN_0889877c(uVar4,(int)*psVar8), iVar5 == 1)) {
    FUN_088981b4(uVar4,(int)*psVar8,0,0);
    local_48 = '\x01';
  }
  local_50 = ((*(uint *)(param_2 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  local_64 = 0;
  local_6c = param_2;
  if (0 < local_50) {
    puVar17 = auStack_b0;
    local_68 = *(int *)(param_2 + 0x28);
    do {
      iVar5 = local_68;
      if ((*(byte *)(local_68 + 299) & 2) == 0) {
        local_5c = local_68 + 0xb0;
        FUN_089a38c4(local_1a0,local_5c,local_68 + 0xc0);
        iVar6 = FUN_08822d30(param_2);
        local_60 = iVar5 + 0xa0;
        bVar7 = *(byte *)(iVar5 + 299);
        if (iVar6 == 1) {
          uVar4 = 0;
          if (((bVar7 & 4) != 0) && (uVar4 = 0, (bVar7 & 8) != 0)) {
            uVar4 = 1;
          }
          FUN_08824014(local_7c,param_2,local_60,uVar4,auStack_180);
          FUN_089a38c4(local_1a0,local_1a0,auStack_180);
          bVar7 = *(byte *)(iVar5 + 299);
        }
        if ((bVar7 & 0x40) == 0) {
          local_1a0[1] = 0.0;
          cVar1 = *(char *)(iVar5 + 0x12a);
          cVar2 = *(char *)(iVar5 + 0x129);
          iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 0x568) + 0x14);
        }
        else {
          FUN_089a3890(local_1a0);
          cVar1 = *(char *)(iVar5 + 0x12a);
          cVar2 = *(char *)(iVar5 + 0x129);
          iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 0x24) + 0x568) + 0x14);
        }
        local_70 = (int)cVar1 & 0x3f;
        local_74 = (int)cVar2 & 0x7f;
        if (iVar6 == 0) {
          iVar11 = 1;
          iVar10 = *(int *)(param_2 + 0x2c);
          iVar14 = local_74 * 0x80;
          iVar13 = local_74 * 0x80;
          iVar6 = iVar10 + iVar14;
          iVar16 = iVar10 + iVar13;
          if (1 < local_70) {
            iVar12 = (local_74 + 1) * 0x80;
            local_44 = puVar17;
            do {
              FUN_089a38fc(auStack_170,iVar6,iVar10 + iVar12);
              local_16c = 0;
              fVar18 = (float)FUN_089a3b10(auStack_170,local_1a0);
              if (fVar18 < 0.0) {
                iVar14 = (local_74 + iVar11) * 0x80;
              }
              FUN_089a38fc(auStack_170,iVar16,iVar10 + iVar12);
              local_16c = 0;
              fVar18 = (float)FUN_089a3b10(auStack_170,local_1a0);
              iVar10 = *(int *)(local_6c + 0x2c);
              iVar6 = iVar10 + iVar14;
              if (0.0 < fVar18) {
                iVar13 = (iVar11 + local_74) * 0x80;
              }
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + 0x80;
              iVar16 = iVar10 + iVar13;
              puVar17 = local_44;
            } while (iVar11 < (int)local_70);
          }
          puVar15 = auStack_a0;
          if ((local_58 == local_64) || (local_58 == -1)) {
            local_160 = *(undefined4 *)(iVar16 + 0x40);
            local_15c = *(undefined4 *)(iVar16 + 0x44);
            local_158 = *(undefined4 *)(iVar16 + 0x48);
            local_154 = *(undefined4 *)(iVar16 + 0x4c);
            local_44 = puVar15;
            FUN_089a38a8(auStack_150,iVar6,local_1a0);
            FUN_089a38fc(auStack_140,auStack_150,&local_160);
            local_13c = 0;
            fVar18 = (float)FUN_089a3bf8(auStack_140);
            FUN_089a3bc8(auStack_140,auStack_140);
            FUN_089a3a64(-*(float *)(*(int *)(iVar16 + 0x70) + 0x18),auStack_130,auStack_140);
            FUN_089a38c4(&local_160,&local_160,auStack_130);
            FUN_089a34c0(auStack_120,&local_160);
            FUN_089a34c0(auStack_114,auStack_140);
            iVar10 = FUN_0889beb0(fVar18 + *(float *)(*(int *)(iVar6 + 0x70) + 0x18) +
                                  *(float *)(*(int *)(iVar16 + 0x70) + 0x18),local_54,auStack_108,
                                  auStack_120,0x14,1,0,0,0,0x1000,0x1000);
            puVar15 = local_44;
            if (iVar10 == 1) {
              local_d0 = *local_f0;
              local_cc = local_f0[1];
              local_c8 = local_f0[2];
              local_c4 = 0x3f800000;
              local_c0 = local_fc;
              local_bc = local_f8;
              local_b8 = local_f4;
              local_b4 = 0x3f800000;
              bVar3 = false;
              iVar11 = 0;
              iVar10 = local_68 + 0xf0;
              do {
                fVar18 = (float)FUN_089a3b10(iVar10,&local_d0);
                iVar13 = local_68;
                if (0.9 < fVar18) {
                  bVar3 = true;
                }
                iVar11 = iVar11 + 1;
                iVar10 = iVar10 + 0x10;
              } while (iVar11 < 2);
              if (!bVar3) {
                uVar9 = ((int)*(char *)(iVar5 + 0x12a) & 0xc0U) >> 6;
                if (uVar9 < 2) {
                  FUN_089a3868(local_68 + uVar9 * 0x10 + 0xf0,&local_d0);
                  uVar4 = FUN_089a3b10(&local_c0,&local_d0);
                  *(undefined4 *)
                   (iVar13 + (((int)*(char *)(iVar5 + 0x12a) & 0xc0U) >> 6) * 4 + 0x110) = uVar4;
                  *(byte *)(iVar5 + 0x12a) =
                       *(byte *)(iVar5 + 0x12a) & 0x3f | ((*(byte *)(iVar5 + 0x12a) >> 6) + 1) * '@'
                  ;
                }
                else {
                  *(byte *)(iVar5 + 299) = *(byte *)(iVar5 + 299) | 0x40;
                }
              }
            }
            *(byte *)(iVar5 + 299) = *(byte *)(iVar5 + 299) | 0x20;
          }
          iVar10 = 0;
          uVar9 = 0;
          if (((int)*(char *)(iVar5 + 0x12a) & 0xc0U) != 0) {
            iVar13 = local_68 + 0xf0;
            iVar11 = local_68;
            do {
              FUN_089a3868(puVar17,iVar13);
              fVar18 = (float)FUN_089a3b10(puVar17,iVar6);
              if (0.0 < (*(float *)(iVar11 + 0x110) - fVar18) +
                        *(float *)(*(int *)(iVar6 + 0x70) + 0x18)) {
                FUN_089a3a64(puVar17,puVar17);
                FUN_089a38c4(local_1a0,local_1a0,puVar17);
              }
              iVar10 = iVar10 + 1;
              uVar9 = ((int)*(char *)(iVar5 + 0x12a) & 0xc0U) >> 6;
              iVar13 = iVar13 + 0x10;
              iVar11 = iVar11 + 4;
            } while (iVar10 < (int)uVar9);
          }
          param_2 = local_6c;
          iVar6 = 0;
          if (uVar9 != 0) {
            iVar10 = local_68 + 0xf0;
            do {
              FUN_089a3868(puVar15,iVar10);
              fVar18 = (float)FUN_089a3b10(local_1a0,puVar15);
              if (fVar18 < 0.0) {
                FUN_089a3a64(auStack_90,puVar15);
                FUN_089a38fc(local_1a0,local_1a0,auStack_90);
              }
              iVar6 = iVar6 + 1;
              iVar10 = iVar10 + 0x10;
            } while (iVar6 < (int)(((int)*(char *)(iVar5 + 0x12a) & 0xc0U) >> 6));
          }
        }
        local_1a0[1] = 0.0;
        local_194 = 0x3f800000;
        FUN_089a3f68(local_1a0,local_78,local_1a0);
        *(float *)(iVar5 + 0x90) = *(float *)(iVar5 + 0x90) + local_1a0[0];
        *(float *)(iVar5 + 0x98) = *(float *)(iVar5 + 0x98) + local_1a0[2];
        FUN_089a38c4(auStack_190,local_5c,local_60);
        local_18c = 0;
        fVar18 = (float)FUN_089a3bf8(auStack_190);
        if (((0.001 < fVar18) || (local_4c == 0)) &&
           (iVar6 = 0, uVar9 = local_74, 0 < (int)local_70)) {
          do {
            iVar10 = *(int *)(param_2 + 0x2c) + uVar9 * 0x80;
            *(byte *)(iVar10 + 0x7f) = *(byte *)(iVar10 + 0x7f) & 0xf7;
            iVar6 = iVar6 + 1;
            uVar9 = local_74 + iVar6;
          } while (iVar6 < (int)local_70);
        }
        if (((local_58 == local_64) || (local_58 == -1)) &&
           (((int)*(char *)(iVar5 + 0x12a) & 0xc0U) == 0)) {
          iVar6 = 0;
          iVar5 = local_74 << 7;
          if (0 < (int)local_70) {
            do {
              FUN_089a3868(*(int *)(param_2 + 0x2c) + iVar5 + 0x40);
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 0x80;
            } while (iVar6 < (int)local_70);
          }
        }
      }
      local_64 = local_64 + 1;
      local_68 = local_68 + 0x130;
    } while (local_64 < local_50);
  }
  if ((local_80 != (short *)0x0) && (local_48 == '\x01')) {
    FUN_088981b4(local_54,(int)*local_80,1,0);
  }
  return;
}

