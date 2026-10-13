/* Entry 0x08909ED8 | file offset 0x00106EB0 | FUN_08909ed8 | bytes 64 */

void FUN_08909ed8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14c64);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  }
  return;
}

