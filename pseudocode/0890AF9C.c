/* Entry 0x0890AF9C | file offset 0x00107F74 | FUN_0890af9c | bytes 156 */

void FUN_0890af9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 400) == 1) {
    iVar1 = *(int *)(param_1 + 0x1bc);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0x4c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x48),param_2,param_3,param_4);
    }
    piVar2 = *(int **)(param_1 + 0x1b4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),param_2);
    }
  }
  return;
}

