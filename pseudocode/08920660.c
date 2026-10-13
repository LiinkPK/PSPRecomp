/* Entry 0x08920660 | file offset 0x0011D638 | FUN_08920660 | bytes 160 */

void FUN_08920660(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = param_2[2];
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  *(undefined2 *)(param_1 + 4) = *param_2;
  *(undefined2 *)(param_1 + 6) = uVar1;
  *(undefined2 *)(param_1 + 8) = uVar7;
  *(undefined2 *)(param_1 + 10) = uVar2;
  *(undefined2 *)(param_1 + 0xc) = uVar3;
  *(undefined2 *)(param_1 + 0xe) = uVar4;
  *(undefined2 *)(param_1 + 0x10) = uVar5;
  *(undefined2 *)(param_1 + 0x12) = uVar6;
  return;
}

