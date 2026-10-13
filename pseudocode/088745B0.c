/* Entry 0x088745B0 | file offset 0x00071588 | FUN_088745b0 | bytes 56 */

undefined4 * FUN_088745b0(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[6] = (uint)(param_2 != 0);
  return param_1;
}

