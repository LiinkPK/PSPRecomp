/* Entry 0x089AFD9C | file offset 0x001ACD74 | FUN_089afd9c | bytes 796 */

int FUN_089afd9c(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      iVar9 = FUN_089ad3c4(param_2,1);
      if (iVar9 == 0) {
        param_3 = 0;
      }
      FUN_089acd20(param_1);
      if (*(int *)(param_2 + 4) == 0) {
        iVar9 = *(int *)(param_2 + 8);
      }
      else {
        *(int *)(param_1 + 4) = *(int *)(param_2 + 4);
        *(int *)(*(int *)(param_2 + 4) + 0x310) = *(int *)(*(int *)(param_2 + 4) + 0x310) + 1;
        iVar9 = *(int *)(param_2 + 8);
      }
      if (iVar9 == 0) {
        uVar8 = *(undefined2 *)(param_2 + 2);
      }
      else {
        *(int *)(param_1 + 8) = iVar9;
        *(int *)(*(int *)(param_2 + 8) + 0x18) = *(int *)(*(int *)(param_2 + 8) + 0x18) + 1;
        uVar8 = *(undefined2 *)(param_2 + 2);
      }
      uVar10 = *(undefined4 *)(param_2 + 0xc);
      uVar11 = *(undefined4 *)(param_2 + 0x10);
      uVar12 = *(undefined4 *)(param_2 + 0x14);
      uVar13 = *(undefined4 *)(param_2 + 0x18);
      uVar14 = *(undefined4 *)(param_2 + 0x1c);
      uVar1 = *(undefined2 *)(param_2 + 0x20);
      uVar2 = *(undefined2 *)(param_2 + 0x22);
      uVar3 = *(undefined2 *)(param_2 + 0x24);
      uVar4 = *(undefined2 *)(param_2 + 0x26);
      uVar5 = *(undefined2 *)(param_2 + 0x28);
      uVar6 = *(undefined2 *)(param_2 + 0x2a);
      uVar24 = *(undefined4 *)(param_2 + 0x2c);
      uVar15 = *(undefined4 *)(param_2 + 0x30);
      uVar16 = *(undefined4 *)(param_2 + 0x34);
      uVar18 = *(undefined4 *)(param_2 + 0x38);
      uVar21 = *(undefined4 *)(param_2 + 0x3c);
      *(undefined2 *)(param_1 + 2) = uVar8;
      puVar22 = (undefined4 *)(param_2 + 0x90);
      *(undefined4 *)(param_1 + 0xc) = uVar10;
      *(undefined4 *)(param_1 + 0x10) = uVar11;
      *(undefined4 *)(param_1 + 0x14) = uVar12;
      *(undefined4 *)(param_1 + 0x18) = uVar13;
      *(undefined4 *)(param_1 + 0x1c) = uVar14;
      *(undefined2 *)(param_1 + 0x20) = uVar1;
      *(undefined2 *)(param_1 + 0x22) = uVar2;
      *(undefined2 *)(param_1 + 0x24) = uVar3;
      *(undefined2 *)(param_1 + 0x26) = uVar4;
      *(undefined2 *)(param_1 + 0x28) = uVar5;
      *(undefined2 *)(param_1 + 0x2a) = uVar6;
      *(undefined4 *)(param_1 + 0x2c) = uVar24;
      *(undefined4 *)(param_1 + 0x30) = uVar15;
      *(undefined4 *)(param_1 + 0x34) = uVar16;
      *(undefined4 *)(param_1 + 0x38) = uVar18;
      *(undefined4 *)(param_1 + 0x3c) = uVar21;
      uVar14 = *(undefined4 *)(param_2 + 0x70);
      uVar15 = *(undefined4 *)(param_2 + 0x74);
      uVar16 = *(undefined4 *)(param_2 + 0x78);
      uVar18 = *(undefined4 *)(param_2 + 0x7c);
      uVar21 = *(undefined4 *)(param_2 + 0x80);
      uVar24 = *(undefined4 *)(param_2 + 0x84);
      uVar17 = *(undefined4 *)(param_2 + 0x88);
      uVar19 = *(undefined4 *)(param_2 + 0x8c);
      uVar10 = *(undefined4 *)(param_2 + 0x44);
      uVar11 = *(undefined4 *)(param_2 + 0x48);
      uVar12 = *(undefined4 *)(param_2 + 0x4c);
      uVar25 = *(undefined4 *)(param_2 + 0x50);
      uVar13 = *(undefined4 *)(param_2 + 0x54);
      uVar8 = *(undefined2 *)(param_2 + 0x58);
      uVar1 = *(undefined2 *)(param_2 + 0x5a);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(param_1 + 0x44) = uVar10;
      *(undefined4 *)(param_1 + 0x48) = uVar11;
      *(undefined4 *)(param_1 + 0x4c) = uVar12;
      *(undefined4 *)(param_1 + 0x50) = uVar25;
      *(undefined4 *)(param_1 + 0x54) = uVar13;
      *(undefined2 *)(param_1 + 0x58) = uVar8;
      *(undefined2 *)(param_1 + 0x5a) = uVar1;
      *(undefined4 *)(param_1 + 0x70) = uVar14;
      *(undefined4 *)(param_1 + 0x74) = uVar15;
      *(undefined4 *)(param_1 + 0x78) = uVar16;
      *(undefined4 *)(param_1 + 0x7c) = uVar18;
      *(undefined4 *)(param_1 + 0x80) = uVar21;
      *(undefined4 *)(param_1 + 0x84) = uVar24;
      *(undefined4 *)(param_1 + 0x88) = uVar17;
      *(undefined4 *)(param_1 + 0x8c) = uVar19;
      puVar23 = (undefined4 *)(param_1 + 0x90);
      do {
        uVar10 = puVar22[1];
        uVar11 = puVar22[2];
        uVar12 = puVar22[3];
        *puVar23 = *puVar22;
        puVar22 = puVar22 + 4;
        puVar23[1] = uVar10;
        puVar23[2] = uVar11;
        puVar23[3] = uVar12;
        puVar23 = puVar23 + 4;
      } while (puVar22 != (undefined4 *)(param_2 + 0xd0));
      FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0x44));
      FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0x48));
      if (param_3 == 0) {
        uVar20 = 0;
        FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0x54));
        uVar10 = *(undefined4 *)(param_2 + 0xc);
      }
      else {
        iVar9 = (uint)*(ushort *)(param_2 + 0x20) << 1;
        uVar10 = FUN_089aba0c(param_4,0,4,iVar9);
        *(undefined4 *)(param_1 + 0x54) = uVar10;
        uVar20 = param_3 & 0xfffffffe | 2;
        FUN_08935524(uVar10,*(undefined4 *)(param_2 + 0x54),iVar9);
        uVar10 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar10 = FUN_089afc3c(uVar10,*(undefined2 *)(param_2 + 0x20),uVar20,param_4);
      uVar11 = *(undefined4 *)(param_2 + 0x10);
      uVar8 = *(undefined2 *)(param_2 + 0x22);
      *(undefined4 *)(param_1 + 0xc) = uVar10;
      uVar10 = FUN_089af774(uVar11,uVar8,uVar20,param_4);
      uVar11 = *(undefined4 *)(param_2 + 0x14);
      uVar8 = *(undefined2 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x10) = uVar10;
      uVar10 = FUN_089ae424(uVar11,uVar8,uVar20,param_4);
      uVar11 = *(undefined4 *)(param_2 + 0x18);
      uVar8 = *(undefined2 *)(param_2 + 0x26);
      *(undefined4 *)(param_1 + 0x14) = uVar10;
      uVar10 = FUN_089ade78(uVar11,uVar8,uVar20,param_4);
      uVar7 = *(ushort *)(param_2 + 0x28);
      uVar11 = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x18) = uVar10;
      uVar10 = FUN_089aed20(uVar11,uVar7 + 1,uVar20,param_4);
      *(undefined4 *)(param_1 + 0x1c) = uVar10;
    }
    return param_1;
  }
  return 0;
}

