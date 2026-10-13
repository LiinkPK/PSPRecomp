/* Entry 0x0888AD50 | file offset 0x00087D28 | FUN_0888ad50 | bytes 708 */

void FUN_0888ad50(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined4 local_30;
  int local_2c;
  
  FUN_08889060(DAT_089d6a10);
  uVar1 = FUN_088909c8(60000);
  *(undefined4 *)(DAT_089d6a10 + 0x7cc) = uVar1;
  FUN_088b0af8(*(undefined4 *)(DAT_089d6a10 + 0x7cc));
  uVar1 = FUN_088908f0();
  FUN_088af020(DAT_089d7260,uVar1);
  iVar11 = *(int *)(DAT_089d6a10 + 0x7cc);
  puVar2 = (undefined4 *)FUN_08889c30();
  puVar3 = puVar2 + 1;
  *(undefined4 *)(iVar11 + 0x2c90) = *puVar2;
  iVar4 = 0;
  iVar6 = 0x45c;
  uVar1 = *puVar3;
  puVar8 = puVar3;
  puVar10 = (undefined4 *)(iVar11 + 0x2c94);
  do {
    uVar7 = puVar8[1];
    *puVar10 = uVar1;
    iVar4 = iVar4 + 8;
    puVar10[1] = uVar7;
    puVar8 = (undefined4 *)((int)puVar3 + iVar4);
    iVar6 = iVar6 + -1;
    uVar1 = *puVar8;
    puVar10 = (undefined4 *)(iVar11 + 0x2c94 + iVar4);
  } while (iVar6 != 0);
  *puVar10 = uVar1;
  iVar6 = 0;
  puVar8 = puVar2;
  iVar4 = iVar11;
  do {
    iVar5 = 0;
    puVar10 = puVar8;
    do {
      iVar9 = iVar4 + iVar5;
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar9 + 0x4f78) = *(undefined1 *)(puVar10 + 0x8ba);
      puVar10 = (undefined4 *)((int)puVar8 + iVar5);
    } while (iVar5 < 0x3f48);
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 0xfd2;
    iVar4 = iVar4 + 0x3f48;
  } while (iVar6 < 2);
  iVar4 = 0;
  puVar8 = puVar2 + 0x4000;
  iVar6 = iVar11 + 0x10000;
  do {
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar6 + -0x31f8) = puVar8[-0x17a2];
    puVar8 = puVar8 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar4 < 2);
  uVar12 = 0;
  iVar4 = iVar11 + 0xce10;
  puVar8 = puVar2 + 0x2860;
  do {
    FUN_089a34c0(iVar4,puVar8);
    FUN_089a34c0(iVar4 + 0xc,puVar8 + 3);
    *(undefined4 *)(iVar4 + 0x18) = puVar8[6];
    *(undefined2 *)(iVar4 + 0x1c) = *(undefined2 *)(puVar8 + 7);
    iVar6 = 0;
    *(undefined2 *)(iVar4 + 0x1e) = *(undefined2 *)((int)puVar8 + 0x1e);
    *(undefined1 *)(iVar4 + 0x20) = *(undefined1 *)(puVar8 + 8);
    puVar10 = puVar8;
    do {
      iVar5 = iVar6 + iVar4;
      iVar6 = iVar6 + 1;
      *(undefined1 *)(iVar5 + 0x21) = *(undefined1 *)((int)puVar10 + 0x21);
      puVar10 = (undefined4 *)(iVar6 + (int)puVar8);
    } while (iVar6 < 3);
    uVar12 = uVar12 + 1;
    iVar4 = iVar4 + 0x24;
    puVar8 = puVar8 + 9;
  } while (uVar12 < 200);
  *(undefined4 *)(iVar11 + 0xea30) = puVar2[0x2f68];
  *(undefined4 *)(iVar11 + 0xea34) = puVar2[0x2f69];
  *(undefined4 *)(iVar11 + 0xea38) = puVar2[0x2f6a];
  *(undefined4 *)(iVar11 + 0xea3c) = puVar2[0x2f6b];
  *(undefined1 *)(iVar11 + 0xea40) = *(undefined1 *)(puVar2 + 0x2f6c);
  *(undefined4 *)(iVar11 + 0xea44) = puVar2[0x2f6d];
  iVar4 = DAT_089d6a10;
  FUN_08889c38(DAT_089d6a10,*(undefined4 *)(DAT_089d6a10 + 0x54),auStack_40);
  FUN_08889c38(iVar4,1 - *(int *)(iVar4 + 0x54),auStack_38);
  uVar1 = FUN_0889716c(*(undefined4 *)(iVar4 + 0x800));
  local_30 = FUN_088d5258(uVar1);
  local_2c = *(int *)(iVar11 + 0xea3c) / 0x1e;
  FUN_088b0ba8(auStack_40);
  return;
}

