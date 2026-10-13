/* Entry 0x0890B600 | file offset 0x001085D8 | FUN_0890b600 | bytes 72 */

void FUN_0890b600(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1b4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10));
  }
  *(undefined4 *)(param_1 + 400) = 0;
  return;
}

