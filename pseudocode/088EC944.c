/* Entry 0x088EC944 | file offset 0x000E991C | FUN_088ec944 | bytes 80 */

undefined4 * FUN_088ec944(undefined4 *param_1)

{
  *param_1 = &DAT_089ccb08;
  FUN_088ec4c4(param_1 + 1);
  FUN_088ec278(param_1 + 6);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}

