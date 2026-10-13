/* Entry 0x08886A60 | file offset 0x00083A38 | FUN_08886a60 | bytes 72 */

undefined4 FUN_08886a60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + 0x544);
    uVar1 = (**(code **)(iVar2 + 0x134))(*(int *)(param_1 + 0xb4) + (int)*(short *)(iVar2 + 0x130));
  }
  return uVar1;
}

