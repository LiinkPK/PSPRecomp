/* Entry 0x089A3A44 | file offset 0x001A0A1C | FUN_089a3a44 | bytes 32 */

undefined4 * FUN_089a3a44(undefined4 param_1,undefined4 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = vscl_q(*param_3,param_1);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = auVar1._12_4_;
  return param_2;
}

