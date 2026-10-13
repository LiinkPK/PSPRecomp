/* Entry 0x08909F18 | file offset 0x00106EF0 | FUN_08909f18 | bytes 84 */

void FUN_08909f18(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14c64);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  }
  *(undefined4 *)(param_1 + 400) = 2;
  return;
}

