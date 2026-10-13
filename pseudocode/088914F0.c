/* Entry 0x088914F0 | file offset 0x0008E4C8 | FUN_088914f0 | bytes 32 */

undefined4 FUN_088914f0(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  return uVar1;
}

