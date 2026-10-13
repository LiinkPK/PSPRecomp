/* Entry 0x0890A358 | file offset 0x00107330 | FUN_0890a358 | bytes 168 */

void FUN_0890a358(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = 0;
  *(int *)(param_1 + 0x139f0) = *(int *)(param_1 + 8);
  puVar6 = (undefined1 *)(param_1 + 0xc);
  if (0 < *(int *)(param_1 + 8)) {
    puVar5 = (undefined1 *)(param_1 + 0x13f0);
    do {
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      *puVar5 = *puVar6;
      uVar3 = puVar6[3];
      puVar5[1] = uVar1;
      uVar1 = puVar6[4];
      puVar5[2] = uVar2;
      uVar2 = puVar6[5];
      puVar5[3] = uVar3;
      puVar5[4] = uVar1;
      puVar5[5] = uVar2;
      iVar10 = *(int *)(puVar6 + 8);
      iVar9 = 0;
      iVar8 = 0x24b;
      do {
        uVar4 = ((undefined4 *)(iVar10 + iVar9))[1];
        *(undefined4 *)(puVar5 + iVar9 + 8) = *(undefined4 *)(iVar10 + iVar9);
        *(undefined4 *)((int)(puVar5 + iVar9 + 8) + 4) = uVar4;
        iVar8 = iVar8 + -1;
        iVar9 = iVar9 + 8;
      } while (iVar8 != 0);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x10;
      puVar5 = puVar5 + 0x1260;
    } while (iVar7 < *(int *)(param_1 + 0x139f0));
  }
  return;
}

