/* Entry 0x0890ACD0 | file offset 0x00107CA8 | FUN_0890acd0 | bytes 72 */

undefined4 FUN_0890acd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 4);
    uVar1 = (**(code **)(iVar2 + 0xc4))(*(int *)(param_1 + 0x1bc) + (int)*(short *)(iVar2 + 0xc0));
  }
  return uVar1;
}

