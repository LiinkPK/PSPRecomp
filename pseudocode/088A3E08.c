/* Entry 0x088A3E08 | file offset 0x000A0DE0 | FUN_088a3e08 | bytes 68 */

undefined4 * FUN_088a3e08(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  FUN_0889f63c(param_1 + 1);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  return param_1;
}

