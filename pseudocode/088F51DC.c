/* Entry 0x088F51DC | file offset 0x000F21B4 | FUN_088f51dc | bytes 48 */

int FUN_088f51dc(int param_1)

{
  if ((*(byte *)(param_1 + 0x27) & 0x40) == 0) {
    param_1 = param_1 + 0xfc;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

