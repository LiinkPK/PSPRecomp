/* Entry 0x0881C468 | file offset 0x00019440 | FUN_0881c468 | bytes 36 */

undefined4 FUN_0881c468(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 4) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

