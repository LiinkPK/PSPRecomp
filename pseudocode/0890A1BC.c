/* Entry 0x0890A1BC | file offset 0x00107194 | FUN_0890a1bc | bytes 64 */

void FUN_0890a1bc(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14c64);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x4c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x48));
  }
  return;
}

