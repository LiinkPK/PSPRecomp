/* Entry 0x08885854 | file offset 0x0008282C | FUN_08885854 | bytes 60 */

undefined4 FUN_08885854(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 4) == 0) || (iVar1 = FUN_08884f24(), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

