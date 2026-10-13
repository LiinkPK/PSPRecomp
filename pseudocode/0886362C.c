/* Entry 0x0886362C | file offset 0x00060604 | FUN_0886362c | bytes 152 */

int FUN_0886362c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08935970(param_1,&DAT_089c9298);
  if ((iVar1 == 0) ||
     ((iVar1 = FUN_08935970(param_1,&DAT_089c929c), iVar1 != 0 &&
      (iVar1 = FUN_08935970(param_1,&DAT_089c92a0), iVar1 != 0)))) {
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_08864c00(0x160);
    iVar1 = 0;
    if (iVar2 != 0) {
      FUN_088631d0(iVar2);
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

