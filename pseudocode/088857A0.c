/* Entry 0x088857A0 | file offset 0x00082778 | FUN_088857a0 | bytes 60 */

undefined4 FUN_088857a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 8) == 0) || (iVar1 = FUN_088860c8(), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

