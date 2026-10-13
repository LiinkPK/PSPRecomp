/* Entry 0x08907AE4 | file offset 0x00104ABC | FUN_08907ae4 | bytes 260 */

void FUN_08907ae4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1658);
  if (iVar1 < 3) {
    if (1 < iVar1) {
      if ((*(int *)(param_1 + 0x16dc) < 5) && (*(char *)(param_1 + 0x16e5) == '\0')) {
        *(undefined4 *)(param_1 + 0x1658) = 3;
        return;
      }
      piVar2 = *(int **)(param_1 + 0x1660);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),1);
      }
      *(undefined4 *)(param_1 + 0x16dc) = 0;
      *(undefined1 *)(param_1 + 0x16e5) = 0;
      *(undefined4 *)(param_1 + 0x1658) = 0;
      return;
    }
  }
  else if (iVar1 == 7) {
    piVar2 = *(int **)(param_1 + 0x1660);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x1658) = 0;
    return;
  }
  piVar2 = *(int **)(param_1 + 0x1660);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x1658) = 0;
  return;
}

