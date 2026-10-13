/* Entry 0x0890B53C | file offset 0x00108514 | FUN_0890b53c | bytes 120 */

void FUN_0890b53c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xa4))
              (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0xa0),param_2);
  }
  piVar2 = *(int **)(param_1 + 0x1b4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x74))((int)piVar2 + (int)*(short *)(*piVar2 + 0x70),param_2);
  }
  return;
}

