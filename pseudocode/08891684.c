/* Entry 0x08891684 | file offset 0x0008E65C | FUN_08891684 | bytes 32 */

undefined4 FUN_08891684(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}

