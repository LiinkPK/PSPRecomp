/* Entry 0x088B13E4 | file offset 0x000AE3BC | FUN_088b13e4 | bytes 92 */

void FUN_088b13e4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = param_1 + 0xb1;
  iVar6 = 0;
  iVar5 = 0x58;
  uVar2 = *puVar7;
  puVar1 = param_1;
  puVar4 = puVar7;
  do {
    uVar3 = puVar4[1];
    *puVar1 = uVar2;
    iVar6 = iVar6 + 8;
    puVar1[1] = uVar3;
    puVar4 = (undefined4 *)((int)puVar7 + iVar6);
    iVar5 = iVar5 + -1;
    uVar2 = *puVar4;
    puVar1 = (undefined4 *)((int)param_1 + iVar6);
  } while (iVar5 != 0);
  *puVar1 = uVar2;
  FUN_088b1054();
  return;
}

