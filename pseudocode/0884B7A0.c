/* Entry 0x0884B7A0 | file offset 0x00048778 | FUN_0884b7a0 | bytes 360 */

void FUN_0884b7a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (0 < iVar2) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar2 - iVar4 < 3) {
      iVar5 = 3 - (iVar2 - iVar4);
      iVar3 = (iVar3 + iVar5) % iVar2;
      iVar4 = iVar4 - iVar5;
      *(int *)(param_1 + 0x14) = iVar4;
      *(int *)(param_1 + 0x10) = iVar3;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        FUN_0884a9b0(*(int *)(param_1 + 8) + iVar3 * 0x140);
        iVar2 = *(int *)(param_1 + 0xc);
        iVar3 = iVar3 + 1;
        if (iVar2 <= iVar3) {
          iVar3 = 0;
        }
        iVar4 = *(int *)(param_1 + 0x14);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      iVar3 = *(int *)(param_1 + 0x10);
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar1 = iVar3 * 0x140;
        iVar3 = iVar3 + 1;
        if (0.0 < *(float *)(*(int *)(param_1 + 8) + iVar1 + 0x120)) {
          return;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        *(int *)(param_1 + 0x10) = (*(int *)(param_1 + 0x10) + 1) % iVar2;
        if (iVar2 <= iVar3) {
          iVar3 = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  return;
}

