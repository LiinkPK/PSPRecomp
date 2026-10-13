/* Entry 0x0887DBD4 | file offset 0x0007ABAC | FUN_0887dbd4 | bytes 560 */

void FUN_0887dbd4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  
  iVar9 = 0;
  while( true ) {
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 0x168);
    }
    else {
      iVar9 = *(int *)(iVar9 + 0x48);
    }
    if (iVar9 == 0) break;
    uVar4 = *(uint *)(iVar9 + 0x10);
    *(uint *)(iVar9 + 0x10) = uVar4 & 0xfffffdff;
    if ((uVar4 & 0x400) == 0) {
      bVar1 = true;
      if ((uVar4 & 0x1000) == 0) {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_0887bad4(iVar9);
    }
  }
  iVar9 = *(int *)(param_1 + 0x174);
  while (iVar2 = iVar9, iVar2 != 0) {
    if (iVar2 == 0) {
      iVar9 = *(int *)(param_1 + 0x174);
    }
    else {
      iVar9 = *(int *)(iVar2 + 0x38);
    }
    iVar3 = FUN_0887a544(iVar2);
    if (iVar3 != 0) {
      FUN_0887da08(param_1,iVar2 + 0x2c);
      iVar5 = 0;
      while (iVar5 = FUN_0887a5e0(iVar2,iVar5), iVar5 != 0) {
        if (**(int **)(param_1 + 0xe2b8) != 0) {
          for (piVar8 = (int *)(*(int **)(param_1 + 0xe2b8))[1]; *piVar8 != 0;
              piVar8 = (int *)piVar8[1]) {
          }
        }
        **(int **)(param_1 + 0xe2bc) = iVar5;
        *(undefined4 *)(param_1 + 0xe2bc) = *(undefined4 *)(*(int *)(param_1 + 0xe2bc) + 4);
      }
      FUN_0887a5d0(iVar2);
      FUN_0887d828(0,iVar3);
      if (*(int *)(iVar2 + 0x3c) == 0) {
        *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar2 + 0x38);
        iVar3 = *(int *)(iVar2 + 0x38);
        uVar6 = *(undefined4 *)(iVar2 + 0x3c);
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x3c) + 0x38) = *(undefined4 *)(iVar2 + 0x38);
        iVar3 = *(int *)(iVar2 + 0x38);
        uVar6 = *(undefined4 *)(iVar2 + 0x3c);
      }
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x178) = uVar6;
      }
      else {
        *(undefined4 *)(iVar3 + 0x3c) = uVar6;
      }
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + -1;
      pcVar7 = *(code **)(iVar2 + 0x14);
      uVar6 = *(undefined4 *)(iVar2 + 0x18);
      if (**(int **)(param_1 + 0xa7f0) != 0) {
        for (piVar8 = (int *)(*(int **)(param_1 + 0xa7f0))[1]; *piVar8 != 0;
            piVar8 = (int *)piVar8[1]) {
        }
      }
      **(int **)(param_1 + 0xa7f4) = iVar2;
      *(undefined4 *)(param_1 + 0xa7f4) = *(undefined4 *)(*(int *)(param_1 + 0xa7f4) + 4);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar6);
      }
    }
  }
  return;
}

