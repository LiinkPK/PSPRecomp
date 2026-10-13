/* Entry 0x08989B1C | file offset 0x00186AF4 | FUN_08989b1c | bytes 40 */

undefined4 * FUN_08989b1c(undefined4 *param_1)

{
  *param_1 = &DAT_089dd2a8;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}

