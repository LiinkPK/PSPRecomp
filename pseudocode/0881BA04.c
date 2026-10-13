/* Entry 0x0881BA04 | file offset 0x000189DC | FUN_0881ba04 | bytes 40 */

undefined4 FUN_0881ba04(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    param_1[0x10] = '\x01';
    uVar1 = 0;
  }
  return uVar1;
}

