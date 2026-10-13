/* Entry 0x0890AC7C | file offset 0x00107C54 | FUN_0890ac7c | bytes 84 */

undefined4 FUN_0890ac7c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 4);
    uVar1 = (**(code **)(iVar2 + 0xbc))
                      (*(int *)(param_1 + 0x1bc) + (int)*(short *)(iVar2 + 0xb8),param_2);
  }
  return uVar1;
}

