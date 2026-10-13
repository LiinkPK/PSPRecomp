/* Entry 0x08904820 | file offset 0x001017F8 | FUN_08904820 | bytes 344 */

undefined4 FUN_08904820(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_30 [24];
  
  iVar10 = 0;
  puVar12 = (undefined4 *)(param_1 + 8);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      uVar1 = FUN_08905810(auStack_30,param_2);
      iVar2 = FUN_08935490(puVar12,uVar1,6);
      iVar3 = *(int *)(param_1 + 4);
      if (iVar2 == 0) {
        iVar2 = iVar3 + -1;
        if (iVar10 < iVar2) {
          uVar1 = *puVar12;
          uVar7 = puVar12[1];
          uVar9 = puVar12[2];
          uVar5 = puVar12[3];
          if (iVar10 < iVar2) {
            iVar2 = param_1 + iVar10 * 0x10;
            puVar12 = (undefined4 *)(iVar2 + 8);
            puVar11 = (undefined4 *)(iVar2 + 0x18);
            do {
              uVar6 = puVar11[1];
              uVar8 = puVar11[2];
              *puVar12 = *puVar11;
              uVar4 = puVar11[3];
              puVar12[1] = uVar6;
              puVar12[2] = uVar8;
              puVar12[3] = uVar4;
              iVar3 = *(int *)(param_1 + 4);
              iVar10 = iVar10 + 1;
              puVar12 = puVar12 + 4;
              puVar11 = puVar11 + 4;
            } while (iVar10 < iVar3 + -1);
          }
          puVar12 = (undefined4 *)(param_1 + iVar3 * 0x10);
          puVar12[-2] = uVar1;
          puVar12[-1] = uVar7;
          *puVar12 = uVar9;
          puVar12[1] = uVar5;
          iVar2 = *(int *)(param_1 + 4) + -1;
        }
        *(int *)(param_1 + 4) = iVar2;
        return 1;
      }
      iVar10 = iVar10 + 1;
      puVar12 = puVar12 + 4;
    } while (iVar10 < iVar3);
  }
  return 0;
}

