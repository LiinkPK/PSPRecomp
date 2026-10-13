/* Entry 0x089A7104 | file offset 0x001A40DC | FUN_089a7104 | bytes 864 */

undefined1 * FUN_089a7104(float *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  uVar4 = *(ushort *)(param_1 + 0x85);
  puVar7 = (undefined1 *)param_1[0x80];
  iVar10 = (uint)*(ushort *)((int)param_1 + 0x216) << 4;
  puVar5 = &DAT_089d1cf0;
  puVar8 = puVar7;
  do {
    puVar9 = puVar8;
    uVar1 = *puVar5;
    puVar8 = puVar9 + 1;
    puVar5 = puVar5 + 1;
    *puVar9 = uVar1;
  } while (puVar7 + 0x18 != puVar8);
  if (*(char *)((int)param_1 + 0x21d) == '\0') {
    bVar2 = *(byte *)((int)param_1 + 0x20d);
  }
  else {
    puVar9[-0x11] = 0x41;
    puVar9[-0x10] = 0x56;
    puVar9[-0xf] = 0x49;
    puVar9[-0xe] = 0x31;
    bVar2 = *(byte *)((int)param_1 + 0x20d);
  }
  uVar14 = (uint)bVar2;
  bVar3 = *(byte *)((int)param_1 + 0x21e);
  fVar6 = *param_1;
  uVar13 = 0;
  if (0x80 < uVar14) {
    uVar14 = uVar14 * 2 - 0x80;
  }
  *puVar8 = 0;
  iVar12 = 0;
  pbVar11 = &DAT_089d1ecc;
  puVar8 = puVar9 + 2;
  do {
    puVar5 = puVar8;
    iVar15 = (int)(*pbVar11 * uVar14 + 0xc0) >> 7;
    if (0xff < iVar15) {
      iVar15 = 0xff;
    }
    *puVar5 = (char)iVar15;
    if (fVar6 == 0.0 || bVar2 != bVar3) {
      param_1[(uVar13 & 1) * 4 + (uVar13 & 0xfffffff8) + ((uVar13 & 7) >> 1)] =
           (0.587 / (float)iVar15) *
           *(float *)("/cB8Bcccccccccccccccccccccccccccccccccccccccccccccccccc" +
                     (uVar13 & 7) * 4 + 0x37) *
           *(float *)("/cB8Bcccccccccccccccccccccccccccccccccccccccccccccccccc" +
                     ((int)uVar13 >> 3) * 4 + 0x37);
      if (iVar12 == 0) {
        uVar13 = 8;
      }
      else {
        uVar13 = uVar13 + (int)(char)(&DAT_089d1f6b)[iVar12] / 2;
      }
    }
    iVar12 = iVar12 + 1;
    pbVar11 = pbVar11 + 1;
    puVar8 = puVar5 + 1;
  } while (iVar12 < 0x40);
  bVar2 = *(byte *)((int)param_1 + 0x20d);
  uVar14 = (uint)bVar2;
  bVar3 = *(byte *)((int)param_1 + 0x21e);
  fVar6 = param_1[0x40];
  uVar13 = 0;
  if (0x80 < uVar14) {
    uVar14 = uVar14 * 2 - 0x80;
  }
  puVar5[1] = 1;
  iVar12 = 0;
  pbVar11 = &DAT_089d1f0c;
  puVar8 = puVar5 + 2;
  do {
    puVar5 = puVar8;
    iVar15 = (int)(*pbVar11 * uVar14 + 0xc0) >> 7;
    if (0xff < iVar15) {
      iVar15 = 0xff;
    }
    *puVar5 = (char)iVar15;
    puVar8 = puVar5 + 1;
    if (fVar6 == 0.0 || bVar2 != bVar3) {
      param_1[(uVar13 & 1) * 4 + (uVar13 & 0xfffffff8) + ((uVar13 & 7) >> 1) + 0x40] =
           (0.5 / (float)iVar15) *
           *(float *)("/cB8Bcccccccccccccccccccccccccccccccccccccccccccccccccc" +
                     (uVar13 & 7) * 4 + 0x37) *
           *(float *)("/cB8Bcccccccccccccccccccccccccccccccccccccccccccccccccc" +
                     ((int)uVar13 >> 3) * 4 + 0x37);
      if (iVar12 == 0) {
        uVar13 = 8;
      }
      else {
        uVar13 = uVar13 + (int)(char)(&DAT_089d1f6b)[iVar12] / 2;
      }
    }
    iVar12 = iVar12 + 1;
    pbVar11 = pbVar11 + 1;
  } while (iVar12 < 0x40);
  *(undefined2 *)((int)param_1 + 0x212) = 0;
  puVar7 = &DAT_089d1d08;
  *(undefined2 *)(param_1 + 0x84) = 0;
  *(short *)((int)param_1 + 0x20e) = (short)(int)(*param_1 * 1744.4634);
  if (*(char *)((int)param_1 + 0x21d) == '\0') {
    do {
      puVar9 = puVar8;
      uVar1 = *puVar7;
      puVar8 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      *puVar9 = uVar1;
    } while (puVar5 + 0x1aa != puVar8);
  }
  else {
    puVar7 = &DAT_089d1eac;
    do {
      puVar9 = puVar8;
      uVar1 = *puVar7;
      puVar8 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      *puVar9 = uVar1;
    } while (puVar5 + 6 != puVar8);
  }
  *puVar8 = (char)((uint)iVar10 >> 8);
  puVar5 = &DAT_089d1eb4;
  puVar9[2] = (char)iVar10;
  puVar9[3] = (char)(((uint)uVar4 << 4) >> 8);
  puVar9[4] = (char)((uint)uVar4 << 4);
  puVar8 = puVar9 + 5;
  do {
    uVar1 = *puVar5;
    puVar7 = puVar8 + 1;
    puVar5 = puVar5 + 1;
    *puVar8 = uVar1;
    puVar8 = puVar7;
  } while (puVar9 + 0x1d != puVar7);
  return puVar7;
}

