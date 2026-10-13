/* Entry 0x089AF8D4 | file offset 0x001AC8AC | FUN_089af8d4 | bytes 872 */

int FUN_089af8d4(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      if ((param_3 & 0x11) == 0) {
        param_3 = 0;
      }
      FUN_089ac9d8();
      uVar7 = *(undefined4 *)(param_2 + 0xc4);
      uVar10 = *(undefined4 *)(param_2 + 200);
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
      *(undefined4 *)(param_1 + 0xc4) = uVar7;
      iVar8 = 0;
      *(undefined4 *)(param_1 + 200) = uVar10;
      iVar9 = param_1;
      iVar11 = param_2;
      do {
        puVar21 = (undefined4 *)(iVar11 + 0xcc);
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + 4;
        *(undefined4 *)(iVar9 + 0xcc) = *puVar21;
        iVar9 = iVar9 + 4;
      } while (iVar8 != 5);
      uVar7 = *(undefined4 *)(param_2 + 4);
      uVar10 = *(undefined4 *)(param_2 + 8);
      uVar12 = *(undefined4 *)(param_2 + 0xc);
      uVar13 = *(undefined4 *)(param_2 + 0x10);
      uVar14 = *(undefined4 *)(param_2 + 0x14);
      uVar1 = *(undefined2 *)(param_2 + 0x18);
      uVar2 = *(undefined2 *)(param_2 + 0x1a);
      uVar3 = *(undefined2 *)(param_2 + 0x1c);
      uVar4 = *(undefined2 *)(param_2 + 0x1e);
      uVar15 = *(undefined4 *)(param_2 + 0x20);
      uVar16 = *(undefined4 *)(param_2 + 0x24);
      uVar17 = *(undefined4 *)(param_2 + 0x2c);
      uVar22 = *(undefined4 *)(param_2 + 0x28);
      uVar18 = *(undefined4 *)(param_2 + 0x30);
      uVar19 = *(undefined4 *)(param_2 + 0x34);
      uVar5 = *(undefined2 *)(param_2 + 0x40);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      puVar20 = (undefined4 *)(param_2 + 0x80);
      *(undefined4 *)(param_1 + 4) = uVar7;
      *(undefined4 *)(param_1 + 8) = uVar10;
      *(undefined4 *)(param_1 + 0xc) = uVar12;
      *(undefined4 *)(param_1 + 0x10) = uVar13;
      *(undefined4 *)(param_1 + 0x14) = uVar14;
      *(undefined2 *)(param_1 + 0x18) = uVar1;
      *(undefined2 *)(param_1 + 0x1a) = uVar2;
      *(undefined2 *)(param_1 + 0x1c) = uVar3;
      *(undefined2 *)(param_1 + 0x1e) = uVar4;
      *(undefined4 *)(param_1 + 0x20) = uVar15;
      *(undefined4 *)(param_1 + 0x24) = uVar16;
      *(undefined4 *)(param_1 + 0x2c) = uVar17;
      *(undefined4 *)(param_1 + 0x28) = uVar22;
      *(undefined4 *)(param_1 + 0x30) = uVar18;
      *(undefined4 *)(param_1 + 0x34) = uVar19;
      *(undefined2 *)(param_1 + 0x40) = uVar5;
      uVar7 = *(undefined4 *)(param_2 + 0x54);
      uVar10 = *(undefined4 *)(param_2 + 0x58);
      uVar12 = *(undefined4 *)(param_2 + 0x5c);
      uVar13 = *(undefined4 *)(param_2 + 0x60);
      uVar14 = *(undefined4 *)(param_2 + 100);
      uVar15 = *(undefined4 *)(param_2 + 0x68);
      uVar16 = *(undefined4 *)(param_2 + 0x6c);
      uVar17 = *(undefined4 *)(param_2 + 0x70);
      uVar18 = *(undefined4 *)(param_2 + 0x74);
      uVar19 = *(undefined4 *)(param_2 + 0x78);
      uVar22 = *(undefined4 *)(param_2 + 0x7c);
      uVar1 = *(undefined2 *)(param_2 + 0x42);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
      *(undefined2 *)(param_1 + 0x42) = uVar1;
      *(undefined4 *)(param_1 + 0x54) = uVar7;
      *(undefined4 *)(param_1 + 0x58) = uVar10;
      *(undefined4 *)(param_1 + 0x5c) = uVar12;
      *(undefined4 *)(param_1 + 0x60) = uVar13;
      *(undefined4 *)(param_1 + 100) = uVar14;
      *(undefined4 *)(param_1 + 0x68) = uVar15;
      *(undefined4 *)(param_1 + 0x6c) = uVar16;
      *(undefined4 *)(param_1 + 0x70) = uVar17;
      *(undefined4 *)(param_1 + 0x74) = uVar18;
      *(undefined4 *)(param_1 + 0x78) = uVar19;
      *(undefined4 *)(param_1 + 0x7c) = uVar22;
      puVar21 = (undefined4 *)(param_1 + 0x80);
      do {
        uVar7 = puVar20[1];
        uVar10 = puVar20[2];
        uVar12 = puVar20[3];
        *puVar21 = *puVar20;
        puVar20 = puVar20 + 4;
        puVar21[1] = uVar7;
        puVar21[2] = uVar10;
        puVar21[3] = uVar12;
        puVar21 = puVar21 + 4;
      } while (puVar20 != (undefined4 *)(param_2 + 0xc0));
      FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0x10));
      FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0x14));
      FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0x34));
      if (param_3 == 0) {
        FUN_089ab6dc(0,*(undefined4 *)(param_1 + 8));
        FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0xc));
        FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0x30));
        sVar6 = *(short *)(param_1 + 0x18);
      }
      else {
        iVar9 = (uint)*(ushort *)(param_2 + 0x18) << 2;
        uVar7 = 0x40;
        if (*(int *)(param_2 + 0x30) == 0) {
          uVar7 = 0;
        }
        iVar11 = (uint)*(ushort *)(param_2 + 0x1a) << 2;
        uVar10 = FUN_089aba0c(param_4,0,4,iVar9);
        *(undefined4 *)(param_1 + 8) = uVar10;
        uVar10 = FUN_089aba0c(param_4,0,0x10,iVar11);
        *(undefined4 *)(param_1 + 0xc) = uVar10;
        uVar10 = FUN_089aba0c(param_4,0,0x40,uVar7);
        uVar12 = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0x30) = uVar10;
        FUN_08935524(*(undefined4 *)(param_1 + 8),uVar12,iVar9);
        FUN_08935524(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc),iVar11);
        FUN_08935524(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_2 + 0x30),uVar7);
        sVar6 = *(short *)(param_1 + 0x18);
      }
      if (sVar6 == 0) {
        uVar7 = *(undefined4 *)(param_1 + 4);
      }
      else {
        iVar11 = 0;
        iVar9 = *(int *)(param_1 + 8);
        while( true ) {
          iVar9 = *(int *)(iVar11 * 4 + iVar9);
          if ((iVar9 + 1U & 0xffff0000) == 0) {
            iVar9 = 0;
          }
          FUN_089af774(iVar9,1,0,param_4);
          iVar11 = iVar11 + 1;
          if ((int)(uint)*(ushort *)(param_1 + 0x18) <= iVar11) break;
          iVar9 = *(int *)(param_1 + 8);
        }
        uVar7 = *(undefined4 *)(param_1 + 4);
      }
      FUN_089afc3c(uVar7,1,0,param_4);
    }
    return param_1;
  }
  return 0;
}

