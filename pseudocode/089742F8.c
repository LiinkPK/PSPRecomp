/* Entry 0x089742F8 | file offset 0x001712D0 | FUN_089742f8 | bytes 120 */

bool FUN_089742f8(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x608) + -1;
  if (*(int *)(param_1 + 0x608) < 1) {
    piVar1 = (int *)0x0;
  }
  else {
    *(int *)(param_1 + 0x608) = iVar2;
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x508);
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *param_2 + param_3;
    piVar1[1] = param_2[1] - param_3;
    piVar1[2] = -1;
    piVar1[3] = 0;
    piVar1[4] = param_2[4];
    param_2[1] = param_3;
    param_2[2] = param_4;
    param_2[3] = 0;
    param_2[4] = (int)piVar1;
  }
  return piVar1 != (int *)0x0;
}

