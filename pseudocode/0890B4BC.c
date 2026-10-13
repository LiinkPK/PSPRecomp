/* Entry 0x0890B4BC | file offset 0x00108494 | FUN_0890b4bc | bytes 128 */

void FUN_0890b4bc(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 400) = 7;
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x9c))
              (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x98),param_2);
  }
  piVar2 = *(int **)(param_1 + 0x1b4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x6c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x68),param_2);
  }
  return;
}

