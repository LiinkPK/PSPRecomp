/* Entry 0x089B9644 | file offset 0x001B661C | FUN_089b9644 | bytes 2520 */

undefined4 FUN_089b9644(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 local_910 [4];
  float local_900;
  float local_8fc;
  float local_8f8;
  float local_8f4;
  undefined4 local_8f0;
  undefined1 auStack_8c0 [108];
  undefined1 *local_854;
  int local_850;
  int local_84c;
  undefined4 local_848;
  uint *local_40;
  uint local_3c;
  
  if (((param_1 != 0) && (*(short *)(param_1 + 0x28) != 0)) &&
     ((*(short *)(param_1 + 0x20) != 0 || (*(short *)(param_1 + 0x24) != 0)))) {
    local_854 = auStack_8c0;
    FUN_089ab7a0();
    iVar19 = 0;
    uVar13 = (uint)*(ushort *)(param_1 + 0x28);
    local_84c = 0;
    iVar16 = 0;
    local_850 = param_1;
    if (uVar13 != 0xffffffff) {
      iVar18 = 0;
      iVar17 = 0;
      do {
        iVar16 = *(int *)(param_1 + 0x1c) + iVar17;
        uVar10 = (uint)*(ushort *)(iVar16 + 0xc);
        if (uVar10 != 0) {
          iVar15 = 0;
          do {
            iVar2 = *(int *)(iVar16 + 4);
            while (iVar2 = iVar2 + iVar15 * 0x10, *(char *)(iVar2 + 0xd) != 'B') {
              uVar6 = FUN_089b9594(iVar2);
              iVar3 = FUN_089b95bc(&local_854,uVar6,iVar15);
              if (iVar3 < 0) {
                if (0x1ff < local_84c) {
                  return 0;
                }
                (&local_848)[local_84c] = uVar6;
                bVar1 = local_84c < 0;
                iVar3 = local_84c;
                local_84c = local_84c + 1;
                if (bVar1) {
                  return 0;
                }
              }
              if ((*(ushort *)(iVar2 + 2) & 2) == 0) {
                *(char *)((int)&local_848 + iVar3 * 4 + 3) =
                     *(char *)((int)&local_848 + iVar3 * 4 + 3) + '\x01';
                uVar10 = (uint)*(ushort *)(iVar16 + 0xc);
                break;
              }
              uVar10 = (uint)*(ushort *)(iVar16 + 0xc);
              iVar15 = iVar15 + 1;
              if ((int)uVar10 <= iVar15) {
                uVar8 = *(ushort *)(param_1 + 0x28);
                goto LAB_089b977c;
              }
              iVar2 = *(int *)(iVar16 + 4);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar10);
          uVar8 = *(ushort *)(param_1 + 0x28);
LAB_089b977c:
          uVar13 = (uint)uVar8;
        }
        iVar18 = iVar18 + 1;
        iVar16 = uVar13 + 1;
        iVar19 = iVar19 + uVar10;
        iVar17 = iVar17 + 0x30;
      } while (iVar18 < iVar16);
    }
    puVar12 = &local_848;
    if (local_84c * iVar16 != iVar19) {
      if (0 < local_84c) {
        puVar9 = &local_848;
        iVar16 = 0;
        puVar12 = puVar9;
        do {
          iVar16 = iVar16 + 1;
          if (*(char *)((int)puVar9 + 3) != '\0') {
            *puVar12 = *puVar9;
            puVar12 = puVar12 + 1;
          }
          puVar9 = puVar9 + 1;
        } while (iVar16 < local_84c);
      }
      local_84c = (int)puVar12 - (int)&local_848 >> 2;
      FUN_089ace94(local_84c,local_854);
      FUN_089ab938(local_854,0,4,local_84c << 1);
      if (local_84c < 1) {
        uVar8 = *(ushort *)(param_1 + 0x28);
      }
      else {
        iVar16 = 0;
        puVar14 = &local_848;
        do {
          switch(*(undefined1 *)((int)puVar14 + 2)) {
          case 0x42:
          case 0x4f:
          case 0x86:
            iVar19 = 4;
            break;
          case 0x43:
            iVar19 = 0x20;
            break;
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x4e:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x5b:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6e:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
          case 0x7b:
          case 0x7c:
          case 0x7d:
          case 0x7e:
          case 0x7f:
          case 0x80:
          case 0x81:
          case 0x87:
          case 0x88:
          case 0x89:
          case 0x8a:
          case 0x8b:
          case 0x8c:
          case 0x8d:
          case 0x8e:
          case 0x8f:
          case 0x90:
          case 0x91:
          case 0x92:
          case 0x93:
          case 0x94:
          case 0x95:
          case 0x96:
          case 0x97:
          case 0x99:
          case 0x9a:
          case 0x9b:
          case 0x9c:
          case 0x9d:
          case 0x9e:
          case 0x9f:
          case 0xa0:
          case 0xa1:
          case 0xa2:
          case 0xa3:
          case 0xa4:
          case 0xa5:
          case 0xa6:
          case 0xa7:
          case 0xa8:
          case 0xa9:
          case 0xaa:
          case 0xab:
          case 0xac:
          case 0xad:
          case 0xae:
          case 0xaf:
          case 0xb0:
          case 0xb1:
          case 0xb2:
          case 0xb3:
          case 0xb4:
          case 0xb5:
          case 0xb6:
          case 0xb7:
          case 0xb8:
          case 0xb9:
          case 0xba:
          case 0xbb:
          case 0xbc:
          case 0xbd:
          case 0xbe:
          case 0xbf:
          case 0xc0:
          case 0xc1:
          case 0xc2:
          case 0xc3:
          case 0xc4:
          case 0xc5:
          case 0xc6:
          case 199:
          case 200:
          case 0xc9:
          case 0xca:
          case 0xcb:
          case 0xcc:
          case 0xcd:
          case 0xce:
          case 0xcf:
          case 0xd0:
          case 0xd1:
          case 0xd2:
          case 0xd3:
          case 0xd4:
          case 0xd5:
          case 0xd6:
          case 0xd7:
          case 0xd8:
          case 0xd9:
          case 0xda:
          case 0xdb:
          case 0xdc:
          case 0xdd:
          case 0xde:
          case 0xdf:
          case 0xe0:
            iVar19 = 0;
            break;
          case 0x47:
            iVar19 = 0x40;
            break;
          case 0x48:
          case 0x4c:
          case 0x4d:
          case 0xe1:
            iVar19 = 0xc;
            break;
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x82:
          case 0x84:
          case 0x85:
          case 0x98:
            iVar19 = 0x10;
            break;
          case 0x83:
            iVar19 = 0x14;
            break;
          default:
            iVar19 = 0;
          }
          FUN_089ab938(local_854,0,4,iVar19 + 4);
          iVar16 = iVar16 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar16 < local_84c);
        uVar8 = *(ushort *)(param_1 + 0x28);
      }
      iVar16 = *(int *)(param_1 + 0x1c) + (uint)uVar8 * 0x30;
      if (*(short *)(iVar16 + 0xc) != 0) {
        iVar18 = 0;
        iVar19 = *(int *)(iVar16 + 8);
        iVar17 = *(int *)(iVar16 + 4);
        do {
          FUN_089b9150(0,0x3f800000,iVar17,iVar19,param_1);
          iVar18 = iVar18 + 1;
          iVar19 = iVar19 + 2;
          iVar17 = iVar17 + 0x10;
        } while (iVar18 < (int)(uint)*(ushort *)(iVar16 + 0xc));
      }
      iVar16 = FUN_089abd28(auStack_8c0);
      if (iVar16 != 0) {
        uVar13 = (uint)*(ushort *)(param_1 + 0x28);
        uVar10 = uVar13 + 1;
        if (uVar13 < uVar10) {
          iVar16 = uVar13 * 0x30;
          iVar17 = *(int *)(param_1 + 0x1c) + iVar16;
          iVar19 = FUN_089ad060(local_84c,local_854);
          uVar6 = FUN_089aba0c(local_854,0,4,local_84c << 1);
          FUN_08935828(uVar6,0,local_84c << 1);
          uVar13 = (uint)*(ushort *)(iVar17 + 0xc);
          if (uVar13 != 0) goto LAB_089b9e14;
          iVar18 = *(int *)(iVar17 + 4);
LAB_089b9e98:
          iVar16 = iVar16 + 0x30;
          FUN_089acbc0(iVar18);
          thunk_FUN_089abeac(0,*(undefined4 *)(iVar17 + 8));
          *(int *)(iVar17 + 4) = iVar19;
          *(short *)(iVar17 + 0xc) = (short)local_84c;
          uVar13 = (uint)*(ushort *)(param_1 + 0x28);
          *(undefined4 *)(iVar17 + 8) = uVar6;
          if ((int)uVar10 < (int)(uVar13 + 1)) {
            iVar17 = *(int *)(param_1 + 0x1c) + iVar16;
            iVar19 = FUN_089ad060(local_84c,local_854);
            uVar6 = FUN_089aba0c(local_854,0,4,local_84c << 1);
            FUN_08935828(uVar6,0,local_84c << 1);
            uVar13 = (uint)*(ushort *)(iVar17 + 0xc);
            uVar10 = uVar10 + 1;
            if (uVar13 == 0) {
              iVar18 = *(int *)(iVar17 + 4);
            }
            else {
LAB_089b9e14:
              iVar18 = *(int *)(iVar17 + 4);
              iVar15 = 0;
LAB_089b9e34:
              do {
                iVar2 = iVar18 + iVar15 * 0x10;
                if ((*(ushort *)(iVar2 + 2) & 2) == 0) {
                  uVar7 = FUN_089b9594(iVar2);
                  iVar18 = FUN_089b95bc(&local_854,uVar7,iVar15);
                  if (-1 < iVar18) {
                    FUN_089ae948(iVar19 + iVar18 * 0x10,iVar2,0,local_854);
                    uVar13 = (uint)*(ushort *)(iVar17 + 0xc);
                    iVar15 = iVar15 + 1;
                    iVar18 = *(int *)(iVar17 + 4);
                    if ((int)uVar13 <= iVar15) break;
                    goto LAB_089b9e34;
                  }
                  uVar13 = (uint)*(ushort *)(iVar17 + 0xc);
                  iVar18 = *(int *)(iVar17 + 4);
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)uVar13);
            }
            goto LAB_089b9e98;
          }
        }
        iVar19 = 0;
        iVar16 = local_84c;
        puVar14 = &local_848;
        if (0 < local_84c) {
          do {
            local_40 = puVar14;
            uVar10 = uVar13 + 1;
            if (uVar13 < uVar10) {
              iVar17 = uVar13 * 0x30;
              iVar18 = 0;
              while( true ) {
                iVar15 = *(int *)(*(int *)(param_1 + 0x1c) + iVar17 + 4) + iVar19 * 0x10;
                if (*(int *)(iVar15 + 4) != 0) goto LAB_089b9958;
                if (iVar18 != 0) break;
                uVar20 = *local_40;
                uVar4 = (uVar20 & 0xffffff) >> 0x10;
                uVar11 = uVar20 & 0xffff;
                if (0x16 < uVar4 - 0x82) {
                  if ((uVar11 + 1 & 0xffff0000) == 0) {
                    iVar18 = iVar15;
                    if (*(ushort *)(local_850 + 0x20) <= uVar11) goto LAB_089b9958;
                    uVar11 = *(int *)(local_850 + 0xc) + uVar11 * 0x100;
                  }
                  iVar18 = iVar15;
                  if (uVar11 != 0) {
                    if (uVar4 < 0x4c) {
                      puVar12 = (undefined4 *)(uVar11 + 0x60);
                      if (uVar4 < 0x49) {
                        if (uVar4 == 0x43) {
                          puVar12 = *(undefined4 **)(uVar11 + 0xc);
                          uVar13 = (uint)*(ushort *)(uVar11 + 0x1a);
                          if (puVar12 == (undefined4 *)0x0) {
                            puVar12 = (undefined4 *)&DAT_089d2338;
                            uVar13 = 8;
                          }
                          else if (uVar13 == 0) goto LAB_089b9be4;
                        }
                        else {
                          if (uVar4 < 0x44) {
                            if (uVar4 == 0x42) {
                              uVar4 = *(uint *)(uVar11 + 0x24);
                              if ((int)uVar4 < 0) {
                                uVar13 = 1;
                                local_3c = 1;
                                local_900 = (float)uVar4;
                              }
                              else {
                                uVar13 = 1;
                                local_3c = 1;
                                local_900 = (float)(int)uVar4;
                              }
                              goto LAB_089b9bf4;
                            }
                            uVar13 = (uint)*(ushort *)(param_1 + 0x28);
                            goto LAB_089b9958;
                          }
                          if (uVar4 == 0x47) {
                            puVar12 = *(undefined4 **)(uVar11 + 0x30);
                            uVar13 = 0x10;
                            if (puVar12 == (undefined4 *)0x0) {
                              puVar12 = &DAT_089d2650;
                            }
                          }
                          else {
                            if (uVar4 != 0x48) {
                              uVar13 = (uint)*(ushort *)(param_1 + 0x28);
                              goto LAB_089b9958;
                            }
                            puVar12 = (undefined4 *)(uVar11 + 0x50);
                            uVar13 = 3;
                          }
                        }
                      }
                      else {
                        uVar13 = 4;
                      }
LAB_089b9bdc:
                      FUN_08935524(&local_900,puVar12,uVar13 << 2);
                      goto LAB_089b9be4;
                    }
                    if (uVar4 == 0x4f) {
                      local_900 = *(float *)(uVar11 + 0x28);
                      uVar13 = 1;
                      local_3c = 1;
                      goto LAB_089b9bf4;
                    }
                    if (uVar4 < 0x50) {
                      if (uVar4 < 0x4e) {
LAB_089b9bd0:
                        puVar12 = (undefined4 *)(uVar11 + 0x70);
                        uVar13 = 3;
                        goto LAB_089b9bdc;
                      }
                      uVar13 = (uint)*(ushort *)(param_1 + 0x28);
                    }
                    else {
                      if (uVar4 == 0xe1) goto LAB_089b9bd0;
                      uVar13 = (uint)*(ushort *)(param_1 + 0x28);
                    }
                  }
                  goto LAB_089b9958;
                }
                if ((uVar11 + 1 & 0xffff0000) == 0) {
                  iVar18 = iVar15;
                  if (*(ushort *)(local_850 + 0x24) <= uVar11) goto LAB_089b9958;
                  uVar11 = *(int *)(local_850 + 0x14) + uVar11 * 0x10;
                }
                iVar18 = iVar15;
                if (uVar11 == 0) goto LAB_089b9958;
                switch(uVar4 - 0x82) {
                case 0:
                  local_910[0] = FUN_089b1360(uVar11);
                  uVar13 = 4;
                  FUN_089ba414(&local_900,local_910);
                  break;
                case 1:
                  local_910[0] = FUN_089b139c(uVar11);
                  local_8f0 = FUN_089b1408(uVar11);
                  uVar13 = 5;
                  FUN_089ba414(&local_900,local_910);
                  break;
                case 2:
                  local_910[0] = FUN_089b1474(uVar11);
                  uVar13 = 4;
                  FUN_089ba414(&local_900,local_910);
                  break;
                case 3:
                  local_910[0] = FUN_089b139c(uVar11);
                  uVar13 = 4;
                  FUN_089ba414(&local_900,local_910);
                  break;
                case 4:
                  local_900 = (float)FUN_089b14b0(uVar11);
                  uVar13 = 1;
                  local_3c = 1;
                  goto LAB_089b9bf4;
                case 5:
                case 6:
                  uVar13 = 1;
                  local_3c = 1;
                  local_900 = 0.0;
                  goto LAB_089b9bf4;
                default:
                  uVar13 = (uint)*(ushort *)(param_1 + 0x28);
                  goto LAB_089b9958;
                case 0x16:
                  pfVar5 = (float *)FUN_089b18c8(uVar11,0);
                  if (pfVar5 == (float *)0x0) {
                    pfVar5 = (float *)&DAT_089d2640;
                  }
                  local_8f4 = pfVar5[3];
                  local_900 = *pfVar5;
                  local_8fc = pfVar5[1];
                  local_8f8 = pfVar5[2];
                  uVar13 = 4;
                  local_3c = 4;
                  goto LAB_089b9bf4;
                }
LAB_089b9be4:
                if (uVar13 == 0) {
                  uVar13 = (uint)*(ushort *)(param_1 + 0x28);
                  iVar18 = iVar15;
                }
                else {
                  local_3c = uVar13 & 0xff;
LAB_089b9bf4:
                  puVar12 = (undefined4 *)FUN_089aba0c(local_854,0,4,uVar13 * 4 + 1);
                  FUN_08935524(puVar12 + 1,&local_900,uVar13 * 4);
                  uVar13 = (uVar20 & 0xffffff) >> 0x10;
                  *puVar12 = 0;
                  if ((uVar13 - 0x48 < 6) || (uVar13 == 0xe1)) {
                    uVar8 = 0x101;
                  }
                  else {
                    uVar8 = 0x100;
                    if ((((5 < uVar13 - 0x42) && (uVar13 != 0x4f)) &&
                        (uVar8 = 0x200, 6 < uVar13 - 0x82)) && (uVar8 = 0, uVar13 == 0x98)) {
                      uVar8 = 0x200;
                    }
                  }
                  *(ushort *)(iVar15 + 2) = uVar8 | *(ushort *)(iVar15 + 2) | 2;
                  *(undefined2 *)(iVar15 + 10) = 1;
                  *(char *)(iVar15 + 0xc) = (char)local_3c;
                  *(char *)(iVar15 + 0xd) = (char)(uVar20 >> 0x10);
                  *(short *)(iVar15 + 0xe) = (short)uVar20;
                  *(undefined2 *)(iVar15 + 8) = 0;
                  uVar13 = (uint)*(ushort *)(param_1 + 0x28);
                  *(undefined4 **)(iVar15 + 4) = puVar12;
                  iVar18 = iVar15;
                }
LAB_089b9958:
                iVar16 = local_84c;
                if ((int)(uVar13 + 1) <= (int)uVar10) goto LAB_089b99c0;
LAB_089b9968:
                iVar17 = iVar17 + 0x30;
                uVar10 = uVar10 + 1;
              }
              FUN_089ae948(iVar15,iVar18,0,local_854);
              uVar13 = (uint)*(ushort *)(param_1 + 0x28);
              iVar16 = local_84c;
              iVar18 = iVar15;
              if ((int)uVar10 < (int)(uVar13 + 1)) goto LAB_089b9968;
            }
LAB_089b99c0:
            iVar19 = iVar19 + 1;
            local_40 = local_40 + 1;
            puVar14 = local_40;
          } while (iVar19 < iVar16);
        }
        FUN_089abca0(auStack_8c0);
        return 1;
      }
    }
  }
  return 0;
}

