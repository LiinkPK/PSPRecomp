/* Entry 0x08887558 | file offset 0x00084530 | FUN_08887558 | bytes 96 */

undefined4 * FUN_08887558(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  FUN_088cb9e8(param_1 + 9);
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  return param_1;
}

