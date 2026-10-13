/* Entry 0x088B1998 | file offset 0x000AE970 | FUN_088b1998 | bytes 28 */

undefined1 * FUN_088b1998(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}

