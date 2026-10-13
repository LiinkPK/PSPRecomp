/* Entry 0x08906848 | file offset 0x00103820 | FUN_08906848 | bytes 112 */

undefined4 FUN_08906848(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2d0) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x2d0);
    uVar1 = (**(code **)(iVar2 + 0x24))
                      ((int)*(int **)(param_1 + 0x2d0) + (int)*(short *)(iVar2 + 0x20),param_2,
                       param_3,param_4);
  }
  return uVar1;
}

