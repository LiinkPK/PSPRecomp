/* Entry 0x089B72F4 | file offset 0x001B42CC | FUN_089b72f4 | bytes 2208 */

void FUN_089b72f4(undefined4 *param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint *puVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  puVar14 = (ushort *)(*(int *)(param_2 + 2) + (int)param_2);
  puVar12 = puVar14;
  if (-1 < *param_2) {
    puVar12 = (ushort *)((int)param_2 + *(int *)(param_2 + 4));
  }
  if (puVar12 < puVar14) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    uVar6 = *puVar12;
LAB_089b73f4:
    switch(uVar6 & 0x7fff) {
    case 4:
      puVar11 = (ushort *)(*(int *)(puVar12 + 2) + (int)puVar12);
      puVar8 = puVar11;
      if (-1 < (short)uVar6) {
        puVar8 = (ushort *)((int)puVar12 + *(int *)(puVar12 + 4));
      }
      iVar1 = 0;
      if (puVar8 < puVar11) {
        iVar1 = 0;
        do {
          uVar6 = *puVar8;
          uVar4 = uVar6 & 0x7fff;
          if (uVar4 == 0x44) {
            puVar5 = puVar8 + 4;
            if (-1 < (short)uVar6) {
              puVar5 = (ushort *)((uint)puVar8[1] + (int)puVar8);
            }
            FUN_089ab938(*param_1,0,4,*(int *)puVar5 << 1);
            FUN_089ab938(*param_1,0,0x40,*(int *)puVar5 << 6);
            iVar7 = *(int *)(puVar8 + 2);
          }
          else if (uVar4 < 0x45) {
            if (uVar4 == 0x14) {
              FUN_089ab938(*param_1,0,0x10,0x20);
              iVar7 = *(int *)(puVar8 + 2);
            }
            else {
              if (uVar4 != 0x43) goto LAB_089b7520;
              puVar5 = puVar8 + 4;
              if (-1 < (short)uVar6) {
                puVar5 = (ushort *)((uint)puVar8[1] + (int)puVar8);
              }
              FUN_089ab938(*param_1,0,0x10,*(int *)puVar5 << 2);
              iVar7 = *(int *)(puVar8 + 2);
            }
          }
          else if (uVar4 == 0x47) {
            FUN_089ab938(*param_1,0,0x40,0x40);
            iVar7 = *(int *)(puVar8 + 2);
          }
          else if (uVar4 == 0x4e) {
            iVar1 = iVar1 + 1;
LAB_089b7520:
            iVar7 = *(int *)(puVar8 + 2);
          }
          else {
            iVar7 = *(int *)(puVar8 + 2);
          }
          puVar8 = (ushort *)(iVar7 + (int)puVar8);
        } while (puVar8 < puVar11);
      }
      FUN_089ab938(*param_1,0,4,iVar1 << 2);
      local_34 = local_34 + 1;
      puVar12 = (ushort *)(*(int *)(puVar12 + 2) + (int)puVar12);
      if (puVar12 < puVar14) {
        uVar6 = *puVar12;
        goto LAB_089b73f4;
      }
LAB_089b7450:
      if (local_44 != 0) {
        FUN_089acffc(local_34,*param_1);
        FUN_089acfd0(local_38,*param_1);
        FUN_089acf48(local_40,*param_1);
        FUN_089acef0(local_3c,*param_1);
        FUN_089acec0(local_44 + 1,*param_1);
        FUN_089ab938(*param_1,0,4,local_34 << 1);
        return;
      }
      break;
    case 5:
      iVar1 = *(int *)(puVar12 + 2);
      param_1[2] = puVar12;
      puVar8 = (ushort *)(iVar1 + (int)puVar12);
      if (-1 < (short)uVar6) {
        puVar8 = (ushort *)((int)puVar12 + *(int *)(puVar12 + 4));
      }
      local_48 = 0;
      for (; puVar8 < (ushort *)(iVar1 + (int)puVar12); puVar8 = (ushort *)(iVar7 + (int)puVar8)) {
        iVar7 = *(int *)(puVar8 + 2);
        if ((*puVar8 & 0x7fff) == 6) {
          puVar5 = (ushort *)(iVar7 + (int)puVar8);
          puVar11 = puVar5;
          if (-1 < (short)*puVar8) {
            puVar11 = (ushort *)((int)puVar8 + *(int *)(puVar8 + 4));
          }
          if (puVar11 < puVar5) {
            iVar15 = 0;
            iVar7 = 0;
            local_50 = 0;
            local_4c = 0xffffffff;
            do {
              uVar6 = *puVar11;
              while (uVar4 = uVar6 & 0x7fff, uVar4 != 99) {
                if (uVar4 < 100) {
                  if (uVar4 == 0x16) {
                    local_50 = 8;
                  }
                  else if (uVar4 == 0x62) {
                    puVar13 = puVar11 + 4;
                    if (-1 < (short)uVar6) {
                      puVar13 = (ushort *)((uint)puVar11[1] + (int)puVar11);
                    }
                    FUN_089ab938(*param_1,0,4,*(int *)puVar13 << 1);
                    iVar3 = *(int *)(puVar11 + 2);
                    goto LAB_089b7644;
                  }
                  iVar3 = *(int *)(puVar11 + 2);
                  goto LAB_089b7644;
                }
                if (((uVar4 != 0x68) && (uVar4 != 0x6a)) && (uVar4 != 0x66)) {
                  iVar3 = *(int *)(puVar11 + 2);
                  goto LAB_089b7644;
                }
                puVar9 = (uint *)(puVar11 + 4);
                if (-1 < (short)uVar6) {
                  puVar9 = (uint *)((uint)puVar11[1] + (int)puVar11);
                }
                local_4c = *puVar9 & 0xfff;
                if (uVar4 == 0x66) {
                  iVar3 = puVar9[2] * puVar9[3];
                  iVar7 = iVar7 + puVar9[3];
                }
                else {
                  iVar3 = puVar9[2] * puVar9[3];
                  iVar7 = iVar7 + 1;
                }
                iVar15 = iVar15 + iVar3;
                puVar11 = (ushort *)(*(int *)(puVar11 + 2) + (int)puVar11);
                if (puVar5 <= puVar11) goto LAB_089b76e8;
                uVar6 = *puVar11;
              }
              FUN_089ab938(*param_1,0,0x10,0x10);
              iVar3 = *(int *)(puVar11 + 2);
LAB_089b7644:
              puVar11 = (ushort *)(iVar3 + (int)puVar11);
            } while (puVar11 < puVar5);
LAB_089b76e8:
            if (iVar7 < 1) {
              iVar7 = *(int *)(puVar8 + 2);
              local_48 = local_48 + 1;
              goto LAB_089b75d0;
            }
            psVar2 = (short *)FUN_089b49f4(param_1[2],7,local_4c);
            puVar9 = (uint *)(psVar2 + 4);
            if (-1 < *psVar2) {
              puVar9 = (uint *)((uint)(ushort)psVar2[1] + (int)psVar2);
            }
            uVar10 = *puVar9;
            iVar3 = 4;
            if (local_50 != 0) {
              iVar3 = 10;
            }
            FUN_089acf74(1,*param_1);
            FUN_089ab938(*param_1,1,4,(iVar3 + iVar7) * 4);
            FUN_089ab938(*param_1,1,4,
                         ((int)uVar10 >> 0x18) * (((uVar10 & 0x1fffff) >> 0x12) + 1) * iVar15);
            FUN_089ab938(*param_1,1,4,local_50 * 0xc);
            iVar7 = *(int *)(puVar8 + 2);
          }
          local_48 = local_48 + 1;
        }
LAB_089b75d0:
      }
      local_38 = local_38 + 1;
      FUN_089acfa4(local_48,*param_1);
      puVar12 = (ushort *)(*(int *)(puVar12 + 2) + (int)puVar12);
      if (puVar14 <= puVar12) goto LAB_089b7450;
      uVar6 = *puVar12;
      goto LAB_089b73f4;
    case 8:
      FUN_089b4a70(param_1,puVar12);
      puVar11 = (ushort *)(*(int *)(puVar12 + 2) + (int)puVar12);
      puVar8 = puVar11;
      if (-1 < (short)*puVar12) {
        puVar8 = (ushort *)((int)puVar12 + *(int *)(puVar12 + 4));
      }
      if (puVar8 < puVar11) {
        uVar6 = *puVar8;
        while( true ) {
          iVar1 = *(int *)(puVar8 + 2);
          if ((uVar6 & 0x7fff) == 9) {
            puVar13 = (ushort *)(iVar1 + (int)puVar8);
            puVar5 = puVar13;
            if (-1 < (short)uVar6) {
              puVar5 = (ushort *)((int)puVar8 + *(int *)(puVar8 + 4));
            }
            if (puVar5 < puVar13) {
              do {
                if ((*puVar5 & 0x7fff) == 0x98) {
                  FUN_089ab938(*param_1,0,0x10,0x10);
                  iVar1 = *(int *)(puVar5 + 2);
                }
                else if ((*puVar5 & 0x7fff) == 0x9a) {
                  FUN_089ab938(*param_1,0,0x40,0x40);
                  iVar1 = *(int *)(puVar5 + 2);
                }
                else {
                  iVar1 = *(int *)(puVar5 + 2);
                }
                puVar5 = (ushort *)(iVar1 + (int)puVar5);
              } while (puVar5 < puVar13);
              iVar1 = *(int *)(puVar8 + 2);
            }
          }
          puVar8 = (ushort *)(iVar1 + (int)puVar8);
          if (puVar11 <= puVar8) break;
          uVar6 = *puVar8;
        }
      }
      local_40 = local_40 + 1;
      FUN_089acf1c(param_1[5],*param_1);
      puVar12 = (ushort *)(*(int *)(puVar12 + 2) + (int)puVar12);
      if (puVar14 <= puVar12) goto LAB_089b7450;
      uVar6 = *puVar12;
      goto LAB_089b73f4;
    case 10:
      local_3c = local_3c + 1;
      puVar12 = (ushort *)(*(int *)(puVar12 + 2) + (int)puVar12);
      if (puVar14 <= puVar12) goto LAB_089b7450;
      uVar6 = *puVar12;
      goto LAB_089b73f4;
    case 0xb:
      iVar1 = *(int *)(puVar12 + 2);
      param_1[3] = puVar12;
      puVar11 = (ushort *)(iVar1 + (int)puVar12);
      puVar8 = puVar11;
      if (-1 < (short)uVar6) {
        puVar8 = (ushort *)((int)puVar12 + *(int *)(puVar12 + 4));
      }
      iVar1 = 0;
      for (; puVar8 < puVar11; puVar8 = (ushort *)(*(int *)(puVar8 + 2) + (int)puVar8)) {
        while ((*puVar8 & 0x7fff) != 0xb3) {
          puVar8 = (ushort *)(*(int *)(puVar8 + 2) + (int)puVar8);
          if (puVar11 <= puVar8) goto LAB_089b7998;
        }
        puVar5 = puVar8 + 4;
        if (-1 < (short)*puVar8) {
          puVar5 = (ushort *)((uint)puVar8[1] + (int)puVar8);
        }
        psVar2 = (short *)FUN_089b49f4(param_1[3],0xc,*(uint *)(puVar5 + 6) & 0xfff);
        iVar7 = 0;
        if (-1 < *psVar2) {
          iVar7 = *(int *)(psVar2 + 4) - *(int *)(psVar2 + 6);
        }
        FUN_089ab938(*param_1,0,4,iVar7);
        iVar1 = iVar1 + 1;
      }
LAB_089b7998:
      local_44 = local_44 + 1;
      FUN_089ace94(iVar1,*param_1);
      FUN_089ab938(*param_1,0,4,iVar1 << 1);
      puVar12 = (ushort *)(*(int *)(puVar12 + 2) + (int)puVar12);
      if (puVar14 <= puVar12) goto LAB_089b7450;
      uVar6 = *puVar12;
      goto LAB_089b73f4;
    case 0x14:
      FUN_089ab938(*param_1,0,0x10,0x20);
      puVar12 = (ushort *)(*(int *)(puVar12 + 2) + (int)puVar12);
      if (puVar12 < puVar14) goto code_r0x089b7a00;
      goto LAB_089b7450;
    case 0x16:
      FUN_089ab938(*param_1,1,4,0x60);
    case 6:
    case 7:
    case 9:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
      iVar1 = *(int *)(puVar12 + 2);
LAB_089b743c:
      puVar12 = (ushort *)(iVar1 + (int)puVar12);
      if (puVar14 <= puVar12) goto LAB_089b7450;
      uVar6 = *puVar12;
      goto LAB_089b73f4;
    default:
      iVar1 = *(int *)(puVar12 + 2);
      goto LAB_089b743c;
    }
  }
  else {
    local_3c = 0;
    local_40 = 0;
    local_34 = 0;
    local_38 = 0;
  }
  FUN_089acffc(local_34,*param_1);
  FUN_089acfd0(local_38,*param_1);
  FUN_089acf48(local_40,*param_1);
  FUN_089acef0(local_3c,*param_1);
  FUN_089acec0(0,*param_1);
  FUN_089ab938(*param_1,0,4,local_34 << 1);
  return;
code_r0x089b7a00:
  uVar6 = *puVar12;
  goto LAB_089b73f4;
}

