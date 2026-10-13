/* Entry 0x08904C08 | file offset 0x00101BE0 | FUN_08904c08 | bytes 100 */

undefined4 * FUN_08904c08(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = &DAT_089cdbc0;
  param_1[3] = param_1;
  param_1[4] = 0;
  FUN_08905320(param_1 + 5);
  FUN_08993560(param_1 + 0xd,0x10,0x1c,FUN_08904be0);
  param_1[0x7e] = 0;
  return param_1;
}

