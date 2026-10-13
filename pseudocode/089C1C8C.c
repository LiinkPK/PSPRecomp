/* Entry 0x089C1C8C | file offset 0x001BEC64 | FUN_089c1c8c | bytes 2172 */

undefined4 FUN_089c1c8c(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short *psVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  short *psVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_40;
  
  local_5c = 0;
  do {
    if (DAT_09af7208 != 0) {
      sceAudioOutputBlocking(*(undefined4 *)(param_2 + 4),0,0);
      sceKernelExitThread(0);
      return 0;
    }
    local_58 = 0;
    local_40 = local_5c * 0x700;
    local_54 = 0;
    do {
      sceKernelMemset(&DAT_09af728c + local_40,0,0x70);
      local_50 = 0;
      piVar15 = (int *)&DAT_09af808c;
      iVar19 = 0;
      piVar18 = piVar15;
      do {
        psVar4 = DAT_09af849c;
        iVar14 = iVar19 * 0x40;
        if (piVar15[7] != 0) {
          uVar5 = piVar15[6];
          local_50 = local_50 + 1;
          if ((uVar5 & 0x400) == 0) {
            if ((uVar5 & 0x100) == 0) {
              iVar16 = *piVar15;
              if (iVar16 != 0) {
                sceKernelMemset(DAT_09af849c,0,0x70);
                uVar6 = DAT_09af8498;
                bVar1 = *(byte *)(piVar15 + 6);
                if (bVar1 == 1) {
                  if (0xf < piVar15[1]) {
                    iVar9 = piVar15[8];
                    if (piVar15[1] < iVar9 + 0x10) {
                      iVar9 = piVar15[4];
                      piVar15[8] = iVar9;
                    }
                    sceKernelMemcpy(uVar6,iVar16 + iVar9,0x10);
LAB_089c21c4:
                    iVar16 = FUN_089c2508(psVar4,DAT_09af8498,iVar14 + 0x9af80bc);
                    if (iVar16 == 3) {
                      iVar16 = piVar15[4];
                      piVar15[5] = piVar15[8];
                      goto LAB_089c220c;
                    }
                    if (iVar16 == 6) {
                      iVar16 = piVar15[8];
                      piVar15[8] = iVar16 + 0x10;
                      piVar15[4] = iVar16;
                    }
                    else {
                      piVar15[8] = piVar15[8] + 0x10;
                    }
                  }
                }
                else if (bVar1 < 2) {
                  if (bVar1 == 0) {
                    if (piVar15[1] < piVar15[8] + 0x10) {
                      piVar15[8] = 0;
                      goto LAB_089c2198;
                    }
                    sceKernelMemcpy(DAT_09af8498,iVar16 + piVar15[8],0x10);
                    uVar6 = DAT_09af8498;
                    piVar15[8] = piVar15[8] + 0x10;
                    FUN_089c2508(psVar4,uVar6,iVar14 + 0x9af80bc);
                  }
                }
                else if ((bVar1 == 2) && (0xf < piVar15[1])) {
                  if (piVar15[8] + 0x10 <= piVar15[1]) {
                    sceKernelMemcpy(DAT_09af8498,iVar16 + piVar15[8],0x10);
                    goto LAB_089c21c4;
                  }
                  piVar15[8] = 0;
LAB_089c2198:
                  piVar15[7] = 0;
                }
              }
            }
            else {
              iVar16 = *piVar15;
              if (iVar16 != 0) {
                if ((uVar5 & 1) == 0) {
                  iVar9 = piVar15[8];
                  if ((uVar5 & 0x200) == 0) {
                    if (piVar15[1] < iVar9 + 0x38) {
LAB_089c232c:
                      sceKernelMemset(DAT_09af849c,0,0x70);
                      sceKernelMemcpy(psVar4,iVar16 + piVar15[8],piVar15[1] - piVar15[8]);
                      piVar15[8] = 0;
                      goto LAB_089c2198;
                    }
LAB_089c2314:
                    sceKernelMemcpy(DAT_09af849c,iVar16 + iVar9,0x38);
                    iVar16 = piVar15[8] + 0x38;
                  }
                  else {
                    if (piVar15[1] < iVar9 + 0x70) goto LAB_089c232c;
LAB_089c236c:
                    sceKernelMemcpy(DAT_09af849c,iVar16 + iVar9,0x70);
                    iVar16 = piVar15[8] + 0x70;
                  }
LAB_089c220c:
                  piVar15[8] = iVar16;
                }
                else {
                  iVar20 = piVar15[1];
                  if ((uVar5 & 0x200) == 0) {
                    if (0x37 < iVar20) {
                      iVar9 = piVar15[8];
                      if (iVar9 + 0x38 < iVar20) goto LAB_089c2314;
                      iVar20 = iVar20 - iVar9;
                      sceKernelMemcpy(DAT_09af849c,iVar16 + iVar9,iVar20);
                      iVar9 = 0x38;
LAB_089c23c8:
                      piVar15[8] = 0;
                      sceKernelMemcpy((int)psVar4 + iVar20,iVar16,iVar9 - iVar20);
                      piVar15[8] = iVar9 - iVar20;
                      goto LAB_089c1e68;
                    }
                    iVar20 = iVar20 - piVar15[8];
                    sceKernelMemcpy(DAT_09af849c,iVar16 + piVar15[8],iVar20);
                    piVar15[8] = 0;
                    iVar9 = 0x38 - iVar20;
                    while( true ) {
                      if (iVar9 <= piVar18[1]) break;
                      sceKernelMemcpy((int)psVar4 + iVar20,iVar16,piVar18[1]);
                      iVar20 = iVar20 + piVar18[1];
                      iVar9 = iVar9 - piVar18[1];
                    }
                    sceKernelMemcpy((int)psVar4 + iVar20,iVar16,iVar9);
                  }
                  else {
                    if (0x6f < iVar20) {
                      iVar9 = piVar15[8];
                      if (iVar9 + 0x70 < iVar20) goto LAB_089c236c;
                      iVar20 = iVar20 - iVar9;
                      sceKernelMemcpy(DAT_09af849c,iVar16 + iVar9,iVar20);
                      iVar9 = 0x70;
                      goto LAB_089c23c8;
                    }
                    iVar20 = iVar20 - piVar15[8];
                    sceKernelMemcpy(DAT_09af849c,iVar16 + piVar15[8],iVar20);
                    piVar15[8] = 0;
                    iVar9 = 0x70 - iVar20;
                    while( true ) {
                      if (iVar9 <= piVar18[1]) break;
                      sceKernelMemcpy((int)psVar4 + iVar20,iVar16,piVar18[1]);
                      iVar20 = iVar20 + piVar18[1];
                      iVar9 = iVar9 - piVar18[1];
                    }
                    sceKernelMemcpy((int)psVar4 + iVar20,iVar16,iVar9);
                  }
                  piVar18[8] = piVar18[8] + iVar9;
                }
              }
            }
          }
LAB_089c1e68:
          psVar4 = DAT_09af849c;
          iVar16 = 0;
          psVar13 = DAT_09af849c;
          do {
            uVar5 = *(uint *)(iVar14 + 0x9af80a4);
            if ((uVar5 & 0x100000) == 0) {
              *(undefined4 *)(iVar14 + 0x9af80c0) = 0x7f;
            }
            else {
              iVar9 = *(int *)(iVar14 + 0x9af80c4);
              iVar20 = ((iVar9 - *(int *)(iVar14 + 0x9af80c8)) * 0x7f) / iVar9;
              *(int *)(iVar14 + 0x9af80c0) = iVar20;
              if (iVar20 < 0) {
                *(undefined4 *)(iVar14 + 0x9af80c0) = 0;
              }
              iVar20 = *(int *)(iVar14 + 0x9af80c8) + 1;
              *(int *)(iVar14 + 0x9af80c8) = iVar20;
              if (iVar9 <= iVar20) {
                *(uint *)(iVar14 + 0x9af80a4) = uVar5 & 0xffefffff;
                *(undefined4 *)(iVar14 + 0x9af80c8) = 0;
                if ((uVar5 & 0x10000) == 0) {
                  if ((uVar5 & 0x20000) == 0) {
                    if ((uVar5 & 0x40000) != 0) {
                      *(uint *)(iVar14 + 0x9af80a4) = uVar5 & 0xffebffff;
                      (&DAT_09af80a8)[iVar19 * 0x10] = *(undefined4 *)(iVar14 + 0x9af82a8);
                    }
                  }
                  else {
                    uVar2 = *(undefined2 *)(iVar14 + 0x9af82bc);
                    uVar3 = *(undefined2 *)(iVar14 + 0x9af82be);
                    uVar6 = *(undefined4 *)(iVar14 + 0x9af82ac);
                    uVar7 = *(undefined4 *)(iVar14 + 0x9af82b4);
                    uVar11 = *(undefined4 *)(iVar14 + 0x9af82b8);
                    *(uint *)(iVar14 + 0x9af80a4) = uVar5 & 0xffedffff;
                    (&DAT_09af80a8)[iVar19 * 0x10] = *(undefined4 *)(iVar14 + 0x9af82a8);
                    *(undefined4 *)(iVar14 + 0x9af80ac) = uVar6;
                    *(undefined2 *)(iVar14 + 0x9af80bc) = uVar2;
                    *(undefined2 *)(iVar14 + 0x9af80be) = uVar3;
                    *(undefined4 *)(iVar14 + 0x9af80b4) = uVar7;
                    *(undefined4 *)(iVar14 + 0x9af80b8) = uVar11;
                  }
                }
                else {
                  uVar2 = *(undefined2 *)(iVar14 + 0x9af82bc);
                  uVar3 = *(undefined2 *)(iVar14 + 0x9af82be);
                  uVar6 = *(undefined4 *)(iVar14 + 0x9af82ac);
                  uVar7 = *(undefined4 *)(iVar14 + 0x9af8294);
                  uVar11 = *(undefined4 *)(iVar14 + 0x9af8298);
                  uVar17 = *(undefined4 *)(iVar14 + 0x9af82b4);
                  uVar12 = *(undefined4 *)(iVar14 + 0x9af82b8);
                  *(uint *)(iVar14 + 0x9af80a4) = uVar5 & 0xffeeffff;
                  (&DAT_09af80a8)[iVar19 * 0x10] = *(undefined4 *)(iVar14 + 0x9af82a8);
                  *(undefined4 *)(iVar14 + 0x9af80ac) = uVar6;
                  *(undefined4 *)(iVar14 + 0x9af8094) = uVar7;
                  *(undefined4 *)(iVar14 + 0x9af8098) = uVar11;
                  *(undefined2 *)(iVar14 + 0x9af80bc) = uVar2;
                  *(undefined2 *)(iVar14 + 0x9af80be) = uVar3;
                  *(undefined4 *)(iVar14 + 0x9af80b4) = uVar17;
                  *(undefined4 *)(iVar14 + 0x9af80b8) = uVar12;
                }
              }
            }
            iVar9 = *(int *)(iVar14 + 0x9af80c0);
            if (((*(uint *)(iVar14 + 0x9af80a4) & 0x100) == 0) ||
               ((*(uint *)(iVar14 + 0x9af80a4) & 0x200) == 0)) {
              iVar20 = ((*(int *)(iVar14 + 0x9af8098) * iVar9) / 0x7f) * (int)*psVar13;
              iVar10 = ((*(int *)(iVar14 + 0x9af8094) * iVar9) / 0x7f) * (int)*psVar13;
              iVar20 = iVar20 + ((uint)(iVar20 >> 0x1f) >> 0x14);
              iVar10 = iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x14);
            }
            else {
              iVar10 = ((*(int *)(iVar14 + 0x9af8094) * iVar9) / 0x7f) * (int)psVar4[iVar16 * 2];
              iVar20 = ((*(int *)(iVar14 + 0x9af8098) * iVar9) / 0x7f) *
                       (int)(psVar4 + iVar16 * 2)[1];
              iVar10 = iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x14);
              iVar20 = iVar20 + ((uint)(iVar20 >> 0x1f) >> 0x14);
            }
            psVar8 = (short *)(&DAT_09af728c + local_40 + iVar16 * 4);
            iVar10 = (int)*psVar8 + (iVar10 >> 0xc);
            iVar9 = (int)psVar8[1] + (iVar20 >> 0xc);
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            if (0x7ffe < iVar9) {
              iVar9 = 0x7fff;
            }
            iVar16 = iVar16 + 1;
            if (iVar10 < -0x8000) {
              iVar10 = -0x8000;
            }
            if (iVar9 < -0x8000) {
              iVar9 = -0x8000;
            }
            *psVar8 = (short)iVar10;
            psVar13 = psVar13 + 1;
            psVar8[1] = (short)iVar9;
          } while (iVar16 < 0x1c);
        }
        iVar19 = iVar19 + 1;
        piVar18 = piVar18 + 0x10;
        piVar15 = piVar15 + 0x10;
      } while (iVar19 < 8);
      local_54 = local_54 + 1;
      local_40 = local_40 + 0x70;
      local_58 = local_58 | local_50;
    } while (local_54 < 0x10);
    if (local_58 == 0) {
      sceKernelWaitEventFlag(DAT_09af84a0,1,0x20,0,0);
    }
    sceAudioOutputBlocking(*(undefined4 *)(param_2 + 4),0x8000,&DAT_09af728c + local_5c * 0x700);
    local_5c = local_5c ^ 1;
  } while( true );
}

