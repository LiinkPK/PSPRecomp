/* Entry 0x088CCD28 | file offset 0x000C9D00 | FUN_088ccd28 | bytes 40 */

undefined4 FUN_088ccd28(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_1 == '\x01') && (param_1[0x10] == '\x01')) {
    uVar1 = 1;
  }
  return uVar1;
}

