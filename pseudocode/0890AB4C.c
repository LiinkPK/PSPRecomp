/* Entry 0x0890AB4C | file offset 0x00107B24 | FUN_0890ab4c | bytes 120 */

undefined4 FUN_0890ab4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 400) == 7) {
    iVar2 = *(int *)(param_1 + 0x1bc);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 4) + 0x2c))
                (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x28),param_1 + 4,param_2,param_3);
    }
    *(undefined4 *)(param_1 + 400) = 5;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

