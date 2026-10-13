/* Entry 0x088A1DCC | file offset 0x0009EDA4 | FUN_088a1dcc | bytes 120 */

void FUN_088a1dcc(int param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    if ((param_2 & 1) != 0) {
      FUN_088a2104(param_1);
    }
  }
  return;
}

