/* Entry 0x088EA310 | file offset 0x000E72E8 | FUN_088ea310 | bytes 88 */

void FUN_088ea310(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  FUN_08935828(param_1 + 1,0x40,0);
  param_1[0x13] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  return;
}

