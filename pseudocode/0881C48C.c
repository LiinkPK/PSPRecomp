/* Entry 0x0881C48C | file offset 0x00019464 | FUN_0881c48c | bytes 32 */

undefined4 FUN_0881c48c(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}

