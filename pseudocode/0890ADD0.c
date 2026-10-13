/* Entry 0x0890ADD0 | file offset 0x00107DA8 | FUN_0890add0 | bytes 128 */

void FUN_0890add0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x44))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x40),param_1 + 4), iVar1 == 0)) {
    piVar2 = *(int **)(param_1 + 0x1b4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x7c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x78),0);
    }
    *(undefined4 *)(param_1 + 400) = 1;
  }
  return;
}

