/* Entry 0x0881C584 | file offset 0x0001955C | FUN_0881c584 | bytes 132 */

undefined4
FUN_0881c584(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
    iVar1 = FUN_08816b3c(param_1 + 0x14,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

