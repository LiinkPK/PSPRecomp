/* Entry 0x089067D8 | file offset 0x001037B0 | FUN_089067d8 | bytes 112 */

undefined4 FUN_089067d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2d0) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x2d0);
    uVar1 = (**(code **)(iVar2 + 0x1c))
                      ((int)*(int **)(param_1 + 0x2d0) + (int)*(short *)(iVar2 + 0x18),param_2,
                       param_3,param_4);
  }
  return uVar1;
}

