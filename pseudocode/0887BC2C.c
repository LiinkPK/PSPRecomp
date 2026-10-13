/* Entry 0x0887BC2C | file offset 0x00078C04 | FUN_0887bc2c | bytes 3620 */

void FUN_0887bc2c(int *param_1,short param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  byte *pbVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  byte bVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  short local_2b0 [32];
  short local_270 [32];
  short local_230 [206];
  int local_94;
  short *local_90;
  byte *local_8c;
  int local_88;
  int local_84;
  short *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  short *local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  short local_4c;
  uint local_48;
  char local_44;
  int local_40;
  char local_3c;
  
  psVar7 = local_2b0;
  psVar14 = local_2b0;
  psVar15 = local_2b0;
  local_5c = 0;
  local_68 = 0;
  local_60 = 0;
  uVar10 = param_1[4];
  local_58 = 0;
  local_40 = 0;
  param_1[4] = uVar10 & 0xffffefff;
  local_80 = (short *)0x0;
  fVar24 = 0.0;
  local_8c = DAT_089d6998 + 0x30;
  iVar21 = 0;
  local_4c = param_2;
  if ((uVar10 & 0x2000) == 0) {
    psVar6 = (short *)FUN_089a00f4((int)*(char *)(*param_1 + 0x12) << 6);
    iVar11 = *param_1;
    local_90 = psVar6;
    fVar23 = (float)param_1[6];
    local_50 = 0;
    local_54 = (uint)*DAT_089d6998;
    local_84 = 0;
    local_94 = (int)(short)(int)((float)(int)*(short *)(iVar11 + 0x10) * fVar23);
    fVar25 = (float)*DAT_089d6998 * (float)param_1[7];
    local_88 = 0;
    local_3c = '\0';
    local_44 = '\0';
    local_48 = 1;
    local_64 = local_2b0;
    if (((param_1[4] & 0x4000U) != 0) || ((param_1[4] & 0x800U) != 0)) {
      local_44 = '\x01';
    }
    piVar20 = (int *)0x0;
    psVar16 = psVar6;
    iVar17 = 0;
    do {
      psVar5 = local_64;
      pbVar4 = local_8c;
      if (piVar20 == (int *)0x0) {
        piVar20 = *(int **)(iVar11 + 0x1c);
      }
      else {
        piVar20 = (int *)piVar20[4];
      }
      if (piVar20 == (int *)0x0) {
        uVar10 = param_1[4];
        iVar11 = (int)(short)param_1[2];
        bVar3 = (uVar10 & 8) != 0;
        goto LAB_0887c4dc;
      }
      iVar19 = *piVar20;
      fVar22 = (float)piVar20[2];
      bVar1 = *(byte *)((int)piVar20 + 0xd);
      iVar11 = (int)((float)iVar19 * fVar22);
      if ((bVar1 & 8) == 0) {
        local_6c = iVar11;
        local_74 = 0;
        iVar11 = (int)((float)iVar19 * fVar22 * fVar23);
        local_70 = iVar11;
      }
      else {
        local_74 = iVar11;
        local_6c = 0;
        local_70 = (int)((float)iVar11 * fVar23);
      }
      if (fVar22 <= fVar24) {
        fVar22 = fVar24;
      }
      fVar24 = fVar22;
      local_7c = iVar21;
      local_78 = local_94 - local_5c;
      if (local_94 - local_5c < 1) {
        if ((bVar1 & 1) != 0) {
          uVar10 = param_1[4];
          iVar11 = (int)(short)param_1[2];
          bVar3 = (uVar10 & 8) != 0;
          goto LAB_0887c4dc;
        }
        iVar19 = local_84 + local_6c;
        iVar21 = local_88 + local_74;
        if ((bVar1 & 2) != 0) {
          uVar10 = param_1[4];
          bVar3 = (uVar10 & 8) != 0;
          iVar11 = (int)(short)param_1[2];
          iVar21 = (int)((float)iVar19 * fVar23 + (float)iVar21);
          goto LAB_0887c4dc;
        }
        local_84 = iVar19;
        local_88 = iVar21;
        iVar21 = (int)((float)iVar19 * fVar23 + (float)iVar21);
        iVar19 = iVar17;
      }
      else {
        if ((bVar1 & 1) != 0) {
          iVar12 = (int)(short)param_1[2];
          if (iVar12 == 0) {
            iVar12 = (int)(fVar25 * fVar24);
          }
          if (local_60 == 0) {
            local_58 = 0;
          }
          else {
            iVar12 = iVar12 + local_58;
          }
          if ((param_1[4] & 8U) == 0) {
            iVar17 = 0;
            if ((param_1[4] & 4U) != 0) {
              iVar17 = iVar21;
            }
          }
          else {
            iVar17 = iVar21 / 2;
          }
          if (local_48 != 0) {
            *local_64 = -(short)iVar17;
            psVar5[0x20] = (short)local_58 -
                           (short)((int)((uint)pbVar4[5] - ((int)(fVar25 * fVar24) + -1)) / 2);
          }
          for (; psVar6 != psVar16; psVar6 = psVar6 + 8) {
            psVar6[4] = psVar6[4] - (short)iVar17;
            psVar6[5] = psVar6[5] + (short)local_58;
          }
          local_68 = local_68 + local_54;
          local_7c = 0;
          local_84 = 0;
          local_88 = 0;
          fVar24 = (float)piVar20[2];
          bVar1 = *(byte *)((int)piVar20 + 0xd);
          iVar17 = 0;
          iVar19 = *piVar20;
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          local_60 = local_60 + 1;
          local_64 = local_64 + 1;
          local_48 = (uint)(local_60 < 0x20);
          psVar6 = psVar16;
          local_58 = iVar12;
        }
        iVar19 = iVar17 + iVar19;
        if (((bVar1 & 0x10) == 0) && (*(short *)((int)piVar20 + 0xe) <= (short)param_1[1])) {
          puVar18 = (uint *)(psVar16 + 2);
          sVar9 = (short)iVar17;
          if (iVar19 < 0x201) {
            psVar7[0x40] = 0;
            psVar16[0x18] = sVar9;
            *psVar16 = sVar9;
          }
          else {
            psVar7[0x40] = 0x100;
            local_3c = '\x01';
            psVar16[0x18] = sVar9 + -0x100;
            *psVar16 = sVar9 + -0x100;
          }
          psVar16[1] = (short)local_68;
          psVar16[9] = (short)local_68;
          sVar9 = *psVar16 + (short)*piVar20;
          psVar16[0x10] = sVar9;
          psVar16[8] = sVar9;
          sVar9 = psVar16[1] + (short)local_54 + -1;
          psVar16[0x19] = sVar9;
          psVar16[0x11] = sVar9;
          sVar9 = (short)local_7c + (short)param_1[5];
          psVar16[4] = sVar9;
          psVar16[0x1c] = sVar9;
          sVar9 = psVar16[4] + (short)iVar11;
          psVar16[0x14] = sVar9;
          psVar16[0xc] = sVar9;
          sVar9 = (short)(int)(fVar25 * (1.0 - (float)piVar20[2]) +
                              (float)(int)*(short *)((int)param_1 + 0x16));
          psVar16[5] = sVar9;
          psVar16[0xd] = sVar9;
          fVar23 = (float)piVar20[2];
          psVar16[0x1e] = local_4c;
          psVar16[0x16] = local_4c;
          psVar16[0xe] = local_4c;
          psVar16[6] = local_4c;
          sVar9 = (short)(int)((float)(int)psVar16[5] + fVar25 * fVar23);
          psVar16[0x1d] = sVar9;
          psVar16[0x15] = sVar9;
          if ((local_78 <= local_70) && (local_80 == (short *)0x0)) {
            local_80 = (short *)FUN_089a00f4(0x18);
            *local_80 = (short)local_78 + (short)local_7c;
            local_80[1] = psVar16[5];
            local_80[3] = psVar16[0xc];
            local_80[4] = psVar16[5];
            local_80[6] = *local_80;
            local_80[7] = psVar16[0x15];
            local_80[9] = local_80[3];
            local_80[10] = local_80[7];
          }
          if (((piVar20[1] & 0xff000000U) == 0) || (local_44 != '\0')) {
            uVar10 = param_1[3];
            *(uint *)(psVar16 + 0x1a) = uVar10;
            *(uint *)(psVar16 + 0x12) = uVar10;
            *(uint *)(psVar16 + 10) = uVar10;
            *puVar18 = uVar10;
            sVar9 = *(short *)((int)param_1 + 10);
          }
          else {
            *puVar18 = piVar20[1];
            *(char *)((int)psVar16 + 7) = (char)((uint)param_1[3] >> 0x18);
            uVar10 = *puVar18;
            *(uint *)(psVar16 + 0x1a) = uVar10;
            *(uint *)(psVar16 + 0x12) = uVar10;
            *(uint *)(psVar16 + 10) = uVar10;
            sVar9 = *(short *)((int)param_1 + 10);
          }
          if (sVar9 != -1) {
            *(char *)((int)psVar16 + 7) = (char)sVar9;
            *(char *)((int)psVar16 + 0x17) = (char)*(undefined2 *)((int)param_1 + 10);
            *(char *)((int)psVar16 + 0x27) = (char)*(undefined2 *)((int)param_1 + 10);
            *(char *)((int)psVar16 + 0x37) = (char)*(undefined2 *)((int)param_1 + 10);
          }
          psVar16 = psVar16 + 0x20;
          local_50 = local_50 + 1;
          fVar23 = (float)param_1[6];
          bVar8 = *(byte *)((int)piVar20 + 0xd) & 2;
          iVar19 = iVar17 + *piVar20;
          psVar7 = local_2b0 + local_50;
        }
        else {
          fVar23 = (float)param_1[6];
          bVar8 = bVar1 & 2;
          if (((bVar1 & 0x10) != 0) && (*(short *)((int)piVar20 + 0xe) <= (short)param_1[1])) {
            local_40 = local_40 + 1;
          }
        }
        local_84 = local_84 + local_6c;
        local_88 = local_88 + local_74;
        local_5c = local_70 + local_5c;
        iVar21 = (int)((float)local_84 * fVar23 + (float)local_88);
        if (bVar8 != 0) {
          uVar10 = param_1[4];
          iVar11 = (int)(short)param_1[2];
          bVar3 = (uVar10 & 8) != 0;
LAB_0887c4dc:
          iVar17 = local_60;
          psVar5 = local_64;
          pbVar4 = local_8c;
          if (iVar11 == 0) {
            iVar11 = (int)(fVar25 * fVar24);
          }
          if (local_60 == 0) {
            local_58 = 0;
          }
          else {
            iVar11 = iVar11 + local_58;
          }
          sVar9 = (short)local_58;
          if (bVar3) {
            iVar19 = iVar21 / 2;
          }
          else {
            iVar19 = 0;
            if ((uVar10 & 4) != 0) {
              iVar19 = iVar21;
            }
          }
          if (local_48 != 0) {
            *local_64 = -(short)iVar19;
            psVar5[0x20] = sVar9 - (short)((int)((uint)pbVar4[5] - ((int)(fVar25 * fVar24) + -1)) /
                                          2);
          }
          if (psVar6 != psVar16) {
            do {
              psVar6[4] = psVar6[4] - (short)iVar19;
              psVar6[5] = psVar6[5] + sVar9;
              psVar6 = psVar6 + 8;
            } while (psVar6 != psVar16);
            uVar10 = param_1[4];
          }
          psVar7[0x40] = 0xff;
          bVar3 = (uVar10 & 0x40) != 0;
          local_58 = iVar11;
          if ((bVar3) || ((uVar10 & 0x20) != 0)) {
            if (bVar3) {
              iVar11 = iVar11 / 2;
            }
            sVar9 = (short)iVar11;
            for (psVar7 = local_90; psVar7 != psVar16; psVar7 = psVar7 + 8) {
              psVar7[5] = psVar7[5] - sVar9;
            }
            iVar11 = 0;
            if (0 < iVar17 + 1) {
              do {
                iVar11 = iVar11 + 1;
                *(short *)((int)psVar14 + 0x40) = *(short *)((int)psVar14 + 0x40) - sVar9;
                psVar14 = (short *)((int)psVar14 + 2);
              } while (iVar11 < iVar17 + 1);
            }
          }
          FUN_089a0e60(1,1);
          FUN_089a0fe8(2,0,0xff,0);
          FUN_089a1024(1,&DAT_089d68d0);
          FUN_089a0db8(4,0,0,0);
          psVar14 = local_80;
          psVar7 = local_90;
          if (local_80 != (short *)0x0) {
            iVar11 = 0;
            psVar6 = local_80;
            do {
              psVar6[1] = sVar9 + *(short *)((int)param_1 + 0x16) + psVar6[1];
              psVar6[2] = local_4c + 1;
              iVar11 = iVar11 + 1;
              psVar6 = psVar6 + 3;
            } while (iVar11 < 4);
            if ((param_1[4] & 8U) == 0) {
              local_7c = iVar21;
              if ((param_1[4] & 4U) == 0) {
                iVar21 = 0;
                psVar6 = local_80;
                do {
                  iVar21 = iVar21 + 1;
                  *psVar6 = *psVar6 + (short)param_1[5];
                  psVar6 = psVar6 + 3;
                } while (iVar21 < 4);
                uVar10 = param_1[4];
                bVar3 = (uVar10 & 0x20) != 0;
              }
              else {
                iVar11 = 0;
                psVar6 = local_80;
                do {
                  *psVar6 = *psVar6 + ((short)param_1[5] - (short)iVar21);
                  iVar11 = iVar11 + 1;
                  psVar6 = psVar6 + 3;
                } while (iVar11 < 4);
                uVar10 = param_1[4];
                bVar3 = (uVar10 & 0x20) != 0;
              }
            }
            else {
              iVar11 = 0;
              psVar6 = local_80;
              do {
                *psVar6 = *psVar6 + ((short)param_1[5] - (short)(iVar21 / 2));
                iVar11 = iVar11 + 1;
                psVar6 = psVar6 + 3;
              } while (iVar11 < 4);
              uVar10 = param_1[4];
              bVar3 = (uVar10 & 0x20) != 0;
            }
            if (bVar3) {
              iVar21 = 0;
              psVar6 = local_80;
              do {
                iVar21 = iVar21 + 1;
                psVar6[1] = psVar6[1] - (short)local_58;
                psVar6 = psVar6 + 3;
              } while (iVar21 < 4);
            }
            else if ((uVar10 & 0x40) != 0) {
              iVar21 = 0;
              psVar6 = local_80;
              do {
                iVar21 = iVar21 + 1;
                psVar6[1] = psVar6[1] - (short)(local_58 / 2);
                psVar6 = psVar6 + 3;
              } while (iVar21 < 4);
            }
            FUN_089a11c0(0xffffff);
            FUN_089a03dc(9);
            FUN_089a0c8c(0xff0000ff);
            FUN_089a0520(4,0x800100,4,0,psVar14);
            FUN_089a11c0(0);
            FUN_089a0384(9);
          }
          iVar21 = local_50;
          psVar14 = local_90;
          puVar13 = (undefined2 *)*param_1;
          if (local_50 != 0) {
            if (local_3c == '\0') {
              FUN_089a0f04(0,0x200,puVar13[1],*puVar13,*(undefined4 *)(puVar13 + 4));
              FUN_089a05f0(5,0x80011e,4,iVar21,0,psVar7);
              puVar13 = (undefined2 *)*param_1;
            }
            else {
              iVar19 = 0;
              iVar11 = 0;
              iVar17 = 0;
              if (-1 < local_50) {
                do {
                  if (*(short *)((int)psVar15 + 0x80) != iVar11) {
                    FUN_089a0f04(0,0x200,puVar13[1],*puVar13,
                                 *(int *)(puVar13 + 4) +
                                 iVar11 / (int)(uint)*(ushort *)(DAT_089d6998 + 4));
                    FUN_089a05f0(5,0x80011e,4,iVar19,0,psVar7);
                    iVar11 = (int)*(short *)((int)psVar15 + 0x80);
                    psVar7 = psVar14 + iVar17 * 0x20;
                    iVar19 = 0;
                    puVar13 = (undefined2 *)*param_1;
                  }
                  iVar17 = iVar17 + 1;
                  iVar19 = iVar19 + 1;
                  psVar15 = (short *)((int)psVar15 + 2);
                } while (iVar17 <= iVar21);
              }
            }
          }
          if (*(int *)(puVar13 + 0x16) == 0) {
            return;
          }
          if ((param_1[4] & 0x800U) != 0) {
            return;
          }
          if ((param_1[4] & 2U) != 0) {
            local_40 = 0xaa;
          }
          FUN_0887ca50(param_1[6],param_1,local_4c,local_2b0,local_270,local_40);
          return;
        }
      }
      iVar11 = *param_1;
      iVar17 = iVar19;
    } while( true );
  }
  FUN_0887ef84(*(undefined4 *)(DAT_089d6998 + 0xf2c0),param_2,*param_1,param_1);
  iVar21 = *param_1;
  if (*(int *)(iVar21 + 0x1e8) == 0) {
    return;
  }
  uVar10 = param_1[4];
  local_2b0[0] = 0;
  if ((uVar10 & 4) == 0) {
    if ((uVar10 & 8) == 0) goto LAB_0887bd80;
    uVar2 = *(ushort *)(iVar21 + 4) / 2;
  }
  else {
    uVar2 = *(ushort *)(iVar21 + 4);
  }
  local_2b0[0] = -uVar2;
LAB_0887bd80:
  bVar1 = *(byte *)(*(int *)(DAT_089d6998 + 0xf2c0) + 0xb);
  local_270[0] = -(short)((int)((uint)local_8c[5] - (uint)bVar1) / 2);
  if ((uVar10 & 0x20) == 0) {
    if ((uVar10 & 0x40) != 0) {
      local_270[0] = local_270[0] - bVar1 / 2;
    }
  }
  else {
    local_270[0] = local_270[0] - (ushort)bVar1;
  }
  if ((uVar10 & 0x800) == 0) {
    FUN_0887ca50(0x3f800000,param_1,param_2,local_2b0,local_270,0xaa);
  }
  return;
}

