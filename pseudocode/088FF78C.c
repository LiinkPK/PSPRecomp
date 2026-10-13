/* Entry 0x088FF78C | file offset 0x000FC764 | FUN_088ff78c | bytes 44 */

int FUN_088ff78c(int param_1)

{
  if (0x7fff < param_1) {
    param_1 = 0x7fff;
  }
  if (param_1 < -0x8000) {
    param_1 = -0x8000;
  }
  return param_1;
}

