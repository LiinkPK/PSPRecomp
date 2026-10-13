/* Entry 0x0881C4AC | file offset 0x00019484 | FUN_0881c4ac | bytes 108 */

undefined4 FUN_0881c4ac(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else if (param_1[8] == '\x01') {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_088168bc(param_1 + 0x14,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

