/* Entry 0x088F5014 | file offset 0x000F1FEC | FUN_088f5014 | bytes 308 */

void FUN_088f5014(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  uVar5 = param_1[6];
  uVar2 = *(undefined2 *)(param_1 + 10);
  bVar1 = *(byte *)((int)param_1 + 0x27);
  iVar4 = 0;
  iVar3 = 0x1c;
  uVar7 = *param_2;
  puVar6 = param_1;
  puVar9 = param_2;
  do {
    uVar8 = puVar9[1];
    *puVar6 = uVar7;
    iVar4 = iVar4 + 8;
    puVar6[1] = uVar8;
    puVar9 = (undefined4 *)((int)param_2 + iVar4);
    iVar3 = iVar3 + -1;
    uVar7 = *puVar9;
    puVar6 = (undefined4 *)((int)param_1 + iVar4);
  } while (iVar3 != 0);
  *puVar6 = uVar7;
  iVar3 = 0;
  iVar4 = 0x1cb;
  do {
    puVar6 = (undefined4 *)((int)param_2 + iVar3 + 0xfc);
    uVar7 = puVar6[1];
    puVar9 = (undefined4 *)((int)param_1 + iVar3 + 0xfc);
    *puVar9 = *puVar6;
    puVar9[1] = uVar7;
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 8;
  } while (iVar4 != 0);
  puVar10 = param_2 + 0x3d5;
  iVar4 = 0;
  iVar3 = 0x2a;
  uVar7 = *puVar10;
  puVar6 = param_1 + 0x3d5;
  puVar9 = puVar10;
  do {
    uVar8 = puVar9[1];
    *puVar6 = uVar7;
    iVar4 = iVar4 + 8;
    puVar6[1] = uVar8;
    puVar9 = (undefined4 *)((int)puVar10 + iVar4);
    iVar3 = iVar3 + -1;
    uVar7 = *puVar9;
    puVar6 = (undefined4 *)((int)(param_1 + 0x3d5) + iVar4);
  } while (iVar3 != 0);
  *puVar6 = uVar7;
  param_1[6] = uVar5;
  *(undefined2 *)(param_1 + 10) = uVar2;
  *(byte *)((int)param_1 + 0x27) = *(byte *)((int)param_1 + 0x27) | bVar1 & 1 | 0x20;
  uVar2 = *(undefined2 *)((int)param_2 + 0xf2);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined2 *)((int)param_1 + 0xf2) = uVar2;
  if ((*(byte *)((int)param_1 + 0x27) & 4) != 0) {
    FUN_088cc440((int)*(short *)(param_1 + 9));
  }
  return;
}

