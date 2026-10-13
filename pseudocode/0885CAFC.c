/* Entry 0x0885CAFC | file offset 0x00059AD4 | FUN_0885cafc | bytes 44 */

void FUN_0885cafc(undefined1 *param_1)

{
  *param_1 = 0x41;
  param_1[1] = 0x52;
  param_1[2] = 0x43;
  param_1[3] = 1;
  *(undefined1 **)(param_1 + 8) = param_1;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

