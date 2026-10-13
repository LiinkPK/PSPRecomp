/* Entry 0x089096B0 | file offset 0x00106688 | FUN_089096b0 | bytes 168 */

undefined4 * FUN_089096b0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_089035dc(param_1 + 1);
  param_1[100] = 0;
  param_1[0x65] = 0xffffffff;
  FUN_08993560(param_1 + 0x4fc,0x10,0x1260,FUN_08909688);
  param_1[0x4e7c] = 0;
  FUN_089057bc(param_1 + 0x4e7e);
  *(undefined1 *)(param_1 + 0x5316) = 0;
  param_1[0x5317] = &DAT_089cdd18;
  param_1[0x5318] = param_1;
  param_1[0x5319] = 0;
  return param_1;
}

