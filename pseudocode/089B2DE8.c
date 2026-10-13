/* Entry 0x089B2DE8 | file offset 0x001AFDC0 | FUN_089b2de8 | bytes 5252 */

uint FUN_089b2de8(uint *param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  float *pfVar5;
  short *psVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100 [4];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [64];
  uint local_a0 [16];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  
  local_48 = param_4;
  if (*(int *)(param_1[5] + 0x24) == 0) {
    return param_3;
  }
  uVar8 = *(uint *)(param_2 + 0x30);
  if ((uVar8 & 0x1000) == 0) {
    if ((uVar8 & 0x4000) == 0) goto LAB_089b2e50;
LAB_089b41c4:
    FUN_089b2dbc(param_1);
    FUN_089b2dbc(param_1);
    FUN_089b2dbc(param_1);
    if ((*(uint *)(param_2 + 0x30) & 0x8000) != 0) goto LAB_089b4180;
    uVar8 = param_1[5];
LAB_089b2e5c:
    uVar25 = param_1[0x12] | *(uint *)(uVar8 + 0x20) | param_1[0xf] | param_3;
    param_1[0xf] = *(uint *)(uVar8 + 0x20);
    if ((uVar25 & 0x100000) == 0) goto LAB_089b2e84;
    uVar10 = param_1[4];
  }
  else {
    FUN_089b2dd0(param_1,param_4 | 0x10000);
    uVar8 = *(uint *)(param_2 + 0x30);
    uVar7 = 0;
    if ((uVar8 & 0x4000) == 0) {
      if ((uVar8 & 0x8000) != 0) {
        uVar7 = 0x100;
        goto LAB_089b4240;
      }
LAB_089b4220:
      FUN_089b2dd0(param_1,uVar7);
      uVar8 = *(uint *)(param_2 + 0x30);
    }
    else {
      uVar7 = 1;
      if ((uVar8 & 0x8000) == 0) goto LAB_089b4220;
      uVar7 = 0x401;
LAB_089b4240:
      FUN_089b2dd0(param_1,uVar7);
      uVar8 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar8 & 0x4000) != 0) goto LAB_089b41c4;
LAB_089b2e50:
    if ((uVar8 & 0x8000) == 0) {
      uVar8 = param_1[5];
      goto LAB_089b2e5c;
    }
LAB_089b4180:
    FUN_089b2dbc(param_1);
    FUN_089b2dbc(param_1);
    uVar8 = param_1[5];
    uVar25 = param_1[0x12] | *(uint *)(uVar8 + 0x20) | param_1[0xf] | param_3;
    param_1[0xf] = *(uint *)(uVar8 + 0x20);
    if ((uVar25 & 0x100000) == 0) goto LAB_089b2e84;
    uVar10 = param_1[4];
  }
  FUN_089ba430(param_1 + 0x16,uVar10 + 0x4c,uVar8 + 0x2c);
  uVar8 = param_1[5];
LAB_089b2e84:
  uVar2 = *(ushort *)(uVar8 + 0x18);
  local_4c = *(uint **)(uVar8 + 8);
  param_1[0x13] = 0;
  local_50 = (uint)uVar2;
  if (uVar2 != 0) {
    local_60 = 0;
    do {
      uVar10 = *local_4c;
      uVar8 = uVar10;
      if (((uVar10 + 1 & 0xffff0000) == 0) &&
         (uVar8 = 0, (uVar10 & 0xffff) < (uint)*(ushort *)(param_2 + 0x22))) {
        uVar8 = *(int *)(param_2 + 0x10) + uVar10 * 0x10;
      }
      uVar2 = *(ushort *)(uVar8 + 8);
      param_1[6] = uVar8;
      local_54 = (uint)uVar2;
      uVar8 = *(uint *)(uVar8 + 4);
      param_1[7] = uVar8;
      if (uVar2 != 0) {
        local_5c = 0;
        local_44 = param_1 + 0x28;
        fVar32 = 1.0;
        do {
          uVar9 = *(uint *)(uVar8 + 0x28);
          uVar10 = param_1[0x11];
          param_1[0x11] = uVar9;
          uVar25 = uVar9 | uVar10 | uVar25;
          uVar10 = *(uint *)(param_2 + 0x40) & *(uint *)(uVar8 + 0x2c);
          fVar31 = fVar32;
          if (((uVar10 & 0xffff) != 0) && ((uVar10 & 0xffff0000) != 0)) {
            uVar9 = *(uint *)(uVar8 + 0x20);
            uVar10 = uVar9;
            if (((uVar9 + 1 & 0xffff0000) == 0) &&
               (uVar10 = 0, (uVar9 & 0xffff) < (uint)*(ushort *)(param_2 + 0x24))) {
              uVar10 = *(int *)(param_2 + 0x14) + uVar9 * 0x10;
            }
            param_1[8] = uVar10;
            if (uVar10 != 0) {
              if ((*(uint *)(param_2 + 0x30) & 0x2000) == 0) {
                cVar1 = *(char *)(uVar8 + 0x30);
              }
              else {
                if ((*(uint *)(uVar8 + 0x30) & 0x100) == 0) {
                  FUN_089b2d90(param_1,1,0,0x80);
                  uVar8 = param_1[7];
                }
                else {
                  FUN_089b2d90(param_1,1,0x80,0x80);
                  uVar8 = param_1[7];
                }
                cVar1 = *(char *)(uVar8 + 0x30);
              }
              if (cVar1 == '\0') {
                uVar8 = param_1[8];
              }
              else {
                FUN_089b2d64(param_1,6,cVar1,0xff);
                uVar8 = param_1[8];
              }
              uVar2 = *(ushort *)(uVar8 + 0xc);
              uVar8 = *(uint *)(uVar8 + 8);
              local_58 = (uint)uVar2;
              param_1[9] = uVar8;
              fVar31 = fVar32;
              if (uVar2 != 0) {
                uVar10 = 0;
                local_110 = uVar25;
                do {
                  if (param_1[0xb] == uVar8) {
                    uVar8 = param_1[0xe];
                  }
                  else {
                    uVar9 = *(uint *)(uVar8 + 0x20);
                    uVar25 = param_1[0x10];
                    param_1[0xb] = uVar8;
                    param_1[0x10] = uVar9;
                    local_110 = uVar9 | uVar25 | local_110;
                    uVar25 = *(uint *)(uVar8 + 0x24);
                    uVar8 = uVar25;
                    if (((uVar25 + 1 & 0xffff0000) == 0) &&
                       (uVar8 = 0, (uVar25 & 0xffff) < (uint)*(ushort *)(param_2 + 0x26))) {
                      uVar8 = *(int *)(param_2 + 0x18) + uVar25 * 0x10;
                    }
                    param_1[10] = uVar8;
                    if (uVar8 != param_1[0xc]) {
                      param_1[0xc] = uVar8;
                      local_110 = local_110 | 0x80000000;
                    }
                    uVar8 = param_1[0xe];
                  }
                  local_110 = uVar8 & local_110;
                  if ((local_110 & 0x10000) != 0) {
                    puVar15 = (undefined4 *)*param_1;
                    if ((undefined4 *)param_1[2] < puVar15 + 0xd) {
                      *param_1 = (uint)(puVar15 + 0xd);
                    }
                    else {
                      uVar8 = param_1[4];
                      puVar13 = (uint *)(uVar8 + 0x90);
                      if ((*(uint *)(uVar8 + 0x30) & 1) != 0) {
                        puVar13 = &DAT_089d2650;
                      }
                      if ((*(uint *)(param_1[5] + 0x20) & 0x10000) != 0) {
                        FUN_089ba2c4(param_1 + 0x18,puVar13,param_1[5] + 0x80,uVar8 + 0x70);
                        puVar15 = (undefined4 *)*param_1;
                        puVar13 = param_1 + 0x18;
                      }
                      *param_1 = (uint)(puVar15 + 0xd);
                      param_1[0x15] = (uint)puVar13;
                      *puVar15 = 0x3a000000;
                      uVar8 = (int)puVar13 + 1U & 3;
                      uVar25 = -1 << (4 - uVar8) * 8 & 0x3b000000U |
                               *(uint *)(((int)puVar13 + 1U) - uVar8) >> uVar8 * 8;
                      uVar8 = (int)puVar13 + 5U & 3;
                      uVar9 = -1 << (4 - uVar8) * 8 & 0x3b000000U |
                              *(uint *)(((int)puVar13 + 5U) - uVar8) >> uVar8 * 8;
                      uVar8 = (int)puVar13 + 9U & 3;
                      uVar22 = -1 << (4 - uVar8) * 8 & 0x3b000000U |
                               *(uint *)(((int)puVar13 + 9U) - uVar8) >> uVar8 * 8;
                      puVar15[1] = uVar25;
                      puVar15[2] = uVar9;
                      puVar15[3] = uVar22;
                      uVar8 = (int)puVar13 + 0x11U & 3;
                      uVar25 = uVar25 & -1 << (4 - uVar8) * 8 |
                               *(uint *)(((int)puVar13 + 0x11U) - uVar8) >> uVar8 * 8;
                      uVar8 = (int)puVar13 + 0x15U & 3;
                      uVar9 = uVar9 & -1 << (4 - uVar8) * 8 |
                              *(uint *)(((int)puVar13 + 0x15U) - uVar8) >> uVar8 * 8;
                      uVar8 = (int)puVar13 + 0x19U & 3;
                      uVar22 = uVar22 & -1 << (4 - uVar8) * 8 |
                               *(uint *)(((int)puVar13 + 0x19U) - uVar8) >> uVar8 * 8;
                      puVar15[4] = uVar25;
                      puVar15[5] = uVar9;
                      puVar15[6] = uVar22;
                      uVar8 = (int)puVar13 + 0x21U & 3;
                      uVar18 = uVar25 & -1 << (4 - uVar8) * 8 |
                               *(uint *)(((int)puVar13 + 0x21U) - uVar8) >> uVar8 * 8;
                      uVar8 = (int)puVar13 + 0x25U & 3;
                      uVar20 = uVar9 & -1 << (4 - uVar8) * 8 |
                               *(uint *)(((int)puVar13 + 0x25U) - uVar8) >> uVar8 * 8;
                      uVar8 = (int)puVar13 + 0x29U & 3;
                      uVar23 = uVar22 & -1 << (4 - uVar8) * 8 |
                               *(uint *)(((int)puVar13 + 0x29U) - uVar8) >> uVar8 * 8;
                      puVar15[7] = uVar18;
                      puVar15[8] = uVar20;
                      puVar15[9] = uVar23;
                      uVar8 = (int)puVar13 + 0x31U & 3;
                      uVar25 = (int)puVar13 + 0x35U & 3;
                      uVar22 = *(uint *)(((int)puVar13 + 0x35U) - uVar25);
                      uVar9 = (int)puVar13 + 0x39U & 3;
                      uVar26 = *(uint *)(((int)puVar13 + 0x39U) - uVar9);
                      puVar15[10] = uVar18 & -1 << (4 - uVar8) * 8 |
                                    *(uint *)(((int)puVar13 + 0x31U) - uVar8) >> uVar8 * 8;
                      puVar15[0xb] = uVar20 & -1 << (4 - uVar25) * 8 | uVar22 >> uVar25 * 8;
                      puVar15[0xc] = uVar23 & -1 << (4 - uVar9) * 8 | uVar26 >> uVar9 * 8;
                    }
                  }
                  if (((local_110 & 0x20000) != 0) &&
                     (uVar8 = param_1[5], (*(uint *)(uVar8 + 0x20) & 0x20000) != 0)) {
                    uVar9 = (uint)*(ushort *)(uVar8 + 0x1c);
                    puVar13 = (uint *)*param_1;
                    puVar17 = (uint *)param_1[2];
                    iVar11 = uVar9 * 0xd + 0x13;
                    uVar25 = param_1[7];
                    if (puVar17 < puVar13 + iVar11) {
                      iVar28 = -((*(int *)(uVar25 + 0x28) << 0xe) >> 0x1f);
                      if (((iVar28 == 0) || (iVar14 = 0, param_1[0x13] == 0)) &&
                         (iVar14 = iVar11 + iVar28 + -0x12, iVar28 == 0)) {
                        puVar16 = puVar13 + iVar14;
                        if (puVar16 <= puVar17) {
                          iVar11 = *(int *)(uVar25 + 0x28);
LAB_089b3bc0:
                          iVar11 = -((iVar11 << 0xe) >> 0x1f);
                          if (iVar11 != 0) {
                            uVar22 = param_1[0x13];
                            goto LAB_089b3bd0;
                          }
                          uVar25 = param_1[4];
                          goto LAB_089b3df4;
                        }
                        param_1[0x13] = (uint)puVar16;
                      }
                      else {
                        puVar16 = puVar13 + (uint)*(ushort *)(uVar25 + 0x14) * 3 + iVar14 + 1;
                        if (puVar16 <= puVar17) {
                          iVar11 = *(int *)(uVar25 + 0x28);
                          goto LAB_089b3bc0;
                        }
                        param_1[0x13] = (uint)puVar16;
                      }
                      *param_1 = (uint)puVar16;
                    }
                    else {
                      iVar11 = -((*(int *)(uVar25 + 0x28) << 0xe) >> 0x1f);
                      if (iVar11 == 0) {
                        uVar25 = param_1[4];
LAB_089b3df4:
                        iVar28 = *(int *)(uVar25 + 0xc);
                        if (iVar11 == 0) {
                          *puVar13 = 0xff000000;
                          puVar17 = puVar13 + 1;
                          *param_1 = (uint)puVar17;
                        }
                        else {
                          puVar17 = puVar13 + 2;
                          *puVar13 = (((uint)(puVar13 + uVar9 * 0xd + 2) & 0xfffffff) >> 0x18) <<
                                     0x10 | 0x10000000;
                          puVar13[1] = (uint)(puVar13 + uVar9 * 0xd + 2) & 0xffffff | 0x8000000;
                          *param_1 = (uint)puVar17;
                        }
                        param_1[0x13] = (uint)puVar17;
                        uVar22 = 0;
                        uVar26 = 0;
                        if (uVar9 != 0) {
                          while( true ) {
                            sVar3 = *(short *)(uVar22 * 2 + *(int *)(uVar8 + 0x10));
                            iVar14 = *(int *)(uVar8 + 0x14);
                            if (iVar11 == 0) {
                              puVar13 = (uint *)*param_1;
                              *param_1 = (uint)(puVar13 + 1);
                              *puVar13 = uVar26 | 0x2a000000;
                            }
                            FUN_089ba2c4(local_44,iVar28 + sVar3 * 0x100 + 0x80,
                                         uVar22 * 0x40 + iVar14,uVar25 + 0x70);
                            puVar13 = (uint *)*param_1;
                            *param_1 = (uint)(puVar13 + 0xc);
                            uVar8 = (int)local_44 + 1U & 3;
                            uVar18 = -1 << (4 - uVar8) * 8 & 0x2b000000U |
                                     *(uint *)(((int)local_44 + 1U) - uVar8) >> uVar8 * 8;
                            uVar8 = (int)local_44 + 5U & 3;
                            uVar20 = -1 << (4 - uVar8) * 8 & 0x2b000000U |
                                     *(uint *)(((int)local_44 + 5U) - uVar8) >> uVar8 * 8;
                            uVar8 = (int)local_44 + 9U & 3;
                            uVar23 = -1 << (4 - uVar8) * 8 & 0x2b000000U |
                                     *(uint *)(((int)local_44 + 9U) - uVar8) >> uVar8 * 8;
                            *puVar13 = uVar18;
                            puVar13[1] = uVar20;
                            puVar13[2] = uVar23;
                            uVar8 = (int)local_44 + 0x11U & 3;
                            uVar18 = uVar18 & -1 << (4 - uVar8) * 8 |
                                     *(uint *)(((int)local_44 + 0x11U) - uVar8) >> uVar8 * 8;
                            uVar8 = (int)local_44 + 0x15U & 3;
                            uVar20 = uVar20 & -1 << (4 - uVar8) * 8 |
                                     *(uint *)(((int)local_44 + 0x15U) - uVar8) >> uVar8 * 8;
                            uVar8 = (int)local_44 + 0x19U & 3;
                            uVar23 = uVar23 & -1 << (4 - uVar8) * 8 |
                                     *(uint *)(((int)local_44 + 0x19U) - uVar8) >> uVar8 * 8;
                            puVar13[3] = uVar18;
                            puVar13[4] = uVar20;
                            puVar13[5] = uVar23;
                            uVar8 = (int)local_44 + 0x21U & 3;
                            uVar19 = uVar18 & -1 << (4 - uVar8) * 8 |
                                     *(uint *)(((int)local_44 + 0x21U) - uVar8) >> uVar8 * 8;
                            uVar8 = (int)local_44 + 0x25U & 3;
                            uVar21 = uVar20 & -1 << (4 - uVar8) * 8 |
                                     *(uint *)(((int)local_44 + 0x25U) - uVar8) >> uVar8 * 8;
                            uVar8 = (int)local_44 + 0x29U & 3;
                            uVar24 = uVar23 & -1 << (4 - uVar8) * 8 |
                                     *(uint *)(((int)local_44 + 0x29U) - uVar8) >> uVar8 * 8;
                            puVar13[6] = uVar19;
                            puVar13[7] = uVar21;
                            puVar13[8] = uVar24;
                            uVar8 = (int)local_44 + 0x31U & 3;
                            uVar18 = (int)local_44 + 0x35U & 3;
                            uVar23 = *(uint *)(((int)local_44 + 0x35U) - uVar18);
                            uVar20 = (int)local_44 + 0x39U & 3;
                            uVar4 = *(uint *)(((int)local_44 + 0x39U) - uVar20);
                            puVar13[9] = uVar19 & -1 << (4 - uVar8) * 8 |
                                         *(uint *)(((int)local_44 + 0x31U) - uVar8) >> uVar8 * 8;
                            puVar13[10] = uVar21 & -1 << (4 - uVar18) * 8 | uVar23 >> uVar18 * 8;
                            puVar13[0xb] = uVar24 & -1 << (4 - uVar20) * 8 | uVar4 >> uVar20 * 8;
                            uVar22 = uVar22 + 1;
                            if (iVar11 != 0) {
                              puVar15 = (undefined4 *)*param_1;
                              *puVar15 = 0xb000000;
                              *param_1 = (uint)(puVar15 + 1);
                            }
                            uVar26 = uVar26 + 0xc;
                            if (uVar9 == uVar22) break;
                            uVar8 = param_1[5];
                          }
                        }
                        if (iVar11 == 0) goto LAB_089b312c;
                        uVar25 = param_1[7];
                        puVar13 = (uint *)*param_1;
                      }
                      else {
                        uVar22 = param_1[0x13];
LAB_089b3bd0:
                        if (uVar22 == 0) {
                          uVar25 = param_1[4];
                          goto LAB_089b3df4;
                        }
                      }
                      uVar2 = *(ushort *)(uVar25 + 0x14);
                      *puVar13 = 0xff000000;
                      psVar6 = *(short **)(uVar25 + 0x10);
                      *param_1 = (uint)(puVar13 + 1);
                      if (uVar2 != 0) {
                        uVar9 = param_1[0x13];
                        uVar25 = 0;
                        uVar8 = 0;
                        puVar13 = puVar13 + 1;
                        do {
                          uVar25 = uVar25 + 1;
                          uVar22 = uVar9 + *psVar6 * 0x34;
                          *puVar13 = uVar8 | 0x2a000000;
                          uVar8 = uVar8 + 0xc;
                          psVar6 = psVar6 + 1;
                          puVar13[1] = ((uVar22 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
                          puVar13[2] = uVar22 & 0xffffff | 0xa000000;
                          *param_1 = (uint)(puVar13 + 3);
                          puVar13 = puVar13 + 3;
                        } while (uVar2 != uVar25);
                      }
                    }
                  }
LAB_089b312c:
                  uVar8 = local_110;
                  if ((local_110 & 0x7ffcffff) == 0) {
LAB_089b3968:
                    if ((int)local_110 < 0) {
LAB_089b3c80:
                      FUN_089b2dd0(param_1,0x30000);
                      uVar7 = 0;
                      if (param_1[10] != 0) {
                        uVar7 = *(undefined4 *)(param_1[10] + 4);
                      }
                      local_104 = *param_1;
                      puVar13 = &local_104;
                      if (param_1[2] == 0) {
                        puVar13 = (uint *)0x0;
                      }
                      local_100[0] = param_1[2] - local_104;
                      iVar11 = FUN_089bd8cc(uVar7,puVar13,local_100,0xffff);
                      *param_1 = *param_1 + iVar11;
                      if (iVar11 == 0) {
                        param_1[2] = 0;
                      }
                    }
                    uVar8 = param_1[7];
                  }
                  else {
                    uVar25 = *param_1;
                    iVar11 = 0;
                    if (param_1[2] < uVar25 + 0x100) {
                      *param_1 = (uint)(param_1 + 0x38);
                      iVar11 = (int)(uVar25 - (int)(param_1 + 0x38)) >> 2;
                    }
                    if (((local_110 & 0x40000) != 0) &&
                       (uVar25 = param_1[5], (*(uint *)(uVar25 + 0x20) & 0x40000) != 0)) {
                      puVar15 = (undefined4 *)*param_1;
                      uVar2 = *(ushort *)(uVar25 + 0x1a);
                      *puVar15 = 0xff000000;
                      puVar13 = puVar15 + 1;
                      *param_1 = (uint)puVar13;
                      if (uVar2 == 0) {
                        fVar30 = *(float *)(uVar25 + 0x28);
                        iVar28 = 0;
                        uVar25 = 0x2c000000;
                        do {
                          fVar29 = fVar32 - ABS(fVar30 - (float)iVar28);
                          iVar28 = iVar28 + 1;
                          if (fVar29 < 0.0) {
                            fVar29 = 0.0;
                          }
                          *puVar13 = uVar25 | (uint)fVar29 >> 8;
                          puVar13 = puVar13 + 1;
                          uVar25 = uVar25 + 0x1000000;
                          *param_1 = (uint)puVar13;
                        } while (iVar28 != 8);
                      }
                      else {
                        puVar17 = *(uint **)(uVar25 + 0xc);
                        uVar9 = 0;
                        uVar25 = 0x2c000000;
                        do {
                          uVar22 = *puVar17;
                          uVar9 = uVar9 + 1;
                          puVar17 = puVar17 + 1;
                          *puVar13 = uVar25 | uVar22 >> 8;
                          uVar25 = uVar25 + 0x1000000;
                          puVar13 = puVar13 + 1;
                        } while (uVar2 != uVar9);
                        *param_1 = (uint)puVar13;
                      }
                    }
                    if ((local_110 & 0x80000) != 0) {
                      fVar30 = *(float *)(param_1[4] + 0x50);
                      if ((*(uint *)(param_1[7] + 0x28) & 0x80000) == 0) {
                        fVar29 = fVar30 * 16.0;
                        fVar30 = fVar29;
                      }
                      else {
                        pfVar5 = *(float **)(param_1[7] + 8);
                        fVar29 = fVar30 * *pfVar5;
                        fVar30 = fVar30 * pfVar5[1];
                      }
                      iVar28 = (int)fVar30;
                      uVar25 = (uint)fVar29;
                      puVar13 = (uint *)*param_1;
                      if (iVar28 < 1) {
                        iVar28 = 1;
                      }
                      if ((int)uVar25 < 1) {
                        uVar25 = 1;
                      }
                      if (0x40 < (int)uVar25) {
                        uVar25 = 0x40;
                      }
                      uVar9 = 0x4000;
                      if (iVar28 < 0x41) {
                        uVar9 = iVar28 << 8;
                      }
                      *puVar13 = uVar25 | uVar9 | 0x36000000;
                      *param_1 = (uint)(puVar13 + 1);
                    }
                    if ((local_110 & 0x100000) != 0) {
                      uVar25 = param_1[9];
                      local_10c = *(uint *)(uVar25 + 0x2c);
                      local_108 = *(uint *)(uVar25 + 0x30);
                      local_100[0] = *(uint *)(uVar25 + 0x38);
                      if (param_1[0x16] != 0xffffffff) {
                        puVar13 = param_1 + 0x16;
                        FUN_089ba430(&local_10c,&local_10c,puVar13);
                        FUN_089ba430(&local_108,&local_108,puVar13);
                        FUN_089ba430(local_100,local_100,puVar13);
                        uVar25 = param_1[9];
                      }
                      puVar13 = (uint *)*param_1;
                      *puVar13 = local_10c & 0xffffff | 0x56000000;
                      uVar25 = *(uint *)(uVar25 + 0x3c);
                      *param_1 = (uint)(puVar13 + 5);
                      puVar13[1] = local_108 & 0xffffff | 0x57000000;
                      puVar13[2] = local_100[0] & 0xffffff | 0x55000000;
                      puVar13[3] = local_100[0] >> 0x18 | 0x58000000;
                      puVar13[4] = uVar25 >> 8 | 0x5b000000;
                    }
                    if ((uVar8 & 0x200000) != 0) {
                      uVar25 = param_1[9];
                      uVar9 = 0;
                      if (*(byte *)(uVar25 + 0x11) != 0) {
                        uVar9 = 0xffffff;
                      }
                      uVar22 = 0;
                      if (*(byte *)(uVar25 + 0x12) != 0) {
                        uVar22 = 0xffffff;
                      }
                      puVar13 = (uint *)*param_1;
                      *puVar13 = (uint)*(byte *)(uVar25 + 0x10) << 8 |
                                 (int)(char)(&DAT_089d21c0)[*(byte *)(uVar25 + 0x12)] << 4 |
                                 (int)(char)(&DAT_089d21c0)[*(byte *)(uVar25 + 0x11)] | 0xdf000000;
                      puVar13[1] = uVar9 | 0xe0000000;
                      puVar13[2] = uVar22 | 0xe1000000;
                      *param_1 = (uint)(puVar13 + 3);
                    }
                    if ((uVar8 & 0x400000) != 0) {
                      puVar13 = (uint *)*param_1;
                      sVar3 = *(short *)(param_1[9] + 8);
                      *param_1 = (uint)(puVar13 + 1);
                      *puVar13 = sVar3 != 0x83 | 0x5e000000;
                    }
                    if ((uVar8 & 0x800000) != 0) {
                      puVar13 = (uint *)(param_1[4] + 0x80);
                      if ((*(uint *)(param_1[9] + 0x20) & 0x800000) != 0) {
                        iVar14 = *(int *)(param_1[9] + 0x28);
                        uVar7 = FUN_089b1828(param_1[10]);
                        iVar28 = FUN_089bcd18(uVar7);
                        if (iVar14 != 0) {
                          puVar13 = (uint *)FUN_089ba3f0(auStack_f0,iVar14,puVar13);
                        }
                        if (iVar28 != 0) {
                          puVar13 = (uint *)FUN_089ba3f0(auStack_f0,iVar28,puVar13);
                        }
                      }
                      uVar9 = puVar13[1];
                      uVar25 = puVar13[3];
                      uVar22 = puVar13[2];
                      puVar17 = (uint *)*param_1;
                      *puVar17 = *puVar13 >> 8 | 0x4a000000;
                      puVar17[1] = uVar9 >> 8 | 0x4b000000;
                      puVar17[2] = uVar22 >> 8 | 0x48000000;
                      puVar17[3] = uVar25 >> 8 | 0x49000000;
                      *param_1 = (uint)(puVar17 + 4);
                    }
                    if ((uVar8 & 0x1000000) != 0) {
                      uVar25 = DAT_09af71a4;
                      if (DAT_09af71a4 == 0) {
                        if ((*(uint *)(param_1[9] + 0x20) & 0x1000000) != 0) {
                          uVar25 = (uint)*(ushort *)(param_1[9] + 10);
                          goto LAB_089b34f0;
                        }
LAB_089b3b64:
                        param_1[0x12] = 0;
                        if (uVar25 == 0) goto LAB_089b3b6c;
LAB_089b3500:
                        uVar9 = 1;
                        uVar25 = (int)(char)(&DAT_089d21bc)[uVar25 & 0xf] << 8;
                      }
                      else {
LAB_089b34f0:
                        if ((uVar25 & 0xf00) == 0) goto LAB_089b3b64;
                        param_1[0x12] = 0x2000000;
                        if (uVar25 != 0) goto LAB_089b3500;
LAB_089b3b6c:
                        uVar25 = 0x100;
                        uVar9 = 2;
                        if (*(short *)(param_1[9] + 8) != 0x86) {
                          uVar9 = 0;
                        }
                      }
                      puVar13 = (uint *)*param_1;
                      *puVar13 = uVar9 | uVar25 | 0xc0000000;
                      *param_1 = (uint)(puVar13 + 1);
                    }
                    if ((uVar8 & 0x2000000) != 0) {
                      if (DAT_09af71a4 == 0) {
                        uVar25 = param_1[9];
                        if ((*(uint *)(uVar25 + 0x20) & 0x1000000) == 0) goto LAB_089b36d8;
                        iVar27 = *(int *)(uVar25 + 0x28);
                        uVar2 = *(ushort *)(uVar25 + 10);
                        iVar28 = *(int *)(uVar25 + 0xc);
                        uVar7 = FUN_089b1828(param_1[10]);
                        iVar14 = FUN_089bcd18(uVar7);
                        uVar25 = (uint)uVar2;
                      }
                      else {
                        iVar28 = 0;
                        uVar25 = DAT_09af71a4;
                        if ((DAT_09af71a4 & 0x4000) == 0) {
                          iVar27 = 0;
                          iVar14 = 0;
                        }
                        else {
                          iVar28 = 0x9af71b0;
                          iVar27 = 0;
                          iVar14 = 0;
                        }
                      }
                      puVar17 = &DAT_089d2650;
                      puVar13 = local_a0;
                      do {
                        uVar9 = puVar17[1];
                        uVar22 = puVar17[2];
                        uVar26 = puVar17[3];
                        *puVar13 = *puVar17;
                        puVar17 = puVar17 + 4;
                        puVar13[1] = uVar9;
                        puVar13[2] = uVar22;
                        puVar13[3] = uVar26;
                        puVar13 = puVar13 + 4;
                      } while (puVar17 != &DAT_089d2690);
                      if (iVar14 != 0) {
                        FUN_089ba280(local_a0,local_a0);
                      }
                      if (iVar27 != 0) {
                        FUN_089ba280(local_a0,local_a0,iVar27);
                      }
                      if (iVar28 != 0) {
                        FUN_089ba200(local_a0,local_a0,iVar28);
                      }
                      if ((uVar25 & 0xf00) != 0) {
                        puVar15 = (undefined4 *)(param_1[5] + 0x80);
                        if (*(short *)(param_1[5] + 0x1c) != 0) {
                          puVar15 = &DAT_089d2650;
                        }
                        puVar12 = (undefined4 *)(param_1[4] + 0x90);
                        if ((uVar25 & 0xf00) == 0x100) {
                          puVar12 = &DAT_089d2650;
                        }
                        FUN_089ba200(auStack_e0,puVar12,puVar15);
                        if ((uVar25 & 0x8000) != 0) {
                          FUN_089ba318(auStack_e0,auStack_e0);
                        }
                        FUN_089ba200(local_a0,local_a0,auStack_e0);
                      }
                      if ((uVar25 & 0xf) == 0) {
                        FUN_089ba280(local_a0,local_a0,param_1[4] + 0x80);
                        puVar15 = (undefined4 *)*param_1;
                      }
                      else if ((uVar25 & 0xf) == 2) {
                        if (*(short *)(param_1[5] + 0x1c) == 0) {
                          FUN_089ba240(local_a0,local_a0,param_1[4] + 0x70);
                          puVar15 = (undefined4 *)*param_1;
                        }
                        else {
                          puVar15 = (undefined4 *)*param_1;
                        }
                      }
                      else {
                        puVar15 = (undefined4 *)*param_1;
                      }
                      puVar17 = local_a0;
                      *puVar15 = 0x40000000;
                      iVar28 = 4;
                      *param_1 = (uint)(puVar15 + 1);
                      puVar13 = puVar15 + 1;
                      do {
                        uVar25 = puVar17[1];
                        uVar9 = puVar17[3];
                        iVar28 = iVar28 + -1;
                        *puVar13 = *puVar17 >> 8 | 0x41000000;
                        puVar17 = puVar17 + 4;
                        puVar16 = puVar13 + 3;
                        puVar13[1] = uVar25 >> 8 | 0x41000000;
                        puVar13[2] = uVar9 >> 8 | 0x41000000;
                        puVar13 = puVar16;
                      } while (iVar28 != 0);
                      *param_1 = (uint)puVar16;
                    }
LAB_089b36d8:
                    if ((uVar8 & 0x400ffff) != 0) {
                      uVar22 = param_1[4];
                      uVar8 = (uint)*(ushort *)(param_1[9] + 0x14) & ~*(uint *)(uVar22 + 0x34);
                      uVar9 = ~*(uint *)(uVar22 + 0x34) & (uint)*(ushort *)(param_1[7] + 0x16);
                      uVar25 = (uVar8 & *(ushort *)(param_1[9] + 0x16) |
                               *(uint *)(uVar22 + 0x38) & ~uVar8) & ~uVar9;
                      uVar26 = uVar9 & *(ushort *)(param_1[7] + 0x18) | uVar25;
                      uVar9 = param_1[0xd];
                      param_1[0xd] = uVar26;
                      uVar8 = 0xffffffff;
                      if (uVar9 != 0xffffffff) {
                        uVar8 = uVar26 ^ uVar9;
                      }
                      uVar8 = *(uint *)(uVar22 + 0x3c) & uVar8;
                      if (uVar8 != 0) {
                        if ((uVar8 & 1) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = uVar26 & 1 | 0x17000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 2) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = (uVar26 & 3) >> 1 | 0x1f000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 4) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = (uVar26 & 7) >> 2 | 0x1e000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 8) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = (uVar26 & 0xf) >> 3 | 0x1d000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 0x10) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = (uVar26 & 0x1f) >> 4 | 0x23000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 0x20) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = ((uVar26 ^ 0x20) & 0x3f) >> 5 | 0xe7000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 0x40) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = (uVar26 & 0x7f) >> 6 | 0x22000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 0x80) != 0) {
                          puVar13 = (uint *)*param_1;
                          uVar9 = 0xff;
                          if ((uVar26 & 0x80) != 0) {
                            uVar9 = 0;
                          }
                          *puVar13 = uVar9 | 0xe9000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 0x100) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = (uVar26 & 0x1ff) >> 8 | 0x9b000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                        if ((uVar8 & 0x200) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = (uVar26 & 0x3ff) >> 9 | 0x51000000;
                          puVar13[1] = ((uVar26 ^ 0x200) & 0x3ff) >> 9 | 0x38000000;
                          *param_1 = (uint)(puVar13 + 2);
                        }
                        if ((uVar8 & 0x4000000) != 0) {
                          puVar13 = (uint *)*param_1;
                          *puVar13 = (uVar25 & 0x7ffffff) >> 0x1a | 0x20000000;
                          *param_1 = (uint)(puVar13 + 1);
                        }
                      }
                    }
                    if (iVar11 != 0) {
                      uVar8 = *param_1 + iVar11 * 4;
                      *param_1 = uVar8;
                      if (param_1[2] < uVar8) {
                        param_1[2] = 0;
                      }
                      else {
                        puVar13 = param_1 + 0x38;
                        FUN_08935524(puVar13 + iVar11,puVar13,uVar8 - (int)(puVar13 + iVar11));
                      }
                      goto LAB_089b3968;
                    }
                    if ((int)local_110 < 0) goto LAB_089b3c80;
                    uVar8 = param_1[7];
                  }
                  local_110 = 0;
                  if ((*(uint *)(uVar8 + 0x30) & 0x3e00) == 0) {
                    uVar8 = *(uint *)(uVar8 + 0x24);
                  }
                  else {
                    if (*(int *)(param_2 + 4) != 0) {
                      puVar13 = (uint *)*param_1;
                      uVar8 = *(int *)(param_2 + 4) +
                              ((*(uint *)(uVar8 + 0x30) & 0x3fff) >> 9) * 0x30 + -0x30;
                      *puVar13 = ((uVar8 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
                      puVar13[1] = uVar8 & 0xffffff | 0xa000000;
                      *param_1 = (uint)(puVar13 + 2);
                      FUN_089b2c94(&local_110);
                      uVar8 = param_1[7];
                    }
                    uVar8 = *(uint *)(uVar8 + 0x24);
                  }
                  if (uVar8 == 0) {
                    uVar8 = param_1[9];
                  }
                  else {
                    puVar16 = (uint *)*param_1;
                    puVar13 = (uint *)param_1[2];
                    puVar17 = puVar16 + 2;
                    if (puVar13 < puVar17) {
                      *param_1 = (uint)puVar17;
                    }
                    else {
                      puVar16[1] = uVar8 & 0xffffff | 0xa000000;
                      *puVar16 = ((uVar8 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
                      *param_1 = (uint)puVar17;
                    }
                    if ((code *)param_1[0x14] == (code *)0x0) {
                      uVar8 = param_1[9];
                    }
                    else {
                      uVar8 = (*(code *)param_1[0x14])(*param_1,puVar13,param_1[0x15]);
                      *param_1 = uVar8;
                      uVar8 = param_1[9];
                    }
                  }
                  uVar10 = uVar10 + 1;
                  uVar8 = uVar8 + 0x40;
                  param_1[9] = uVar8;
                  uVar25 = local_110;
                } while (local_58 != uVar10);
              }
              uVar8 = param_1[7];
              if (*(char *)(uVar8 + 0x30) != '\0') {
                FUN_089b2d64(param_1,6,0,0xff);
                uVar8 = param_1[7];
              }
            }
          }
          uVar8 = uVar8 + 0x40;
          local_5c = local_5c + 1;
          param_1[7] = uVar8;
          fVar32 = fVar31;
        } while (local_54 != local_5c);
      }
      local_60 = local_60 + 1;
      local_4c = local_4c + 1;
    } while (local_50 != local_60);
  }
  uVar8 = *(uint *)(param_2 + 0x30);
  if ((uVar8 & 0x8000) != 0) {
    FUN_089b2dd0(param_1,0x30000);
    FUN_089b2dbc(param_1);
    FUN_089b2dbc(param_1);
    uVar8 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar8 & 0x4000) != 0) {
    FUN_089b2dbc(param_1);
    FUN_089b2dbc(param_1);
    FUN_089b2dbc(param_1);
    uVar8 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar8 & 0x1000) != 0) {
    uVar10 = 0;
    iVar11 = 0;
    if ((uVar8 & 0x4000) != 0) {
      uVar10 = 0xfd;
      iVar11 = -3;
    }
    if ((uVar8 & 0x8000) != 0) {
      uVar10 = uVar10 | (iVar11 - 2U & 0xff) << 8;
    }
    FUN_089b2dd0(param_1,uVar10);
    FUN_089b2dd0(param_1,local_48 | 0x20000);
  }
  return uVar25;
}

