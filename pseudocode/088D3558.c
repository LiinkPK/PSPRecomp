/* Entry 0x088D3558 | file offset 0x000D0530 | FUN_088d3558 | bytes 136 */

int FUN_088d3558(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      do {
        if (*piVar1 == param_2) {
          param_3 = param_3 + param_2;
          if (param_3 < *(int *)(param_1 + 8)) {
            return *(int *)(param_1 + 0xc);
          }
          if (param_3 <= *(int *)(param_1 + 0xc)) {
            return param_3;
          }
          return *(int *)(param_1 + 8);
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x1c));
    }
  }
  return param_2;
}

