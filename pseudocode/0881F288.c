/* Entry 0x0881F288 | file offset 0x0001C260 | FUN_0881f288 | bytes 120 */

undefined4 FUN_0881f288(char *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0881f79c(param_1 + 8,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_088204b0(param_1 + 0x24,param_2);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

