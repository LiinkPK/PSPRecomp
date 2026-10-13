/* Entry 0x08909CA0 | file offset 0x00106C78 | FUN_08909ca0 | bytes 80 */

void FUN_08909ca0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14c64);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10));
  }
  *(undefined4 *)(param_1 + 400) = 0;
  return;
}

