/* Entry 0x08885818 | file offset 0x000827F0 | FUN_08885818 | bytes 60 */

undefined4 FUN_08885818(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 8) == 0) || (iVar1 = FUN_08886094(), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

