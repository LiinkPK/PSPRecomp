/* Entry 0x088D16F4 | file offset 0x000CE6CC | FUN_088d16f4 | bytes 4748 */

void FUN_088d16f4(int param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  undefined1 uVar3;
  float fVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_140;
  undefined4 local_13c;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int *local_54;
  int local_50;
  byte local_4c;
  int local_48;
  char local_44;
  short local_42;
  int *local_40;
  char local_3c;
  short local_3a;
  
  local_4c = 0;
  local_128 = 0;
  local_42 = 0;
  local_124 = 0x3f800000;
  local_118 = 0;
  local_114 = 0x3f800000;
  local_108 = 0;
  local_104 = 0x3f800000;
  local_f8 = 0;
  local_f4 = 0x3f800000;
  param_2 = (int *)*param_2;
  iVar21 = 0;
  do {
    if (param_2 == (int *)0x0) {
      return;
    }
    if ((((*(char *)((int)param_2 + 0x17) == '\0') && ((*(byte *)(param_2 + 5) & 1) != 0)) &&
        ((*(byte *)(param_2 + 5) & 0xc) == 0)) && ((*(byte *)(param_2 + 5) & 0x20) == 0)) {
      if (param_2[4] == 0) {
        if (param_2[7] != 0) {
          FUN_088db318(param_2,iVar21);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        local_54 = (int *)param_2[3];
        for (puVar17 = (undefined4 *)*param_2; puVar17 != (undefined4 *)0x0;
            puVar17 = (undefined4 *)puVar17[0xf]) {
          if ((*(ushort *)(puVar17 + 8) & 0x8000) != 0) {
            if ((int)*(short *)(puVar17 + 3) < local_54[0xb]) {
              iVar15 = local_54[3] + *(short *)(puVar17 + 3) * 0x1c;
            }
            else {
              iVar15 = 0;
            }
            iVar15 = FUN_088dbe64(*puVar17,param_2,iVar15,puVar17[0xb],puVar17);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar15;
          }
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_0899d2f8(*(undefined4 *)param_2[4]);
          FUN_089a0e60(1,1);
          iVar15 = FUN_089a00f4(*(int *)(param_1 + 0x18) << 4);
          local_50 = 0;
          local_3c = '\0';
          iVar24 = 0;
          iVar23 = 0;
          iVar18 = 0;
          if (0 < *(int *)(param_1 + 0x14)) {
            do {
              sVar20 = (short)iVar21;
              if (iVar18 == *(int *)(*(int *)(param_1 + 0x10) + iVar24 * 0x50 + 8)) {
                iVar21 = *(int *)(param_1 + 0x10);
              }
              else {
                iVar18 = *(int *)(*(int *)(param_1 + 0x10) + iVar24 * 0x50 + 8);
                local_3c = *(int *)(iVar18 + 0x2c) != 0;
                iVar21 = *(int *)(param_1 + 0x10);
              }
              iVar21 = iVar21 + iVar24 * 0x50;
              iVar19 = *(int *)(iVar21 + 4);
              pfVar22 = (float *)(iVar21 + 0x10);
              local_3a = sVar20;
              if ((*(ushort *)(iVar19 + 6) & 4) != 0) {
                uVar7 = (uint)local_4c;
                FUN_089a12a4((&DAT_089cbdb0)[uVar7],2,(&DAT_089cbdbc)[uVar7],0,
                             (&DAT_089cbdc8)[uVar7]);
                if (iVar23 != 0) {
                  FUN_089a05f0(4,0x80011e,4,iVar23,0,iVar15);
                  iVar15 = iVar15 + iVar23 * 0x40;
                  iVar23 = 0;
                  local_50 = 0;
                }
                sVar20 = local_42 + 1;
                local_42 = sVar20;
              }
              if (*(byte *)(iVar19 + 4) != local_4c) {
                uVar7 = (uint)local_4c;
                FUN_089a12a4((&DAT_089cbdb0)[uVar7],2,(&DAT_089cbdbc)[uVar7],0,
                             (&DAT_089cbdc8)[uVar7]);
                if (iVar23 != 0) {
                  FUN_089a05f0(4,0x80011e,4,iVar23,0,iVar15);
                  iVar15 = iVar15 + iVar23 * 0x40;
                  iVar23 = 0;
                  local_50 = 0;
                }
                local_4c = *(byte *)(iVar19 + 4);
              }
              if ((*(ushort *)(iVar19 + 6) & 4) == 0) {
                if ((*(ushort *)(iVar19 + 6) & 0x40) == 0) {
                  if ((*(ushort *)(iVar19 + 6) & 0x100) == 0) {
                    iVar8 = *(int *)(param_1 + 0x10) + iVar24 * 0x50;
                    local_174 = (uint)((float)*(byte *)(iVar19 + 0x1f) +
                                      (float)(int)((uint)*(byte *)(iVar19 + 0x27) -
                                                  (uint)*(byte *)(iVar19 + 0x1f)) *
                                      *(float *)(iVar8 + 0xc));
                    local_178 = (uint)((float)*(byte *)(iVar19 + 0x1e) +
                                      (float)(int)((uint)*(byte *)(iVar19 + 0x26) -
                                                  (uint)*(byte *)(iVar19 + 0x1e)) *
                                      *(float *)(iVar8 + 0xc));
                    local_17c = (uint)((float)*(byte *)(iVar19 + 0x1d) +
                                      (float)(int)((uint)*(byte *)(iVar19 + 0x25) -
                                                  (uint)*(byte *)(iVar19 + 0x1d)) *
                                      *(float *)(iVar8 + 0xc));
                    local_180 = (uint)((float)*(byte *)(iVar19 + 0x1c) +
                                      (float)(int)((uint)*(byte *)(iVar19 + 0x24) -
                                                  (uint)*(byte *)(iVar19 + 0x1c)) *
                                      *(float *)(iVar8 + 0xc));
                  }
                  else {
                    local_174 = (uint)*(byte *)(iVar19 + 0x1f);
                    local_178 = (uint)*(byte *)(iVar19 + 0x1e);
                    local_17c = (uint)*(byte *)(iVar19 + 0x1d);
                    local_180 = (uint)*(byte *)(iVar19 + 0x1c);
                  }
                }
                else if (*(char *)(iVar19 + 5) == '\x06') {
                  local_174 = 0xff;
                  local_178 = 0x80;
                  local_17c = 0x80;
                  local_180 = 0x80;
                }
                else {
                  local_174 = (uint)*(byte *)(iVar19 + 0x1b);
                  local_178 = (uint)*(byte *)(iVar19 + 0x1a);
                  local_17c = (uint)*(byte *)(iVar19 + 0x19);
                  local_180 = (uint)*(byte *)(iVar19 + 0x18);
                }
                if ((*(ushort *)(iVar18 + 0x20) & 0x200) == 0) {
                  local_174 = (int)(*(byte *)(iVar18 + 0x2b) * local_174) >> 8;
                  local_178 = (int)(*(byte *)(iVar18 + 0x2a) * local_178) >> 7;
                  local_17c = (int)(*(byte *)(iVar18 + 0x29) * local_17c) >> 7;
                  local_180 = (int)(*(byte *)(iVar18 + 0x28) * local_180) >> 7;
                  goto LAB_088d1cc8;
                }
                iVar8 = *(int *)(param_1 + 0x10);
              }
              else {
                local_f0 = CONCAT13(0xff,(undefined3)local_f0);
                local_ec = CONCAT13(0xff,(undefined3)local_ec);
                local_e8 = CONCAT13(0xff,(undefined3)local_e8);
                local_e4 = CONCAT13(0xff,(undefined3)local_e4);
LAB_088d1cc8:
                iVar8 = *(int *)(param_1 + 0x10);
              }
              uVar7 = (uint)**(byte **)(iVar8 + iVar24 * 0x50);
              if ((int)uVar7 < local_54[9]) {
                local_40 = (int *)(local_54[1] + uVar7 * 8);
              }
              else {
                local_40 = (int *)0x0;
              }
              if ((*(ushort *)(iVar18 + 0x20) & 0x400) == 0) {
                *(float *)(iVar21 + 0x40) = *(float *)(iVar21 + 0x40) * *(float *)(iVar18 + 0x18);
                *(float *)(iVar21 + 0x44) = *(float *)(iVar21 + 0x44) * *(float *)(iVar18 + 0x1c);
              }
              if ((*(ushort *)(iVar18 + 0x20) & 0x800) == 0) {
                local_b0 = *(float *)(iVar18 + 0x10);
                local_ac = *(float *)(iVar18 + 0x14);
              }
              else {
                local_80 = *(undefined4 *)(iVar18 + 0x10);
                local_7c = *(undefined4 *)(iVar18 + 0x14);
                local_78 = 0;
                local_74 = 0x3f800000;
                FUN_08866da8(&local_70,DAT_089d5ec0,&local_80);
                local_90 = local_70;
                local_8c = local_6c;
                local_88 = local_68;
                local_84 = local_64;
                FUN_089a3868(&local_b0,&local_90);
              }
              if ((*(ushort *)(iVar19 + 6) & 0x20) == 0) {
                uVar2 = *(ushort *)(iVar18 + 0x20);
LAB_088d1e20:
                local_44 = '\0';
                if ((uVar2 & 0x400) != 0) {
                  if (*pfVar22 == 1.0) {
                    local_44 = '\0';
                    if (*(float *)(iVar21 + 0x24) == 1.0) {
                      local_44 = '\x01';
                    }
                  }
                  else {
                    local_44 = '\0';
                  }
                }
              }
              else {
                if ((*(ushort *)(iVar18 + 0x20) & 0x400) == 0) {
                  uVar2 = *(ushort *)(iVar18 + 0x20);
                  goto LAB_088d1e20;
                }
                local_44 = '\x01';
              }
              local_58 = iVar24;
              if (((*(ushort *)(iVar19 + 6) & 0x10) != 0) && (local_3c == '\0')) {
                if (local_44 == '\0') {
                  local_98 = *(float *)(iVar18 + 0x18) * *pfVar22;
                  local_94 = *(float *)(iVar18 + 0x1c) * *(float *)(iVar21 + 0x24);
                }
                else {
                  iVar24 = FUN_089a2c58(*(undefined4 *)(iVar21 + 0x40));
                  local_a0 = (float)iVar24 + local_b0;
                  iVar24 = FUN_089a2c58(*(undefined4 *)(iVar21 + 0x44));
                  local_9c = (float)iVar24 + local_ac;
                }
              }
              iVar8 = *local_40;
              fVar4 = local_98;
              iVar24 = local_58;
              while (iVar8 = iVar8 + -1, local_98 = fVar4, local_5c = param_1, local_58 = iVar24,
                    -1 < iVar8) {
                pbVar16 = (byte *)(local_40[1] + iVar8 * 10);
                if ((int)(uint)pbVar16[1] < local_54[8]) {
                  puVar13 = (undefined2 *)
                            (*local_54 + (int)*(short *)(*local_54 + (uint)pbVar16[1] * 4 + 2));
                }
                else {
                  puVar13 = (undefined2 *)0x0;
                }
                uVar7 = (uint)pbVar16[1];
                if ((int)uVar7 < local_54[8]) {
                  if (*(short *)(*local_54 + uVar7 * 4) == 1) {
                    local_48 = *local_54 + (int)*(short *)(*local_54 + uVar7 * 4 + 2);
                  }
                  else {
                    local_48 = 0;
                  }
                }
                else {
                  local_48 = 0;
                }
                puVar14 = (undefined2 *)(iVar15 + local_50 * 0x10);
                if ((*(ushort *)(iVar19 + 6) & 4) == 0) {
                  if ((*pbVar16 & 4) == 0) {
                    iVar24 = 3;
                    do {
                      iVar9 = (int)(local_174 * *(byte *)((int)puVar13 + iVar24 * 4 + 0xb)) >> 8;
                      if (0xff < iVar9) {
                        iVar9 = 0xff;
                      }
                      *(char *)((int)&local_f0 + iVar24 * 4 + 3) = (char)iVar9;
                      iVar9 = (int)(local_178 * *(byte *)(puVar13 + iVar24 * 2 + 5)) >> 7;
                      if (0xff < iVar9) {
                        iVar9 = 0xff;
                      }
                      *(char *)((int)&local_f0 + iVar24 * 4 + 2) = (char)iVar9;
                      iVar9 = (int)(local_17c * *(byte *)((int)puVar13 + iVar24 * 4 + 9)) >> 7;
                      if (0xff < iVar9) {
                        iVar9 = 0xff;
                      }
                      *(char *)((int)&local_f0 + iVar24 * 4 + 1) = (char)iVar9;
                      iVar9 = (int)(local_180 * *(byte *)(puVar13 + iVar24 * 2 + 4)) >> 7;
                      if (0xff < iVar9) {
                        iVar9 = 0xff;
                      }
                      iVar12 = iVar24 + -1;
                      *(char *)(&local_f0 + iVar24) = (char)iVar9;
                      iVar24 = iVar12;
                    } while (-1 < iVar12);
                  }
                  else {
                    uVar3 = (undefined1)local_180;
                    uVar10 = (undefined1)local_17c;
                    uVar5 = (undefined1)local_178;
                    uVar11 = (undefined1)local_174;
                    local_e4 = CONCAT13(uVar11,CONCAT12(uVar5,CONCAT11(uVar10,uVar3)));
                    local_e8 = CONCAT13(uVar11,CONCAT12(uVar5,CONCAT11(uVar10,uVar3)));
                    local_ec = CONCAT13(uVar11,CONCAT12(uVar5,CONCAT11(uVar10,uVar3)));
                    local_f0 = CONCAT13(uVar11,CONCAT12(uVar5,CONCAT11(uVar10,uVar3)));
                  }
                }
                if ((*pbVar16 & 1) == 0) {
                  uVar6 = *puVar13;
                  puVar14[0x10] = uVar6;
                  *puVar14 = uVar6;
                  uVar6 = puVar13[2];
                  puVar14[0x18] = uVar6;
                  puVar14[8] = uVar6;
                  if ((*pbVar16 & 2) == 0) {
                    uVar6 = puVar13[1];
                    puVar14[9] = uVar6;
                    puVar14[1] = uVar6;
                    uVar6 = puVar13[3];
                    puVar14[0x19] = uVar6;
                    puVar14[0x11] = uVar6;
                    *(undefined4 *)(puVar14 + 2) = local_f0;
                    *(undefined4 *)(puVar14 + 10) = local_ec;
                    *(undefined4 *)(puVar14 + 0x12) = local_e8;
                    *(undefined4 *)(puVar14 + 0x1a) = local_e4;
                  }
                  else {
                    uVar6 = puVar13[3];
                    puVar14[9] = uVar6;
                    puVar14[1] = uVar6;
                    uVar6 = puVar13[1];
                    puVar14[0x19] = uVar6;
                    puVar14[0x11] = uVar6;
                    *(undefined4 *)(puVar14 + 2) = local_e8;
                    *(undefined4 *)(puVar14 + 10) = local_e4;
                    *(undefined4 *)(puVar14 + 0x12) = local_f0;
                    *(undefined4 *)(puVar14 + 0x1a) = local_ec;
                  }
                }
                else {
                  uVar6 = puVar13[2];
                  puVar14[0x10] = uVar6;
                  *puVar14 = uVar6;
                  uVar6 = *puVar13;
                  puVar14[0x18] = uVar6;
                  puVar14[8] = uVar6;
                  if ((*pbVar16 & 2) == 0) {
                    uVar6 = puVar13[1];
                    puVar14[9] = uVar6;
                    puVar14[1] = uVar6;
                    uVar6 = puVar13[3];
                    puVar14[0x19] = uVar6;
                    puVar14[0x11] = uVar6;
                    *(undefined4 *)(puVar14 + 2) = local_ec;
                    *(undefined4 *)(puVar14 + 10) = local_f0;
                    *(undefined4 *)(puVar14 + 0x12) = local_e4;
                    *(undefined4 *)(puVar14 + 0x1a) = local_e8;
                  }
                  else {
                    uVar6 = puVar13[3];
                    puVar14[9] = uVar6;
                    puVar14[1] = uVar6;
                    uVar6 = puVar13[1];
                    puVar14[0x19] = uVar6;
                    puVar14[0x11] = uVar6;
                    *(undefined4 *)(puVar14 + 2) = local_e4;
                    *(undefined4 *)(puVar14 + 10) = local_e8;
                    *(undefined4 *)(puVar14 + 0x12) = local_ec;
                    *(undefined4 *)(puVar14 + 0x1a) = local_f0;
                  }
                }
                local_60 = iVar15;
                if (((*(ushort *)(iVar19 + 6) & 0x10) == 0) || (local_3c != '\0')) {
                  if ((*(ushort *)(iVar18 + 0x20) & 0x400) == 0) {
                    local_110 = (float)(int)*(short *)(pbVar16 + 2) * *(float *)(iVar18 + 0x18);
                    local_11c = (float)(int)*(short *)(pbVar16 + 4) * *(float *)(iVar18 + 0x1c);
                    local_100 = (float)(int)*(short *)(pbVar16 + 6) * *(float *)(iVar18 + 0x18);
                    local_fc = (float)(int)*(short *)(pbVar16 + 8) * *(float *)(iVar18 + 0x1c);
                  }
                  else {
                    local_110 = (float)(int)*(short *)(pbVar16 + 2);
                    local_11c = (float)(int)*(short *)(pbVar16 + 4);
                    local_100 = (float)(int)*(short *)(pbVar16 + 6);
                    local_fc = (float)(int)*(short *)(pbVar16 + 8);
                  }
                  local_130 = local_110;
                  local_12c = local_11c;
                  local_120 = local_100;
                  local_10c = local_fc;
                  FUN_089a3f40(&local_140,pfVar22,&local_100);
                  FUN_089a3f40(&local_150,pfVar22,&local_110);
                  FUN_089a3f40(&local_160,pfVar22,&local_120);
                  FUN_089a3f40(&local_170,pfVar22,&local_130);
                  iVar15 = FUN_089a2c58(local_170);
                  puVar14[4] = (short)(int)((float)iVar15 + local_b0);
                  iVar15 = FUN_089a2c58(local_16c);
                  puVar14[5] = (short)(int)((float)iVar15 + local_ac);
                  iVar15 = FUN_089a2c58(local_160);
                  puVar14[0xc] = (short)(int)((float)iVar15 + local_b0);
                  iVar15 = FUN_089a2c58(local_15c);
                  puVar14[0xd] = (short)(int)((float)iVar15 + local_ac);
                  iVar15 = FUN_089a2c58(local_150);
                  puVar14[0x14] = (short)(int)((float)iVar15 + local_b0);
                  iVar15 = FUN_089a2c58(local_14c);
                  puVar14[0x15] = (short)(int)((float)iVar15 + local_ac);
                  iVar15 = FUN_089a2c58(local_140);
                  puVar14[0x1c] = (short)(int)((float)iVar15 + local_b0);
                  iVar15 = FUN_089a2c58(local_13c);
                  puVar14[0x1e] = sVar20;
                  puVar14[0x16] = sVar20;
                  puVar14[0xe] = sVar20;
                  puVar14[6] = sVar20;
                  puVar14[0x1d] = (short)(int)((float)iVar15 + local_ac);
                }
                else if (local_44 == '\0') {
                  iVar15 = FUN_089a2c58((float)(int)*(short *)(pbVar16 + 2) * fVar4 +
                                        *(float *)(iVar21 + 0x40));
                  uVar6 = (undefined2)(int)((float)iVar15 + local_b0);
                  puVar14[0x14] = uVar6;
                  puVar14[4] = uVar6;
                  iVar15 = FUN_089a2c58((float)(int)*(short *)(pbVar16 + 6) * fVar4 +
                                        *(float *)(iVar21 + 0x40));
                  fVar4 = local_94;
                  uVar6 = (undefined2)(int)((float)iVar15 + local_b0);
                  puVar14[0x1c] = uVar6;
                  puVar14[0xc] = uVar6;
                  iVar15 = FUN_089a2c58((float)(int)*(short *)(pbVar16 + 4) * local_94 +
                                        *(float *)(iVar21 + 0x44));
                  uVar6 = (undefined2)(int)((float)iVar15 + local_ac);
                  puVar14[0xd] = uVar6;
                  puVar14[5] = uVar6;
                  iVar15 = FUN_089a2c58((float)(int)*(short *)(pbVar16 + 8) * fVar4 +
                                        *(float *)(iVar21 + 0x44));
                  puVar14[0x1e] = sVar20;
                  puVar14[0x16] = sVar20;
                  puVar14[0xe] = sVar20;
                  puVar14[6] = sVar20;
                  uVar6 = (undefined2)(int)((float)iVar15 + local_ac);
                  puVar14[0x1d] = uVar6;
                  puVar14[0x15] = uVar6;
                }
                else {
                  uVar6 = (undefined2)(int)((float)(int)*(short *)(pbVar16 + 2) + local_a0);
                  puVar14[0x14] = uVar6;
                  puVar14[4] = uVar6;
                  uVar6 = (undefined2)(int)((float)(int)*(short *)(pbVar16 + 6) + local_a0);
                  puVar14[0x1c] = uVar6;
                  puVar14[0xc] = uVar6;
                  uVar6 = (undefined2)(int)((float)(int)*(short *)(pbVar16 + 4) + local_9c);
                  puVar14[0xd] = uVar6;
                  puVar14[5] = uVar6;
                  sVar1 = *(short *)(pbVar16 + 8);
                  puVar14[0x1e] = sVar20;
                  puVar14[0x16] = sVar20;
                  puVar14[0xe] = sVar20;
                  puVar14[6] = sVar20;
                  uVar6 = (undefined2)(int)((float)(int)sVar1 + local_9c);
                  puVar14[0x1d] = uVar6;
                  puVar14[0x15] = uVar6;
                }
                if (local_48 != 0) {
                  local_e0 = *(undefined4 *)(puVar14 + 2);
                  local_dc = *(undefined4 *)(puVar14 + 10);
                  local_d8 = *(undefined4 *)(puVar14 + 0x12);
                  local_d4 = *(undefined4 *)(puVar14 + 0x1a);
                }
                iVar23 = iVar23 + 1;
                local_50 = local_50 + 4;
                iVar15 = local_60;
                param_1 = local_5c;
                fVar4 = local_98;
                iVar24 = local_58;
              }
              iVar21 = (int)local_3a;
              if ((*(ushort *)(iVar19 + 6) & 4) == 0) {
                iVar19 = (local_42 + 1) * 0x10000;
                iVar21 = iVar19 >> 0x10;
                local_42 = (short)((uint)iVar19 >> 0x10);
              }
              else {
                if (iVar23 != 0) {
                  FUN_089a11c0(0xffffffff);
                  FUN_089a05f0(4,0x80011e,4,iVar23,0,iVar15);
                  FUN_089a11c0(0);
                  iVar15 = iVar15 + iVar23 * 0x40;
                }
                iVar23 = 0;
                local_50 = 0;
              }
              iVar24 = iVar24 + 1;
            } while (iVar24 < *(int *)(param_1 + 0x14));
          }
          if (iVar23 != 0) {
            uVar7 = (uint)local_4c;
            FUN_089a12a4((&DAT_089cbdb0)[uVar7],2,(&DAT_089cbdbc)[uVar7],0,(&DAT_089cbdc8)[uVar7]);
            FUN_089a05f0(4,0x80011e,4,iVar23,0,iVar15);
          }
        }
      }
      local_4c = 0;
      FUN_089a12a4(0,2,3,0,0);
      for (iVar15 = *param_2; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x3c)) {
        if (*(int *)(iVar15 + 0x30) != 0) {
          FUN_088d9e48(iVar15,iVar21);
        }
      }
    }
    param_2 = (int *)param_2[9];
  } while( true );
}

