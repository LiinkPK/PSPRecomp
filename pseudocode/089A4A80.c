/* Entry 0x089A4A80 | file offset 0x001A1A58 | FUN_089a4a80 | bytes 44 */

undefined4 *
FUN_089a4a80(undefined4 param_1,undefined4 *param_2,undefined1 (*param_3) [16],
            undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = vsub_q(*param_4,*param_3);
  auVar1 = vscl_q(auVar1,param_1);
  auVar1 = vadd_q(*param_3,auVar1);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = auVar1._12_4_;
  return param_2;
}

