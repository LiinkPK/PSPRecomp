/* Entry 0x089AEB5C | file offset 0x001ABB34 | FUN_089aeb5c | bytes 452 */

int FUN_089aeb5c(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  uVar7 = param_3 & 0xfffffffe;
  if ((param_3 & 0x1803) == 0) {
    FUN_089acc50(param_1);
    uVar1 = *(undefined2 *)(param_2 + 2);
    uVar4 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar7 = 0;
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined2 *)(param_2 + 0xc);
    uVar3 = *(undefined2 *)(param_2 + 0xe);
    uVar9 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined4 *)(param_2 + 0x18);
    uVar11 = *(undefined4 *)(param_2 + 0x1c);
    uVar10 = *(undefined4 *)(param_2 + 0x20);
    *(undefined2 *)(param_1 + 2) = uVar1;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined2 *)(param_1 + 0xc) = uVar2;
    *(undefined2 *)(param_1 + 0xe) = uVar3;
    *(undefined4 *)(param_1 + 0x14) = uVar9;
    *(undefined4 *)(param_1 + 0x18) = uVar8;
    *(undefined4 *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x20) = uVar10;
    *(undefined4 *)(param_1 + 8) = uVar5;
  }
  else {
    FUN_089acc50(param_1);
    uVar1 = *(undefined2 *)(param_2 + 2);
    uVar4 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined2 *)(param_2 + 0xc);
    uVar3 = *(undefined2 *)(param_2 + 0xe);
    uVar9 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined4 *)(param_2 + 0x18);
    uVar11 = *(undefined4 *)(param_2 + 0x1c);
    uVar10 = *(undefined4 *)(param_2 + 0x20);
    *(undefined2 *)(param_1 + 2) = uVar1;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined2 *)(param_1 + 0xc) = uVar2;
    *(undefined2 *)(param_1 + 0xe) = uVar3;
    *(undefined4 *)(param_1 + 0x14) = uVar9;
    *(undefined4 *)(param_1 + 0x18) = uVar8;
    *(undefined4 *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x20) = uVar10;
    *(undefined4 *)(param_1 + 8) = uVar5;
    if (param_3 != 0) {
      iVar6 = (uint)*(ushort *)(param_2 + 0xc) << 1;
      uVar4 = FUN_089aba0c(param_4,0,4,iVar6);
      *(undefined4 *)(param_1 + 8) = uVar4;
      FUN_08935524(uVar4,*(undefined4 *)(param_2 + 8),iVar6);
      uVar1 = *(undefined2 *)(param_2 + 0xc);
      goto LAB_089aec1c;
    }
  }
  FUN_089ab6dc(0,uVar5);
  uVar1 = *(undefined2 *)(param_2 + 0xc);
LAB_089aec1c:
  uVar4 = FUN_089ae9fc(*(undefined4 *)(param_2 + 4),uVar1,uVar7,param_4);
  *(undefined4 *)(param_1 + 4) = uVar4;
  return param_1;
}

