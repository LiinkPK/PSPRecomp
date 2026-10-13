/* Entry 0x08906B60 | file offset 0x00103B38 | FUN_08906b60 | bytes 64 */

void FUN_08906b60(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2d0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))
              ((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),*(undefined4 *)(param_1 + 0x2d4));
  }
  return;
}

