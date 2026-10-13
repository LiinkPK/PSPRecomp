/* Entry 0x089BB74C | file offset 0x001B8724 | FUN_089bb74c | bytes 256 */

int FUN_089bb74c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      FUN_089bb328();
      uVar9 = *(undefined4 *)(param_2 + 4);
      uVar4 = *(undefined2 *)(param_2 + 0x2e);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar8 = *(undefined4 *)(param_2 + 8);
      uVar1 = *(undefined1 *)(param_2 + 0xc);
      uVar2 = *(undefined1 *)(param_2 + 0xd);
      uVar3 = *(undefined1 *)(param_2 + 0xe);
      uVar11 = *(undefined4 *)(param_2 + 0x18);
      uVar10 = *(undefined4 *)(param_2 + 0x1c);
      uVar13 = *(undefined4 *)(param_2 + 0x20);
      uVar12 = *(undefined4 *)(param_2 + 0x24);
      uVar5 = *(undefined2 *)(param_2 + 0x28);
      uVar6 = *(undefined2 *)(param_2 + 0x2a);
      uVar7 = *(undefined2 *)(param_2 + 0x2c);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 8) = uVar8;
      *(undefined1 *)(param_1 + 0xc) = uVar1;
      *(undefined1 *)(param_1 + 0xd) = uVar2;
      *(undefined1 *)(param_1 + 0xe) = uVar3;
      *(undefined4 *)(param_1 + 0x18) = uVar11;
      *(undefined4 *)(param_1 + 0x1c) = uVar10;
      *(undefined4 *)(param_1 + 0x20) = uVar13;
      *(undefined4 *)(param_1 + 0x24) = uVar12;
      *(undefined2 *)(param_1 + 0x28) = uVar5;
      *(undefined2 *)(param_1 + 0x2a) = uVar6;
      *(undefined2 *)(param_1 + 0x2c) = uVar7;
      *(undefined2 *)(param_1 + 0x2e) = uVar4;
      *(undefined4 *)(param_1 + 4) = uVar9;
      FUN_089ba834(0,uVar9);
      FUN_089ba834(0,*(undefined4 *)(param_1 + 8));
    }
    return param_1;
  }
  return 0;
}

