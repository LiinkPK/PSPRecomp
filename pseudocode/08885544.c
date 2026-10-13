/* Entry 0x08885544 | file offset 0x0008251C | FUN_08885544 | bytes 196 */

undefined4 FUN_08885544(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 4) == 0) || (iVar1 = FUN_08884eb8(), iVar1 == 0)) {
    if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_0888641c(), iVar1 == 0)) {
      if ((*(int *)(param_1 + 8) == 0) || (iVar1 = FUN_08886028(), iVar1 == 0)) {
        if ((*(int *)(param_1 + 0x10) == 0) ||
           (iVar1 = FUN_088846ac(*(int *)(param_1 + 0x10)), iVar1 == 0)) {
          uVar2 = 0;
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
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

