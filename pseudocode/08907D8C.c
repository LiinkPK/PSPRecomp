/* Entry 0x08907D8C | file offset 0x00104D64 | FUN_08907d8c | bytes 152 */

void FUN_08907d8c(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1660);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20),param_2);
  }
  *(undefined4 *)(param_1 + 0x1658) = 0;
  return;
}

