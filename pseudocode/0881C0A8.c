/* Entry 0x0881C0A8 | file offset 0x00019080 | FUN_0881c0a8 | bytes 160 */

undefined4 FUN_0881c0a8(char *param_1,short *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == (short *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else if (param_1[8] == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_08899300();
    FUN_088981b4(uVar1,(int)*param_2,param_3,0);
    FUN_0881c3f0(param_1,(int)*param_2,param_3);
    uVar1 = 0;
  }
  return uVar1;
}

