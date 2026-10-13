/* Entry 0x088C1C0C | file offset 0x000BEBE4 | FUN_088c1c0c | bytes 68 */

uint * FUN_088c1c0c(uint *param_1)

{
  *param_1 = 1;
  DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
  *param_1 = DAT_09af84d0 >> 0x10 & 0x7fff;
  return param_1;
}

