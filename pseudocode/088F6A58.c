/* Entry 0x088F6A58 | file offset 0x000F3A30 | FUN_088f6a58 | bytes 808 */

void FUN_088f6a58(int param_1,int param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  
  if (0 < param_3) {
    iVar12 = DAT_089d7f38 + param_1 * 0x6a68 + param_2 * 0x1548;
    iVar13 = iVar12 + 0x70c;
    FUN_088f8d34(iVar13);
    *(undefined2 *)(iVar12 + 0x176c) = 0;
    *(undefined1 *)(iVar12 + 0x176e) = 0;
    *(undefined1 *)(iVar12 + 5999) = 0;
    *(undefined1 *)(iVar12 + 0x1c50) = 0xff;
    iVar14 = 0;
    iVar17 = iVar12 + 6000;
    do {
      FUN_088c7218(iVar17);
      iVar14 = iVar14 + 1;
      iVar17 = iVar17 + 0x138;
    } while (iVar14 < 4);
    *(undefined1 *)(iVar12 + 0x1c50) = param_4;
    iVar14 = DAT_089d712c;
    iVar17 = FUN_088cb164(DAT_089d712c + 0xf58,param_3);
    iVar14 = iVar14 + 0xf6e0;
    puVar15 = (undefined4 *)(DAT_089d712c + 0x1fdd8);
    FUN_088f8e8c(iVar13,iVar17 + 0x10 + *(char *)(iVar17 + 0x773) * 0xc6,iVar14);
    FUN_088f8fb0(iVar13,iVar14);
    FUN_088f9054(iVar13);
    FUN_088f90f4(iVar13);
    FUN_088f9290(iVar13,iVar14);
    FUN_088f9320(iVar13);
    iVar14 = 0;
    iVar6 = 0xef;
    do {
      uVar9 = ((undefined4 *)(iVar17 + iVar14))[1];
      *(undefined4 *)(iVar13 + iVar14) = *(undefined4 *)(iVar17 + iVar14);
      ((undefined4 *)(iVar13 + iVar14))[1] = uVar9;
      iVar6 = iVar6 + -1;
      iVar14 = iVar14 + 8;
    } while (iVar6 != 0);
    iVar14 = FUN_0885c304(DAT_089d4e14);
    if ((iVar14 == 0) &&
       (iVar13 = iVar13 + *(char *)(iVar12 + 0xe7f) * 0xc6, *(char *)(iVar13 + 200) == '!')) {
      *(undefined1 *)(iVar13 + 200) = 0xff;
    }
    iVar13 = 0;
    iVar14 = 0x1c;
    uVar9 = *puVar15;
    puVar7 = (undefined4 *)(iVar12 + 0xe84);
    puVar11 = puVar15;
    do {
      uVar10 = puVar11[1];
      *puVar7 = uVar9;
      iVar13 = iVar13 + 8;
      puVar7[1] = uVar10;
      puVar11 = (undefined4 *)((int)puVar15 + iVar13);
      iVar14 = iVar14 + -1;
      uVar9 = *puVar11;
      puVar7 = (undefined4 *)(iVar12 + 0xe84 + iVar13);
    } while (iVar14 != 0);
    *puVar7 = uVar9;
    uVar9 = FUN_088f5efc();
    *(undefined4 *)(iVar12 + 0xeb0) = uVar9;
    FUN_088faef8(iVar12 + 0x176c);
    iVar13 = DAT_089d712c;
    cVar1 = *(char *)(iVar12 + 0xe7f);
    iVar14 = DAT_089d712c + 0x39f38;
    iVar17 = iVar12 + 0xf7c;
    iVar6 = 0;
    iVar16 = iVar12 + 6000;
    do {
      uVar3 = FUN_088b7b18(iVar12 + 0x71c + cVar1 * 0xc6,iVar6);
      iVar4 = FUN_088c7f78(uVar3);
      if ((iVar4 != 0) && (iVar4 = FUN_088c75b4(iVar14,uVar3 & 0x1f), iVar4 != 0)) {
        iVar5 = 0;
        iVar8 = 0x20;
        do {
          uVar2 = ((undefined2 *)(iVar4 + iVar5))[1];
          *(undefined2 *)(iVar17 + iVar5) = *(undefined2 *)(iVar4 + iVar5);
          ((undefined2 *)(iVar17 + iVar5))[1] = uVar2;
          iVar8 = iVar8 + -1;
          iVar5 = iVar5 + 4;
        } while (iVar8 != 0);
        iVar5 = 0;
        iVar8 = 0x27;
        do {
          uVar9 = ((undefined4 *)(iVar4 + iVar5))[1];
          *(undefined4 *)(iVar16 + iVar5) = *(undefined4 *)(iVar4 + iVar5);
          ((undefined4 *)(iVar16 + iVar5))[1] = uVar9;
          iVar8 = iVar8 + -1;
          iVar5 = iVar5 + 8;
        } while (iVar8 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar17 = iVar17 + 0x80;
      iVar16 = iVar16 + 0x138;
    } while (iVar6 < 4);
    *(undefined4 *)(iVar12 + 0x117c) = *(undefined4 *)(iVar13 + 0x3b798);
  }
  return;
}

