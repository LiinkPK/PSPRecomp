/* Entry 0x0898B2C4 | file offset 0x0018829C | FUN_0898b2c4 | bytes 928 */

void FUN_0898b2c4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_60;
  int local_5c;
  
  iVar4 = *param_2;
  iVar3 = param_2[1];
  iVar1 = param_2[2];
  iVar7 = param_2[4];
  iVar9 = param_2[3];
  uVar8 = param_2[5];
  fVar16 = *(float *)(param_3 + 0x3c) * 0.5;
  fVar17 = *(float *)(param_3 + 0x40) * 0.5;
  if (*(char *)(param_3 + 0xb1) == '\0') {
    iVar13 = iVar4 + 0x10;
    iVar11 = iVar1 + 0x10;
    iVar12 = iVar3 + 0x10;
    iVar10 = iVar9 + 0x10;
    FUN_0898d30c(fVar16,fVar17,iVar4,iVar3,iVar1,iVar9,iVar7,iVar7 + 0x10,iVar7);
    uVar2 = uVar8 - 1;
    uVar5 = 1;
    iVar1 = iVar7;
    iVar3 = iVar10;
    iVar4 = iVar12;
    iVar9 = iVar11;
    iVar6 = iVar7;
    local_5c = iVar13;
    if (1 < uVar2) {
      do {
        iVar13 = local_5c + 0x10;
        iVar11 = iVar9 + 0x10;
        uVar5 = uVar5 + 1;
        iVar12 = iVar4 + 0x10;
        iVar10 = iVar3 + 0x10;
        FUN_0898d30c(fVar16,fVar17,local_5c,iVar4,iVar9,iVar3,iVar1,iVar7 + uVar5 * 0x10,
                     iVar6 + 0x10);
        iVar1 = iVar1 + 0x10;
        iVar3 = iVar10;
        iVar4 = iVar12;
        iVar9 = iVar11;
        iVar6 = iVar6 + 0x10;
        local_5c = iVar13;
      } while (uVar5 < uVar2);
    }
    FUN_0898d30c(fVar16,fVar17,iVar13,iVar12,iVar11,iVar10,iVar7 + (uVar8 - 2) * 0x10,
                 iVar7 + uVar2 * 0x10);
  }
  else if (uVar8 <= *(uint *)(param_1 + 0x30)) {
    iVar14 = iVar4 + 0x10;
    iVar13 = iVar3 + 0x10;
    iVar11 = iVar9 + 0x10;
    iVar12 = iVar1 + 0x10;
    iVar10 = 1;
    FUN_0898d30c(fVar16 * **(float **)(param_1 + 0x2c),fVar17 * **(float **)(param_1 + 0x2c),iVar4,
                 iVar3,iVar1,iVar9,iVar7,iVar7 + 0x10,iVar7);
    uVar5 = uVar8 - 1;
    uVar2 = 1;
    iVar6 = *(int *)(param_1 + 0x2c);
    iVar1 = iVar7;
    iVar3 = iVar11;
    iVar4 = iVar12;
    iVar9 = iVar7;
    local_60 = iVar13;
    local_5c = iVar14;
    if (1 < uVar5) {
      do {
        fVar15 = *(float *)(iVar6 + iVar10 * 4);
        iVar14 = local_5c + 0x10;
        iVar13 = local_60 + 0x10;
        iVar12 = iVar4 + 0x10;
        uVar2 = uVar2 + 1;
        iVar11 = iVar3 + 0x10;
        iVar10 = iVar10 + 1;
        FUN_0898d30c(fVar16 * fVar15,fVar17 * fVar15,local_5c,local_60,iVar4,iVar3,iVar1,
                     iVar7 + uVar2 * 0x10,iVar9 + 0x10);
        iVar6 = *(int *)(param_1 + 0x2c);
        iVar1 = iVar1 + 0x10;
        iVar3 = iVar11;
        iVar4 = iVar12;
        iVar9 = iVar9 + 0x10;
        local_60 = iVar13;
        local_5c = iVar14;
      } while (uVar2 < uVar5);
    }
    fVar15 = *(float *)(iVar6 + iVar10 * 4);
    FUN_0898d30c(fVar16 * fVar15,fVar17 * fVar15,iVar14,iVar13,iVar12,iVar11,
                 iVar7 + (uVar8 - 2) * 0x10,iVar7 + uVar5 * 0x10);
  }
  return;
}

