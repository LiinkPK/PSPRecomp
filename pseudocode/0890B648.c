/* Entry 0x0890B648 | file offset 0x00108620 | FUN_0890b648 | bytes 68 */

void FUN_0890b648(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1b4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x84))((int)piVar1 + (int)*(short *)(*piVar1 + 0x80),param_2);
  }
  return;
}

