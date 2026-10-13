/* Entry 0x089AF348 | file offset 0x001AC320 | FUN_089af348 | bytes 520 */

int FUN_089af348(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      uVar15 = param_3 & 0xfffffffe;
      if ((param_3 & 0xc1) == 0) {
        param_3 = 0;
        uVar15 = 0;
      }
      FUN_089ac7ec(param_1);
      uVar3 = *(undefined1 *)(param_2 + 0x30);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      *(undefined1 *)(param_1 + 0x30) = uVar3;
      uVar7 = *(uint *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_2 + 0x30) & 0x100;
      *(uint *)(param_1 + 0x30) = uVar7 & 0xfffffeff | uVar1;
      uVar2 = *(uint *)(param_2 + 0x30) & 0x3e00;
      *(uint *)(param_1 + 0x30) = uVar7 & 0xffffc0ff | uVar1 | uVar2;
      *(uint *)(param_1 + 0x30) =
           uVar7 & 0xffff00ff | uVar1 | uVar2 | *(uint *)(param_2 + 0x30) & 0xc000;
      uVar14 = *(undefined4 *)(param_2 + 0x10);
      uVar8 = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined2 *)(param_2 + 0x14);
      uVar5 = *(undefined2 *)(param_2 + 0x16);
      uVar6 = *(undefined2 *)(param_2 + 0x18);
      uVar10 = *(undefined4 *)(param_2 + 0x20);
      uVar11 = *(undefined4 *)(param_2 + 0x24);
      uVar12 = *(undefined4 *)(param_2 + 0x28);
      uVar13 = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 8) = uVar8;
      *(undefined2 *)(param_1 + 0x14) = uVar4;
      *(undefined2 *)(param_1 + 0x16) = uVar5;
      *(undefined2 *)(param_1 + 0x18) = uVar6;
      *(undefined4 *)(param_1 + 0x20) = uVar10;
      *(undefined4 *)(param_1 + 0x24) = uVar11;
      *(undefined4 *)(param_1 + 0x28) = uVar12;
      *(undefined4 *)(param_1 + 0x2c) = uVar13;
      *(undefined4 *)(param_1 + 0x10) = uVar14;
      FUN_089ab6dc(0,uVar14);
      FUN_089ab6dc(1,*(undefined4 *)(param_1 + 0x24));
      uVar8 = 0x10;
      if (param_3 == 0) {
        FUN_089ab6dc(0,*(undefined4 *)(param_1 + 8));
        uVar8 = *(undefined4 *)(param_2 + 4);
      }
      else {
        if (*(int *)(param_2 + 8) == 0) {
          uVar8 = 0;
        }
        uVar10 = FUN_089aba0c(param_4,0,0x10,uVar8);
        *(undefined4 *)(param_1 + 8) = uVar10;
        FUN_08935524(uVar10,*(undefined4 *)(param_2 + 8),uVar8);
        uVar8 = *(undefined4 *)(param_2 + 4);
      }
      uVar8 = FUN_089af1e8(uVar8,1,uVar15,param_4);
      iVar9 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 4) = uVar8;
      if ((iVar9 + 1U & 0xffff0000) == 0) {
        iVar9 = 0;
      }
      FUN_089ae424(iVar9,1,0,param_4);
      if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
        uVar8 = FUN_089b134c();
        FUN_089b12f4(param_1,uVar8);
      }
    }
    return param_1;
  }
  return 0;
}

