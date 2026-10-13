/* Entry 0x088A985C | file offset 0x000A6834 | FUN_088a985c | bytes 36 */

undefined4 * FUN_088a985c(undefined4 *param_1)

{
  param_1[0xb] = &DAT_089cb248;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}

