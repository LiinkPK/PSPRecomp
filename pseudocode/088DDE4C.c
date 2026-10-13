/* Entry 0x088DDE4C | file offset 0x000DAE24 | FUN_088dde4c | bytes 516 */

void FUN_088dde4c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar10 = *(int **)(param_1 + 0x5c);
  iVar3 = *piVar10;
  uVar1 = FUN_088dc7a8();
  uVar2 = FUN_0885c6cc(*(undefined4 *)(DAT_089d7830 + 4),uVar1,0,0,1,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  FUN_08935524(uVar2,piVar10 + 1,uVar1);
  FUN_0885c538(param_2,piVar10,0);
  FUN_088dc7e4(param_1);
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x5c);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar7 = 0;
    do {
      iVar8 = *(int *)(param_1 + 4) + iVar7;
      iVar5 = iVar5 + 1;
      *(int *)(iVar8 + 4) = (*(int *)(iVar8 + 4) - iVar3) + iVar4;
      iVar7 = iVar7 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x24));
  }
  iVar7 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      iVar8 = *(int *)(param_1 + 0xc) + iVar5;
      *(int *)(iVar8 + 0xc) = (*(int *)(iVar8 + 0xc) - iVar3) + iVar4;
      iVar9 = 0;
      pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + iVar5);
      iVar8 = 0;
      if (*pbVar6 != 0) {
        do {
          *(int *)(*(int *)(pbVar6 + 0xc) + iVar8 + 4) =
               (*(int *)(*(int *)(pbVar6 + 0xc) + iVar8 + 4) - iVar3) + iVar4;
          iVar9 = iVar9 + 1;
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + iVar5);
          iVar8 = iVar8 + 8;
        } while (iVar9 < (int)(uint)*pbVar6);
      }
      if (*(int *)(pbVar6 + 0x18) != 0) {
        *(int *)(pbVar6 + 0x10) = (*(int *)(pbVar6 + 0x10) - iVar3) + iVar4;
        *(int *)(pbVar6 + 0x14) = (*(int *)(pbVar6 + 0x14) - iVar3) + iVar4;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (iVar7 < *(int *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar7 = 0;
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      do {
        iVar8 = *(int *)(param_1 + 0x54) + iVar5;
        *(int *)(iVar8 + 8) = ((iVar8 + 8) - iVar3) + iVar4;
        iVar7 = iVar7 + 1;
        iVar8 = *(int *)(param_1 + 0x54) + iVar5;
        *(int *)(iVar8 + 0xc) = ((iVar8 + 0xc) - iVar3) + iVar4;
        iVar5 = iVar5 + 0x10;
      } while (iVar7 < *(int *)(param_1 + 0x58));
    }
  }
  return;
}

