/* Entry 0x089ADFE0 | file offset 0x001AAFB8 | FUN_089adfe0 | bytes 516 */

int FUN_089adfe0(int param_1,int param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if ((param_3 & 0x201) == 0) {
      param_3 = 0;
    }
    if (param_1 != param_2) {
      FUN_089ac628();
      uVar16 = *(undefined4 *)(param_2 + 0xc);
      uVar2 = *(undefined2 *)(param_2 + 8);
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      uVar3 = *(undefined2 *)(param_2 + 2);
      uVar4 = *(undefined2 *)(param_2 + 10);
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
      uVar7 = *(undefined4 *)(param_2 + 4);
      uVar1 = *(undefined1 *)(param_2 + 0x12);
      uVar5 = *(undefined2 *)(param_2 + 0x14);
      uVar6 = *(undefined2 *)(param_2 + 0x16);
      uVar9 = *(undefined4 *)(param_2 + 0x20);
      uVar10 = *(undefined4 *)(param_2 + 0x24);
      uVar11 = *(undefined4 *)(param_2 + 0x28);
      uVar12 = *(undefined4 *)(param_2 + 0x2c);
      uVar13 = *(undefined4 *)(param_2 + 0x30);
      uVar14 = *(undefined4 *)(param_2 + 0x34);
      uVar15 = *(undefined4 *)(param_2 + 0x38);
      *(undefined2 *)(param_1 + 2) = uVar3;
      *(undefined4 *)(param_1 + 4) = uVar7;
      *(undefined2 *)(param_1 + 8) = uVar2;
      *(undefined2 *)(param_1 + 10) = uVar4;
      *(undefined1 *)(param_1 + 0x12) = uVar1;
      *(undefined2 *)(param_1 + 0x14) = uVar5;
      *(undefined2 *)(param_1 + 0x16) = uVar6;
      *(undefined4 *)(param_1 + 0x20) = uVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar10;
      *(undefined4 *)(param_1 + 0x28) = uVar11;
      *(undefined4 *)(param_1 + 0x2c) = uVar12;
      *(undefined4 *)(param_1 + 0x30) = uVar13;
      *(undefined4 *)(param_1 + 0x34) = uVar14;
      *(undefined4 *)(param_1 + 0xc) = uVar16;
      *(undefined4 *)(param_1 + 0x38) = uVar15;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
      if (param_3 == 0) {
        FUN_089ab6dc(0,uVar16,0x40);
        FUN_089ab6dc(0,*(undefined4 *)(param_1 + 0x28));
        uVar7 = *(undefined4 *)(param_1 + 4);
      }
      else {
        uVar7 = 0x40;
        if (*(int *)(param_2 + 0xc) == 0) {
          uVar7 = 0;
        }
        uVar9 = 0x10;
        if (*(int *)(param_2 + 0x28) == 0) {
          uVar9 = 0;
        }
        uVar10 = FUN_089aba0c(param_4,0,0x40,uVar7);
        *(undefined4 *)(param_1 + 0xc) = uVar10;
        uVar10 = FUN_089aba0c(param_4,0,0x10,uVar9);
        uVar11 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0x28) = uVar10;
        FUN_08935524(*(undefined4 *)(param_1 + 0xc),uVar11,uVar7);
        FUN_08935524(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x28),uVar9);
        uVar7 = *(undefined4 *)(param_1 + 4);
      }
      FUN_089ae1e4(uVar7,1,0,param_4);
      iVar8 = *(int *)(param_1 + 0x24);
      if ((iVar8 + 1U & 0xffff0000) == 0) {
        iVar8 = 0;
      }
      FUN_089ade78(iVar8,1,0,param_4);
    }
    return param_1;
  }
  return 0;
}

