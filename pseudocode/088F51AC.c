/* Entry 0x088F51AC | file offset 0x000F2184 | FUN_088f51ac | bytes 48 */

int FUN_088f51ac(int param_1)

{
  if ((*(byte *)(param_1 + 0x27) & 0x40) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0xfc;
  }
  return param_1;
}

