/* Entry 0x089BD8CC | file offset 0x001BA8A4 | FUN_089bd8cc | bytes 2980 */

int FUN_089bd8cc(int param_1,undefined4 *param_2,uint *param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  int iVar25;
  
  puVar19 = (uint *)0x0;
  puVar18 = (uint *)0x0;
  if (((param_2 != (undefined4 *)0x0) && (puVar18 = (uint *)*param_2, puVar18 != (uint *)0x0)) &&
     (puVar19 = (uint *)0xfffffffc, param_3 != (uint *)0x0)) {
    puVar19 = (uint *)((*param_3 & 0xfffffffc) + (int)puVar18);
  }
  puVar13 = puVar18;
  if ((param_4 & 1) == 0) goto LAB_089bd964;
  if (param_1 == 0) {
    if (DAT_089daf8c == 0) {
      DAT_089daf8c = -0x5f625080;
      DAT_089daf90 = 0xa8080008;
      sceKernelDcacheWritebackRange(&DAT_089daf80,0x40);
    }
    puVar13 = puVar18 + 2;
    if (puVar13 <= puVar19) {
      *puVar18 = 0x10080000;
      puVar18[1] = 0xa9daf84;
    }
    goto LAB_089bd964;
  }
  if ((int)param_4 < 0) {
    sVar5 = *(short *)(param_1 + 2);
  }
  else {
    uVar23 = *(uint *)(param_1 + 4);
    puVar13 = puVar18 + 2;
    if (uVar23 != 0) {
      if (puVar13 <= puVar19) {
        *puVar18 = ((uVar23 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
        puVar18[1] = uVar23 & 0xffffff | 0xa000000;
      }
      goto LAB_089bd964;
    }
    sVar5 = *(short *)(param_1 + 2);
  }
  if (sVar5 == 0) {
    iVar8 = FUN_089bcda8(param_1,1,0);
    if (((iVar8 != 0) || (iVar8 = *(int *)(param_1 + 0xc), puVar17 = puVar18, iVar8 != 0)) &&
       (puVar17 = puVar18 + 6, puVar17 <= puVar19)) {
      bVar4 = *(byte *)(iVar8 + 0x16);
      uVar6 = *(ushort *)(iVar8 + 0x14);
      uVar9 = **(uint **)(iVar8 + 0x20);
      puVar18[1] = *(ushort *)(iVar8 + 0x10) | 0xc3000000;
      *puVar18 = bVar4 | 0xc2000000;
      uVar7 = *(ushort *)(iVar8 + 0x12);
      uVar23 = *(byte *)(iVar8 + 0x18) - 1;
      puVar18[2] = uVar9 & 0xffffff | 0xa0000000;
      puVar18[3] = ((uVar9 & 0xfffffff) >> 0x18) << 0x10 | 0xa8000000 | uVar7 + uVar23 & ~uVar23;
      puVar18[4] = (0x20 - LZCOUNT(uVar6 - 1)) * 0x100 | 0xb8000000U | 0x20U - LZCOUNT(uVar7 - 1);
      puVar18[5] = 0xcb000000;
    }
    iVar8 = FUN_089bcdc0(param_1,1,0);
    if (((iVar8 != 0) || (iVar8 = *(int *)(param_1 + 0x10), puVar13 = puVar17, iVar8 != 0)) &&
       (puVar13 = puVar17 + 4, puVar13 <= puVar19)) {
      uVar23 = **(uint **)(iVar8 + 0x20);
      *puVar17 = (uint)*(byte *)(param_1 + 0x1f) << 0x10 | (uint)*(byte *)(param_1 + 0x1e) << 8 |
                 (uint)*(byte *)(param_1 + 0x1d) << 2 | (uint)*(ushort *)(iVar8 + 0x10) | 0xc5000000
      ;
      puVar17[3] = *(byte *)(iVar8 + 0x1a) | 0xc4000000;
      puVar17[1] = uVar23 & 0xffffff | 0xb0000000;
      puVar17[2] = ((uVar23 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
    }
    goto LAB_089bd964;
  }
  iVar8 = FUN_089bcda8(param_1,1,0);
  if ((iVar8 != 0) || (iVar8 = *(int *)(param_1 + 0xc), puVar17 = puVar18, iVar8 != 0)) {
    uVar23 = (uint)*(char *)(param_1 + 0x19);
    uVar20 = (uint)*(ushort *)(iVar8 + 0x12);
    uVar22 = *(byte *)(iVar8 + 0x18) - 1;
    uVar21 = (uint)*(ushort *)(iVar8 + 0x14);
    uVar12 = (uint)*(ushort *)(iVar8 + 0x24);
    uVar9 = (uint)*(ushort *)(iVar8 + 0x26);
    if ((int)uVar23 < 0) {
      uVar23 = (uint)*(byte *)(param_1 + 0x18);
    }
    else if ((int)(uint)*(byte *)(param_1 + 0x18) < (int)uVar23) {
      uVar23 = (uint)*(byte *)(param_1 + 0x18);
    }
    iVar11 = *(int *)(param_1 + 0x14) + uVar23 * 0x30;
    iVar14 = 0;
    iVar25 = 0;
    if (iVar11 != 0) {
      iVar14 = (int)*(short *)(iVar11 + 0x2a) % (int)uVar9;
      if (uVar9 == 0) {
        trap(7);
      }
      iVar25 = (int)*(short *)(iVar11 + 0x28) % (int)uVar9;
      if (uVar9 == 0) {
        trap(7);
      }
      if (iVar14 < 0) {
        iVar14 = iVar14 + uVar9;
      }
      if (iVar25 < 0) {
        iVar25 = iVar25 + uVar9;
      }
    }
    if ((*(ushort *)(param_1 + 0x1a) & 1) == 0) {
      puVar17 = puVar18 + uVar12 * 3 + 3;
      if (puVar18 + uVar12 * 3 + 3 <= puVar19) {
        uVar6 = *(ushort *)(iVar8 + 0x10);
        iVar14 = *(int *)(iVar8 + 0x20);
        *puVar18 = (uVar12 - 1) * 0x10000 | ((*(ushort *)(param_1 + 2) & 7) >> 2) << 8 |
                   (uint)*(byte *)(iVar8 + 0x16) | 0xc2000000;
        puVar17 = (uint *)(iVar14 + iVar25 * uVar12 * 4);
        puVar13 = puVar18 + 2;
        puVar18[1] = uVar6 | 0xc3000000;
        uVar23 = 0;
        if (uVar12 != 0) {
          uVar9 = *puVar17;
          while( true ) {
            *puVar13 = (uVar23 + 0xa0) * 0x1000000 | uVar9 & 0xffffff;
            puVar13[1] = (uVar23 + 0xa8) * 0x1000000 | ((uVar9 & 0xfffffff) >> 0x18) << 0x10 |
                         ~uVar22 & uVar20 + uVar22;
            puVar13[2] = (uVar23 + 0xb8) * 0x1000000 | (0x20 - LZCOUNT(uVar21 - 1)) * 0x100 |
                         0x20U - LZCOUNT(uVar20 - 1);
            uVar23 = uVar23 + 1;
            puVar17 = puVar17 + 1;
            puVar13 = puVar13 + 3;
            if (*(char *)(iVar8 + 0x28) == '\x01') {
              uVar20 = (uVar20 + 1) / 2;
              uVar21 = (uVar21 + 1) / 2;
            }
            if (uVar12 == uVar23) break;
            uVar9 = *puVar17;
          }
        }
LAB_089be0b0:
        *puVar13 = 0xcb000000;
        puVar17 = puVar13 + 1;
      }
    }
    else {
      puVar17 = puVar18 + 9;
      if (puVar18 + 9 <= puVar19) {
        uVar15 = *(uint *)(iVar25 * uVar12 * 4 + *(int *)(iVar8 + 0x20));
        uVar16 = *(uint *)(iVar14 * uVar12 * 4 + *(int *)(iVar8 + 0x20));
        uVar9 = uVar20 + uVar22 & ~uVar22;
        uVar6 = *(ushort *)(iVar8 + 0x10);
        uVar12 = 0x20 - LZCOUNT(uVar20 - 1);
        uVar23 = (0x20 - LZCOUNT(uVar21 - 1)) * 0x100;
        puVar13 = puVar18 + 8;
        *puVar18 = ((*(ushort *)(param_1 + 2) & 0xf) >> 3) << 8 | 0x10000 |
                   (uint)*(byte *)(iVar8 + 0x16) | 0xc2000000;
        puVar18[1] = uVar6 | 0xc3000000;
        puVar18[2] = uVar15 & 0xffffff | 0xa0000000;
        puVar18[3] = ((uVar15 & 0xfffffff) >> 0x18) << 0x10 | 0xa8000000 | uVar9;
        puVar18[4] = uVar23 | 0xb8000000 | uVar12;
        puVar18[5] = uVar16 & 0xffffff | 0xa1000000;
        puVar18[6] = uVar9 | ((uVar16 & 0xfffffff) >> 0x18) << 0x10 | 0xa9000000;
        puVar18[7] = uVar23 | 0xb9000000 | uVar12;
        goto LAB_089be0b0;
      }
    }
  }
  iVar8 = FUN_089bcdc0(param_1,1,0);
  if ((iVar8 == 0) && (iVar8 = *(int *)(param_1 + 0x10), puVar13 = puVar17, iVar8 == 0))
  goto LAB_089bd964;
  uVar23 = (uint)*(char *)(param_1 + 0x19);
  uVar12 = (uint)*(ushort *)(iVar8 + 0x24);
  uVar9 = (uint)*(ushort *)(iVar8 + 0x26);
  if ((int)uVar23 < 0) {
    uVar23 = (uint)*(byte *)(param_1 + 0x18);
  }
  else if ((int)(uint)*(byte *)(param_1 + 0x18) < (int)uVar23) {
    uVar23 = (uint)*(byte *)(param_1 + 0x18);
  }
  iVar11 = *(int *)(param_1 + 0x14) + uVar23 * 0x30;
  iVar25 = 0;
  iVar14 = 0;
  if (iVar11 != 0) {
    iVar25 = (int)*(short *)(iVar11 + 0x2e) % (int)uVar9;
    if (uVar9 == 0) {
      trap(7);
    }
    iVar14 = (int)*(short *)(iVar11 + 0x2c) % (int)uVar9;
    if (uVar9 == 0) {
      trap(7);
    }
    if (iVar25 < 0) {
      iVar25 = iVar25 + uVar9;
    }
    if (iVar14 < 0) {
      iVar14 = iVar14 + uVar9;
    }
  }
  if ((*(ushort *)(param_1 + 0x1a) & 1) == 0) {
    puVar13 = puVar17 + 4;
    if (puVar19 < puVar17 + 4) goto LAB_089bd964;
    bVar4 = *(byte *)(iVar8 + 0x1a);
    uVar9 = (uint)*(ushort *)(iVar8 + 0x10);
    puVar13 = puVar17 + 3;
    uVar23 = *(uint *)(iVar14 * uVar12 * 4 + *(int *)(iVar8 + 0x20));
    *puVar17 = uVar23 & 0xffffff | 0xb0000000;
    puVar17[1] = ((uVar23 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
    puVar17[2] = bVar4 | 0xc4000000;
  }
  else {
    puVar13 = puVar17 + 7;
    if (puVar19 < puVar17 + 7) goto LAB_089bd964;
    uVar9 = (uint)*(ushort *)(iVar8 + 0x10);
    uVar23 = (uint)(*(ushort *)(iVar8 + 0x12) >> 4);
    if (uVar9 == 3) {
      uVar23 = uVar23 << 1;
    }
    if ((iVar25 == iVar14 + 1) && (uVar12 == 1)) {
      if (uVar23 < 0x11) {
        uVar12 = *(uint *)(iVar14 * 4 + *(int *)(iVar8 + 0x20));
        *puVar17 = uVar12 & 0xffffff | 0xb0000000;
        puVar13 = puVar17 + 3;
        iVar8 = 3;
        puVar17[1] = ((uVar12 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
        puVar17[2] = uVar23 << 1 | 0xc4000000;
        do {
          iVar8 = iVar8 + -1;
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        } while (iVar8 != 0);
        goto LAB_089bdf60;
      }
      iVar8 = *(int *)(iVar8 + 0x20);
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x20);
    }
    uVar20 = *(uint *)(iVar14 * uVar12 * 4 + iVar8);
    uVar12 = *(int *)(iVar25 * uVar12 * 4 + iVar8) + uVar23 * -0x20;
    puVar13 = puVar17 + 6;
    *puVar17 = uVar12 & 0xffffff | 0xb0000000;
    puVar17[1] = ((uVar12 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
    puVar17[2] = uVar23 << 1 | 0xc4000000;
    puVar17[3] = uVar20 & 0xffffff | 0xb0000000;
    puVar17[4] = ((uVar20 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
    puVar17[5] = uVar23 | 0xc4000000;
  }
LAB_089bdf60:
  *puVar13 = (uint)*(byte *)(param_1 + 0x1f) << 0x10 | (uint)*(byte *)(param_1 + 0x1e) << 8 |
             (uint)*(byte *)(param_1 + 0x1d) << 2 | uVar9 | 0xc5000000;
  puVar13 = puVar13 + 1;
LAB_089bd964:
  if (((param_4 & 2) != 0) && (param_1 != 0)) {
    uVar6 = *(ushort *)(param_1 + 0x1a);
    if (uVar6 != 0) {
      puVar17 = puVar13;
      if (((uVar6 & 2) != 0) && (puVar17 = puVar13 + 1, puVar17 <= puVar19)) {
        if ((uVar6 & 1) == 0) {
          *puVar13 = 0xc8000000;
        }
        else {
          uVar12 = (uint)*(char *)(param_1 + 0x19);
          uVar9 = (uint)*(byte *)(param_1 + 0x18);
          uVar23 = uVar9;
          if ((-1 < (int)uVar12) && (uVar23 = uVar12, (int)uVar9 < (int)uVar12)) {
            uVar23 = uVar9;
          }
          iVar8 = *(int *)(param_1 + 0x14) + uVar23 * 0x30;
          fVar24 = 0.0;
          if (iVar8 != 0) {
            fVar24 = *(float *)(iVar8 + 0x24) * 16.0;
          }
          uVar9 = (uint)fVar24;
          uVar23 = 0x7f;
          if ((int)uVar9 < 0x80) {
            uVar23 = 0x80;
            if (-0x81 < (int)uVar9) {
              uVar23 = uVar9 & 0xff;
            }
          }
          *puVar13 = uVar23 << 0x10 | 0xc8000001;
        }
      }
      puVar13 = puVar17;
      if (((uVar6 & 4) != 0) && (puVar13 = puVar17 + 4, puVar13 <= puVar19)) {
        puVar10 = (uint *)(param_1 + 0x20);
        if ((*(ushort *)(param_1 + 2) & 0x20) == 0) {
          puVar10 = &DAT_089d2770;
        }
        uVar12 = puVar10[2];
        uVar23 = puVar10[3];
        uVar9 = *puVar10;
        puVar17[1] = puVar10[1] >> 8 | 0x4b000000;
        puVar17[3] = uVar23 >> 8 | 0x49000000;
        *puVar17 = uVar9 >> 8 | 0x4a000000;
        puVar17[2] = uVar12 >> 8 | 0x48000000;
      }
      puVar17 = puVar13;
      if (((uVar6 & 0x100) != 0) && (puVar17 = puVar13 + 3, puVar17 <= puVar19)) {
        iVar8 = (uint)*(byte *)(param_1 + 0x30) * 4;
        cVar1 = (&DAT_089d2748)[iVar8];
        cVar2 = (&DAT_089d274a)[iVar8];
        cVar3 = (&DAT_089d2749)[iVar8];
        puVar13[2] = (int)(char)(&DAT_089d274b)[iVar8] & 0xffffffU | 0xe1000000;
        *puVar13 = (int)cVar1 << 8 | (int)cVar2 << 4 | (int)cVar3 | 0xdf000000;
        puVar13[1] = 0xe0ffffff;
      }
      puVar13 = puVar17;
      if (((uVar6 & 0x200) != 0) && (puVar13 = puVar17 + 1, puVar13 <= puVar19)) {
        *puVar17 = *(ushort *)(param_1 + 0x32) | 0xc9000000;
      }
      puVar17 = puVar13;
      if (((uVar6 & 0x400) != 0) && (puVar17 = puVar13 + 1, puVar17 <= puVar19)) {
        *puVar13 = CONCAT11(*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x35)) |
                   0xc6000000;
      }
      puVar13 = puVar17;
      if (((uVar6 & 0x800) != 0) && (puVar13 = puVar17 + 1, puVar13 <= puVar19)) {
        *puVar17 = *(ushort *)(param_1 + 0x36) | 0xc7000000;
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    if (puVar19 < puVar13) {
      return 0;
    }
    *param_2 = puVar13;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (int)puVar19 - (int)puVar13;
  }
  return (int)puVar13 - (int)puVar18;
}

