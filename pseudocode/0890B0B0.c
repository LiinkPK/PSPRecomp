/* Entry 0x0890B0B0 | file offset 0x00108088 | FUN_0890b0b0 | bytes 68 */

void FUN_0890b0b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1b4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28),param_2);
  }
  return;
}

