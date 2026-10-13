/* Entry 0x088C96E8 | file offset 0x000C66C0 | FUN_088c96e8 | bytes 520 */

void FUN_088c96e8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  puVar6 = param_2 + 1;
  *param_1 = *param_2;
  puVar9 = param_1 + 1;
  iVar1 = 0;
  iVar2 = 0x45c;
  uVar7 = *puVar6;
  puVar5 = puVar6;
  puVar8 = puVar9;
  do {
    uVar4 = puVar5[1];
    *puVar8 = uVar7;
    iVar1 = iVar1 + 8;
    puVar8[1] = uVar4;
    puVar5 = (undefined4 *)((int)puVar6 + iVar1);
    iVar2 = iVar2 + -1;
    uVar7 = *puVar5;
    puVar8 = (undefined4 *)((int)puVar9 + iVar1);
  } while (iVar2 != 0);
  *puVar8 = uVar7;
  iVar1 = 0;
  puVar5 = param_2;
  puVar8 = param_1;
  do {
    iVar2 = 0;
    puVar6 = puVar5;
    do {
      iVar3 = iVar2 + 1;
      *(undefined1 *)((int)puVar8 + iVar2 + 0x22e8) = *(undefined1 *)(puVar6 + 0x8ba);
      puVar6 = (undefined4 *)((int)puVar5 + iVar3);
      iVar2 = iVar3;
    } while (iVar3 < 0x3f48);
    iVar1 = iVar1 + 1;
    puVar5 = puVar5 + 0xfd2;
    puVar8 = puVar8 + 0xfd2;
  } while (iVar1 < 2);
  puVar5 = param_2 + 0x4000;
  iVar1 = 0;
  puVar8 = param_1 + 0x4000;
  do {
    iVar1 = iVar1 + 1;
    puVar8[-0x17a2] = puVar5[-0x17a2];
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar1 < 2);
  puVar5 = param_1 + 0x2860;
  uVar10 = 0;
  puVar8 = param_2 + 0x2860;
  do {
    FUN_089a34c0(puVar5,puVar8);
    FUN_089a34c0(puVar5 + 3,puVar8 + 3);
    puVar5[6] = puVar8[6];
    *(undefined2 *)(puVar5 + 7) = *(undefined2 *)(puVar8 + 7);
    *(undefined2 *)((int)puVar5 + 0x1e) = *(undefined2 *)((int)puVar8 + 0x1e);
    *(undefined1 *)(puVar5 + 8) = *(undefined1 *)(puVar8 + 8);
    iVar1 = 0;
    puVar6 = puVar8;
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)((int)puVar5 + iVar1 + 0x21) = *(undefined1 *)((int)puVar6 + 0x21);
      puVar6 = (undefined4 *)(iVar2 + (int)puVar8);
      iVar1 = iVar2;
    } while (iVar2 < 3);
    uVar10 = uVar10 + 1;
    puVar5 = puVar5 + 9;
    puVar8 = puVar8 + 9;
  } while (uVar10 < 200);
  param_1[0x2f68] = param_2[0x2f68];
  param_1[0x2f69] = param_2[0x2f69];
  param_1[0x2f6a] = param_2[0x2f6a];
  param_1[0x2f6b] = param_2[0x2f6b];
  *(undefined1 *)(param_1 + 0x2f6c) = *(undefined1 *)(param_2 + 0x2f6c);
  param_1[0x2f6d] = param_2[0x2f6d];
  FUN_088fb028(puVar9);
  return;
}

