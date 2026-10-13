/* Entry 0x0881C68C | file offset 0x00019664 | FUN_0881c68c | bytes 88 */

undefined4 FUN_0881c68c(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  else if (param_1[8] == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_08816cf4(param_1 + 0x14,param_2);
  }
  return uVar1;
}

