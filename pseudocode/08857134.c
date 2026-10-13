/* Entry 0x08857134 | file offset 0x0005410C | FUN_08857134 | bytes 1660 */

void FUN_08857134(int param_1,undefined2 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  
  sVar16 = 0;
  uVar2 = FUN_089a04e8();
  if ((*(char *)(param_1 + 0x70) != '\0') && (*(int *)(param_1 + 0x134) != 0)) {
    FUN_089a03dc(1);
    FUN_089a03dc(0x15);
    FUN_089a0384(4);
    FUN_089a0384(9);
    FUN_0899d2f8(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x7c) * 8));
    FUN_089a12a4(0,2,3,0,0);
    iVar13 = *(int *)(param_1 + 0x78);
    iVar15 = 100;
    iVar6 = *(int *)(param_1 + 0x7c);
    if (iVar13 != 0) {
      if (iVar6 == 7) {
        iVar6 = FUN_0887bb6c(iVar13);
        iVar15 = iVar6 / 2 + 0x1e;
        iVar6 = *(int *)(param_1 + 0x7c);
      }
      else if (iVar6 == 8) {
        iVar6 = FUN_0887bb6c(iVar13);
        iVar15 = iVar6 / 2 + 0x14;
        iVar6 = *(int *)(param_1 + 0x7c);
        if (iVar15 < 0x6e) {
          iVar15 = 0x6e;
        }
      }
      else if (iVar6 == 9) {
        iVar6 = FUN_0887bb6c(iVar13);
        iVar15 = iVar6 / 2 + 0x14;
        iVar6 = *(int *)(param_1 + 0x7c);
        if (iVar15 < 0x50) {
          iVar15 = 0x50;
        }
      }
      else {
        iVar6 = FUN_0887bb6c(iVar13);
        iVar15 = iVar6 / 2 + 0x14;
        iVar6 = *(int *)(param_1 + 0x7c);
      }
    }
    sVar1 = (short)iVar15;
    sVar7 = 0xf0 - sVar1;
    sVar9 = sVar1 + 0xf0;
    sVar14 = 7;
    if ((iVar6 != 9) && (sVar14 = 0x10, iVar6 == 0xb)) {
      sVar14 = 0x20;
    }
    puVar3 = (undefined2 *)FUN_0885cd44(0x60);
    iVar6 = *(int *)(param_1 + 0x7c);
    if (iVar6 == 9) {
      iVar17 = (iVar15 * 2 + 0x11) / 0x12;
      puVar3 = (undefined2 *)FUN_0885cd44((iVar17 + 2) * 0x20);
      puVar3[4] = (-sVar1 - sVar14) + 0xf0;
      puVar3[5] = 8;
      puVar3[6] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      puVar3[0xc] = sVar7;
      puVar3[0xd] = 0x28;
      puVar3[0xe] = 0;
      puVar3[8] = sVar14;
      puVar3[9] = 0x20;
      *(undefined4 *)(puVar3 + 10) = 0xffffffff;
      iVar8 = 0;
      iVar6 = 2;
      iVar13 = 0;
      if (0 < iVar17) {
        iVar4 = -iVar15;
        iVar5 = iVar4 + 0xf0;
        do {
          iVar11 = iVar15 * 2 - iVar13;
          iVar10 = 0x12;
          if (iVar11 < 0x12) {
            iVar10 = iVar11;
          }
          psVar12 = puVar3 + iVar6 * 8;
          psVar12[4] = (short)iVar5;
          psVar12[5] = 8;
          psVar12[6] = 0;
          *psVar12 = sVar14;
          psVar12[1] = 0;
          psVar12[2] = -1;
          psVar12[3] = -1;
          psVar12 = puVar3 + (iVar6 + 1) * 8;
          psVar12[4] = (short)iVar4 + (short)iVar10 + 0xf0;
          psVar12[5] = 0x28;
          psVar12[6] = 0;
          *psVar12 = (short)iVar10 + sVar14;
          psVar12[1] = 0x20;
          iVar8 = iVar8 + 1;
          iVar6 = iVar6 + 2;
          psVar12[2] = -1;
          psVar12[3] = -1;
          iVar13 = iVar13 + 0x12;
          iVar4 = iVar4 + 0x12;
          iVar5 = iVar5 + 0x12;
        } while (iVar8 < iVar17);
      }
      psVar12 = puVar3 + iVar6 * 8;
      psVar12[4] = sVar9;
      psVar12[5] = 8;
      psVar12[6] = 0;
      *psVar12 = 0x20 - sVar14;
      psVar12[1] = 0;
      psVar12[2] = -1;
      psVar12[3] = -1;
      puVar3 = puVar3 + (iVar6 + 1) * 8;
      puVar3[4] = sVar14 + sVar1 + 0xf0;
      puVar3[5] = 0x28;
      puVar3[6] = 0;
      *puVar3 = 0x20;
      puVar3[1] = 0x20;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      FUN_089a0520(6,0x80011e,iVar6 + 2,0);
    }
    else if (iVar6 == 0xb) {
      puVar3[4] = sVar7;
      puVar3[5] = 8;
      puVar3[6] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      puVar3[0xc] = 0x10f - sVar1;
      puVar3[0xd] = 0x28;
      puVar3[0xe] = 0;
      puVar3[8] = 0x1f;
      puVar3[9] = 0x20;
      *(undefined4 *)(puVar3 + 10) = 0xffffffff;
      puVar3[0x14] = 0x10f - sVar1;
      puVar3[0x15] = 8;
      puVar3[0x16] = 0;
      puVar3[0x10] = 0x1f;
      puVar3[0x11] = 0;
      *(undefined4 *)(puVar3 + 0x12) = 0xffffffff;
      puVar3[0x1c] = sVar1 + 0xd1;
      puVar3[0x1d] = 0x28;
      puVar3[0x1e] = 0;
      puVar3[0x18] = 0x20;
      puVar3[0x19] = 0x20;
      *(undefined4 *)(puVar3 + 0x1a) = 0xffffffff;
      puVar3[0x24] = sVar1 + 0xd1;
      puVar3[0x25] = 8;
      puVar3[0x26] = 0;
      puVar3[0x20] = 0x1f;
      puVar3[0x21] = 0;
      *(undefined4 *)(puVar3 + 0x22) = 0xffffffff;
      puVar3[0x2c] = sVar9;
      puVar3[0x2d] = 0x28;
      puVar3[0x2e] = 0;
      puVar3[0x28] = 0;
      puVar3[0x29] = 0x20;
      *(undefined4 *)(puVar3 + 0x2a) = 0xffffffff;
      FUN_089a0520(6,0x80011e,6,0);
    }
    else {
      if ((iVar6 == 7) && (*(char *)(param_1 + 0x88) == '\x01')) {
        sVar16 = 0x20;
      }
      puVar3[4] = sVar7;
      puVar3[5] = 8;
      puVar3[6] = 0;
      *puVar3 = 0;
      puVar3[1] = sVar16;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      puVar3[0xc] = 0x100 - sVar1;
      sVar7 = sVar16 + 0x20;
      puVar3[0xd] = 0x28;
      puVar3[0xe] = 0;
      puVar3[8] = 0x10;
      puVar3[9] = sVar7;
      *(undefined4 *)(puVar3 + 10) = 0xffffffff;
      puVar3[0x14] = 0x100 - sVar1;
      puVar3[0x15] = 8;
      puVar3[0x16] = 0;
      puVar3[0x10] = 0xf;
      puVar3[0x11] = sVar16;
      *(undefined4 *)(puVar3 + 0x12) = 0xffffffff;
      puVar3[0x1c] = sVar1 + 0xe0;
      puVar3[0x1d] = 0x28;
      puVar3[0x1e] = 0;
      puVar3[0x18] = 0x10;
      puVar3[0x19] = sVar7;
      *(undefined4 *)(puVar3 + 0x1a) = 0xffffffff;
      puVar3[0x24] = sVar1 + 0xe0;
      puVar3[0x25] = 8;
      puVar3[0x26] = 0;
      puVar3[0x20] = 0x10;
      puVar3[0x21] = sVar16;
      *(undefined4 *)(puVar3 + 0x22) = 0xffffffff;
      puVar3[0x2c] = sVar9;
      puVar3[0x2d] = 0x28;
      puVar3[0x2e] = 0;
      puVar3[0x28] = 0x20;
      puVar3[0x29] = sVar7;
      *(undefined4 *)(puVar3 + 0x2a) = 0xffffffff;
      FUN_089a0520(6,0x80011e,6,0);
    }
    FUN_089a0384(0x15);
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_0887bc2c(*(int *)(param_1 + 0x78),param_2);
    }
    FUN_0899fdc4(uVar2);
  }
  return;
}

