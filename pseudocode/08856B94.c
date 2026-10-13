/* Entry 0x08856B94 | file offset 0x00053B6C | FUN_08856b94 | bytes 436 */

void FUN_08856b94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar2 = *(int *)(param_1 + 0x134);
  if (iVar2 != 0) {
    iVar1 = 0;
    fVar9 = *(float *)(param_1 + 0x80);
    iVar3 = param_1;
    if (0 < iVar2) {
      do {
        if (((*(uint *)(*(int *)(iVar3 + 0x74) + 0x388) & 4) != 0) || (iVar1 != iVar2 + -1)) {
          *(undefined4 *)(iVar3 + 0x84) = 0x41f00000;
        }
        if ((*(uint *)(*(int *)(iVar3 + 0x74) + 0x388) & 2) != 0) {
          *(undefined4 *)(iVar3 + 0x84) = 0;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar1 < iVar2);
    }
    fVar9 = fVar9 + *(float *)(DAT_089d69e0 + 0x18);
    *(float *)(param_1 + 0x80) = fVar9;
    if (*(float *)(param_1 + 0x84) <= fVar9) {
      if (*(int *)(param_1 + 0x78) != 0) {
        FUN_0887ba5c(*(int *)(param_1 + 0x78));
        *(undefined4 *)(param_1 + 0x78) = 0;
        iVar2 = *(int *)(param_1 + 0x134);
      }
      iVar3 = 0;
      iVar2 = iVar2 + -1;
      if (0 < iVar2) {
        puVar4 = (undefined4 *)(param_1 + 0x74);
        puVar5 = (undefined4 *)(param_1 + 0x94);
        iVar1 = param_1;
        do {
          uVar6 = puVar5[1];
          uVar7 = puVar5[2];
          uVar11 = puVar5[3];
          *puVar4 = *puVar5;
          uVar10 = puVar5[4];
          puVar4[1] = uVar6;
          puVar4[2] = uVar7;
          uVar8 = puVar5[5];
          puVar4[3] = uVar11;
          uVar6 = puVar5[6];
          puVar4[4] = uVar10;
          uVar7 = puVar5[7];
          puVar4[5] = uVar8;
          puVar4[6] = uVar6;
          puVar4[7] = uVar7;
          *(undefined4 *)(iVar1 + 0x98) = 0;
          *(undefined4 *)(iVar1 + 0x94) = 0;
          iVar3 = iVar3 + 1;
          iVar2 = *(int *)(param_1 + 0x134) + -1;
          iVar1 = iVar1 + 0x20;
          puVar4 = puVar4 + 8;
          puVar5 = puVar5 + 8;
        } while (iVar3 < iVar2);
      }
      *(int *)(param_1 + 0x134) = iVar2;
    }
  }
  return;
}

