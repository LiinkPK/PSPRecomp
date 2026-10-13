/* Entry 0x0890B5B4 | file offset 0x0010858C | FUN_0890b5b4 | bytes 76 */

void FUN_0890b5b4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1b4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
  }
  *(undefined4 *)(param_1 + 400) = 3;
  return;
}

