/* Entry 0x089068B8 | file offset 0x00103890 | FUN_089068b8 | bytes 172 */

void FUN_089068b8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x2d0);
  if (piVar4 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar4 + 0x5c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x58));
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = **(int **)(param_1 + 0x2d0);
        iVar2 = (**(code **)(iVar2 + 0x4c))
                          ((int)*(int **)(param_1 + 0x2d0) + (int)*(short *)(iVar2 + 0x48),iVar3);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined1 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + 0x24) = 0;
      } while (iVar3 < iVar1);
    }
  }
  return;
}

