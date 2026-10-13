/* Entry 0x088374B0 | file offset 0x00034488 | FUN_088374b0 | bytes 124 */

undefined4 FUN_088374b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_088373c8();
  if (iVar1 == 0) {
    iVar1 = FUN_08837584(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0883752c(param_1);
      if (iVar1 == 0) {
        if (**(int **)(param_1 + 0x3a4) == 0x12) {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

