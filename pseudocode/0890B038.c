/* Entry 0x0890B038 | file offset 0x00108010 | FUN_0890b038 | bytes 120 */

void FUN_0890b038(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x54))
              (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x50),param_2);
  }
  piVar2 = *(int **)(param_1 + 0x1b4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),param_2);
  }
  return;
}

