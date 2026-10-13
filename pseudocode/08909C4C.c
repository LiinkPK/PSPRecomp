/* Entry 0x08909C4C | file offset 0x00106C24 | FUN_08909c4c | bytes 84 */

void FUN_08909c4c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14c64);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
  }
  *(undefined4 *)(param_1 + 400) = 2;
  return;
}

