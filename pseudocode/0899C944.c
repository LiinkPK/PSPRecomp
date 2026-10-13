/* Entry 0x0899C944 | file offset 0x0019991C | FUN_0899c944 | bytes 1744 */

undefined4 FUN_0899c944(int param_1,undefined4 *param_2,uint *param_3)

{
  short sVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar7 = (uint *)*param_2;
  if (param_3 < puVar7 + 0x22) {
    return 0;
  }
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 == (int *)0x0) {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar15 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar5 = *piVar4;
    iVar15 = piVar4[1];
  }
  uVar6 = *(uint *)(param_1 + 4);
  if (uVar6 == 0) {
    puVar17 = puVar7;
    if (iVar5 != 0) {
      uVar2 = *(ushort *)(iVar5 + 4);
      *puVar7 = *(ushort *)(iVar5 + 6) | 0xc2000000;
      puVar7[1] = uVar2 | 0xc3000000;
      uVar6 = *(uint *)(iVar5 + *(int *)(iVar5 + 0x18));
      sVar1 = *(short *)(param_1 + 0x1c);
      puVar17 = puVar7 + 5;
      puVar7[4] = (0x1f - LZCOUNT((uint)*(ushort *)(iVar5 + 10))) * 0x100 | 0xb8000000U |
                  0x1fU - LZCOUNT((uint)*(ushort *)(iVar5 + 8));
      puVar7[2] = uVar6 & 0xffffff | 0xa0000000;
      puVar7[3] = ((uVar6 & 0xfffffff) >> 0x18) << 0x10 | 0xa8000000 | (int)sVar1;
      *param_2 = puVar17;
    }
    *puVar17 = 0xcb000000;
    *param_2 = puVar17 + 1;
    if (iVar15 == 0) {
      return 1;
    }
    puVar17[1] = *(int *)(param_1 + 0x6c) << 0x10 | *(int *)(param_1 + 0x68) << 8 |
                 *(int *)(param_1 + 100) << 2 | (uint)*(ushort *)(iVar15 + 4) | 0xc5000000;
    iVar5 = *(int *)(iVar15 + 0x18);
    sVar1 = *(short *)(param_1 + 0x1e);
    *param_2 = puVar17 + 5;
    uVar6 = *(uint *)(iVar15 + iVar5);
    puVar17[4] = (int)sVar1 | 0xc4000000;
    puVar17[2] = uVar6 & 0xffffff | 0xb0000000;
    puVar17[3] = ((uVar6 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
    return 1;
  }
  if (iVar5 == 0) goto LAB_0899ccec;
  uVar13 = (uint)*(ushort *)(iVar5 + 8);
  if (*(ushort *)(iVar5 + 0xc) == 0) {
    trap(7);
  }
  uVar8 = (uint)*(ushort *)(iVar5 + 0x2e);
  iVar12 = 1 << (0x20U - LZCOUNT(*(ushort *)(iVar5 + 10) - 1) & 0x1f);
  iVar14 = 1 << (0x20U - LZCOUNT(uVar13 - 1) & 0x1f);
  iVar16 = iVar5 + *(int *)(iVar5 + 0x18);
  uVar10 = (uint)*(ushort *)(iVar5 + 0x2a);
  iVar19 = *(int *)(param_1 + 0x44) % (int)uVar8;
  uVar18 = ((uint)*(ushort *)(iVar5 + 0xe) << 3) / (uint)*(ushort *)(iVar5 + 0xc) - 1;
  if (iVar19 < 0) {
    iVar19 = iVar19 + uVar8;
  }
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(ushort *)(iVar5 + 4);
    *puVar7 = (uVar10 - 1) * 0x10000 | ((uVar6 & 7) >> 2) << 8 | (uint)*(ushort *)(iVar5 + 6) |
              0xc2000000;
    puVar17 = (uint *)(iVar16 + iVar19 * uVar10 * 4);
    puVar7[1] = uVar2 | 0xc3000000;
    *param_2 = puVar7 + 2;
    if (uVar10 == 0) goto LAB_0899ccd8;
    sVar1 = *(short *)(iVar5 + 0x28);
    uVar11 = 0xb8000000;
    uVar9 = 0xa8000000;
    uVar8 = 0xa0000000;
    uVar6 = *puVar17;
    while( true ) {
      puVar7 = (uint *)*param_2;
      *puVar7 = uVar8 | uVar6 & 0xffffff;
      puVar7[2] = uVar11 | (0x1f - LZCOUNT(iVar12)) * 0x100 | 0x1fU - LZCOUNT(iVar14);
      puVar7[1] = uVar9 | ((uVar6 & 0xfffffff) >> 0x18) << 0x10 | uVar13 + uVar18 & ~uVar18;
      uVar10 = uVar10 - 1;
      uVar8 = uVar8 + 0x1000000;
      uVar9 = uVar9 + 0x1000000;
      uVar11 = uVar11 + 0x1000000;
      puVar17 = puVar17 + 1;
      *param_2 = puVar7 + 3;
      if (sVar1 == 1) {
        uVar13 = (uVar13 + 1) / 2;
        iVar14 = (iVar14 + 1) / 2;
        iVar12 = (iVar12 + 1) / 2;
      }
      if (uVar10 == 0) break;
      uVar6 = *puVar17;
    }
    puVar3 = (undefined4 *)*param_2;
  }
  else {
    uVar9 = *(uint *)(iVar19 * uVar10 * 4 + iVar16);
    uVar18 = uVar13 + uVar18 & ~uVar18;
    uVar2 = *(ushort *)(iVar5 + 4);
    uVar13 = (0x1f - LZCOUNT(iVar12)) * 0x100;
    *puVar7 = ((uVar6 & 0xf) >> 3) << 8 | 0x10000 | (uint)*(ushort *)(iVar5 + 6) | 0xc2000000;
    puVar7[1] = uVar2 | 0xc3000000;
    puVar7[3] = ((uVar9 & 0xfffffff) >> 0x18) << 0x10 | 0xa8000000 | uVar18;
    puVar7[2] = uVar9 & 0xffffff | 0xa0000000;
    puVar7[4] = uVar13 | 0xb8000000 | 0x1fU - LZCOUNT(iVar14);
    iVar5 = *(int *)(param_1 + 0x48);
    *param_2 = puVar7 + 5;
    if (uVar8 == 0) {
      trap(7);
    }
    iVar5 = iVar5 % (int)uVar8;
    *param_2 = puVar7 + 8;
    puVar7[7] = uVar13 | 0xb9000000 | 0x1fU - LZCOUNT(iVar14);
    if (iVar5 < 0) {
      iVar5 = iVar5 + uVar8;
    }
    uVar6 = *(uint *)(iVar5 * uVar10 * 4 + iVar16);
    puVar7[5] = uVar6 & 0xffffff | 0xa1000000;
    puVar7[6] = ((uVar6 & 0xfffffff) >> 0x18) << 0x10 | 0xa9000000 | uVar18;
LAB_0899ccd8:
    puVar3 = (undefined4 *)*param_2;
  }
  *puVar3 = 0xcb000000;
  *param_2 = puVar3 + 1;
LAB_0899ccec:
  if (iVar15 == 0) {
    return 1;
  }
  uVar2 = *(ushort *)(iVar15 + 4);
  puVar7 = (uint *)*param_2;
  *puVar7 = *(int *)(param_1 + 0x6c) << 0x10 | *(int *)(param_1 + 0x68) << 8 |
            *(int *)(param_1 + 100) << 2 | (uint)uVar2 | 0xc5000000;
  uVar6 = (uint)*(ushort *)(iVar15 + 0x2e);
  iVar5 = *(int *)(param_1 + 0x4c);
  *param_2 = puVar7 + 1;
  if (uVar6 == 0) {
    trap(7);
  }
  iVar5 = iVar5 % (int)uVar6;
  uVar13 = (uint)*(ushort *)(iVar15 + 0x2a);
  iVar19 = iVar15 + *(int *)(iVar15 + 0x18);
  if (iVar5 < 0) {
    iVar5 = iVar5 + uVar6;
  }
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    uVar10 = (uint)*(short *)(param_1 + 0x1e);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x50) % (int)uVar6;
    uVar10 = (uint)(*(ushort *)(iVar15 + 8) >> 4);
    if (uVar2 == 3) {
      uVar10 = uVar10 << 1;
    }
    if (uVar6 == 0) {
      trap(7);
    }
    if (iVar12 < 0) {
      iVar12 = iVar12 + uVar6;
    }
    if ((iVar12 != iVar5 + 1 || uVar13 != 1) || (0x10 < uVar10)) {
      puVar7 = (uint *)*param_2;
      uVar8 = *(uint *)(iVar5 * uVar13 * 4 + iVar19);
      uVar6 = *(int *)(iVar12 * uVar13 * 4 + iVar19) + uVar10 * -0x20;
      *puVar7 = uVar6 & 0xffffff | 0xb0000000;
      *param_2 = puVar7 + 6;
      puVar7[1] = ((uVar6 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
      puVar7[2] = uVar10 << 1 | 0xc4000000;
      puVar7[3] = uVar8 & 0xffffff | 0xb0000000;
      puVar7[4] = ((uVar8 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
      puVar7[5] = uVar10 | 0xc4000000;
      return 1;
    }
    uVar10 = uVar10 << 1;
  }
  uVar6 = *(uint *)(iVar5 * uVar13 * 4 + iVar19);
  *param_2 = puVar7 + 4;
  puVar7[1] = uVar6 & 0xffffff | 0xb0000000;
  puVar7[2] = ((uVar6 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
  puVar7[3] = uVar10 | 0xc4000000;
  return 1;
}

