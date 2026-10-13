/* Entry 0x08908DE8 | file offset 0x00105DC0 | FUN_08908de8 | bytes 56 */

void FUN_08908de8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  }
  return;
}

