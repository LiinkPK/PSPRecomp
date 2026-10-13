/* Entry 0x0890B428 | file offset 0x00108400 | FUN_0890b428 | bytes 148 */

void FUN_0890b428(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x94))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x90),param_2);
  }
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 400) = 7;
    piVar3 = *(int **)(param_1 + 0x1b4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 100))((int)piVar3 + (int)*(short *)(*piVar3 + 0x60),param_2);
    }
  }
  return;
}

