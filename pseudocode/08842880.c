/* Entry 0x08842880 | file offset 0x0003F858 | FUN_08842880 | bytes 48 */

undefined4 * FUN_08842880(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = 0;
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[3] = &DAT_089c8838;
  param_1[4] = param_2;
  return param_1;
}

