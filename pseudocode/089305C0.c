/* Entry 0x089305C0 | file offset 0x0012D598 | FUN_089305c0 | bytes 208 */

void FUN_089305c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *param_1 = *param_2;
  puVar7 = param_2 + 3;
  param_1[2] = param_2[2];
  iVar4 = 0;
  param_1[0x13] = param_2[0x13];
  puVar5 = param_2 + 7;
  param_2 = param_2 + 0x11;
  puVar6 = param_1;
  do {
    iVar4 = iVar4 + 1;
    puVar6[3] = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  puVar6 = param_1 + 7;
  do {
    uVar1 = *(undefined2 *)((int)puVar5 + 2);
    uVar2 = *(undefined2 *)(puVar5 + 1);
    uVar3 = *(undefined2 *)((int)puVar5 + 6);
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    *(undefined2 *)((int)puVar6 + 2) = uVar1;
    *(undefined2 *)(puVar6 + 1) = uVar2;
    *(undefined2 *)((int)puVar6 + 6) = uVar3;
    iVar4 = iVar4 + 1;
    puVar6 = puVar6 + 2;
    puVar5 = puVar5 + 2;
  } while (iVar4 < 5);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    param_1[0x11] = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (iVar4 < 2);
  return;
}

