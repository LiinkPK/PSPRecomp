/* Entry 0x0890B20C | file offset 0x001081E4 | FUN_0890b20c | bytes 140 */

void FUN_0890b20c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x74))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x70),param_2), iVar1 == 1)) {
    *(undefined4 *)(param_1 + 400) = 7;
  }
  piVar2 = *(int **)(param_1 + 0x1b4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x44))((int)piVar2 + (int)*(short *)(*piVar2 + 0x40),param_2);
  }
  return;
}

