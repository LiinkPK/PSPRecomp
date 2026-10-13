/* Entry 0x0890BB3C | file offset 0x00108B14 | FUN_0890bb3c | bytes 280 */

undefined4 FUN_0890bb3c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  
  iVar5 = 0;
  iVar7 = param_1 + 8;
  if (0 < *(int *)(param_1 + 0x108)) {
    do {
      iVar4 = FUN_08935490(iVar7,param_2,6);
      if (iVar4 == 0) {
        iVar7 = *(int *)(param_1 + 0x108) + -1;
        if (iVar5 < iVar7) {
          iVar7 = param_1 + iVar5 * 0x10;
          puVar8 = (undefined1 *)(iVar7 + 8);
          puVar6 = (undefined1 *)(iVar7 + 0x18);
          do {
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            *puVar8 = *puVar6;
            uVar3 = puVar6[3];
            puVar8[1] = uVar1;
            uVar1 = puVar6[4];
            puVar8[2] = uVar2;
            uVar2 = puVar6[5];
            puVar8[3] = uVar3;
            puVar8[4] = uVar1;
            puVar8[5] = uVar2;
            FUN_08935524(*(undefined4 *)(puVar8 + 8),*(undefined4 *)(puVar6 + 8),
                         *(undefined4 *)(puVar6 + 0xc));
            iVar5 = iVar5 + 1;
            *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
            puVar8 = puVar8 + 0x10;
            iVar7 = *(int *)(param_1 + 0x108) + -1;
            puVar6 = puVar6 + 0x10;
          } while (iVar5 < iVar7);
        }
        *(int *)(param_1 + 0x108) = iVar7;
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x108));
  }
  return 0;
}

