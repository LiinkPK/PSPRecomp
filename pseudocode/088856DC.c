/* Entry 0x088856DC | file offset 0x000826B4 | FUN_088856dc | bytes 196 */

undefined4 FUN_088856dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 4) == 0) || (iVar1 = FUN_08884f58(), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_088864ac(), iVar1 != 0)) {
      if ((*(int *)(param_1 + 8) == 0) || (iVar1 = FUN_088860c8(), iVar1 != 0)) {
        if ((*(int *)(param_1 + 0x10) == 0) ||
           (iVar1 = FUN_08884770(*(int *)(param_1 + 0x10)), iVar1 != 0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

