/* Entry 0x0898B664 | file offset 0x0018863C | FUN_0898b664 | bytes 700 */

void FUN_0898b664(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  
  iVar12 = *param_2;
  iVar11 = param_2[4];
  iVar1 = param_2[1];
  uVar4 = param_2[5];
  fVar14 = *(float *)(param_3 + 0x3c) * 0.5;
  if (*(char *)(param_3 + 0xb1) == '\0') {
    iVar7 = iVar12 + 0x10;
    iVar5 = iVar1 + 0x10;
    FUN_0898d208(fVar14,iVar12,iVar1,iVar11,iVar11 + 0x10,iVar11);
    uVar10 = uVar4 - 1;
    uVar2 = 1;
    iVar13 = iVar11 + uVar10 * 0x10;
    iVar12 = iVar11;
    iVar6 = iVar5;
    iVar9 = iVar7;
    iVar1 = iVar11;
    if (1 < uVar10) {
      do {
        iVar7 = iVar9 + 0x10;
        uVar2 = uVar2 + 1;
        iVar5 = iVar6 + 0x10;
        FUN_0898d208(fVar14,iVar9,iVar6,iVar12,iVar11 + uVar2 * 0x10,iVar1 + 0x10);
        iVar12 = iVar12 + 0x10;
        iVar6 = iVar5;
        iVar9 = iVar7;
        iVar1 = iVar1 + 0x10;
      } while (uVar2 < uVar10);
    }
    FUN_0898d208(fVar14,iVar7,iVar5,iVar11 + (uVar4 - 2) * 0x10,iVar13,iVar13);
  }
  else if (uVar4 <= *(uint *)(param_1 + 0x30)) {
    iVar8 = iVar12 + 0x10;
    iVar13 = iVar1 + 0x10;
    iVar7 = 1;
    FUN_0898d208(**(float **)(param_1 + 0x2c) * fVar14,iVar12,iVar1,iVar11,iVar11 + 0x10,iVar11);
    uVar10 = uVar4 - 1;
    uVar2 = 1;
    iVar5 = *(int *)(param_1 + 0x2c);
    iVar12 = iVar11;
    iVar6 = iVar13;
    iVar9 = iVar8;
    iVar1 = iVar11;
    if (1 < uVar10) {
      do {
        iVar8 = iVar9 + 0x10;
        uVar2 = uVar2 + 1;
        iVar3 = iVar7 * 4;
        iVar13 = iVar6 + 0x10;
        iVar7 = iVar7 + 1;
        FUN_0898d208(*(float *)(iVar5 + iVar3) * fVar14,iVar9,iVar6,iVar12,iVar11 + uVar2 * 0x10,
                     iVar1 + 0x10);
        iVar5 = *(int *)(param_1 + 0x2c);
        iVar12 = iVar12 + 0x10;
        iVar6 = iVar13;
        iVar9 = iVar8;
        iVar1 = iVar1 + 0x10;
      } while (uVar2 < uVar10);
    }
    FUN_0898d208(*(float *)(iVar5 + iVar7 * 4) * fVar14,iVar8,iVar13,iVar11 + (uVar4 - 2) * 0x10,
                 iVar11 + uVar10 * 0x10);
  }
  return;
}

