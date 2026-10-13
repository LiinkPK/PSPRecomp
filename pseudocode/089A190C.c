/* Entry 0x089A190C | file offset 0x0019E8E4 | FUN_089a190c | bytes 852 */

void FUN_089a190c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  uint *puVar17;
  
  uVar1 = (param_2 & 3) >> 1;
  uVar2 = (param_2 & 7) >> 2;
  if ((param_2 & 0x10) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0xb4);
    uVar10 = *(undefined4 *)(param_1 + 0xac);
    uVar9 = *(undefined4 *)(param_1 + 0xb8);
    uVar14 = *(undefined4 *)(param_1 + 0xb0);
    iVar7 = *(int *)(param_1 + 0x9c);
    iVar5 = *(int *)(param_1 + 0xd0);
    uVar8 = *(uint *)(param_1 + 0xcc);
    uVar4 = iVar5 << 0x18;
    uVar16 = *(undefined4 *)(param_1 + 0xd4);
    if (((iVar7 == 3) || (uVar4 = iVar5 << 0x1f, iVar7 == 1)) || (uVar4 = iVar5 << 0x1c, iVar7 == 2)
       ) {
      uVar8 = uVar8 | uVar4;
    }
    puVar13 = *(uint **)(param_1 + 8);
    puVar17 = puVar13 + 2;
    *puVar13 = (((uint)(puVar13 + 8) & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
    puVar13[1] = (uint)(puVar13 + 8) & 0xffffff | 0x8000000;
    puVar13[2] = uVar8;
    *(short *)(puVar13 + 6) = (short)uVar6 + 1;
    puVar13[5] = uVar8;
    *(short *)((int)puVar13 + 0x1a) = (short)uVar9 + 1;
    uVar15 = (undefined2)uVar16;
    *(undefined2 *)(puVar13 + 7) = uVar15;
    *(uint **)(param_1 + 8) = puVar13 + 10;
    puVar13[8] = uVar2 << 10 | uVar1 << 9 | (param_2 & 1) << 8 | 0xd3000001;
    puVar13[9] = 0x1280011c;
    *(short *)(puVar13 + 3) = (short)uVar10;
    *(short *)((int)puVar13 + 0xe) = (short)uVar14;
    *(undefined2 *)(puVar13 + 4) = uVar15;
    if (puVar17 != (uint *)0x0) {
      puVar13[10] = (((uint)puVar17 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
      puVar13[0xb] = (uint)puVar17 & 0xffffff | 0x1000000;
      *(uint **)(param_1 + 8) = puVar13 + 0xc;
    }
    puVar17 = *(uint **)(param_1 + 8);
    uVar4 = 0x4060002;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x9c);
    iVar7 = *(int *)(param_1 + 0xd0);
    uVar8 = *(uint *)(param_1 + 0xcc);
    uVar4 = iVar7 << 0x18;
    if (((iVar5 == 3) || (uVar4 = iVar7 << 0x1f, iVar5 == 1)) || (uVar4 = iVar7 << 0x1c, iVar5 == 2)
       ) {
      uVar8 = uVar8 | uVar4;
    }
    uVar15 = (undefined2)*(undefined4 *)(param_1 + 0xd4);
    if (iVar5 == 3) {
      puVar13 = *(uint **)(param_1 + 8);
      puVar17 = puVar13 + 0x62;
      puVar13[1] = (uint)puVar17 & 0xffffff | 0x8000000;
      uVar4 = 0x20;
      iVar5 = 0;
      *(uint **)(param_1 + 8) = puVar17;
      *puVar13 = (((uint)puVar17 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
      puVar13 = puVar13 + 2;
      puVar17 = puVar13;
      do {
        iVar7 = iVar5 / 2;
        iVar12 = iVar5 % 2;
        iVar5 = iVar5 + 1;
        sVar3 = (short)iVar12;
        *(short *)(puVar17 + 1) = ((short)iVar7 + sVar3) * 0x20;
        *(short *)((int)puVar17 + 6) = sVar3 * 0x110;
        *puVar17 = uVar8;
        *(undefined2 *)(puVar17 + 2) = uVar15;
        puVar17 = puVar17 + 3;
      } while (iVar5 < 0x20);
    }
    else {
      puVar11 = *(uint **)(param_1 + 8);
      puVar17 = puVar11 + 0x32;
      *(uint **)(param_1 + 8) = puVar17;
      uVar4 = 0x10;
      *puVar11 = (((uint)puVar17 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
      puVar13 = puVar11 + 2;
      puVar11[1] = (uint)puVar17 & 0xffffff | 0x8000000;
      iVar5 = 0;
      puVar17 = puVar13;
      do {
        iVar7 = iVar5 / 2;
        iVar12 = iVar5 % 2;
        iVar5 = iVar5 + 1;
        sVar3 = (short)iVar12;
        *(short *)(puVar17 + 1) = ((short)iVar7 + sVar3) * 0x40;
        *(short *)((int)puVar17 + 6) = sVar3 * 0x110;
        *puVar17 = uVar8;
        *(undefined2 *)(puVar17 + 2) = uVar15;
        puVar17 = puVar17 + 3;
      } while (iVar5 < 0x10);
    }
    puVar17 = *(uint **)(param_1 + 8);
    *puVar17 = uVar2 << 10 | uVar1 << 9 | (param_2 & 1) << 8 | 0xd3000001;
    *(uint **)(param_1 + 8) = puVar17 + 2;
    puVar17[1] = 0x1280011c;
    if (puVar13 != (uint *)0x0) {
      puVar17[2] = (((uint)puVar13 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
      puVar17[3] = (uint)puVar13 & 0xffffff | 0x1000000;
      *(uint **)(param_1 + 8) = puVar17 + 4;
    }
    puVar17 = *(uint **)(param_1 + 8);
    uVar4 = uVar4 | 0x4060000;
  }
  *(uint **)(param_1 + 8) = puVar17 + 2;
  *puVar17 = uVar4;
  puVar17[1] = 0xd3000000;
  return;
}

