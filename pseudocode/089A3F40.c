/* Entry 0x089A3F40 | file offset 0x001A0F18 | FUN_089a3f40 | bytes 40 */

undefined4 * FUN_089a3f40(undefined4 *param_1,undefined1 (*param_2) [64],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = vtfm4_q(*param_2,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  return param_1;
}

