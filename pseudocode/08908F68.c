/* Entry 0x08908F68 | file offset 0x00105F40 | FUN_08908f68 | bytes 68 */

void FUN_08908f68(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),param_2);
  }
  return;
}

