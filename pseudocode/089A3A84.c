/* Entry 0x089A3A84 | file offset 0x001A0A5C | FUN_089a3a84 | bytes 52 */

undefined4 *
FUN_089a3a84(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_V09;
  undefined4 in_V0D;
  
  vpfxt(0,0,0,0);
  auVar1._12_4_ = in_V0D;
  auVar1._8_4_ = in_V09;
  auVar1._4_4_ = param_2;
  auVar1._0_4_ = param_1;
  auVar1 = vmax_q(*param_4,auVar1);
  vpfxt(1,1,1,1);
  auVar2._12_4_ = in_V0D;
  auVar2._8_4_ = in_V09;
  auVar2._4_4_ = param_2;
  auVar2._0_4_ = param_1;
  auVar1 = vmin_q(auVar1,auVar2);
  *param_3 = auVar1._0_4_;
  param_3[1] = auVar1._4_4_;
  param_3[2] = auVar1._8_4_;
  param_3[3] = auVar1._12_4_;
  return param_3;
}

