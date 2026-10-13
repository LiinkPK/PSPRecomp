/* Entry 0x0890AA80 | file offset 0x00107A58 | FUN_0890aa80 | bytes 100 */

undefined4 FUN_0890aa80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 400) == 7) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 4);
    uVar1 = (**(code **)(iVar2 + 0x1c))
                      (*(int *)(param_1 + 0x1bc) + (int)*(short *)(iVar2 + 0x18),param_1 + 4);
  }
  return uVar1;
}

