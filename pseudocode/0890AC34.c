/* Entry 0x0890AC34 | file offset 0x00107C0C | FUN_0890ac34 | bytes 72 */

undefined4 FUN_0890ac34(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 4);
    uVar1 = (**(code **)(iVar2 + 0xb4))(*(int *)(param_1 + 0x1bc) + (int)*(short *)(iVar2 + 0xb0));
  }
  return uVar1;
}

