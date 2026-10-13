/* Entry 0x089B54E4 | file offset 0x001B24BC | FUN_089b54e4 | bytes 7696 */

void FUN_089b54e4(undefined4 *param_1,short *param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  ushort *puVar12;
  undefined2 *puVar13;
  ushort uVar14;
  ushort *puVar15;
  uint uVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  short sVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int iVar23;
  ushort *puVar24;
  ushort *puVar25;
  uint *puVar26;
  ushort *puVar27;
  short *psVar28;
  uint *puVar29;
  ushort *puVar30;
  int iVar31;
  ushort *puVar32;
  float fVar33;
  undefined1 auStack_b0 [16];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  ushort *local_88;
  uint *local_84;
  short *local_80;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  ushort *local_70;
  int local_6c;
  ushort *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  
  local_4c = param_1;
  local_48 = param_3;
  local_50 = FUN_089b4970(param_2,4);
  uVar2 = FUN_089b4970(param_2,5);
  uVar3 = FUN_089b4970(param_2,8);
  uVar4 = FUN_089b4970(param_2,10);
  iVar5 = FUN_089b4970(param_2,0xb);
  iVar23 = iVar5 + 1;
  if (iVar5 == 0) {
    iVar23 = 0;
  }
  local_54 = FUN_089ad1c4(local_50,*local_4c);
  local_58 = FUN_089ad1a4(uVar2,*local_4c);
  local_5c = FUN_089ad144(uVar3,*local_4c);
  local_60 = FUN_089ad104(uVar4,*local_4c);
  local_64 = FUN_089ad080(iVar23,*local_4c);
  local_68 = (ushort *)(*(int *)(param_2 + 2) + (int)param_2);
  *(short *)(local_48 + 0x20) = (short)local_50;
  *(short *)(local_48 + 0x22) = (short)uVar2;
  *(short *)(local_48 + 0x24) = (short)uVar3;
  *(short *)(local_48 + 0x26) = (short)uVar4;
  *(short *)(local_48 + 0x28) = (short)iVar5;
  *(int *)(local_48 + 0xc) = local_54;
  *(int *)(local_48 + 0x10) = local_58;
  *(int *)(local_48 + 0x14) = local_5c;
  sVar20 = *param_2;
  *(int *)(local_48 + 0x18) = local_60;
  *(int *)(local_48 + 0x1c) = local_64;
  local_4c[1] = local_48;
  puVar30 = local_68;
  if (-1 < sVar20) {
    puVar30 = (ushort *)((int)param_2 + *(int *)(param_2 + 4));
  }
  if (local_68 <= puVar30) {
LAB_089b56c4:
    uVar2 = FUN_089aba0c(*local_4c,0,4,local_50 << 1);
    *(undefined4 *)(local_48 + 0x54) = uVar2;
    FUN_089b9564(local_48);
    FUN_089ba01c(local_48);
    return;
  }
  uVar1 = *puVar30;
LAB_089b565c:
  puVar24 = puVar30 + 4;
  if (-1 < (short)uVar1) {
    puVar24 = (ushort *)((uint)puVar30[1] + (int)puVar30);
  }
  uVar14 = uVar1 & 0x7fff;
  if (uVar14 == 0xb) {
    iVar23 = FUN_089b4970(puVar30,0xb3);
    local_9c = local_64 + 0x30;
    iVar5 = FUN_089ad060(iVar23,*local_4c);
    uVar2 = FUN_089aba0c(*local_4c,0,4,iVar23 << 1);
    FUN_08935828(uVar2,0,iVar23 << 1);
    iVar18 = *(int *)(puVar30 + 2);
    *(short *)(local_64 + 0xc) = (short)iVar23;
    puVar27 = (ushort *)(iVar18 + (int)puVar30);
    uVar1 = *puVar30;
    *(undefined4 *)(local_64 + 8) = uVar2;
    *(int *)(local_64 + 4) = iVar5;
    local_4c[3] = puVar30;
    puVar24 = puVar27;
    if (-1 < (short)uVar1) {
      puVar24 = (ushort *)(*(int *)(puVar30 + 4) + (int)puVar30);
    }
    iVar23 = local_9c;
    if (puVar24 < puVar27) {
      uVar1 = *puVar24;
      do {
        while( true ) {
          puVar12 = puVar24 + 4;
          if (-1 < (short)uVar1) {
            puVar12 = (ushort *)((uint)puVar24[1] + (int)puVar24);
          }
          uVar14 = uVar1 & 0x7fff;
          if (uVar14 != 0xb2) break;
          *(undefined4 *)(local_64 + 0x18) = *(undefined4 *)puVar12;
LAB_089b5844:
          iVar23 = *(int *)(puVar24 + 2);
LAB_089b5848:
          puVar24 = (ushort *)(iVar23 + (int)puVar24);
          if (puVar27 <= puVar24) {
            iVar18 = *(int *)(puVar30 + 2);
            iVar23 = local_9c;
            goto LAB_089b56ac;
          }
          uVar1 = *puVar24;
        }
        if (uVar14 < 0xb3) {
          if (uVar14 == 0xb1) {
            *(undefined4 *)(local_64 + 0x10) = *(undefined4 *)puVar12;
            *(undefined4 *)(local_64 + 0x14) = *(undefined4 *)(puVar12 + 2);
          }
          goto LAB_089b5844;
        }
        if (uVar14 == 0xb3) {
          local_98 = iVar5 + 0x10;
          puVar12 = puVar24 + 4;
          if (-1 < (short)uVar1) {
            puVar12 = (ushort *)((uint)puVar24[1] + (int)puVar24);
          }
          psVar6 = (short *)FUN_089b49f4(local_4c[3],0xc,*(uint *)(puVar12 + 6) & 0xfff);
          sVar20 = *psVar6;
          puVar9 = (uint *)(psVar6 + 4);
          psVar28 = psVar6 + 4;
          if (sVar20 < 0) {
LAB_089b5948:
            iVar23 = 0;
            if (-1 < sVar20) {
              iVar23 = *(int *)(psVar6 + 4) - *(int *)(psVar6 + 6);
            }
          }
          else {
            puVar9 = (uint *)((uint)(ushort)psVar6[1] + (int)psVar6);
            iVar23 = 0;
            if (-1 < sVar20) {
              psVar28 = (short *)(*(int *)(psVar6 + 6) + (int)psVar6);
              goto LAB_089b5948;
            }
          }
          uVar2 = FUN_089aba0c(*local_4c,0,4,iVar23);
          FUN_08935524(uVar2,psVar28,iVar23);
          iVar23 = *(int *)(puVar12 + 2);
          uVar8 = *puVar9;
          if ((iVar23 - 0x48U < 6) || (iVar23 == 0xe1)) {
            uVar1 = (uVar8 & 0xf) != 3 | 0x100;
            if ((uVar8 & 0xff00) != 0) {
              uVar1 = 0x100;
            }
          }
          else {
            uVar1 = 0x100;
            if ((((5 < iVar23 - 0x42U) && (iVar23 != 0x4f)) && (uVar1 = 0x200, 6 < iVar23 - 0x82U))
               && (uVar1 = 0, iVar23 == 0x98)) {
              uVar1 = 0x200;
            }
          }
          uVar7 = puVar9[2];
          *(char *)(iVar5 + 0xc) = (char)puVar9[1];
          uVar3 = *(undefined4 *)(puVar12 + 2);
          *(ushort *)(iVar5 + 2) = *(ushort *)(iVar5 + 2) | uVar1;
          *(char *)(iVar5 + 0xd) = (char)uVar3;
          uVar3 = *(undefined4 *)puVar12;
          *(undefined4 *)(iVar5 + 4) = uVar2;
          *(ushort *)(iVar5 + 0xe) = (ushort)uVar3 & 0xfff;
          *(short *)(iVar5 + 8) = (short)uVar8;
          *(short *)(iVar5 + 10) = (short)uVar7;
          iVar5 = local_98;
          goto LAB_089b5844;
        }
        if (uVar14 != 0xb4) {
          iVar23 = *(int *)(puVar24 + 2);
          goto LAB_089b5848;
        }
        *(short *)(local_64 + 0xe) = (short)*(undefined4 *)puVar12;
        puVar24 = (ushort *)(*(int *)(puVar24 + 2) + (int)puVar24);
        if (puVar27 <= puVar24) goto code_r0x089b58bc;
        uVar1 = *puVar24;
      } while( true );
    }
  }
  else {
    iVar23 = local_64;
    if (uVar14 < 0xc) {
      if (uVar14 == 5) {
        uVar2 = FUN_089b4970(puVar30,6);
        local_90 = local_58 + 0x10;
        local_a0 = FUN_089ad184(uVar2,*local_4c);
        iVar18 = *(int *)(puVar30 + 2);
        *(short *)(local_58 + 8) = (short)uVar2;
        local_70 = (ushort *)(iVar18 + (int)puVar30);
        *(int *)(local_58 + 4) = local_a0;
        uVar1 = *puVar30;
        local_4c[2] = puVar30;
        puVar24 = local_70;
        if (-1 < (short)uVar1) {
          puVar24 = (ushort *)((int)puVar30 + *(int *)(puVar30 + 4));
        }
        if (puVar24 < local_70) {
          uVar1 = *puVar24;
LAB_089b5bc0:
          if ((uVar1 & 0x7fff) == 6) {
            iVar5 = *(int *)(puVar24 + 2);
            puVar12 = (ushort *)(iVar5 + (int)puVar24);
            local_6c = local_a0 + 0x40;
            puVar27 = puVar12;
            if (-1 < (short)uVar1) {
              puVar27 = (ushort *)((int)puVar24 + *(int *)(puVar24 + 4));
            }
            if (puVar27 < puVar12) {
              iVar23 = 0;
              iVar5 = 0;
              local_78 = 0;
              local_74 = 0xffffffff;
LAB_089b5c64:
              uVar1 = *puVar27;
              do {
                puVar9 = (uint *)(puVar27 + 4);
                if (-1 < (short)uVar1) {
                  puVar9 = (uint *)((uint)puVar27[1] + (int)puVar27);
                }
                uVar14 = uVar1 & 0x7fff;
                if (uVar14 != 0xf1) {
                  if (uVar14 == 0x66) {
LAB_089b62d0:
                    local_74 = *puVar9 & 0xfff;
                    if (uVar14 == 0x66) {
                      iVar5 = iVar5 + puVar9[2] * puVar9[3];
                      iVar23 = iVar23 + puVar9[3];
                    }
                    else {
                      iVar5 = iVar5 + puVar9[2] * puVar9[3];
                      iVar23 = iVar23 + 1;
                    }
                  }
                  else if (uVar14 < 0x67) {
                    if (uVar14 == 0x61) {
                      *(uint *)(local_a0 + 0x20) = *puVar9 & 0xfff;
                      goto LAB_089b5c50;
                    }
                    if (uVar14 < 0x62) {
                      if (uVar14 == 0x16) {
                        local_78 = 8;
                      }
                      goto LAB_089b5c50;
                    }
                    if (uVar14 == 0x62) {
                      puVar13 = (undefined2 *)FUN_089aba0c(*local_4c,0,4,*puVar9 << 1);
                      uVar8 = *puVar9;
                      *(undefined2 **)(local_a0 + 0x10) = puVar13;
                      *(short *)(local_a0 + 0x14) = (short)uVar8;
                      if (0 < (int)uVar8) {
                        iVar18 = 0;
                        do {
                          iVar18 = iVar18 + 1;
                          *puVar13 = (short)puVar9[1];
                          puVar9 = puVar9 + 1;
                          puVar13 = puVar13 + 1;
                        } while (iVar18 < (int)uVar8);
                      }
                      *(uint *)(local_a0 + 0x28) = *(uint *)(local_a0 + 0x28) | 0x20000;
                      goto LAB_089b5c50;
                    }
                    if (uVar14 != 99) {
                      iVar18 = *(int *)(puVar27 + 2);
                      goto LAB_089b5c54;
                    }
                    uVar2 = FUN_089aba0c(*local_4c,0,0x10,0x10);
                    FUN_089ba038(*puVar9,puVar9[1],uVar2);
                    *(undefined4 *)(local_a0 + 8) = uVar2;
                    *(uint *)(local_a0 + 0x28) = *(uint *)(local_a0 + 0x28) | 0x80000;
                    *(ushort *)(local_a0 + 2) = *(ushort *)(local_a0 + 2) | 1;
                  }
                  else {
                    if (uVar14 == 0x6b) {
                      uVar8 = *(uint *)(local_a0 + 0x2c) & 0xffff0000;
                      *(uint *)(local_a0 + 0x2c) = uVar8;
                      *(uint *)(local_a0 + 0x2c) = uVar8 | (ushort)*puVar9;
                      goto LAB_089b5c50;
                    }
                    if (uVar14 < 0x6c) {
                      if ((uVar14 == 0x68) || (uVar14 == 0x6a)) goto LAB_089b62d0;
                      iVar18 = *(int *)(puVar27 + 2);
                      goto LAB_089b5c54;
                    }
                    if (uVar14 == 0x6c) {
                      uVar8 = 0x10000 << (puVar9[1] & 0x1f);
                      *(uint *)(local_a0 + 0x2c) =
                           (uint)*(ushort *)(local_a0 + 0x2c) |
                           (uVar8 | uVar8 - 1) & -(0x10000 << (*puVar9 & 0x1f)) & 0xffff0000;
                      goto LAB_089b5c50;
                    }
                    if (uVar14 != 0x81) {
                      iVar18 = *(int *)(puVar27 + 2);
                      goto LAB_089b5c54;
                    }
                    uVar1 = (ushort)(1 << (*puVar9 & 0x1f));
                    uVar14 = ~uVar1;
                    uVar17 = uVar1 | *(ushort *)(local_a0 + 0x16);
                    if (puVar9[1] == 0) {
                      uVar1 = 0;
                    }
                    *(ushort *)(local_a0 + 0x16) = uVar17;
                    *(ushort *)(local_a0 + 0x18) = uVar14 & *(ushort *)(local_a0 + 0x18) | uVar1;
                    *(uint *)(local_a0 + 0x28) = *(uint *)(local_a0 + 0x28) | 0x400ffff;
                  }
                  goto LAB_089b5c50;
                }
                puVar32 = puVar27 + 4;
                if (-1 < (short)uVar1) {
                  puVar32 = (ushort *)((uint)puVar27[1] + (int)puVar27);
                }
                iVar18 = FUN_08935970(puVar32,"UVSCROLL");
                if (iVar18 != 0) goto LAB_089b6458;
                if ((short)uVar1 < 0) {
                  iVar18 = *(int *)(puVar27 + 2) + -8;
                }
                else {
                  iVar18 = *(int *)(puVar27 + 6) - (uint)puVar27[1];
                }
                *(uint *)(local_a0 + 0x30) =
                     *(uint *)(local_a0 + 0x30) & 0xffffc1ff |
                     (*(int *)((int)puVar32 + iVar18 + -4) + 1U & 0x1f) << 9;
                puVar27 = (ushort *)(*(int *)(puVar27 + 2) + (int)puVar27);
                if (puVar12 <= puVar27) goto LAB_089b5cf8;
                uVar1 = *puVar27;
              } while( true );
            }
          }
          else {
            iVar5 = *(int *)(puVar24 + 2);
            local_6c = local_a0;
          }
          goto LAB_089b5ba4;
        }
        local_58 = local_90;
        iVar23 = local_64;
      }
      else if (uVar14 < 6) {
        if (uVar14 == 4) {
          *(ushort **)(local_54 + 0xc0) = puVar30;
          uVar8 = FUN_089b4970(puVar30,0x4e);
          puVar9 = (uint *)FUN_089aba0c(*local_4c,0,4,uVar8 << 2);
          *(int *)(local_54 + 0x24) = (1 << (uVar8 & 0x1f)) + -1;
          iVar31 = local_54 + 0x100;
          *(short *)(local_54 + 0x18) = (short)uVar8;
          iVar5 = *(int *)(puVar30 + 2);
          uVar1 = *puVar30;
          *(uint **)(local_54 + 8) = puVar9;
          puVar27 = (ushort *)((int)puVar30 + iVar5);
          puVar24 = puVar27;
          if (-1 < (short)uVar1) {
            puVar24 = (ushort *)((int)puVar30 + *(int *)(puVar30 + 4));
          }
          puVar29 = (uint *)0x0;
          if (puVar24 < puVar27) {
            uVar1 = *puVar24;
            do {
              puVar26 = (uint *)(puVar24 + 4);
              if (-1 < (short)uVar1) {
                puVar26 = (uint *)((uint)puVar24[1] + (int)puVar24);
              }
              uVar1 = uVar1 & 0x7fff;
              puVar22 = puVar29;
              if (uVar1 == 0x49) {
                FUN_089ba148(auStack_b0,puVar26);
                FUN_089ba360(local_54 + 0x60,auStack_b0);
                *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 2;
LAB_089b626c:
                iVar5 = *(int *)(puVar24 + 2);
                puVar29 = puVar22;
              }
              else {
                if (uVar1 < 0x4a) {
                  if (uVar1 == 0x43) {
                    uVar2 = FUN_089aba0c(*local_4c,0,0x10,*puVar26 << 2);
                    FUN_08935524(uVar2,puVar26 + 1,*puVar26 << 2);
                    uVar8 = *puVar26;
                    *(undefined4 *)(local_54 + 0xc) = uVar2;
                    *(short *)(local_54 + 0x1a) = (short)uVar8;
                    *(uint *)(local_54 + 0x20) = *(uint *)(local_54 + 0x20) | 0x40000;
                    *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 0x100;
                  }
                  else if (uVar1 < 0x44) {
                    if (uVar1 == 0x41) {
                      *(ushort *)(local_54 + 0x40) = (ushort)*puVar26 & 0xfff;
                    }
                    else if (uVar1 < 0x42) {
                      if (uVar1 != 0x14) {
                        iVar5 = *(int *)(puVar24 + 2);
                        goto LAB_089b6270;
                      }
                      iVar5 = FUN_089aba0c(*local_4c,0,0x10,0x20);
                      FUN_089ba148(iVar5,puVar26);
                      FUN_089ba148(iVar5 + 0x10,puVar26 + 3);
                      *(int *)(local_54 + 0x34) = iVar5;
                    }
                    else {
                      *(uint *)(local_54 + 0x24) = *puVar26;
                      *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 0x800;
                    }
                  }
                  else {
                    puVar22 = puVar26;
                    if (uVar1 != 0x45) {
                      if (uVar1 < 0x45) {
                        puVar12 = (ushort *)FUN_089aba0c(*local_4c,0,4,*puVar26 << 1);
                        uVar8 = *puVar26;
                        *(ushort **)(local_54 + 0x10) = puVar12;
                        *(short *)(local_54 + 0x1c) = (short)uVar8;
                        puVar22 = puVar29;
                        if (0 < (int)uVar8) {
                          iVar5 = 0;
                          do {
                            iVar5 = iVar5 + 1;
                            *puVar12 = (ushort)puVar26[1] & 0xfff;
                            puVar26 = puVar26 + 1;
                            puVar12 = puVar12 + 1;
                          } while (iVar5 < (int)uVar8);
                          iVar5 = *(int *)(puVar24 + 2);
                          goto LAB_089b6270;
                        }
                      }
                      else if (uVar1 == 0x47) {
                        uVar2 = FUN_089aba0c(*local_4c,0,0x40,0x40);
                        FUN_089ba16c(uVar2,puVar26);
                        *(undefined4 *)(local_54 + 0x30) = uVar2;
                        *(ushort *)(local_54 + 0x42) = *(ushort *)(local_54 + 0x42) | 0x10;
                        *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 0x40;
                        puVar22 = puVar29;
                      }
                      else {
                        if (uVar1 != 0x48) {
                          iVar5 = *(int *)(puVar24 + 2);
                          goto LAB_089b6270;
                        }
                        FUN_089ba148(local_54 + 0x50,puVar26);
                        *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 1;
                        puVar22 = puVar29;
                      }
                    }
                  }
                  goto LAB_089b626c;
                }
                if (uVar1 == 0x4d) {
                  FUN_089ba148(local_54 + 0x70,puVar26);
                  *(ushort *)(local_54 + 0x42) = *(ushort *)(local_54 + 0x42) | 0x20;
                  *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 8;
                  goto LAB_089b626c;
                }
                if (uVar1 < 0x4e) {
                  if (uVar1 == 0x4b) {
                    FUN_089ba1c4(local_54 + 0x60,puVar26);
                    *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 2;
                  }
                  else if (uVar1 < 0x4c) {
                    FUN_089ba148(auStack_b0,puVar26);
                    FUN_089ba3a8(local_54 + 0x60,auStack_b0);
                    *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 2;
                  }
                  else {
                    FUN_089ba148(local_54 + 0x70,puVar26);
                    *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 4;
                  }
                  goto LAB_089b626c;
                }
                if (uVar1 == 0x4f) {
                  *(uint *)(local_54 + 0x28) = *puVar26;
                  *(uint *)(local_54 + 0x20) = *(uint *)(local_54 + 0x20) | 0x40000;
                  *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 0x200;
                  goto LAB_089b626c;
                }
                if (uVar1 < 0x4f) {
                  *puVar9 = *puVar26 & 0xfff;
                  puVar9 = puVar9 + 1;
                  goto LAB_089b626c;
                }
                if (uVar1 == 0xe1) {
                  FUN_089ba148(local_54 + 0x70,puVar26);
                  *(ushort *)(local_54 + 0x42) = *(ushort *)(local_54 + 0x42) | 0x40;
                  *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 0x10;
                  goto LAB_089b626c;
                }
                if (uVar1 == 0xe2) {
                  if (*puVar26 == 0) {
                    *(ushort *)(local_54 + 0x1e) = (ushort)(puVar26[1] != 0);
                    goto LAB_089b626c;
                  }
                  iVar5 = *(int *)(puVar24 + 2);
                }
                else {
                  iVar5 = *(int *)(puVar24 + 2);
                }
              }
LAB_089b6270:
              puVar24 = (ushort *)(iVar5 + (int)puVar24);
              if (puVar27 <= puVar24) break;
              uVar1 = *puVar24;
            } while( true );
          }
          if (*(ushort *)(local_54 + 0x1c) == 0) {
            *(uint *)(local_54 + 0x20) = *(uint *)(local_54 + 0x20) | 0x10000;
            iVar18 = *(int *)(puVar30 + 2);
            iVar23 = local_64;
            local_54 = iVar31;
          }
          else {
            iVar5 = FUN_089aba0c(*local_4c,0,0x40,(uint)*(ushort *)(local_54 + 0x1c) << 6);
            *(int *)(local_54 + 0x14) = iVar5;
            if (*(short *)(local_54 + 0x1c) != 0) {
              iVar23 = 0;
              puVar9 = puVar29 + 1;
              do {
                if ((puVar29 == (uint *)0x0) || ((int)*puVar29 <= iVar23)) {
                  FUN_089ba074(0,0,0,0x3f800000,0x3f800000,0x3f800000,iVar5);
                }
                else {
                  FUN_089ba16c(iVar5,puVar9);
                }
                iVar23 = iVar23 + 1;
                puVar9 = puVar9 + 0x10;
                iVar5 = iVar5 + 0x40;
              } while (iVar23 < (int)(uint)*(ushort *)(local_54 + 0x1c));
            }
            *(uint *)(local_54 + 0x20) = *(uint *)(local_54 + 0x20) | 0x20000;
            iVar18 = *(int *)(puVar30 + 2);
            *(ushort *)(local_54 + 2) = *(ushort *)(local_54 + 2) | 0x400;
            iVar23 = local_64;
            local_54 = iVar31;
          }
        }
        else {
          iVar18 = *(int *)(puVar30 + 2);
        }
      }
      else if (uVar14 == 8) {
        FUN_089b4a70(local_4c,puVar30);
        uVar2 = local_4c[5];
        uVar3 = *local_4c;
        *(ushort *)(local_5c + 2) = (ushort)local_4c[4] | *(ushort *)(local_5c + 2);
        iVar5 = FUN_089ad124(uVar2,uVar3);
        uVar8 = local_4c[4];
        local_94 = local_5c + 0x10;
        *(short *)(local_5c + 0xc) = (short)local_4c[5];
        *(int *)(local_5c + 8) = iVar5;
        if ((uVar8 & 0x10000) == 0) {
          iVar23 = iVar5;
          iVar5 = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 0x2c) = local_4c[6];
          sVar20 = *(short *)(local_4c + 0xd);
          *(short *)(iVar5 + 0x16) = (short)local_4c[0xc];
          *(short *)(iVar5 + 0x14) = sVar20;
          if (sVar20 != 0) {
            *(uint *)(iVar5 + 0x20) = *(uint *)(iVar5 + 0x20) | 0x400ffff;
          }
          iVar23 = iVar5 + 0x40;
        }
        puVar27 = (ushort *)(*(int *)(puVar30 + 2) + (int)puVar30);
        puVar24 = puVar27;
        if (-1 < (short)*puVar30) {
          puVar24 = (ushort *)(*(int *)(puVar30 + 4) + (int)puVar30);
        }
        if (puVar24 < puVar27) {
          uVar1 = *puVar24;
LAB_089b65a0:
          iVar18 = *(int *)(puVar24 + 2);
          if ((uVar1 & 0x7fff) == 9) {
            uVar2 = local_4c[0xd];
            puVar32 = (ushort *)(iVar18 + (int)puVar24);
            *(short *)(iVar23 + 0x16) = (short)local_4c[0xc];
            *(short *)(iVar23 + 0x14) = (short)uVar2;
            puVar12 = puVar32;
            if (-1 < (short)*puVar24) {
              puVar12 = (ushort *)((int)puVar24 + *(int *)(puVar24 + 4));
            }
            if (puVar12 < puVar32) {
              uVar1 = *puVar12;
              do {
                puVar9 = (uint *)(puVar12 + 4);
                if (-1 < (short)uVar1) {
                  puVar9 = (uint *)((uint)puVar12[1] + (int)puVar12);
                }
                switch(uVar1 & 0x7fff) {
                case 0x91:
                  *(uint *)(iVar23 + 0x24) = *puVar9 & 0xfff;
                  break;
                case 0x92:
                  *(short *)(iVar23 + 8) = (short)*puVar9;
                  break;
                case 0x93:
                  break;
                case 0x94:
                  *(char *)(iVar23 + 0x10) = (char)*puVar9;
                  *(char *)(iVar23 + 0x11) = (char)puVar9[1];
                  *(char *)(iVar23 + 0x12) = (char)puVar9[2];
                  if (*puVar9 == 0) {
                    if (puVar9[1] == 6) {
                      if (puVar9[2] == 7) {
                        iVar18 = *(int *)(puVar12 + 2);
                        goto LAB_089b6798;
                      }
                      uVar8 = *(uint *)(iVar23 + 0x20);
                    }
                    else {
                      uVar8 = *(uint *)(iVar23 + 0x20);
                    }
                  }
                  else {
                    uVar8 = *(uint *)(iVar23 + 0x20);
                  }
                  *(uint *)(iVar23 + 0x20) = uVar8 | 0x200000;
                  break;
                case 0x95:
                  uVar8 = *puVar9;
                  *(ushort *)(iVar23 + 0x14) = *(ushort *)(iVar23 + 0x14) | 0xc00;
                  if (uVar8 == 0) {
                    *(ushort *)(iVar23 + 0x16) = *(ushort *)(iVar23 + 0x16) | 0x400;
                  }
                  if (puVar9[1] == 1) {
                    *(ushort *)(iVar23 + 0x16) = *(ushort *)(iVar23 + 0x16) | 0x800;
                    break;
                  }
                  iVar18 = *(int *)(puVar12 + 2);
                  goto LAB_089b6798;
                case 0x96:
                  uVar8 = *puVar9;
                  *(ushort *)(iVar23 + 0x14) = *(ushort *)(iVar23 + 0x14) | 0x3000;
                  if (0 < (int)uVar8) {
                    *(ushort *)(iVar23 + 0x16) = *(ushort *)(iVar23 + 0x16) | 0x1000;
                  }
                  if (3 < (int)puVar9[1]) {
                    *(ushort *)(iVar23 + 0x16) = *(ushort *)(iVar23 + 0x16) | 0x2000;
                    break;
                  }
                  iVar18 = *(int *)(puVar12 + 2);
                  goto LAB_089b6798;
                case 0x97:
                  uVar8 = *puVar9;
                  *(ushort *)(iVar23 + 0x14) = *(ushort *)(iVar23 + 0x14) | 0xc000;
                  if (uVar8 == 0) {
                    *(ushort *)(iVar23 + 0x16) = *(ushort *)(iVar23 + 0x16) | 0x4000;
                  }
                  if (puVar9[1] == 0) {
                    *(ushort *)(iVar23 + 0x16) = *(ushort *)(iVar23 + 0x16) | 0x8000;
                    break;
                  }
                  iVar18 = *(int *)(puVar12 + 2);
                  goto LAB_089b6798;
                case 0x98:
                  pfVar11 = (float *)FUN_089aba0c(*local_4c,0,0x10,0x10);
                  FUN_089ba1d8(pfVar11,puVar9);
                  fVar33 = *pfVar11;
                  *(float **)(iVar23 + 0x28) = pfVar11;
                  if (fVar33 == 0.0) {
                    if (pfVar11[1] == 0.0) {
                      if (pfVar11[2] == 1.0) {
                        if (pfVar11[3] == 1.0) {
                          iVar18 = *(int *)(puVar12 + 2);
                          goto LAB_089b6798;
                        }
                        goto LAB_089b6860;
                      }
                      uVar8 = *(uint *)(iVar23 + 0x20);
                    }
                    else {
                      uVar8 = *(uint *)(iVar23 + 0x20);
                    }
                  }
                  else {
LAB_089b6860:
                    uVar8 = *(uint *)(iVar23 + 0x20);
                  }
                  *(uint *)(iVar23 + 0x20) = uVar8 | 0x800000;
                  *(ushort *)(iVar23 + 2) = *(ushort *)(iVar23 + 2) | 1;
                  break;
                case 0x99:
                  uVar16 = *(uint *)(iVar23 + 0x20);
                  uVar7 = *puVar9;
                  *(uint *)(iVar23 + 0x20) = uVar16 | 0x1000000;
                  uVar8 = *puVar9;
                  *(short *)(iVar23 + 10) = (short)uVar7;
                  if ((uVar8 & 0xf00) != 0) {
                    *(uint *)(iVar23 + 0x20) = uVar16 | 0x3000000;
                  }
                  break;
                case 0x9a:
                  uVar2 = FUN_089aba0c(*local_4c,0,0x40,0x40);
                  FUN_089ba16c(uVar2,puVar9);
                  *(undefined4 *)(iVar23 + 0xc) = uVar2;
                  *(uint *)(iVar23 + 0x20) = *(uint *)(iVar23 + 0x20) | 0x3000000;
                  break;
                default:
                  iVar18 = *(int *)(puVar12 + 2);
                  goto LAB_089b6798;
                }
                iVar18 = *(int *)(puVar12 + 2);
LAB_089b6798:
                puVar12 = (ushort *)(iVar18 + (int)puVar12);
                if (puVar32 <= puVar12) goto code_r0x089b67a8;
                uVar1 = *puVar12;
              } while( true );
            }
            sVar20 = *(short *)(iVar23 + 8);
            goto LAB_089b67ac;
          }
          goto LAB_089b658c;
        }
LAB_089b6af8:
        uVar8 = local_4c[4];
        if ((uVar8 & 0x40000) != 0) {
          uVar4 = local_4c[8];
          uVar2 = local_4c[0xd];
          uVar3 = local_4c[0xc];
          *(undefined1 *)(iVar23 + 0x11) = 1;
          *(uint *)(iVar23 + 0x20) = *(uint *)(iVar23 + 0x20) | 0x420ffff;
          *(undefined4 *)(iVar23 + 0x38) = uVar4;
          uVar8 = local_4c[4];
          *(undefined2 *)(iVar23 + 8) = 0x84;
          *(ushort *)(iVar23 + 0x14) = (ushort)uVar2 | 1;
          *(ushort *)(iVar23 + 0x16) = (ushort)uVar3 & 0xfffe;
          iVar23 = iVar23 + 0x40;
        }
        if ((uVar8 & 0x100000) != 0) {
          uVar2 = local_4c[0xd];
          uVar3 = local_4c[0xc];
          *(uint *)(iVar23 + 0x20) = *(uint *)(iVar23 + 0x20) | 0x400ffff;
          *(undefined2 *)(iVar23 + 8) = 0x86;
          *(ushort *)(iVar23 + 0x14) = (ushort)uVar2 | 1;
          *(ushort *)(iVar23 + 0x16) = (ushort)uVar3 & 0xfffe;
        }
        iVar23 = local_64;
        if (iVar5 == 0) {
          iVar18 = *(int *)(puVar30 + 2);
          local_5c = local_94;
        }
        else {
          local_5c = local_94;
          uVar3 = local_4c[10];
          *(undefined4 *)(iVar5 + 0x38) = local_4c[9];
          uVar2 = local_4c[7];
          *(undefined4 *)(iVar5 + 0x3c) = uVar3;
          *(undefined4 *)(iVar5 + 0x30) = uVar2;
          iVar18 = *(int *)(puVar30 + 2);
        }
      }
      else {
        iVar18 = *(int *)(puVar30 + 2);
        if (uVar14 == 10) {
          iVar5 = local_60 + 0x10;
          puVar27 = (ushort *)(iVar18 + (int)puVar30);
          puVar24 = puVar27;
          if (-1 < (short)uVar1) {
            puVar24 = (ushort *)(*(int *)(puVar30 + 4) + (int)puVar30);
          }
          puVar12 = (ushort *)0x0;
          if (puVar24 < puVar27) {
            puVar25 = (ushort *)0x0;
            uVar2 = 0;
            puVar32 = puVar12;
            do {
              puVar15 = puVar24 + 4;
              if (-1 < (short)*puVar24) {
                puVar15 = (ushort *)((uint)puVar24[1] + (int)puVar24);
              }
              uVar1 = *puVar24 & 0x7fff;
              puVar12 = puVar15;
              if ((uVar1 != 0x12) && (puVar12 = puVar32, uVar1 == 0x13)) {
                uVar2 = *(undefined4 *)puVar15;
                puVar25 = puVar15 + 2;
              }
              puVar24 = (ushort *)(*(int *)(puVar24 + 2) + (int)puVar24);
              puVar32 = puVar12;
            } while (puVar24 < puVar27);
            if (puVar25 != (ushort *)0x0) {
              uVar3 = FUN_089bb164();
              iVar23 = FUN_089beac0(uVar3,puVar25,uVar2,0);
              if (iVar23 == 0) {
                FUN_089bb4a0(uVar3);
              }
              else {
                *(undefined4 *)(local_60 + 4) = uVar3;
                FUN_089abfd0(puVar12,uVar3);
              }
            }
          }
          if (*(int *)(local_60 + 4) == 0) {
            uVar2 = FUN_089abf9c(puVar12);
            uVar2 = FUN_089bc7d8(uVar2,2);
            iVar18 = *(int *)(puVar30 + 2);
            *(undefined4 *)(local_60 + 4) = uVar2;
            iVar23 = local_64;
            local_60 = iVar5;
          }
          else {
            iVar18 = *(int *)(puVar30 + 2);
            iVar23 = local_64;
            local_60 = iVar5;
          }
        }
      }
    }
    else if (uVar14 == 0x15) {
      if (*(int *)puVar24 == 3) {
        FUN_089ba1d8(local_48 + 0x80,puVar24 + 2);
        iVar18 = *(int *)(puVar30 + 2);
        *(ushort *)(local_48 + 2) = *(ushort *)(local_48 + 2) | 4;
        iVar23 = local_64;
      }
      else if (*(int *)puVar24 == 0x180) {
        FUN_089ba158(local_48 + 0x70,puVar24 + 2);
        iVar18 = *(int *)(puVar30 + 2);
        *(ushort *)(local_48 + 2) = *(ushort *)(local_48 + 2) | 2;
        iVar23 = local_64;
      }
      else {
        iVar18 = *(int *)(puVar30 + 2);
      }
    }
    else if (uVar14 < 0x16) {
      if (uVar14 == 0x14) {
        iVar5 = FUN_089aba0c(*local_4c,0,0x10,0x20);
        FUN_089ba148(iVar5,puVar24);
        FUN_089ba148(iVar5 + 0x10,puVar24 + 6);
        iVar18 = *(int *)(puVar30 + 2);
        *(int *)(local_48 + 0x44) = iVar5;
        *(ushort *)(local_48 + 2) = *(ushort *)(local_48 + 2) | 1;
        iVar23 = local_64;
      }
      else {
        iVar18 = *(int *)(puVar30 + 2);
      }
    }
    else if (uVar14 == 0x16) {
      if (*(int *)puVar24 == 8) {
        puVar10 = (undefined4 *)FUN_089aba0c(*local_4c,1,4,0x60);
        puVar27 = puVar24 + 2;
        puVar21 = puVar10;
        do {
          uVar2 = *(undefined4 *)(puVar27 + 2);
          uVar3 = *(undefined4 *)(puVar27 + 4);
          uVar4 = *(undefined4 *)(puVar27 + 6);
          *puVar21 = *(undefined4 *)puVar27;
          puVar27 = puVar27 + 8;
          puVar21[1] = uVar2;
          puVar21[2] = uVar3;
          puVar21[3] = uVar4;
          puVar21 = puVar21 + 4;
        } while (puVar27 != puVar24 + 0x32);
        iVar18 = *(int *)(puVar30 + 2);
        *(undefined4 **)(local_48 + 0x48) = puVar10;
        iVar23 = local_64;
      }
      else {
        iVar18 = *(int *)(puVar30 + 2);
      }
    }
    else if (uVar14 == 0xf1) {
      puVar24 = puVar30 + 4;
      if (-1 < (short)uVar1) {
        puVar24 = (ushort *)((uint)puVar30[1] + (int)puVar30);
      }
      iVar5 = FUN_08935970(puVar24,"UVSCROLL");
      if (iVar5 == 0) {
        if ((short)uVar1 < 0) {
          iVar5 = *(int *)(puVar30 + 2) + -8;
        }
        else {
          iVar5 = *(int *)(puVar30 + 6) - (uint)puVar30[1];
        }
        FUN_089b538c(*(undefined4 *)((int)puVar24 + iVar5 + -8),
                     *(undefined4 *)((int)puVar24 + iVar5 + -4),local_48,
                     *(undefined4 *)((int)puVar24 + iVar5 + -0xc));
        iVar18 = *(int *)(puVar30 + 2);
        iVar23 = local_64;
      }
      else {
        iVar5 = FUN_08935970(puVar24,"UVPATTERN");
        if (iVar5 == 0) {
          if ((short)uVar1 < 0) {
            iVar5 = *(int *)(puVar30 + 2) + -8;
          }
          else {
            iVar5 = *(int *)(puVar30 + 6) - (uint)puVar30[1];
          }
          FUN_089b5258(local_48,*(undefined4 *)((int)puVar24 + iVar5 + -0x14),
                       *(undefined4 *)((int)puVar24 + iVar5 + -0x10),
                       *(undefined4 *)((int)puVar24 + iVar5 + -0xc),
                       *(undefined4 *)((int)puVar24 + iVar5 + -8),0,
                       *(undefined4 *)((int)puVar24 + iVar5 + -4));
          iVar18 = *(int *)(puVar30 + 2);
          iVar23 = local_64;
        }
        else {
          iVar5 = FUN_08935970(puVar24,"UVPATTERNR");
          if (iVar5 == 0) {
            if ((short)uVar1 < 0) {
              iVar5 = *(int *)(puVar30 + 2) + -8;
            }
            else {
              iVar5 = *(int *)(puVar30 + 6) - (uint)puVar30[1];
            }
            FUN_089b5114(local_48,*(undefined4 *)((int)puVar24 + iVar5 + -0x14),
                         *(undefined4 *)((int)puVar24 + iVar5 + -0x10),
                         *(undefined4 *)((int)puVar24 + iVar5 + -0xc),
                         *(undefined4 *)((int)puVar24 + iVar5 + -8),0,
                         *(undefined4 *)((int)puVar24 + iVar5 + -4));
            iVar18 = *(int *)(puVar30 + 2);
            iVar23 = local_64;
          }
          else {
            iVar18 = *(int *)(puVar30 + 2);
            iVar23 = local_64;
          }
        }
      }
    }
    else {
      iVar18 = *(int *)(puVar30 + 2);
    }
  }
  goto LAB_089b56ac;
code_r0x089b58bc:
  iVar18 = *(int *)(puVar30 + 2);
  iVar23 = local_9c;
  goto LAB_089b56ac;
LAB_089b6458:
  iVar18 = FUN_08935970(puVar32,"ALPHAREF");
  if (iVar18 == 0) {
    if ((short)uVar1 < 0) {
      *(char *)(local_a0 + 0x30) =
           (char)*(undefined4 *)((int)puVar32 + *(int *)(puVar27 + 2) + -0xc);
    }
    else {
      *(char *)(local_a0 + 0x30) =
           (char)*(undefined4 *)((int)puVar32 + (*(int *)(puVar27 + 6) - (uint)puVar27[1]) + -4);
    }
  }
  else {
    iVar18 = FUN_08935970(puVar32,"SHADOWOFF");
    if (iVar18 != 0) {
      iVar18 = *(int *)(puVar27 + 2);
      goto LAB_089b5c54;
    }
    if ((short)uVar1 < 0) {
      iVar18 = *(int *)(puVar27 + 2) + -8;
    }
    else {
      iVar18 = *(int *)(puVar27 + 6) - (uint)puVar27[1];
    }
    *(uint *)(local_a0 + 0x30) =
         *(uint *)(local_a0 + 0x30) & 0xfffffeff | (*(uint *)((int)puVar32 + iVar18 + -4) & 1) << 8;
  }
LAB_089b5c50:
  iVar18 = *(int *)(puVar27 + 2);
LAB_089b5c54:
  puVar27 = (ushort *)(iVar18 + (int)puVar27);
  if (puVar12 <= puVar27) goto LAB_089b5cf8;
  goto LAB_089b5c64;
LAB_089b5cf8:
  if (iVar23 < 1) {
    iVar5 = *(int *)(puVar24 + 2);
LAB_089b5ba4:
    puVar24 = (ushort *)(iVar5 + (int)puVar24);
    if (local_70 <= puVar24) goto LAB_089b6090;
  }
  else {
    local_4c[0xe] = local_74;
    local_4c[0xf] = iVar23;
    local_4c[0x11] = local_78;
    local_4c[0x10] = iVar5;
    local_7c = FUN_089ad164(1,*local_4c);
    uVar2 = local_4c[2];
    uVar3 = local_4c[0xe];
    *(int *)(local_a0 + 4) = local_7c;
    iVar5 = local_4c[0xf];
    iVar18 = local_4c[0x10];
    iVar23 = local_4c[0x11];
    psVar6 = (short *)FUN_089b49f4(uVar2,7,uVar3);
    puVar9 = (uint *)(psVar6 + 4);
    local_80 = psVar6 + 4;
    if (-1 < *psVar6) {
      puVar9 = (uint *)((uint)(ushort)psVar6[1] + (int)psVar6);
      local_80 = (short *)(*(int *)(psVar6 + 6) + (int)psVar6);
    }
    uVar8 = *puVar9;
    iVar31 = 4;
    if (iVar23 != 0) {
      iVar31 = 10;
    }
    local_8c = ((int)uVar8 >> 0x18) * (((uVar8 & 0x1fffff) >> 0x12) + 1);
    iVar31 = iVar31 + iVar5;
    puVar9 = (uint *)FUN_089aba0c(*local_4c,1,4,iVar31 * 4);
    local_84 = (uint *)FUN_089aba0c(*local_4c,1,4,iVar23 * 0xc);
    uVar7 = FUN_089aba0c(*local_4c,1,4,local_8c * iVar18);
    *(short *)(local_7c + 0xc) = (short)iVar31;
    *(short *)(local_7c + 0x1e) = (short)iVar18;
    *(uint **)(local_7c + 8) = puVar9;
    *(uint *)(local_7c + 0x14) = uVar7;
    *(uint **)(local_7c + 0x10) = local_84;
    *(uint *)(local_7c + 0x18) = uVar8 & 0xffefff;
    *(short *)(local_7c + 0x1c) = (short)local_8c;
    if (0 < iVar23) {
      puVar9[5] = (uint)(puVar9 + iVar31 + -1) & 0xffffff | 0x9000000;
      puVar9[1] = (((uint)local_84 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
      puVar9[2] = (uint)local_84 & 0xffffff | 0x1000000;
      puVar9[3] = 0x7000008;
      puVar9[4] = (((uint)(puVar9 + iVar31 + -1) & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
      *puVar9 = 0x12000180;
      puVar9 = puVar9 + 6;
    }
    puVar9[1] = ((uVar7 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
    puVar29 = puVar9 + 3;
    *puVar9 = uVar8 & 0xffefff | 0x12000000;
    puVar9[2] = uVar7 & 0xffffff | 0x1000000;
    local_88 = (ushort *)((int)puVar24 + *(int *)(puVar24 + 2));
    puVar27 = local_88;
    if (-1 < (short)*puVar24) {
      puVar27 = (ushort *)((int)puVar24 + *(int *)(puVar24 + 4));
    }
    if (puVar27 < local_88) {
      uVar1 = *puVar27;
      do {
        puVar9 = (uint *)(puVar27 + 4);
        if (-1 < (short)uVar1) {
          puVar9 = (uint *)((uint)puVar27[1] + (int)puVar27);
        }
        uVar1 = uVar1 & 0x7fff;
        puVar26 = puVar29;
        if (uVar1 == 0x66) {
          uVar8 = puVar9[1];
          if (0 < (int)puVar9[3]) {
            iVar5 = 0;
            do {
              iVar5 = iVar5 + 1;
              *puVar26 = puVar9[2] | (uVar8 & 0xf) << 0x10 | 0x4000000;
              puVar26 = puVar26 + 1;
            } while (iVar5 < (int)puVar9[3]);
            goto LAB_089b5f78;
          }
LAB_089b6038:
          iVar5 = *(int *)(puVar27 + 2);
          puVar29 = puVar26;
        }
        else {
          if (0x66 < uVar1) {
            if (uVar1 == 0x68) {
              *puVar29 = ((puVar9[1] & 0xffff) >> 0xe) << 0x12 |
                         ((puVar9[1] & 0x3fff) >> 0xc) << 0x10 | puVar9[3] << 8 | puVar9[2] |
                         0x6000000;
              puVar26 = puVar29 + 1;
            }
            else if (uVar1 == 0x6a) {
              *puVar29 = puVar9[3] << 8 | puVar9[2] | 0x5000000;
              puVar26 = puVar29 + 1;
            }
LAB_089b5f78:
            if (puVar29 < puVar26) {
              uVar8 = *puVar9 & 0xfff;
              if (uVar8 == local_4c[0xe]) {
                uVar8 = puVar9[2];
              }
              else {
                psVar6 = (short *)FUN_089b49f4(local_4c[2],7,uVar8);
                local_80 = psVar6 + 4;
                if (-1 < *psVar6) {
                  local_80 = (short *)(*(int *)(psVar6 + 6) + (int)psVar6);
                }
                local_4c[0xe] = uVar8;
                uVar8 = puVar9[2];
              }
              iVar5 = uVar8 * puVar9[3];
              if ((puVar9[1] & 0x100) == 0) {
                iVar23 = local_8c;
                if (iVar5 < 1) goto LAB_089b6038;
              }
              else {
                iVar23 = local_8c * iVar5;
                iVar5 = 1;
              }
              iVar18 = 0;
              uVar8 = uVar7;
              do {
                puVar29 = puVar9 + 4;
                iVar18 = iVar18 + 1;
                uVar7 = uVar8 + iVar23;
                puVar9 = (uint *)((int)puVar9 + 2);
                FUN_08935524(uVar8,(short *)((int)local_80 + local_8c * (uint)(ushort)*puVar29),
                             iVar23);
                uVar8 = uVar7;
              } while (iVar5 != iVar18);
            }
            goto LAB_089b6038;
          }
          if (uVar1 != 0x16) goto LAB_089b5f78;
          if (*puVar9 == 8) {
            puVar22 = puVar9 + 1;
            puVar26 = local_84;
            do {
              uVar8 = puVar22[1];
              uVar16 = puVar22[2];
              uVar19 = puVar22[3];
              *puVar26 = *puVar22;
              puVar22 = puVar22 + 4;
              puVar26[1] = uVar8;
              puVar26[2] = uVar16;
              puVar26[3] = uVar19;
              puVar26 = puVar26 + 4;
            } while (puVar22 != puVar9 + 0x19);
            iVar5 = *(int *)(puVar27 + 2);
          }
          else {
            iVar5 = *(int *)(puVar27 + 2);
          }
        }
        puVar27 = (ushort *)(iVar5 + (int)puVar27);
        if (local_88 <= puVar27) break;
        uVar1 = *puVar27;
      } while( true );
    }
    *puVar29 = 0xb000000;
    uVar2 = *(undefined4 *)(local_7c + 8);
    *(undefined4 *)(local_a0 + 0x24) = uVar2;
    FUN_089ab6dc(1,uVar2);
    puVar24 = (ushort *)(*(int *)(puVar24 + 2) + (int)puVar24);
    if (local_70 <= puVar24) goto LAB_089b6090;
  }
  uVar1 = *puVar24;
  local_a0 = local_6c;
  goto LAB_089b5bc0;
LAB_089b6090:
  iVar18 = *(int *)(puVar30 + 2);
  iVar23 = local_64;
  local_58 = local_90;
LAB_089b56ac:
  local_64 = iVar23;
  puVar30 = (ushort *)(iVar18 + (int)puVar30);
  if (local_68 <= puVar30) goto LAB_089b56c4;
  uVar1 = *puVar30;
  goto LAB_089b565c;
code_r0x089b67a8:
  sVar20 = *(short *)(iVar23 + 8);
LAB_089b67ac:
  switch(sVar20) {
  case 0x82:
    uVar1 = *(ushort *)(iVar23 + 0x14);
    *(undefined4 *)(iVar23 + 0x2c) = local_4c[6];
    local_4c[6] = 0;
    uVar8 = *(uint *)(iVar23 + 0x20);
    break;
  case 0x83:
    uVar1 = *(ushort *)(iVar23 + 0x14);
    uVar2 = local_4c[7];
    uVar3 = local_4c[10];
    *(undefined1 *)(iVar23 + 0x12) = 1;
    *(undefined4 *)(iVar23 + 0x30) = uVar2;
    local_4c[7] = 0;
    *(undefined4 *)(iVar23 + 0x3c) = uVar3;
    uVar8 = *(uint *)(iVar23 + 0x20) | 0x400000;
    *(uint *)(iVar23 + 0x20) = uVar8;
    break;
  case 0x84:
    *(undefined4 *)(iVar23 + 0x38) = local_4c[8];
    uVar1 = *(ushort *)(iVar23 + 0x14) | 1;
    *(undefined1 *)(iVar23 + 0x12) = 1;
    uVar14 = *(ushort *)(iVar23 + 0x16);
    *(ushort *)(iVar23 + 0x14) = uVar1;
    local_4c[8] = 0;
    uVar8 = *(uint *)(iVar23 + 0x20);
    *(ushort *)(iVar23 + 0x16) = uVar14 & 0xfffe;
    break;
  case 0x85:
    uVar1 = *(ushort *)(iVar23 + 0x14);
    uVar2 = local_4c[9];
    *(undefined1 *)(iVar23 + 0x12) = 1;
    *(undefined4 *)(iVar23 + 0x38) = uVar2;
    local_4c[9] = 0;
    uVar8 = *(uint *)(iVar23 + 0x20);
    break;
  case 0x86:
    FUN_089ba11c(0x3f800000,0x3f800000,0x3f800000,local_4c[0xb],iVar23 + 0x38);
    uVar8 = *(uint *)(iVar23 + 0x20) | 0x1000000;
    sVar20 = *(short *)(iVar23 + 8);
    uVar1 = *(ushort *)(iVar23 + 0x14) | 1;
    *(ushort *)(iVar23 + 0x14) = uVar1;
    *(ushort *)(iVar23 + 0x16) = *(ushort *)(iVar23 + 0x16) & 0xfffe;
    local_4c[0xb] = 0;
    *(uint *)(iVar23 + 0x20) = uVar8;
    break;
  default:
    uVar8 = *(uint *)(iVar23 + 0x20);
    uVar1 = *(ushort *)(iVar23 + 0x14);
  }
  if (uVar1 != 0) {
    uVar8 = uVar8 | 0x400ffff;
    *(uint *)(iVar23 + 0x20) = uVar8;
  }
  *(uint *)(iVar23 + 0x20) = uVar8 | 0x100000;
  if (sVar20 == 0x82) {
    iVar5 = iVar23;
  }
  iVar23 = iVar23 + 0x40;
  iVar18 = *(int *)(puVar24 + 2);
LAB_089b658c:
  puVar24 = (ushort *)(iVar18 + (int)puVar24);
  if (puVar27 <= puVar24) goto LAB_089b6af8;
  uVar1 = *puVar24;
  goto LAB_089b65a0;
}

