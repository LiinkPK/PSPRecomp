/* Entry 0x088678A8 | file offset 0x00064880 | FUN_088678a8 | bytes 52 */

bool FUN_088678a8(uint param_1)

{
  return ((uint)DAT_09b26ac4 & 1 << (param_1 & 0x1f)) != 0;
}

