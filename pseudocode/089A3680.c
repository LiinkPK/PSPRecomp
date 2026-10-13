/* Entry 0x089A3680 | file offset 0x001A0658 | FUN_089a3680 | bytes 48 */

undefined4 * FUN_089a3680(undefined4 param_1,undefined4 *param_2,undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  
  auVar1 = vscl_t(*param_3,param_1);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  return param_2;
}

