/* Entry 0x0881C518 | file offset 0x000194F0 | FUN_0881c518 | bytes 108 */

undefined4 FUN_0881c518(char *param_1,undefined4 param_2)

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
    iVar1 = FUN_08816a00(param_1 + 0x14,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

