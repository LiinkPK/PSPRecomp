/* Entry 0x0881F300 | file offset 0x0001C2D8 | FUN_0881f300 | bytes 108 */

undefined4 FUN_0881f300(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_0881f82c(param_1 + 8);
    if (iVar1 == 0) {
      iVar1 = FUN_08820540(param_1 + 0x24);
      if (iVar1 != 0) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

