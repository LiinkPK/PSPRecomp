/* Entry 0x08930EA0 | file offset 0x0012DE78 | FUN_08930ea0 | bytes 388 */

void FUN_08930ea0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  
  iVar7 = 0;
  iVar1 = *(int *)(param_1 + 0x260);
  iVar6 = param_1;
  piVar4 = param_2;
  do {
    iVar2 = *piVar4;
    *(int *)(iVar6 + 0x29c) = iVar2;
    if ((-1 < iVar2) && (iVar2 < iVar1)) {
      FUN_08930748(param_1 + iVar2 * 0x5c + 0x38);
      iVar1 = *(int *)(param_1 + 0x260);
    }
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar7 < 5);
  iVar7 = 0;
  iVar6 = 0;
  if (0 < iVar1) {
    iVar8 = param_1 + 0x38;
    puVar9 = &DAT_089cf1dc;
    iVar2 = param_1;
    do {
      bVar5 = false;
      iVar3 = 0;
      piVar4 = param_2;
      do {
        if (*piVar4 == iVar7) {
          bVar5 = true;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 5);
      if (!bVar5) {
        *(int *)(iVar2 + 0x2b0) = iVar7;
        FUN_0893083c(iVar8,*puVar9);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + 4;
        puVar9 = puVar9 + 1;
        iVar1 = *(int *)(param_1 + 0x260);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x5c;
    } while (iVar7 < iVar1);
  }
  if (iVar6 < 5) {
    iVar1 = param_1 + iVar6 * 4;
    do {
      *(undefined4 *)(iVar1 + 0x2b0) = 0xffffffff;
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar6 < 5);
  }
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x28) = 3;
  return;
}

