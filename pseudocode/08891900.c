/* Entry 0x08891900 | file offset 0x0008E8D8 | FUN_08891900 | bytes 32 */

undefined4 FUN_08891900(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar1;
}

