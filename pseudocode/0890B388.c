/* Entry 0x0890B388 | file offset 0x00108360 | FUN_0890b388 | bytes 160 */

void FUN_0890b388(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x8c))
              (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x88),param_2,param_3,param_4);
  }
  piVar2 = *(int **)(param_1 + 0x1b4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x5c))
              ((int)piVar2 + (int)*(short *)(*piVar2 + 0x58),param_2,param_3,param_4);
  }
  return;
}

