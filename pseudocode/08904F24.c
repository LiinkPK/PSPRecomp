/* Entry 0x08904F24 | file offset 0x00101EFC | FUN_08904f24 | bytes 468 */

void FUN_08904f24(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_08906740(*(int *)(param_1 + 4));
    bVar1 = false;
    piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x2d0);
    if (piVar4 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar4 + 0x3c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x38),0);
      bVar1 = false;
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
    if ((bVar1) &&
       (iVar2 = FUN_0890543c(param_1 + 0x14,*(undefined4 *)(param_1 + 0x24),
                             *(undefined4 *)(param_1 + 0x1f8)), 0 < iVar2)) {
      FUN_089067d8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x24),iVar2,0);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 500)) {
      iVar5 = param_1 + 0x34;
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x2d0);
        bVar1 = false;
        if (piVar4 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar4 + 0x44))((int)piVar4 + (int)*(short *)(*piVar4 + 0x40),iVar5)
          ;
          bVar1 = false;
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          iVar3 = *(int *)(iVar5 + 0x18);
          if (iVar3 == 4) {
            FUN_089051a8(param_1,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x14),
                         *(undefined4 *)(iVar5 + 0x10));
            *(undefined4 *)(iVar5 + 0x18) = 0;
          }
          else if (iVar3 == 2) {
            FUN_08906848(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar5 + 0x14),
                         *(undefined4 *)(iVar5 + 0x10),iVar5);
            *(undefined4 *)(iVar5 + 0x18) = 3;
          }
          else if (iVar3 == 0) {
            FUN_08906848(*(undefined4 *)(param_1 + 4),iVar5 + 8,0xc,iVar5);
            *(undefined4 *)(iVar5 + 0x18) = 1;
          }
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x1c;
      } while (iVar2 < *(int *)(param_1 + 500));
    }
  }
  return;
}

