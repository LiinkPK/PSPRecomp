/* Entry 0x08909F6C | file offset 0x00106F44 | FUN_08909f6c | bytes 84 */

void FUN_08909f6c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14c64);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))((int)piVar1 + (int)*(short *)(*piVar1 + 0x30));
  }
  *(undefined4 *)(param_1 + 400) = 2;
  return;
}

