/* Entry 0x08856F7C | file offset 0x00053F54 | FUN_08856f7c | bytes 396 */

void FUN_08856f7c(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar2 = *(int *)(param_1 + 0x134);
  iVar10 = 0;
  if (0 < iVar2) {
    piVar12 = (int *)(param_1 + 0x74);
    iVar11 = param_1;
    do {
      if ((((*piVar12 == param_2) && (piVar12[6] == param_3)) && (piVar12[7] == param_4)) &&
         (*(byte *)(piVar12 + 5) == param_5)) {
        if (*(int *)(iVar11 + 0x78) != 0) {
          FUN_0887ba5c(*(int *)(iVar11 + 0x78));
          *(undefined4 *)(iVar11 + 0x78) = 0;
          iVar2 = *(int *)(param_1 + 0x134);
        }
        iVar2 = iVar2 + -1;
        if (iVar10 < iVar2) {
          iVar4 = param_1 + iVar10 * 0x20;
          puVar5 = (undefined4 *)(iVar4 + 0x74);
          puVar6 = (undefined4 *)(iVar4 + 0x94);
          iVar3 = iVar10;
          do {
            uVar7 = puVar6[1];
            uVar8 = puVar6[2];
            uVar14 = puVar6[3];
            *puVar5 = *puVar6;
            uVar13 = puVar6[4];
            puVar5[1] = uVar7;
            puVar5[2] = uVar8;
            uVar9 = puVar6[5];
            puVar5[3] = uVar14;
            uVar7 = puVar6[6];
            puVar5[4] = uVar13;
            uVar8 = puVar6[7];
            puVar5[5] = uVar9;
            puVar5[6] = uVar7;
            puVar5[7] = uVar8;
            *(undefined4 *)(iVar4 + 0x98) = 0;
            *(undefined4 *)(iVar4 + 0x94) = 0;
            iVar3 = iVar3 + 1;
            iVar2 = *(int *)(param_1 + 0x134) + -1;
            iVar4 = iVar4 + 0x20;
            puVar5 = puVar5 + 8;
            puVar6 = puVar6 + 8;
          } while (iVar3 < iVar2);
        }
        *(int *)(param_1 + 0x134) = iVar2;
        bVar1 = iVar10 < iVar2;
      }
      else {
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x20;
        piVar12 = piVar12 + 8;
        bVar1 = iVar10 < iVar2;
      }
    } while (bVar1);
  }
  return;
}

