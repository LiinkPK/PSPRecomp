/* Entry 0x089A3AB8 | file offset 0x001A0A90 | FUN_089a3ab8 | bytes 28 */

undefined4 * FUN_089a3ab8(undefined4 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = vmax_q(*param_2,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  return param_1;
}

